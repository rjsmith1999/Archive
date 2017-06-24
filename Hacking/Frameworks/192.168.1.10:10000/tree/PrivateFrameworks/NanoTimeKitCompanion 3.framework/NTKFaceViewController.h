/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFaceViewController : UIViewController <NTKClockHardwareInput, NTKClockIconZoomAnimator, NTKComplicationPickerViewDataSource, NTKFaceEditViewDelegate, NTKFaceObserver, NTKFaceViewDelegate> {
    bool  _animatingVariant;
    NSCache * _appearanceVariantsCache;
    bool  _becomeLiveOnUnfreeze;
    long long  _dataMode;
    unsigned long long  _delayedAnimationValue;
    NTKDelayedBlock * _delayedFreezeBlock;
    <NTKFaceViewControllerDelegate> * _delegate;
    bool  _deviceLocked;
    NTKFaceEditView * _editView;
    bool  _editingComplications;
    NTKFace * _face;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceLaunchRect;
    NTKFaceView * _faceView;
    bool  _frozen;
    bool  _hasGoneLive;
    bool  _hasRemovedUnadornedSnapshot;
    bool  _hasUsedUnadornedSnapshot;
    NSCache * _informationVariantsCache;
    NSString * _lastTappedSlotIdentifier;
    bool  _newValueWhileAnimating;
    NSMutableDictionary * _normalComplicationControllers;
    NSDate * _pauseDate;
    NTKComplicationController * _pptComplicationController;
    NTKComplicationDisplayWrapperView * _pptComplicationDisplay;
    bool  _readyToApplyConfiguration;
    NSDate * _scrubDate;
    bool  _shouldShowSnapshot;
    bool  _showContentForUnadornedSnapshot;
    bool  _showsCanonicalContent;
    bool  _showsLockedUI;
    UIImageView * _snapshotView;
    UIViewController<NTKClockStatusBarViewController> * _statusBarViewController;
    bool  _supressesNonSnapshotUI;
    NSObject<OS_dispatch_source> * _time_travel_update_timer;
    bool  _wantsRemoveUnadorned;
    UIView * _zoomingContainerView;
    UIView * _zoomingIconCircleView;
    UIView * _zoomingIconTimeView;
}

@property (nonatomic) long long dataMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKFaceViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NTKFace *face;
@property (nonatomic, readonly) NTKFaceView *faceView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *pauseDate;
@property (nonatomic) bool shouldShowSnapshot;
@property (nonatomic) bool showContentForUnadornedSnapshot;
@property (nonatomic) bool showsCanonicalContent;
@property (nonatomic) bool showsLockedUI;
@property (nonatomic, retain) UIViewController<NTKClockStatusBarViewController> *statusBarViewController;
@property (readonly) Class superclass;
@property (nonatomic) bool supressesNonSnapshotUI;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

