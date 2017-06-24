#!/usr/bin/python

# generate .dat and .zip for an application binary
# https://github.com/NordicSemiconductor/nRF-Master-Control-Panel/blob/master/init%20packet%20handling/How%20to%20generate%20the%20INIT%20file%20for%20DFU.pdf

# todo, align more closely with the nordic tool. Take in hex as well/instead of ints. take in softdevice and application should come in via --application

import argparse, sys, zipfile, glob, os

### shamelessly stolen from https://devzone.nordicsemi.com/question/22586/anyone-do-successfully-dfu-ota-for-sdk701-softdevice-s110-v710/
def calc_crc16(binfile):
  crc = 0xFFFF

  for b in binfile:
    crc = (crc >> 8 & 0x00FF) | (crc << 8 & 0xFF00)
    crc = crc ^ b
    crc = crc ^ ( ( crc & 0x00FF) >> 4 )
    crc = crc ^ ( ( crc << 8) << 4)
    crc = crc ^ ( ( crc & 0x00FF) << 4) << 1
  return crc & 0xFFFF

def convert_uint16_to_array(value):
    """ Convert a number into an array of 2 bytes (LSB). """
    return [(value >> 0 & 0xFF), (value >> 8 & 0xFF)]
###

def _create_manifest(bin_file, dat_file, dev_type, dev_revision, application_version, sd_req, crc):
  manifest = """
  {
    "manifest": {
        "application": {
            "bin_file": "%s",
            "dat_file": "%s",
            "init_packet_data": {
                "application_version": %d,
                "device_revision": %d,
                "device_type": %d,
                "firmware_crc16": %d,
                "softdevice_req": [
                    %d
                ]
            }
        },
        "dfu_version": 0.5
    }
}"""
  return manifest % (bin_file, dat_file, application_version, dev_revision, dev_type, crc, sd_req)

def main():

  parser = argparse.ArgumentParser(description='generate a .bin.dat file from an input bin file.')
  parser.add_argument ('file', type = str, help = 'The binary to crc')
  parser.add_argument ('--dev-type', default=65535, type = int, help = 'The device type as an integer, ex 65535 for 0xFFFF for all devices')
  parser.add_argument ('--dev-revision', default=65535, type = int, help = 'The revision as in integer, ex 65535 for 0xFFFF for all revisions')
  parser.add_argument ('--sd-req', default=65534, type = int, help = 'The required softdevice (singular) as in integer, ex 100 for 0x64 for SD8.0')
  parser.add_argument ('--application-version', default=4294967295, type = int, help = 'The application version as in integer, ex 4294967295 for 0xFFFFFFFF for all versions')

  args = parser.parse_args()

  basename = os.path.basename(args.file)
  name = basename.split('.')[0]

  manifest_name = 'manifest.json'

  #if were not in the same directory
  if ('/' in args.file) or ('\\' in args.file):
    path = os.path.dirname(args.file)
    archive_name = path + '/' + name + '.zip'
    dat_out_name = path + '/' + name + '.dat'
  else:
    archive_name = name + '.zip'
    dat_out_name = name + '.dat'

  try:
    bin = open(args.file, 'rb')

  except:
    sys.exit('Could not open %s' % args.file)

  try:
    archive = zipfile.ZipFile( archive_name, 'w')

  except:
    bin.close();
    sys.exit('Could not open/create %s' % archive_name)

  ba = bytearray(bin.read())
  crc = calc_crc16(ba)
  bin.close();

  init_packet = []
  init_packet.extend([args.dev_type & 0xFF, (args.dev_type >> 8) & 0xFF])
  init_packet.extend([args.dev_revision & 0xFF, (args.dev_revision >> 8) & 0xFF])
  init_packet.extend([args.application_version & 0xFF, (args.application_version >> 8) & 0xFF, (args.application_version >> 16) & 0xFF, (args.application_version >> 24) & 0xFF])
  init_packet.extend([0x01, 0x00])
  init_packet.extend([args.sd_req & 0xFF, (args.sd_req >> 8) & 0xFF])
  init_packet.extend(convert_uint16_to_array(crc))

  manifest = _create_manifest(basename, dat_out_name, args.dev_type, args.dev_revision, args.application_version, args.sd_req, crc)

  archive.writestr(dat_out_name, buffer(bytearray(init_packet)), zipfile.ZIP_DEFLATED)
  archive.writestr(manifest_name, manifest, zipfile.ZIP_DEFLATED)
  archive.write(args.file, basename, zipfile.ZIP_DEFLATED)
  archive.close()

if __name__ == "__main__":
  main()