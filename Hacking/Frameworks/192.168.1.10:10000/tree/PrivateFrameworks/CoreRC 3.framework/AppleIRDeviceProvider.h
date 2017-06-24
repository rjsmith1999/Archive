/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface AppleIRDeviceProvider : CoreIRDeviceProvider {
    unsigned char  _deviceUID;
    bool  _isB39;
    AppleIRCommand * _lastAppleIRCommand;
    unsigned long long  _lastCommandTimestamp;
    unsigned long long  _lastCoreRCCommand;
    unsigned long long  _pressAndHoldTimeoutGenerationCount;
}

@property (nonatomic, readonly) unsigned char deviceUID;

+ (void)load;
+ (bool)supportsSecureCoding;

- (void)_cancelPressAndHoldTimer;
- (bool)_dispatchAppleVendorEventPage:(unsigned int)arg1 usage:(unsigned int)arg2 timestamp:(unsigned long long)arg3 toDevice:(id)arg4;
- (bool)_dispatchEventWithCommand:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 toDevice:(id)arg3;
- (void)_schedulePressAndHoldTimer;
- (void)_synthesizeButtonReleaseWithTimestamp:(unsigned long long)arg1;
- (id)busProvider;
- (Class)classForCoder;
- (void)dealloc;
- (unsigned char)deviceUID;
- (bool)dispatchEventsForCommand:(id)arg1 toDevice:(id)arg2;
- (id)init;
- (id)initWithBus:(id)arg1 deviceUID:(unsigned char)arg2;
- (bool)isAppleRemote;
- (bool)pairAppleRemote:(id*)arg1;
- (void)setVendorID:(unsigned long long)arg1;
- (bool)unpairAppleRemote:(id*)arg1;
- (unsigned long long)vendorID;

@end
