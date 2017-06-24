/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetHostingViewController : UIViewController {
    long long  _activeDisplayMode;
    NSString * _appBundleID;
    bool  _blacklisted;
    _WGBrokenWidgetView * _brokenView;
    long long  _connectionRequestState;
    UIView * _contentProvidingView;
    double  _cornerRadius;
    <WGWidgetHostingViewControllerDelegate> * _delegate;
    bool  _didRequestViewInset;
    bool  _didUpdate;
    NSTimer * _disconnectionTimer;
    bool  _disconnectsImmediately;
    NSObject<OS_dispatch_queue> * _diskWriteQueue;
    bool  _encodingLayerTree;
    <NSCopying> * _extensionRequest;
    <WGWidgetHostingViewControllerHost> * _host;
    bool  _ignoringParentAppearState;
    bool  _implementsPerformUpdate;
    NSDate * _lastUnanticipatedDisconnectionDate;
    unsigned int  _maskedCorners;
    NSMapTable * _openActiveDisplayModeChangeTransactions;
    NSMapTable * _openAppearanceTransactions;
    id /* block */  _outstandingWidgetUpdateCompletionHandler;
    NSObject<OS_dispatch_queue> * _proxyConnectionQueue;
    NSObject<OS_dispatch_queue> * _proxyDisconnectionQueue;
    NSObject<OS_dispatch_queue> * _proxyRequestQueue;
    _WGWidgetRemoteViewController * _remoteViewController;
    id /* block */  _remoteViewControllerDisconnectionHandler;
    long long  _requestState;
    UIView * _snapshotView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _snapshotViewBounds;
    NSObject<OS_dispatch_semaphore> * _viewWillAppearSemaphore;
    NSObject<OS_dispatch_semaphore> * _viewWillDisappearSemaphore;
    WGWidgetInfo * _widgetInfo;
}

