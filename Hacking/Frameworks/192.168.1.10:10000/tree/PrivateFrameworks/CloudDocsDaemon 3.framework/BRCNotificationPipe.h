/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCNotificationPipe : NSObject <BRItemNotificationSending> {
    id /* block */  _boostReply;
    BRCXPCClient * _client;
    <BRCNotificationPipeDelegate> * _delegate;
    NSMutableSet * _externalAppLibraries;
    BRCDataOrDocsScopeGatherer * _gatherer;
    bool  _hasProgressUpdatesInFlight;
    bool  _hasUpdatesInFlight;
    BRCNotificationManager * _manager;
    BRNotificationQueue * _notifs;
    BRCItemID * _oldWatchedAncestorItemID;
    NSMutableDictionary * _pendingProgressUpdatesByID;
    NSObject<OS_dispatch_queue> * _queue;
    <BRItemNotificationReceiving> * _receiver;
    bool  _volumeIsCaseSensitive;
    NSString * _watchForBundleID;
    unsigned short  _watchItemOptions;
    int  _watchKind;
    NSString * _watchNamePrefix;
    BRFileObjectID * _watchedAncestorFileObjectID;
    NSString * _watchedAncestorFilenameToItem;
    BRCItemID * _watchedAncestorItemID;
    NSSet * _watchedAppLibraries;
    unsigned long long  _watchedAppLibrariesFlags;
    NSSet * _watchedAppLibraryIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BRCNotificationPipeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BRCNotificationManager *manager;
@property (retain) BRCItemID *oldWatchedAncestorItemID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (retain) BRFileObjectID *watchedAncestorFileObjectID;
@property (retain) NSString *watchedAncestorFilenameToItem;
@property (retain) BRCItemID *watchedAncestorItemID;

- (void).cxx_destruct;
- (void)__flush;
- (void)_addIntraContainerUpdatesFromInterContainerUpdate:(id)arg1 toArray:(id)arg2;
- (void)_flushProgressUpdates;
- (void)_gatherIfNeededAndFlushAsync;
- (id)_initWithManager:(id)arg1;
- (int)_isInterestingUpdate:(id)arg1;
- (void)_processProgressUpdates:(id)arg1;
- (void)_stopWatchingItems;
- (void)addDequeueCallback:(id /* block */)arg1;
- (void)addNotification:(id)arg1 asDead:(bool)arg2;
- (void)boostPriority:(id /* block */)arg1;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithReceiver:(id)arg1 manager:(id)arg2;
- (id)initWithXPCReceiver:(id)arg1 client:(id)arg2 manager:(id)arg3;
- (oneway void)invalidate;
- (void)invalidateIfWatchingAppLibraryIDs:(id)arg1;
- (void)invalidateReceiverIfWatchingAppLibraryIDs:(id)arg1;
- (id)manager;
- (id)oldWatchedAncestorItemID;
- (void)processProgressUpdates:(id)arg1;
- (void)processUpdates:(id)arg1;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setOldWatchedAncestorItemID:(id)arg1;
- (void)setWatchedAncestorFileObjectID:(id)arg1;
- (void)setWatchedAncestorFilenameToItem:(id)arg1;
- (void)setWatchedAncestorItemID:(id)arg1;
- (void)watchItemAtURL:(id)arg1 lookup:(id)arg2 options:(unsigned short)arg3 reply:(id /* block */)arg4;
- (void)watchItemAtURL:(id)arg1 options:(unsigned short)arg2 reply:(id /* block */)arg3;
- (void)watchItemInProcessAtURL:(id)arg1 options:(unsigned short)arg2 reply:(id /* block */)arg3;
- (void)watchItemsNamesPrefixedBy:(id)arg1 inScopes:(unsigned short)arg2 appLibraryIDs:(id)arg3 gatheringDone:(id /* block */)arg4;
- (void)watchScopes:(unsigned short)arg1 appLibraryIDs:(id)arg2 gatheringDone:(id /* block */)arg3;
- (void)watchScopes:(unsigned short)arg1 gatheringDone:(id /* block */)arg2;
- (void)watchScopes:(unsigned short)arg1 trustedAppLibraryIDs:(id)arg2 gatheringDone:(id /* block */)arg3;
- (id)watchedAncestorFileObjectID;
- (id)watchedAncestorFilenameToItem;
- (id)watchedAncestorItemID;

@end
