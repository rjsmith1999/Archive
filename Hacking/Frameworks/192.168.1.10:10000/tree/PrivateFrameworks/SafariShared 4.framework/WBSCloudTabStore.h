/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudTabStore : NSObject <WBSCloudTabDeviceProvider> {
    NSMutableDictionary * _deviceUUIDsToCloseRequests;
    NSMutableArray * _syncedCloudTabDevices;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *syncedCloudTabDevices;

- (void).cxx_destruct;
- (void)_addCloseRequestDictionary:(id)arg1 requestUUID:(id)arg2;
- (void)_addDeviceDictionary:(id)arg1 deviceUUID:(id)arg2;
- (void)_closeRequestedTabIfPossible:(id)arg1;
- (bool)_closeTabs:(id)arg1 onDevice:(id)arg2;
- (id)_currentDeviceUUID;
- (id)_deviceWithTabsWithOutstandingCloseRequestsRemoved:(id)arg1;
- (id)_keyValueStoreDictionaryRepresentation:(long long)arg1;
- (void)_pruneOrphanedCloseRequests;
- (void)_removeObjectFromKeyValueStore:(long long)arg1 forKey:(id)arg2;
- (void)_removeSyncedCloudTabsWithOutstandingCloseRequests;
- (void)_setDictionaryInKeyValueStore:(long long)arg1 dictionary:(id)arg2 forKey:(id)arg3;
- (bool)_writeCloseRequestForTab:(id)arg1 onDevice:(id)arg2;
- (bool)closeAllTabsOnDevice:(id)arg1;
- (bool)closeTab:(id)arg1 onDevice:(id)arg2;
- (bool)closeTabs:(id)arg1 onDevice:(id)arg2;
- (void)createSyncedCloudTabDevicesAndCloseRequests;
- (void)handleCloseTabRequests;
- (void)pruneExpiredDevices;
- (void)resetSyncedCloudTabDevicesAndCloseRequests;
- (id)syncedCloudTabDevices;

@end