@property (nonatomic, readonly) long long activeDisplayMode;
@property (nonatomic, copy) NSString *appBundleID;
@property (nonatomic, readonly) BSAuditToken *auditToken;
@property (getter=_isBlacklisted, setter=_setBlacklisted:, nonatomic) bool blacklisted;
@property (getter=_brokenView, setter=_setBrokenView:, nonatomic, retain) _WGBrokenWidgetView *brokenView;
@property (getter=isBrokenViewVisible, nonatomic, readonly) bool brokenViewVisible;
@property (getter=_connectionRequestState, setter=_setConnectionRequestState:, nonatomic) long long connectionRequestState;
@property (getter=_containerIdentifier, nonatomic, readonly, copy) NSString *containerIdentifier;
@property (getter=_contentProvidingView, setter=_setContentProvidingView:, nonatomic, retain) UIView *contentProvidingView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) <WGWidgetHostingViewControllerDelegate> *delegate;
@property (getter=_didRequestViewInset, setter=_setDidRequestViewInset:, nonatomic) bool didRequestViewInset;
@property (getter=_didUpdate, setter=_setDidUpdate:, nonatomic) bool didUpdate;
@property (getter=_disconnectionTimer, setter=_setDisconnectionTimer:, nonatomic) NSTimer *disconnectionTimer;
@property (nonatomic) bool disconnectsImmediately;
@property (getter=_diskWriteQueue, nonatomic, readonly) NSObject<OS_dispatch_queue> *diskWriteQueue;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (getter=_isEncodingLayerTree, setter=_setEncodingLayerTree:, nonatomic) bool encodingLayerTree;
@property (getter=_extensionRequest, setter=_setExtensionRequest:, nonatomic, copy) <NSCopying> *extensionRequest;
@property (nonatomic) <WGWidgetHostingViewControllerHost> *host;
@property (nonatomic, readonly) UIImage *icon;
@property (getter=_isIgnoringParentAppearState, setter=_setIgnoringParentAppearState:, nonatomic) bool ignoringParentAppearState;
@property (setter=_setImplementsPerformUpdate:, nonatomic) bool implementsPerformUpdate;
@property (nonatomic, readonly) long long largestAvailableDisplayMode;
@property (getter=_lastUnanticipatedDisconnectionDate, setter=_setLastUnanticipatedDisconnectionDate:, nonatomic, retain) NSDate *lastUnanticipatedDisconnectionDate;
@property (nonatomic) unsigned int maskedCorners;
@property (getter=_openActiveDisplayModeChangeTransactions, nonatomic, readonly) NSMapTable *openActiveDisplayModeChangeTransactions;
@property (getter=_openAppearanceTransactions, nonatomic, readonly) NSMapTable *openAppearanceTransactions;
@property (getter=_outstandingWidgetUpdateCompletionHandler, setter=_setOutstandingWidgetUpdateCompletionHandler:, nonatomic, copy) id /* block */ outstandingWidgetUpdateCompletionHandler;
@property (getter=_proxyConnectionQueue, nonatomic, readonly) NSObject<OS_dispatch_queue> *proxyConnectionQueue;
@property (getter=_proxyDisconnectionQueue, nonatomic, readonly) NSObject<OS_dispatch_queue> *proxyDisconnectionQueue;
@property (getter=_proxyRequestQueue, nonatomic, readonly) NSObject<OS_dispatch_queue> *proxyRequestQueue;
@property (getter=_remoteViewController, setter=_setRemoteViewController:, nonatomic, retain) _WGWidgetRemoteViewController *remoteViewController;
@property (getter=_remoteViewControllerDisconnectionHandler, setter=_setRemoteViewControllerDisconnectionHandler:, nonatomic, copy) id /* block */ remoteViewControllerDisconnectionHandler;
@property (getter=isRemoteViewVisible, nonatomic, readonly) bool remoteViewVisible;
@property (nonatomic) long long requestState;
@property (nonatomic, readonly) UIImage *settingsIcon;
@property (getter=isSnapshotLoaded, nonatomic, readonly) bool snapshotLoaded;
@property (getter=_snapshotView, setter=_setSnapshotView:, nonatomic, retain) UIView *snapshotView;
@property (getter=_snapshotViewBounds, setter=_setSnapshotBounds:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } snapshotViewBounds;
@property (nonatomic) long long userSpecifiedDisplayMode;
@property (getter=_viewWillAppearSemaphore, setter=_setViewWillAppearSemaphore:, nonatomic, retain) NSObject<OS_dispatch_semaphore> *viewWillAppearSemaphore;
@property (getter=_viewWillDisappearSemaphore, setter=_setViewWillDisappearSemaphore:, nonatomic, retain) NSObject<OS_dispatch_semaphore> *viewWillDisappearSemaphore;
@property (nonatomic, readonly, copy) NSString *widgetIdentifier;
@property (nonatomic, readonly) WGWidgetInfo *widgetInfo;

// Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets

+ (void)setWidgetSnapshotTimestampsEnabled:(bool)arg1;

