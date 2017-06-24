/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTUserConfiguration : NSObject {
    NSMutableDictionary * _cellularDataAvailableCache;
    struct __CTServerConnection { } * _ctServerConnection;
    NSMutableDictionary * _wifiAllowedCache;
}

@property (nonatomic, readonly) bool _nonWifiFaceTimeEntitled;
@property (nonatomic) bool allowAnyNetwork;
@property (nonatomic) bool cellularFaceTimeEnabled;
@property (nonatomic) struct __CTServerConnection { }*ctServerConnection;

+ (id)sharedInstance;

- (bool)_adequateInternalOrCarrierInstall;
- (void)_clearCaches;
- (bool)_getCellularDataEnabledForBundleID:(id)arg1;
- (bool)_getWifiDataAllowedForBundleID:(id)arg1;
- (bool)_nonWifiFaceTimeEntitled;
- (void)_setAppCellularDataEnabled:(bool)arg1;
- (bool)allowAnyNetwork;
- (bool)cellularDataEnabledForBundleId:(id)arg1;
- (bool)cellularFaceTimeEnabled;
- (struct __CTServerConnection { }*)ctServerConnection;
- (void)dealloc;
- (id)init;
- (void)setAllowAnyNetwork:(bool)arg1;
- (void)setCellularFaceTimeEnabled:(bool)arg1;
- (void)setCtServerConnection:(struct __CTServerConnection { }*)arg1;
- (bool)wifiAllowedForBundleId:(id)arg1;

@end