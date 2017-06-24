/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusEngine : NSObject <UIGestureRecognizerDelegate, _UIFocusMapDelegate> {
    NSMapTable * _activeScrollViewAnimatingBounds;
    NSMapTable * _activeScrollViewLoadingBounds;
    _UIFocusSoundPool * _appIconSoundPool;
    NSMapTable * _cachedViewSearchResults;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentFocusDirection;
    unsigned long long  _currentGestureID;
    bool  _enabled;
    struct CGPoint { 
        double x; 
        double y; 
    }  _firstMomentumTouchPoint;
    struct { 
        unsigned int isSettingFocusedView : 1; 
        unsigned int isEligibleToCrossSpeedBump : 1; 
        unsigned int isContinuingTouchWithMomentum : 1; 
        unsigned int isAnimatingFocusDirectionRollback : 1; 
        unsigned int isPerformingJoystickRollback : 1; 
        unsigned int isJoystickInRepeatMode : 1; 
        unsigned int isPendingJoystickRepeat : 1; 
        unsigned int isPeekingScrollView : 1; 
        unsigned int shouldApplyAcceleration : 1; 
        unsigned int shouldShowDebugOverlays : 1; 
    }  _flags;
    NSMapTable * _focusRollbackAnimations;
    unsigned long long  _focusUpdateCountSinceLastPanBegan;
    unsigned long long  _inputType;
    CADisplayLink * _joystickFocusDirectionDisplayLink;
    _UIFocusEngineJoystickGestureRecognizer * _joystickGestureRecognizer;
    NSTimer * _joystickModeExitTimer;
    NSTimer * _joystickModeRepeatTimer;
    unsigned long long  _joystickRepeatingHeading;
    _UIFocusSoundPool * _keyboardSoundPool;
    _UIFocusSoundPool * _largeSoundPool;
    double  _lastEdgeScrollEdgeValue;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastKnownTouchPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastMomentumTouchPoint;
    UIScrollView * _lastScrolledScroll;
    CADisplayLink * _momentumDisplayLink;
    double  _momentumFriction;
    struct CGPoint { 
        double x; 
        double y; 
    }  _momentumVelocity;
    UIMoveEvent * _moveEvent;
    _UIFocusEnginePanGestureRecognizer * _panGestureRecognizer;
    unsigned long long  _peekingHeading;
    UIScrollView * _peekingScrollView;
    struct CGSize { 
        double width; 
        double height; 
    }  _peekingScrollViewPeekSize;
    bool  _playsSoundOnFocusChange;
    double  _previousJoystickFocusMovementTime;
    double  _previousJoystickRegionEntryTime;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _progressAccumulator;
    NSArray * _remoteGestures;
    <_UIFocusScrollAnimator> * _scrollViewAnimator;
    _UIFocusPressGestureRecognizer * _selectGestureRecognizer;
    bool  _sendsFocusDirection;
    bool  _shouldShowDebugOverlays;
    _UIFocusSoundPool * _smallSoundPool;
    NSObject<OS_dispatch_queue> * _soundQueue;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UIWindow * _targetWindow;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchBeganPoint;
    _UIFocusTouchDebugView * _touchIndicatorView;
    UIView * _viewForTouchDeferredFocus;
    bool  _wantsScrollPeeking;
}

@property (nonatomic, readonly) double _animationCoefficient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIMoveEvent *moveEvent;
@property (getter=_playsSoundOnFocusChange, setter=_setPlaysSoundOnFocusChange:, nonatomic) bool playsSoundOnFocusChange;
@property (getter=_sendsFocusDirection, setter=_setSendsFocusDirection:, nonatomic) bool sendsFocusDirection;
@property (nonatomic) bool shouldShowDebugOverlays;
@property (readonly) Class superclass;
@property (nonatomic) UIWindow *targetWindow;
@property (nonatomic) UIView *viewForTouchDeferredFocus;
@property (nonatomic) bool wantsScrollPeeking;

