/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPrivateZoneController : NSObject {
    unsigned long long  _changeCount;
    FCCommandQueue * _commandQueue;
    FCCloudContext * _context;
    bool  _dirty;
    unsigned long long  _dirtyCount;
    FCKeyValueStore * _localStore;
    NSHashTable * _observers;
    bool  _preparedForUse;
    FCPushNotificationCenter * _pushNotificationCenter;
    FCCKRecordZone * _recordZone;
    NSHashTable * _stateObservers;
    NSString * _storeDirectory;
    FCAsyncSerialQueue * _syncQueue;
    bool  _syncingEnabled;
}

@property (nonatomic) unsigned long long changeCount;
@property (nonatomic, retain) FCCommandQueue *commandQueue;
@property (nonatomic, readonly) FCCloudContext *context;
@property (getter=isDirty, nonatomic) bool dirty;
@property (nonatomic) unsigned long long dirtyCount;
@property (nonatomic, retain) NSDate *lastSyncDate;
@property (nonatomic, readonly) FCKeyValueStore *localStore;
@property (nonatomic, readonly) NSHashTable *observers;
@property (getter=hasBeenPreparedForUse, nonatomic) bool preparedForUse;
@property (nonatomic, retain) FCPushNotificationCenter *pushNotificationCenter;
@property (nonatomic, retain) FCCKRecordZone *recordZone;
@property (nonatomic, retain) NSHashTable *stateObservers;
@property (nonatomic, copy) NSString *storeDirectory;
@property (nonatomic, retain) FCAsyncSerialQueue *syncQueue;
@property (getter=isSyncingEnabled, nonatomic) bool syncingEnabled;
@property (getter=isSyncingEnabled, nonatomic, readonly) bool syncingEnabled;

+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)desiredKeys;
+ (id)internalLocalStoreKeys;
+ (bool)isLocalStoreKeyInternal:(id)arg1;
+ (id)localStoreFilename;
+ (id)localStoreMigrator;
+ (unsigned long long)localStoreVersion;
+ (void)populateLocalStoreClassRegistry:(id)arg1;
+ (id)recordIDsToSync;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;

- (void).cxx_destruct;
- (void)_markAsClean;
- (void)_markAsDirty;
- (void)_serialSyncWithCompletion:(id /* block */)arg1;
- (void)addCommandToCommandQueue:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addStateObserver:(id)arg1;
- (unsigned long long)changeCount;
- (id)commandQueue;
- (id)context;
- (void)createLocalStore;
- (void)dealloc;
- (unsigned long long)dirtyCount;
- (void)disableSyncing;
- (void)enableSyncing;
- (void)forceSyncWithCompletion:(id /* block */)arg1;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (bool)hasBeenPreparedForUse;
- (id)init;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 recordZone:(id)arg3 storeDirectory:(id)arg4;
- (bool)isDirty;
- (bool)isSyncingEnabled;
- (id)lastSyncDate;
- (void)loadLocalCachesFromStore;
- (id)localStore;
- (void)manualDirty;
- (void)mergeLocalStoreWithCloud;
- (id)observers;
- (void)prepareForUse;
- (id)pushNotificationCenter;
- (id)recordZone;
- (void)removeObserver:(id)arg1;
- (void)removeStateObserver:(id)arg1;
- (void)saveWithCompletion:(id /* block */)arg1;
- (void)setChangeCount:(unsigned long long)arg1;
- (void)setCommandQueue:(id)arg1;
- (void)setDirty:(bool)arg1;
- (void)setDirtyCount:(unsigned long long)arg1;
- (void)setLastSyncDate:(id)arg1;
- (void)setPreparedForUse:(bool)arg1;
- (void)setPushNotificationCenter:(id)arg1;
- (void)setRecordZone:(id)arg1;
- (void)setStateObservers:(id)arg1;
- (void)setStoreDirectory:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setSyncingEnabled:(bool)arg1;
- (id)stateObservers;
- (id)storeDirectory;
- (id)syncQueue;
- (void)syncWithCompletion:(id /* block */)arg1;

@end
