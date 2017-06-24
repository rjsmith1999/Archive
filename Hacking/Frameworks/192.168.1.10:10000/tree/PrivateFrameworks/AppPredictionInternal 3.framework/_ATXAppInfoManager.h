/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppInfoManager : NSObject {
    NSMutableDictionary * _appInfo;
    _ATXDataStore * _dataStore;
    NSMutableArray * _installDeltaLog;
    _ATXInternalInstallNotification * _installNotificationListener;
    NSString * _lastLaunch;
    NSDate * _lastLaunchDate;
    long long  _launchCount;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _rwlock;
    long long  _spotlightLaunchCount;
    _ATXInternalUninstallNotification * _uninstallNotificationListener;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addLaunchInfoForBundle:(id)arg1 withDate:(id)arg2 updateLaunchBlock:(id /* block */)arg3;
- (id)_getInfoOrCreateForBundleId:(id)arg1;
- (bool)_hasBeenLaunchedForBundleId:(id)arg1;
- (void)addInstallForBundleId:(id)arg1 withDate:(id)arg2;
- (void)addInstallForBundleToDateMap:(id)arg1;
- (void)addLaunchForBundleId:(id)arg1 withDate:(id)arg2;
- (void)addScreenLockAtDate:(id)arg1;
- (void)addSpotlightLaunchForBundleId:(id)arg1 withDate:(id)arg2;
- (id)allAppsWithInstallDate;
- (id)appInfoForBundleId:(id)arg1;
- (void)clearAppInstallInfo;
- (void)clearAppLaunchInfo;
- (void)dealloc;
- (id)initWithDataStore:(id)arg1;
- (id)initWithInMemoryStore;
- (id)lastAppLaunch;
- (id)lastAppLaunchDate;
- (id)lastAppLaunchWithHistory:(id)arg1;
- (long long)launchedAppCount;
- (void)receivedDataStoreCompletedNotification:(id)arg1;
- (void)receivedDataStoreStartedNotification:(id)arg1;
- (void)registerForRestoreCompletionNotificationsFrom:(id)arg1;
- (void)registerForRestoreStartedNotificationsFrom:(id)arg1;
- (void)removeAppInfoForBundleId:(id)arg1;
- (void)removeAppInfoForBundleIds:(id)arg1;
- (void)removeAppLaunchesForBundleId:(id)arg1;
- (void)setupInMemoryCache;
- (void)setupInMemoryCacheWithAppInfoMapLocked:(id)arg1;
- (void)startInstallDeltaRecording;
- (id)stopInstallDeltaRecording;
- (void)unregisterFromRestoreCompletionNotificationsFrom:(id)arg1;
- (void)unregisterFromRestoreStartedNotificationsFrom:(id)arg1;

@end
