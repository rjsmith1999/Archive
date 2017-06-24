/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFaceView : UIView <NTKClockHardwareInput, NTKClockIconZoomAnimator, NTKContainerViewLayoutDelegate, NTKTimeTravelModuleViewTapClient, NTKTimeView, PUICCrownInputSequencerDelegate> {
    NSTimer * _accumulateTimeTravelEntryRotationTimeoutTimer;
    double  _accumulatedTimeTravelEntryRotation;
    double  _aggdTimeTravelMaximumOffset;
    NSDate * _aggdTimeTravelSessionStart;
    struct CGSize { 
        double width; 
        double height; 
    }  _boundsSizeForComputedLayouts;
    bool  _canHandleHardwareEvents;
    NSMutableDictionary * _complicationDisplayWrappers;
    NSMutableDictionary * _complicationLayouts;
    NSMutableDictionary * _complicationPickerViews;
    bool  _complicationsShowEditingContent;
    NSTimer * _crownIdleTimer;
    long long  _dataMode;
    <NTKFaceViewDelegate> * _delegate;
    long long  _detailMode;
    NSMutableDictionary * _editConfigurations;
    double  _editModeTransitionFraction;
    NTKFaceEditView * _editView;
    bool  _editing;
    long long  _faceStyle;
    bool  _fastCrownMode;
    NSTimer * _fastCrownModeTimeoutTimer;
    NTKContainerView * _foregroundContainerView;
    long long  _fromEditMode;
    bool  _frozen;
    NSMutableSet * _hiddenComplicationSlots;
    bool  _isBackgrounded;
    double  _lastCrownOffset;
    double  _maxIconDiameter;
    double  _minIconDiameter;
    bool  _needsImageQueueDiscardOnRender;
    bool  _needsRender;
    bool  _needsTraceOnRender;
    bool  _orbing;
    NSDate * _overrideDate;
    bool  _removedFromWindowDuringThisTransaction;
    bool  _renderWasIgnored;
    NSString * _resourceDirectory;
    NSDate * _scrubDate;
    NSString * _selectedComplicationSlot;
    bool  _shouldShowUnsnapshotableContent;
    bool  _showContentForUnadornedSnapshot;
    bool  _showsCanonicalContent;
    bool  _showsLockedUI;
    bool  _slow;
    bool  _statusIconVisible;
    bool  _timeScrubbing;
    UIImage * _timeTravelCaptionImage;
    NSString * _timeTravelCaptionKey;
    UIView * _timeTravelCaptionView;
    double  _timeTravelDistanceToTomorrowEnd;
    double  _timeTravelDistanceToYesterdayStart;
    NSDate * _timeTravelEnterDate;
    NTKTimeTravelModuleView * _timeTravelModuleView;
    UIView<NTKTimeView> * _timeView;
    long long  _toEditMode;
    NSDate * _tomorrowEnd;
    bool  _transitioningBetweenLiveAndScrubbing;
    bool  _unadornedSnapshotRemoved;
    UIView * _unadornedSnapshotView;
    bool  _wasScrubbingAtStartOfTransition;
    NSDate * _yesterdayStart;
    bool  _zooming;
    NTKClockIconView * _zoomingIconView;
}

@property (nonatomic, readonly) double alphaForDimmedState;
@property (nonatomic) bool complicationsShowEditingContent;
@property (nonatomic, readonly) NSDate *currentDisplayDate;
@property (nonatomic) long long dataMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKFaceViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long detailMode;
@property (nonatomic, readonly) double editModeTransitionFraction;
@property (nonatomic, retain) NTKFaceEditView *editView;
@property (nonatomic, readonly) bool editing;
@property (nonatomic) long long faceStyle;
@property (nonatomic, readonly) UIView *foregroundContainerView;
@property (nonatomic, readonly) long long fromEditMode;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maxIconDiameter;
@property (nonatomic, readonly) double minIconDiameter;
@property (nonatomic, readonly) bool orbing;
@property (nonatomic, copy) NSString *resourceDirectory;
@property (nonatomic, retain) NSString *selectedComplicationSlot;
@property (nonatomic) bool shouldShowUnsnapshotableContent;
@property (nonatomic) bool showContentForUnadornedSnapshot;
@property (nonatomic) bool showsCanonicalContent;
@property (nonatomic) bool showsLockedUI;
@property (getter=isSlow, nonatomic) bool slow;
@property (readonly) Class superclass;
@property (readonly) bool timeScrubbing;
@property (nonatomic, retain) UIView<NTKTimeView> *timeView;
@property (nonatomic, readonly) long long toEditMode;
@property (nonatomic, retain) UIView *unadornedSnapshotView;
@property (nonatomic, readonly) bool zooming;
@property (nonatomic, readonly) NTKClockIconView *zoomingIconView;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