- (void).cxx_destruct;
- (bool)_attemptReconnectionAfterUnanticipatedDisconnection;
- (void)_beginRemoteViewControllerAppearanceTransitionIfNecessary:(bool)arg1 animated:(bool)arg2;
- (void)_beginRemoteViewControllerAppearanceTransitionIfNecessary:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_brokenView;
- (bool)_canDisconnectRemoteViewController:(id*)arg1;
- (bool)_canInsertRemoteView;
- (bool)_canRequestRemoteViewController:(id*)arg1;
- (id)_cancelTouches;
- (void)_captureAndInsertSnapshotAndDisconnectRemoteViewControllerForReason:(id)arg1 completion:(id /* block */)arg2;
- (void)_captureLayerTree:(id /* block */)arg1;
- (id /* block */)_completionHandlerForUpdateRequest;
- (void)_connectAndInsertRemoteViewForReason:(id)arg1 completion:(id /* block */)arg2 updateHandler:(id /* block */)arg3;
- (long long)_connectionRequestState;
- (id)_containerIdentifier;
- (id)_contentProvidingView;
- (double)_contentWidth;
- (bool)_didRequestViewInset;
- (bool)_didUpdate;
- (void)_disconnectRemoteViewController:(id /* block */)arg1;
- (void)_disconnectRemoteViewControllerForReason:(id)arg1 coalesce:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)_disconnectionTimer;
- (void)_disconnectionTimerDidFire:(id)arg1;
- (id)_diskWriteQueue;
- (void)_endRemoteViewControllerAppearanceTransitionIfNecessary;
- (void)_endRemoteViewControllerAppearanceTransitionIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)_endRequestState:(long long)arg1;
- (void)_enqueueRemoteServiceRequest:(id /* block */)arg1 withDescription:(id)arg2;
- (void)_enqueueRequest:(id /* block */)arg1 inQueue:(id)arg2 trampolinedToMainQueue:(bool)arg3 withDescription:(id)arg4;
- (id)_extensionRequest;
- (void)_finishDisconnectingRemoteViewControllerWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleRequestedViewHeight:(double)arg1 usingAutolayout:(bool)arg2 requestIdentifier:(id)arg3;
- (bool)_hasOutstandingUpdateRequest;
- (void)_insertAppropriateContentView;
- (void)_insertContentProvidingSubview:(id)arg1 completion:(id /* block */)arg2;
- (void)_insertRemoteViewAfterViewWillAppearWithCompletion:(id /* block */)arg1;
- (void)_invalidateDisconnectionTimer;
- (void)_invalidateSnapshotWithForce:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)_isBlacklisted;
- (bool)_isEncodingLayerTree;
- (bool)_isIgnoringParentAppearState;
- (id)_lastUnanticipatedDisconnectionDate;
- (void)_loadSnapshotViewFromDiskIfNecessary:(id /* block */)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_marginInsets;
- (struct CGSize { double x1; double x2; })_maxSizeForDisplayMode:(long long)arg1;
- (void)_noteOutstandingUpdateRequest;
- (id)_openActiveDisplayModeChangeTransactions;
- (id)_openAppearanceTransactions;
- (id /* block */)_outstandingWidgetUpdateCompletionHandler;
- (void)_packageViewFromURL:(id)arg1 reply:(id /* block */)arg2;
- (void)_packageViewWithBlock:(id /* block */)arg1 reply:(id /* block */)arg2;
- (id)_proxyConnectionQueue;
- (id)_proxyDisconnectionQueue;
- (id)_proxyRequestQueue;
- (void)_registerUpdateRequestCompletionHandler:(id /* block */)arg1;
- (id)_remoteViewController;
- (id /* block */)_remoteViewControllerDisconnectionHandler;
- (void)_removeAllSnapshotsDueToIssue:(bool)arg1;
- (void)_removeAllSnapshotsForActiveDisplayMode;
- (void)_removeAllSnapshotsMatchingPredicate:(id)arg1 dueToIssue:(bool)arg2;
- (void)_removeItemAtURL:(id)arg1;
- (id /* block */)_request:(id /* block */)arg1 withDescription:(id)arg2 forQueue:(id)arg3 trampolinedToMainQueue:(bool)arg4;
- (void)_requestRemoteViewController:(id /* block */)arg1;
- (void)_rowHeightDidChange:(id)arg1;
- (void)_setBlacklisted:(bool)arg1;
- (void)_setBrokenView:(id)arg1;
- (void)_setConnectionRequestState:(long long)arg1;
- (void)_setContentProvidingView:(id)arg1;
- (void)_setDidRequestViewInset:(bool)arg1;
- (void)_setDidUpdate:(bool)arg1;
- (void)_setDisconnectionTimer:(id)arg1;
- (void)_setEncodingLayerTree:(bool)arg1;
- (void)_setExtensionRequest:(id)arg1;
- (void)_setIgnoringParentAppearState:(bool)arg1;
- (void)_setImplementsPerformUpdate:(bool)arg1;
- (void)_setLargestAvailableDisplayMode:(long long)arg1;
- (void)_setLastUnanticipatedDisconnectionDate:(id)arg1;
- (void)_setOutstandingWidgetUpdateCompletionHandler:(id /* block */)arg1;
- (void)_setRemoteViewController:(id)arg1;
- (void)_setRemoteViewControllerDisconnectionHandler:(id /* block */)arg1;
- (void)_setSnapshotBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setSnapshotView:(id)arg1;
- (void)_setSnapshotView:(id)arg1 forLayoutMode:(long long)arg2;
- (void)_setViewWillAppearSemaphore:(id)arg1;
- (void)_setViewWillDisappearSemaphore:(id)arg1;
- (void)_setupRequestQueue;
- (id)_snapshotIdentifierForLayoutMode:(long long)arg1;
- (id)_snapshotView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_snapshotViewBounds;
- (double)_updatePreferredContentSizeWithHeight:(double)arg1;
- (void)_updateWidgetWithCompletionHandler:(id /* block */)arg1;
- (void)_validateSnapshotViewForActiveLayoutMode;
- (double)_validatedHeightForHeight:(double)arg1 enforcingDisplayMode:(bool)arg2;
- (id)_viewWillAppearSemaphore;
- (id)_viewWillDisappearSemaphore;
- (id)_widgetSnapshotURLForLayoutMode:(long long)arg1 ensuringDirectoryExists:(bool)arg2;
- (long long)activeDisplayMode;
- (id)appBundleID;
- (id)auditToken;
- (void)captureSnapshotAndBeginDisappearanceTransitionWithCompletionHandler:(id /* block */)arg1;
- (void)connectRemoteViewControllerForReason:(id)arg1 completionHandler:(id /* block */)arg2;
- (double)cornerRadius;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)disconnectsImmediately;
- (id)displayName;
- (void)handleReconnectionRequest:(id)arg1;
- (id)host;
- (id)icon;
- (bool)implementsPerformUpdate;
- (id)initWithWidgetInfo:(id)arg1 host:(id)arg2;
- (void)insertSnapshotWithCompletionHandler:(id /* block */)arg1;
- (void)invalidateCachedSnapshotWithCompletionHandler:(id /* block */)arg1;
- (bool)isBrokenViewVisible;
- (bool)isLinkedOnOrAfterSystemVersion:(id)arg1;
- (bool)isRemoteViewVisible;
- (bool)isSnapshotLoaded;
- (long long)largestAvailableDisplayMode;
- (unsigned int)maskedCorners;
- (void)maximumSizeDidChangeForDisplayMode:(long long)arg1;
- (void)performUpdateWithCompletionHandler:(id /* block */)arg1;
- (void)requestInsertionOfRemoteViewAfterViewWillAppearWithCompletionHandler:(id /* block */)arg1;
- (long long)requestState;
- (void)setActiveDisplayMode:(long long)arg1;
- (void)setAppBundleID:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisconnectsImmediately:(bool)arg1;
- (void)setHost:(id)arg1;
- (void)setMaskedCorners:(unsigned int)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRequestState:(long long)arg1;
- (void)setUserSpecifiedDisplayMode:(long long)arg1;
- (id)settingsIcon;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (long long)userSpecifiedDisplayMode;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)widget:(id)arg1 didTerminateWithError:(id)arg2;
- (id)widgetIdentifier;
- (id)widgetInfo;

// Image: /System/Library/AccessibilityBundles/Widgets.axbundle/Widgets

+ (Class)safeCategoryBaseClass;

- (void)_endConnectionRequestState:(long long)arg1;

@end
