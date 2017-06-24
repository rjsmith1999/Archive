void setupAdvertisingData() {
  // Ad Payload
  GAP.clearAdvertisingPayload();
  GAP.accumulateAdvertisingPayload(GapAdvertisingData::BREDR_NOT_SUPPORTED);
  //    GAP.accumulateAdvertisingPayload(GapAdvertisingData::SHORTENED_LOCAL_NAME,
  //                                     (const uint8_t *)"CSmarts", sizeof("CSmarts") - 1);
  GAP.accumulateAdvertisingPayload(GapAdvertisingData::COMPLETE_LIST_128BIT_SERVICE_IDS,
                                   (const uint8_t *)car_service_uuid_rev, sizeof(car_service_uuid));

  // Scan Response
  //    GAP.accumulateScanResponse(GapAdvertisingData::SHORTENED_LOCAL_NAME,
  //                              (const uint8_t *)"CSmarts2", sizeof("CSmarts2") - 1);
  //    GAP.accumulateScanResponse(GapAdvertisingData::COMPLETE_LIST_128BIT_SERVICE_IDS,
  //                             (const uint8_t *)&car_service_uuid, sizeof(car_service_uuid));

  // set adv_type
  GAP.setAdvertisingType(GapAdvertisingParams::ADV_CONNECTABLE_UNDIRECTED);


  // set adv_interval, 100ms in multiples of 0.625ms.
  GAP.setAdvertisingInterval(160);
  // set adv_timeout, in seconds
  GAP.setAdvertisingTimeout(0);
}

void startDFU() {
  Serial.print("DFU Start");
  dfu = new DFUService(ble);
}


