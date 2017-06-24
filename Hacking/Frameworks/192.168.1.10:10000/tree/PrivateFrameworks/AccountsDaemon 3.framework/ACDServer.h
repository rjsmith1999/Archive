/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDServer : NSObject <ACDAccountStoreDelegate, NSXPCListenerDelegate> {
    ACDAccessPluginManager * _accessPluginManager;
    NSMutableArray * _accountStoreClients;
    NSXPCListener * _accountStoreListener;
    NSXPCListener * _authenticationDialogListener;
    ACDAuthenticationDialogManager * _authenticationDialogManager;
    NSMutableArray * _authenticationDialogManagerClients;
    ACDAuthenticationPluginManager * _authenticationPluginManager;
    NSMutableDictionary * _clientsByConnection;
    ACDDataclassOwnersManager * _dataclassOwnersManager;
    NSObject<OS_dispatch_queue> * _deferredConnectionResumeQueue;
    NSObject<OS_dispatch_semaphore> * _deferredConnectionResumeQueueSemaphore;
    NSMutableDictionary * _entitlementsByConnection;
    NSMutableArray * _oauthSignerClients;
    NSXPCListener * _oauthSignerListener;
    NSObject<OS_dispatch_queue> * _performMigrationQueue;
    ACRemoteDeviceProxy * _remoteDeviceProxy;
}

@property (nonatomic, retain) ACDAccessPluginManager *accessPluginManager;
@property (nonatomic, retain) ACDAuthenticationDialogManager *authenticationDialogManager;
@property (nonatomic, retain) ACDAuthenticationPluginManager *authenticationPluginManager;
@property (nonatomic, retain) ACDDataclassOwnersManager *dataclassOwnersManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ACRemoteDeviceProxy *remoteDeviceProxy;
@property (readonly) Class superclass;

+ (id)sharedServer;

- (void).cxx_destruct;
- (void)_beginObservingIDSProxyNotifications;
- (void)_beginObservingLanguageChangeNotfication;
- (void)_beginObservingLaunchNotifications;
- (id)_enumerateAllEntitlementForConnection:(id)arg1;
- (id)_keyForConnection:(id)arg1;
- (id)_newDaemonAccountStoreFilterForClient:(id)arg1;
- (id)_newOAuthSignerForClient:(id)arg1;
- (void)_signalDeferredConnectionResumeQueueSemaphore;
- (void)_stopObservingLanguageChangeNotification;
- (id)accessPluginManager;
- (void)accountStoreDidSaveAccounts:(id)arg1;
- (id)authenticationDialogManager;
- (id)authenticationPluginManager;
- (id)clientForConnection:(id)arg1;
- (id)createClientForConnection:(id)arg1;
- (void)credentialsDidChangeForAccountWithIdentifier:(id)arg1;
- (id)dataclassOwnersManager;
- (void)dealloc;
- (id)entitlementsForConnection:(id)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)remoteDeviceProxy;
- (void)setAccessPluginManager:(id)arg1;
- (void)setAuthenticationDialogManager:(id)arg1;
- (void)setAuthenticationPluginManager:(id)arg1;
- (void)setDataclassOwnersManager:(id)arg1;
- (void)setRemoteDeviceProxy:(id)arg1;
- (void)setUpWithAccountStoreConnectionListener:(id)arg1 oauthSignerConnectionListener:(id)arg2 authenticationDialogConnectionListener:(id)arg3;
- (void)shutdown;

@end
