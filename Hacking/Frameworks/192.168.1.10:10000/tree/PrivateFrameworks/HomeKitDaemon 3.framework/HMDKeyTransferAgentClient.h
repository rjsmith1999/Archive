/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDKeyTransferAgentClient : HMDKeyTransferAgent <HMFNetMonitorDelegate, HMFNetServiceBrowserDelegate, HMFNetServiceDelegate, HMFTimerDelegate> {
    HMFExponentialBackoffTimer * _atHomeRetryTimer;
    NSMutableDictionary * _bonjourKeys;
    bool  _haveCulledPlist;
    NSMutableDictionary * _idsKeys;
    HMFNetMonitor * _netMonitor;
    NSString * _pairingWithUUID;
    unsigned long long  _residentProvisioningStatus;
    bool  _resolutionInProgress;
    HMFNetServiceBrowser * _serviceBrowser;
    NSMutableSet * _targetsToProcess;
}

@property (nonatomic, retain) HMFExponentialBackoffTimer *atHomeRetryTimer;
@property (nonatomic, retain) NSMutableDictionary *bonjourKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool haveCulledPlist;
@property (nonatomic, retain) NSMutableDictionary *idsKeys;
@property (nonatomic, retain) HMFNetMonitor *netMonitor;
@property (nonatomic, retain) NSString *pairingWithUUID;
@property (nonatomic) unsigned long long residentProvisioningStatus;
@property (nonatomic) bool resolutionInProgress;
@property (nonatomic, retain) HMFNetServiceBrowser *serviceBrowser;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *targetsToProcess;

+ (id)logCategory;
+ (void)twoFactorAuthenticationEnabledForAccount:(id)arg1 altDSID:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)__accessoryIsReachable:(id)arg1;
- (void)__accountChanged:(id)arg1;
- (void)__deviceAddedToAccount:(id)arg1;
- (void)__deviceRemovedFromAccount:(id)arg1;
- (void)__deviceUpdated:(id)arg1;
- (void)_beginBonjourResolution:(bool)arg1;
- (void)_device:(id)arg1 addedToAccount:(id)arg2;
- (void)_device:(id)arg1 removedFromAccount:(id)arg2;
- (id)_deviceWithUUID:(id)arg1;
- (void)_endPairingWithError:(id)arg1 suspendingTimer:(bool)arg2;
- (void)_handleKeyTransferAgentMessage:(id)arg1;
- (void)_handleResidentProvisioningStatusChanged:(id)arg1;
- (void)_havePairVerifiedAccessoryWithKeyUUID:(id)arg1 forDevice:(id)arg2;
- (void)_haveVerifiedTwoFactorAuthenticationWithKeyUUID:(id)arg1 forTarget:(id)arg2;
- (bool)_newDeviceSeen:(id)arg1;
- (void)_reallyBeginBonjourResolution;
- (void)_restartKeyTransfer:(id)arg1;
- (void)_saveKeyPlist;
- (void)_sendATVPrivateKey:(id)arg1 withDevice:(id)arg2 retry:(unsigned long long)arg3;
- (void)_sendIOSPublicKey:(id)arg1 withDevice:(id)arg2;
- (void)_startBrowser;
- (void)_startPairingWithKeyUUID:(id)arg1 forTarget:(id)arg2;
- (void)_stopBrowser;
- (void)_tryPairingWithAccessories:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)atHomeRetryTimer;
- (id)bonjourKeys;
- (void)dealloc;
- (bool)haveCulledPlist;
- (id)idsKeys;
- (id)initWithHomeManager:(id)arg1;
- (id)logIdentifier;
- (id)netMonitor;
- (void)netService:(id)arg1 didUpdateTXTRecord:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;
- (void)networkMonitorIsReachable:(id)arg1;
- (id)pairingWithUUID;
- (void)queryPlistDevices;
- (void)receivedBonjourTXTFrom:(id)arg1 withUUIDData:(id)arg2;
- (void)resetConfig;
- (unsigned long long)residentProvisioningStatus;
- (bool)resolutionInProgress;
- (id)serviceBrowser;
- (void)setAtHomeRetryTimer:(id)arg1;
- (void)setBonjourKeys:(id)arg1;
- (void)setHaveCulledPlist:(bool)arg1;
- (void)setIdsKeys:(id)arg1;
- (void)setNetMonitor:(id)arg1;
- (void)setPairingWithUUID:(id)arg1;
- (void)setResidentProvisioningStatus:(unsigned long long)arg1;
- (void)setResolutionInProgress:(bool)arg1;
- (void)setServiceBrowser:(id)arg1;
- (void)setTargetsToProcess:(id)arg1;
- (id)targetsToProcess;
- (void)timerDidFire:(id)arg1;

@end