+ (id)_additionalPrelaunchApplicationIdentifiers;
+ (long long)_numberOfDetailModes;
+ (void)_prewarm;
+ (id)_swatchColorForColorOption:(id)arg1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1;
+ (id)_swatchImageForColorOption:(id)arg1;
+ (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
+ (id)newFaceViewOfStyle:(long long)arg1;
+ (long long)numberOfDetailModesForFaceStyle:(long long)arg1;
+ (id)swatchForEditModeDependsOnOptions:(long long)arg1;
+ (id)swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;

- (void).cxx_destruct;
- (void)_adjustUIForBoundsChange;
- (double)_alphaForComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyShowsCanonicalContent;
- (void)_applyShowsLockedUI;
- (void)_applySlow;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (id)_baseTimeTravelCaptionImageNameForEnglishOnly;
- (id)_blurSourceImage;
- (void)_bringForegroundViewsToFront;
- (bool)_canStartTimeScrubbing;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterOptionTransitionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_cleanupAfterOrb:(bool)arg1;
- (void)_cleanupAfterZoom;
- (id)_complicationContainerView;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (id)_createTimeTravelCaptionImage;
- (void)_didEnterBackground;
- (void)_disableCrown;
- (double)_editSpeedForComplications;
- (double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_enableCrown;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForComplicationDisplayWrapper:(id)arg1 inSlot:(id)arg2;
- (void)_getKeylineFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2 forComplicationSlot:(id)arg3 selected:(bool)arg4;
- (void)_handleLocaleDidChange;
- (void)_handleOrdinaryScreenWake;
- (bool)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2;
- (void)_handleWristRaiseScreenWake;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_layoutComplicationViewForSlot:(id)arg1;
- (void)_layoutComplicationViewWithWrapper:(id)arg1 forSlot:(id)arg2;
- (void)_layoutComplicationViews;
- (void)_layoutForegroundContainerView;
- (id)_layoutRuleForComplicationSlot:(id)arg1 withOverride:(long long)arg2 inEditMode:(long long)arg3;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (struct CGSize { double x1; double x2; })_maxSizeForComplicationSlot:(id)arg1 layoutOverride:(long long)arg2;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (bool)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_performSuppressingLayoutOnGeometryChange:(id /* block */)arg1;
- (void)_performWristRaiseAnimation;
- (void)_prepareForEditing;
- (void)_prepareForOrb;
- (void)_prepareForStatusChange:(bool)arg1;
- (void)_prepareScrubbingSequencerBoundaries;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_prepareWristRaiseAnimation;
- (void)_renderSynchronouslyWithImageQueueDiscard:(bool)arg1;
- (void)_resetSequencerBoundaries;
- (void)_scrubToDate:(id)arg1 animated:(bool)arg2;
- (void)_setTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_setupTimeTravel;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)_supportsTimeScrubbing;
- (bool)_supportsUnadornedSnapshot;
- (id)_timeTravelCaptionAttributedText;
- (id)_timeTravelCaptionCacheKey;
- (id)_timeTravelCaptionFontSizeOverrides;
- (double)_timeTravelCaptionLabelMaxWidth;
- (double)_timeTravelStatusModuleCaptionConstraintPadding;
- (struct CGPoint { double x1; double x2; })_timeTravelStatusModuleCenter;
- (void)_unloadSnapshotContentViews;
- (void)_updateComplicationMaxSize;
- (void)_updateForResourceDirectoryChange;
- (void)_updateMaxSizeForDisplayWrapper:(id)arg1 slot:(id)arg2;
- (void)_updateStatusIconVisibility;
- (void)_updateTimeOffset;
- (bool)_usesCustomZoom;
- (double)_verticalPaddingForStatusBar;
- (id)_viewsToSuppressLayoutOnBoundsChange;
- (bool)_wantsOpportunisticLiveFaceLoading;
- (bool)_wantsStatusBarHidden;
- (bool)_wantsTimeTravelStatusModule;
- (bool)_wheelChangedWithEvent:(id)arg1;
- (void)_willEnterForeground;
- (double)alphaForDimmedState;
- (void)applyBreathingFraction:(double)arg1 forComplicationSlot:(id)arg2;
- (void)applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)applyRubberBandingFraction:(double)arg1 forComplicationSlot:(id)arg2;
- (void)applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)blurSourceImage;
- (void)cleanupAfterEditing;
- (void)cleanupAfterOptionTransitionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)cleanupAfterOrb:(bool)arg1;
- (void)cleanupAfterZoom;
- (bool)complicationIsHiddenAtSlot:(id)arg1;
- (id)complicationLayoutforSlot:(id)arg1;
- (id)complicationPickerViewForSlot:(id)arg1;
- (bool)complicationsShowEditingContent;
- (void)configureComplicationViewDisplayWrapper:(id)arg1 forSlot:(id)arg2;
- (void)configureForEditMode:(long long)arg1;
- (void)configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (id)currentDisplayDate;
- (id)customEditingViewController;
- (long long)dataMode;
- (id)delegate;
- (long long)detailMode;
- (double)editModeTransitionFraction;
- (double)editSpeedForComplications;
- (double)editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)editView;
- (bool)editing;
- (void)endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)enumerateComplicationDisplayWrappersWithBlock:(id /* block */)arg1;
- (long long)faceStyle;
- (id)foregroundContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForComplicationPickerViewForSlot:(id)arg1;
- (long long)fromEditMode;
- (void)handleOrdinaryScreenWake;
- (void)handleUnadornedSnapshotRemoved;
- (void)handleWristRaiseScreenWake;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateComplicationLayout;
- (bool)isFrozen;
- (bool)isSlow;
- (double)keylineCornerRadiusForComplicationSlot:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keylineFrameForComplicationSlot:(id)arg1 selected:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)layoutComplicationViews;
- (void)layoutContainerView:(id)arg1;
- (id)layoutRuleForComplicationSlot:(id)arg1 inState:(long long)arg2 layoutOverride:(long long)arg3;
- (void)layoutSubviews;
- (long long)legacyComplicationLayoutOverrideForSlot:(id)arg1 complication:(id)arg2;
- (void)loadContentToReplaceUnadornedSnapshot;
- (double)maxIconDiameter;
- (double)minIconDiameter;
- (bool)needsImageQueueDiscardOnRender;
- (id)newLegacyComplicationViewForSlot:(id)arg1 family:(long long)arg2 complication:(id)arg3;
- (id)normalComplicationDisplayWrapperForSlot:(id)arg1;
- (id)optionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)orbing;
- (void)performTimeTravelModuleTapAction;
- (void)performWristRaiseAnimation;
- (void)prepareForEditing;
- (void)prepareForOrb;
- (void)prepareForStatusChange:(bool)arg1;
- (void)prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)reloadSnapshotContentViews;
- (void)renderIfNeeded;
- (id)resourceDirectory;
- (id)selectedComplicationSlot;
- (void)setComplicationHidden:(bool)arg1 atSlot:(id)arg2;
- (void)setComplicationPickerView:(id)arg1 forSlot:(id)arg2;
- (void)setComplicationsShowEditingContent:(bool)arg1;
- (void)setDataMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailMode:(long long)arg1;
- (void)setEditView:(id)arg1;
- (void)setFaceStyle:(long long)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setNeedsRender;
- (void)setNextRenderIsFirstAfterWake;
- (void)setNormalComplicationDisplayWrapper:(id)arg1 forSlot:(id)arg2;
- (void)setOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setResourceDirectory:(id)arg1;
- (void)setSelectedComplicationSlot:(id)arg1;
- (void)setShouldShowUnsnapshotableContent:(bool)arg1;
- (void)setShowContentForUnadornedSnapshot:(bool)arg1;
- (void)setShowsCanonicalContent:(bool)arg1;
- (void)setShowsLockedUI:(bool)arg1;
- (void)setSlow:(bool)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5;
- (void)setUnadornedSnapshotView:(id)arg1;
- (void)setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (bool)shouldShowUnsnapshotableContent;
- (bool)showContentForUnadornedSnapshot;
- (bool)showsCanonicalContent;
- (bool)showsLockedUI;
- (void)startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)supportsUnadornedSnapshot;
- (bool)timeScrubbing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })timeTravelModuleTouchInsets;
- (id)timeView;
- (long long)toEditMode;
- (id)unadornedSnapshotView;
- (bool)usesCustomZoom;
- (double)verticalPaddingForStatusBar;
- (bool)wantsStatusBarHidden;
- (void)willMoveToWindow:(id)arg1;
- (bool)zooming;
- (id)zoomingIconView;

// Image: /System/Library/AccessibilityBundles/NanoTimeKitCompanion.axbundle/NanoTimeKitCompanion

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityAnnounceScrub;
- (bool)_accessibilityCanStartTimeTravel;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityNotificationObserver;
- (id)_accessibilityScrubTimer;
- (void)_accessibilitySetNotificationObserver:(id)arg1;
- (void)_accessibilitySetScrubTimer:(id)arg1;
- (void)_accessibilitySetTimeTravelDate:(id)arg1;
- (void)_accessibilityTimeAnnouncementDidFinish;
- (id)_accessibilityTimeTravelDate;
- (bool)_accessibilityTimeTravelEnabled;
- (bool)_axIsDoneAnnouncing;
- (bool)_axIsWaitingToAnnounce;
- (void)_axMakeTimeViewFirstElement;
- (void)_axSetIsDoneAnnouncing:(bool)arg1;
- (void)_axSetIsWaitingToAnnounce:(bool)arg1;
- (void)dealloc;
- (void)endScrubbingAnimated:(bool)arg1;
- (void)scrubToDate:(id)arg1 animated:(bool)arg2;
- (void)setTimeView:(id)arg1;
- (void)startScrubbingAnimated:(bool)arg1;

@end