/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristicWriteRequest : HMCharacteristicRequest {
    id  _value;
}

@property (nonatomic, readonly) id value;

+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)value;

@end
