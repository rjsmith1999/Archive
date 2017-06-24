/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKRemoteDevice : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _bluetoothUUID;
    PKRemotePaymentInstrument * _defaultRemotePaymentInstrument;
    bool  _deviceDisabled;
    NSString * _deviceName;
    bool  _isLocked;
    NSDate * _lastSeen;
    NSString * _modelIdentifier;
    long long  _proximityState;
    NSArray * _remotePaymentInstruments;
    long long  _type;
    NSString * _uniqueID;
    bool  _userDisabled;
}

@property (nonatomic, retain) NSUUID *bluetoothUUID;
@property (nonatomic, readonly) bool canMakePayments;
@property (nonatomic, retain) PKRemotePaymentInstrument *defaultRemotePaymentInstrument;
@property (nonatomic) bool deviceDisabled;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic) bool isLocked;
@property (nonatomic, retain) NSDate *lastSeen;
@property (nonatomic, retain) NSString *modelIdentifier;
@property (nonatomic) long long proximityState;
@property (nonatomic, retain) NSArray *remotePaymentInstruments;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *uniqueID;
@property (nonatomic) bool userDisabled;

+ (id /* block */)acceptedComparatorForSupportedNetworks:(id)arg1 merchantCapabilities:(unsigned long long)arg2;
+ (id /* block */)preferenceComparator;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_deviceTypeForModelIdentifier:(id)arg1;
- (id)bluetoothUUID;
- (bool)canMakePayments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultRemotePaymentInstrument;
- (id)description;
- (bool)deviceDisabled;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIDSDevice:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRemoteDevice:(id)arg1;
- (bool)isLocked;
- (id)lastSeen;
- (id)modelIdentifier;
- (long long)proximityState;
- (id)remotePaymentInstruments;
- (void)setBluetoothUUID:(id)arg1;
- (void)setDefaultRemotePaymentInstrument:(id)arg1;
- (void)setDeviceDisabled:(bool)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setIsLocked:(bool)arg1;
- (void)setLastSeen:(id)arg1;
- (void)setModelIdentifier:(id)arg1;
- (void)setProximityState:(long long)arg1;
- (void)setRemotePaymentInstruments:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUniqueID:(id)arg1;
- (void)setUserDisabled:(bool)arg1;
- (long long)type;
- (id)uniqueID;
- (bool)userDisabled;

@end