+ (double)_complicationPickerAlphaForTransitionFraction:(double)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)PPTCleanupLastComplication;
- (void)PPTCreateComplication:(id)arg1 forSlot:(id)arg2 synchronously:(bool)arg3;
- (id)PPTDescriptionForComplication:(id)arg1;
- (void)PPTPrepareComplicationTest;
- (id)PPTUniqueComplicationsToSlotForCurrentFace;
- (void)_applyConfigurationWithDuration:(double)arg1;
- (void)_clearFaceLaunchRect;
- (void)_clearLastTappedComplication;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureLisaForSelectedSlot:(id)arg1 editMode:(long long)arg2 animated:(bool)arg3;
- (void)_configureViewsForSelectedSlot:(id)arg1 editMode:(long long)arg2;
- (id)_controllerForComplication:(id)arg1 slot:(id)arg2;
- (id)_dailySnapshot;
- (id)_deactivatePickerViewForSlot:(id)arg1;
- (void)_defaultCleanupAfterZoom;
- (void)_defaultPrepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_defaultSetZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_ensureComplication:(id)arg1 forSlot:(id)arg2;
- (void)_ensureNormalComplication:(id)arg1 forSlot:(id)arg2;
- (void)_ensureNotLive;
- (void)_ensurePauseDate;
- (id)_ensurePickerViewForSlot:(id)arg1;
- (void)_faceSnapshotDidChange:(id)arg1;
- (void)_handleDeviceLockChange;
- (bool)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2;
- (void)_handleStatusBarChange;
- (void)_insertNormalComplicationDisplay:(id)arg1 controller:(id)arg2 forSlot:(id)arg3;
- (id)_keylineLabelTextForOption:(id)arg1 customEditMode:(long long)arg2;
- (id)_newNormalDisplayForComplicationController:(id)arg1 slot:(id)arg2;
- (void)_populateFaceViewEditOptionsFromFace;
- (void)_removeComplicationForSlot:(id)arg1;
- (void)_removeNormalComplicationForSlot:(id)arg1 andDisconnectDisplay:(bool)arg2;
- (void)_setDataMode:(long long)arg1 becomeLiveOnUnfreeze:(bool)arg2;
- (void)_setFaceViewResourceDirectoryFromFace;
- (void)_setupEditViewForComplications;
- (void)_setupEditViewForCustomEditMode:(long long)arg1;
- (bool)_shouldShowComplicationPickerForSlot:(id)arg1;
- (void)_showStatusBarAfterWake;
- (void)_transitionFraction:(double)arg1 fromValue:(long long)arg2 toValue:(long long)arg3 forEditMode:(long long)arg4;
- (id)_unadornedSnapshot;
- (void)_updateComplicationLisaGesture;
- (void)_updateFaceAndViewWithOption:(id)arg1 forMode:(long long)arg2 resourcePath:(id)arg3 slot:(id)arg4;
- (void)_updateInteractivityOfComplicationDisplays;
- (bool)_wheelChangedWithEvent:(id)arg1;
- (void)_wrapperViewTapped:(id)arg1;
- (id)blurSourceImage;
- (bool)canStopEditing;
- (void)cleanupAfterOrb:(bool)arg1;
- (void)cleanupAfterZoom;
- (void)complicationPickerView:(id)arg1 getDisplay:(id*)arg2 controller:(id*)arg3 forComplication:(id)arg4;
- (id)complicationPickerView:(id)arg1 layoutRuleForComplicationDisplay:(id)arg2;
- (id)currentComplicationApplicationIdentifiers;
- (bool)dailySnapshotShowsComplication:(id)arg1 forSlot:(id)arg2;
- (long long)dataMode;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)disableSlowMode;
- (void)editView:(id)arg1 didScrollToFraction:(double)arg2 fromEditMode:(long long)arg3 toEditMode:(long long)arg4;
- (void)editView:(id)arg1 didStopAtEditMode:(long long)arg2;
- (void)editView:(id)arg1 didTapKeylineForKey:(id)arg2 editMode:(long long)arg3;
- (void)editView:(id)arg1 keylineDidBreathe:(double)arg2 forKey:(id)arg3 editMode:(long long)arg4;
- (void)editView:(id)arg1 keylineDidRubberBand:(double)arg2 forKey:(id)arg3 editMode:(long long)arg4;
- (void)editViewWillBeginScrolling:(id)arg1;
- (void)enableSlowMode;
- (void)enumerateComplicationControllersAndDisplaysWithBlock:(id /* block */)arg1;
- (id)face;
- (void)face:(id)arg1 didChangeOptionsForEditMode:(long long)arg2;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (id)faceView;
- (bool)faceViewComplicationIsEmptyForSlot:(id)arg1;
- (void)faceViewDidHideOrShowComplicationSlot;
- (void)faceViewDidLayoutSubviews;
- (void)faceViewDidReloadSnapshotContentViews;
- (void)faceViewDidScrubToDate:(id)arg1 forced:(bool)arg2;
- (void)faceViewRequestedLaunchFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)faceViewUpdatedResourceDirectory:(id)arg1 wantsToTransferOwnership:(bool)arg2;
- (void)faceViewWantsComplicationKeylineFramesReloaded;
- (void)faceViewWantsStatusBarHidden:(bool)arg1 animated:(bool)arg2;
- (void)faceViewWantsUnadornedSnapshotViewRemoved;
- (void)faceViewWillEnterTimeTravel;
- (void)faceViewWillExitTimeTravel;
- (void)faceViewWillUnloadSnapshotContentViews;
- (void)freeze;
- (void)freezeAfterDelay:(double)arg1;
- (void)getComplicationController:(id*)arg1 andDisplay:(id*)arg2 forSlot:(id)arg3;
- (void)handleOrdinaryScreenWake;
- (void)handleWristRaiseScreenWake;
- (void)hideFaceEditingUIAnimated:(bool)arg1;
- (id)initWithFace:(id)arg1 configuration:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })launchRectForComplicationApplicationIdentifier:(id)arg1;
- (void)loadView;
- (id)pauseDate;
- (void)performComplicationBackgroundDataRefresh;
- (void)performWristRaiseAnimation;
- (void)prepareForOrb;
- (void)prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)setDataMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNextRenderIsFirstAfterWake;
- (void)setPauseDate:(id)arg1;
- (void)setShouldShowSnapshot:(bool)arg1;
- (void)setShowContentForUnadornedSnapshot:(bool)arg1;
- (void)setShowsCanonicalContent:(bool)arg1;
- (void)setShowsLockedUI:(bool)arg1;
- (void)setStatusBarViewController:(id)arg1;
- (void)setSupressesNonSnapshotUI:(bool)arg1;
- (void)setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (bool)shouldLoadLiveFaceAtNextScreenOff;
- (bool)shouldShowSnapshot;
- (bool)showContentForUnadornedSnapshot;
- (void)showEditingUIAnimated:(bool)arg1;
- (bool)showsCanonicalContent;
- (bool)showsLockedUI;
- (id)statusBarViewController;
- (bool)supressesNonSnapshotUI;
- (void)unfreeze;
- (void)viewDidLayoutSubviews;

// Image: /System/Library/AccessibilityBundles/NanoTimeKitCompanion.axbundle/NanoTimeKitCompanion

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_endTransitionToValue:(long long)arg1 forEditMode:(long long)arg2;
- (void)_setupEditing;
- (void)_tearDownEditing;
- (void)configureWithDuration:(double)arg1 block:(id /* block */)arg2;
- (void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(long long)arg1;

@end