- (void).cxx_destruct;
- (void)_addGestureRecognizers;
- (void)_addVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toScrollViewForAnimation:(id)arg2;
- (bool)_allowsFocusMovementAction;
- (void)_animateOffsetOfScrollView:(id)arg1 toShowFocusedView:(id)arg2;
- (double)_animationCoefficient;
- (bool)_attemptFocusMovement:(id)arg1 fromItem:(id)arg2;
- (bool)_attemptPanGestureFocusMovement:(id)arg1 fromItem:(id)arg2;
- (id)_bestCandidateForFocusMovement:(id)arg1 fromItem:(id)arg2;
- (id)_bestCandidateForLinearFocusMovement:(id)arg1 fromItem:(id)arg2;
- (id)_bestCandidateForNonLinearFocusMovement:(id)arg1 fromItem:(id)arg2;
- (id)_cachedSearchResultForHeading:(unsigned long long)arg1;
- (void)_cancelScrollingForScrollView:(id)arg1;
- (void)_cleanUpSounds;
- (void)_clearVisibleRectForLoadingScrollViewContent:(id)arg1;
- (id)_closestFocusableViewToPoint:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (id)_closestFocusableViewToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollView:(id)arg1 toFocusView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollView:(id)arg1 toFocusView:(id)arg2 targetOffset:(struct CGPoint { double x1; double x2; })arg3 targetBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)_continueTouchWithMomentum;
- (double)_effortRequiredForFocusMovement:(id)arg1 fromItem:(id)arg2;
- (void)_ensureFocusedViewIsOnscreen:(id)arg1;
- (void)_exitJoystickModeForReal:(id)arg1;
- (id)_findFocusCandidateByExhaustivelySearchingScrollView:(id)arg1 forFocusMovement:(id)arg2 fromItem:(id)arg3;
- (id)_findFocusCandidateBySearchingLinearFocusMovementSequencesForMovement:(id)arg1 fromItem:(id)arg2;
- (id)_findFocusCandidateWithoutLoadingScrollViewContent:(id)arg1 forFocusMovement:(id)arg2 fromItem:(id)arg3 minimumSearchArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)_focusMap:(id)arg1 preferredDefaultFocusItemInEnvironment:(id)arg2;
- (id)_focusMap:(id)arg1 preferredDestinationItemForFocusMovement:(id)arg2;
- (id)_focusedItem;
- (id)_focusedItemInfo;
- (double)_frictionInterpolationForMomentumSpeed:(double)arg1 totalDistance:(double)arg2 slope:(double)arg3 shortDistance:(double)arg4 longDistance:(double)arg5;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_handleButtonGesture:(id)arg1;
- (void)_handleJoystickGesture:(id)arg1;
- (void)_handleJoystickRepeatMode:(id)arg1;
- (void)_handleJoystickTiltMode:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleSelectGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (unsigned long long)_headingForJoystickPosition:(struct CGPoint { double x1; double x2; })arg1 usingMinimumRadius:(double)arg2;
- (double)_horizontalFrictionInterpolationForMomentumSpeed:(double)arg1 totalDistance:(double)arg2;
- (bool)_isContinuingTouchWithMomentum;
- (bool)_isScrollingScrollView:(id)arg1;
- (bool)_joystickAttemptFocusMovement:(id)arg1 fromItem:(id)arg2;
- (void)_joystickDisplayLinkHeartbeat:(id)arg1;
- (void)_joystickGestureBegan:(id)arg1;
- (void)_joystickGestureEnded:(id)arg1;
- (void)_joystickGestureUpdated:(id)arg1;
- (void)_joystickPerformRepeat:(id)arg1;
- (double)_joystickRepeatDurationForTimeInMovementZone:(double)arg1;
- (struct CGVector { double x1; double x2; })_joystickVelocityForHeading:(unsigned long long)arg1 timeInMovementZone:(double)arg2;
- (void)_loadScrollViewContentForFocusMovement:(id)arg1 fromItem:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_minimumSearchAreaForContainerView:(id)arg1;
- (void)_momentumHeartbeat:(id)arg1;
- (id)_noCache_bestCandidateForNonLinearFocusMovement:(id)arg1 fromItem:(id)arg2;
- (void)_panGestureEnd:(id)arg1;
- (id)_panGestureRecognizer;
- (void)_panGestureStart:(id)arg1;
- (void)_peekScrollViewStartingAtFocusedItem:(id)arg1 progress:(struct CGVector { double x1; double x2; })arg2;
- (bool)_performFocusMovement:(id)arg1;
- (void)_performScrollingIfNeededForFocusUpdateContext:(id)arg1;
- (void)_playFocusSound:(long long)arg1 withPan:(double)arg2 volume:(double)arg3;
- (bool)_playsSoundOnFocusChange;
- (id)_poolForFocusSound:(long long)arg1;
- (void)_recordMomentumForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_removeGestureRecognizers;
- (void)_removeVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromScrollViewForAnimation:(id)arg2;
- (void)_resetFocusDirectionRollbackForAllItems;
- (void)_resetFocusDirectionRollbackForItem:(id)arg1;
- (void)_resetJoystick;
- (void)_resetMomentum;
- (void)_resetPanGestureState;
- (void)_resetProgressAccumulatorForHeading:(unsigned long long)arg1 focusedItem:(id)arg2;
- (void)_resetScrollViewPeek:(bool)arg1;
- (void)_resetViewSearchCache;
- (void)_runPerformanceTestWithName:(id)arg1 bySwipingAlongAxis:(int)arg2;
- (void)_runPerformanceTestWithName:(id)arg1 fakeEvents:(struct { double x1; long long x2; double x3; double x4; double x5; double x6; }*)arg2 count:(int)arg3;
- (void)_scrollView:(id)arg1 toOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)_scrollViewToPeekFocusMovement:(id)arg1 fromItem:(id)arg2;
- (void)_sendFocusDirectionNotificationWithDirection:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_sendFocusMovementActionIfPossible:(id)arg1;
- (void)_sendGestureBeginNotification;
- (void)_sendGestureEndNotification;
- (void)_sendMomentumEndNotificationsAndAnimateRollback:(bool)arg1;
- (bool)_sendsFocusDirection;
- (void)_setCachedSearchResult:(id)arg1 forHeading:(unsigned long long)arg2;
- (void)_setPanGestureRecognizer:(id)arg1;
- (void)_setPlaysSoundOnFocusChange:(bool)arg1;
- (void)_setSendsFocusDirection:(bool)arg1;
- (void)_setUpSounds;
- (void)_setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forLoadingScrollViewContent:(id)arg2;
- (void)_setupDebugOverlays;
- (bool)_shouldEagerlyValidateFocusCandidates;
- (bool)_shouldPerformFocusUpdateWithCurrentMomentumStatus;
- (bool)_shouldRecordDestinationViewDistanceOffscreen;
- (id)_soundQueue;
- (bool)_speedBumpsAllowFocusMovement:(id)arg1 fromItem:(id)arg2;
- (void)_startFocusDirectionRollbackForItem:(id)arg1;
- (void)_stopMomentumAndPerformRollback;
- (struct CGPoint { double x1; double x2; })_targetContentOffsetForScrollView:(id)arg1;
- (void)_teardownDebugOverlays;
- (int)_touchRegionForDigitizerLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_touchSensitivityForView:(id)arg1;
- (bool)_uiktest_performFocusMovement:(id)arg1;
- (bool)_uiktest_updateFocusToItem:(id)arg1;
- (void)_updateDebugOverlayByRemovingTouchIndicators;
- (void)_updateDebugOverlayWithTouchAtNormalizedPoint:(struct CGPoint { double x1; double x2; })arg1 navigationBoundary:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)_updateFocusWithContext:(id)arg1;
- (bool)_updateFocusedViewAndScroll:(id)arg1 withSoundVolume:(double)arg2;
- (void)_updatePanLocation:(struct CGPoint { double x1; double x2; })arg1 reportedVelocity:(struct CGVector { double x1; double x2; })arg2 wantsFocusDirection:(bool)arg3;
- (double)_verticalFrictionInterpolationForMomentumSpeed:(double)arg1 totalDistance:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleBoundsForScrollView:(id)arg1;
- (bool)_wouldCrossSpeedBumpDuringFocusMovement:(id)arg1 fromItem:(id)arg2;
- (bool)_wouldCrossSpeedBumpDuringFocusMovement:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (bool)isEnabled;
- (id)moveEvent;
- (bool)moveInDirection:(unsigned long long)arg1;
- (bool)moveWithEvent:(id)arg1;
- (void)reset;
- (void)setEnabled:(bool)arg1;
- (void)setMoveEvent:(id)arg1;
- (void)setShouldShowDebugOverlays:(bool)arg1;
- (void)setTargetWindow:(id)arg1;
- (void)setViewForTouchDeferredFocus:(id)arg1;
- (void)setWantsScrollPeeking:(bool)arg1;
- (bool)shouldShowDebugOverlays;
- (id)targetWindow;
- (id)viewForFocusHeading:(unsigned long long)arg1 fromView:(id)arg2;
- (id)viewForTouchDeferredFocus;
- (bool)wantsScrollPeeking;

@end
