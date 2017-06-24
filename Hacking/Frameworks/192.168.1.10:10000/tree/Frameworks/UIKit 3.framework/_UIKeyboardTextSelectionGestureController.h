/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKeyboardTextSelectionGestureController : NSObject <UIGestureRecognizerDelegate, _UIPanOrFlickGestureRecognizerDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _accumulatedAcceleration;
    struct CGPoint { 
        double x; 
        double y; 
    }  _accumulatedBounding;
    NSMutableArray * _activeGestures;
    struct CGPoint { 
        double x; 
        double y; 
    }  _cursorLocationBase;
    <_UIKeyboardTextSelectionGestureControllerDelegate> * _delegate;
    bool  _didFloatCursor;
    bool  _didSuppressSelectionGrabbers;
    _UISystemSoundPlayer * _feedbackBehaviour;
    bool  _isLongPressing;
    bool  _isPanning;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastPanTranslation;
    double  _lastPressTimestamp;
    UIDelayedAction * _longForcePressAction;
    long long  _panGestureState;
    int  _previousForcePressCount;
    long long  _previousRepeatedGranularity;
    bool  _suppressTwoFingerPan;
    UIDelayedAction * _tapLogTimer;
    double  _twoFingerTapTimestamp;
    bool  _wasNestedPinchingDisabled;
    bool  _wasScrollingEnabled;
    UITextMagnifierTimeWeightedPoint * _weightedPoint;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } accumulatedAcceleration;
@property (nonatomic) struct CGPoint { double x1; double x2; } accumulatedBounding;
@property (nonatomic, retain) NSMutableArray *activeGestures;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIKeyboardTextSelectionGestureControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didFloatCursor;
@property (nonatomic) bool didSuppressSelectionGrabbers;
@property (nonatomic, retain) _UISystemSoundPlayer *feedbackBehaviour;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLongPressing;
@property (nonatomic) bool isPanning;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastPanTranslation;
@property (nonatomic) double lastPressTimestamp;
@property (nonatomic, retain) UIDelayedAction *longForcePressAction;
@property (nonatomic) long long panGestureState;
@property (nonatomic) int previousForcePressCount;
@property (nonatomic) long long previousRepeatedGranularity;
@property (nonatomic, readonly) _UIKeyboardTextSelectionController *selectionController;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressTwoFingerPan;
@property (nonatomic, retain) UIDelayedAction *tapLogTimer;
@property (nonatomic) double twoFingerTapTimestamp;
@property (nonatomic) bool wasNestedPinchingDisabled;
@property (nonatomic) bool wasScrollingEnabled;
@property (nonatomic, retain) UITextMagnifierTimeWeightedPoint *weightedPoint;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)sharedInstance;

- (void)_beginLongForcePressTimerForGesture:(id)arg1;
- (void)_cancelLongForcePressTimer;
- (void)_cleanupDeadGesturesIfNecessary;
- (void)_didEndIndirectSelectionGesture:(id)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_granularityExpandingGestureWithTimeInterval:(double)arg1 timeGranularity:(double)arg2 isMidPan:(bool)arg3;
- (void)_logTapCounts:(id)arg1;
- (void)_longForcePressDetected:(id)arg1;
- (void)_prepareForGesture;
- (void)_tidyUpGesture;
- (void)_willBeginIndirectSelectionGesture:(id)arg1;
- (struct CGPoint { double x1; double x2; })acceleratedTranslation:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2 final:(bool)arg3;
- (struct CGPoint { double x1; double x2; })accumulatedAcceleration;
- (struct CGPoint { double x1; double x2; })accumulatedBounding;
- (id)activeGestures;
- (id)addOneFingerForcePressRecognizerToView:(id)arg1;
- (id)addOneFingerTextSelectionGesturesToView:(id)arg1;
- (id)addTwoFingerPanRecognizerToView:(id)arg1;
- (id)addTwoFingerTapRecognizerToView:(id)arg1;
- (id)addTwoFingerTextSelectionGesturesToView:(id)arg1;
- (bool)allowOneFingerDeepPress;
- (void)beginCursorManipulationFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)beginIndirectBlockPanWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)beginOneFingerSelectWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)beginTwoFingerCursorPanWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)beginTwoFingerLongPressWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)beginTwoFingerPanWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (struct CGPoint { double x1; double x2; })boundedTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)cancelTwoFingerLongPressWithExecutionContext:(id)arg1;
- (void)cancelTwoFingerPanWithExecutionContext:(id)arg1;
- (void)clearKeyboardTouchesForGesture:(id)arg1;
- (void)configureOneFingerForcePressRecognizer:(id)arg1;
- (void)configureTwoFingerPanGestureRecognizer:(id)arg1;
- (void)configureTwoFingerTapGestureRecognizer:(id)arg1;
- (struct CGPoint { double x1; double x2; })cursorLocationForTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (bool)didFloatCursor;
- (void)didRemoveSelectionController;
- (bool)didSuppressSelectionGrabbers;
- (void)disableEnclosingScrollViewScrolling;
- (void)enableEnclosingScrollViewNestedPinching;
- (bool)enclosingScrollViewIsScrolling;
- (void)endIndirectBlockPanWithExecutionContext:(id)arg1;
- (void)endOneFingerSelectWithExecutionContext:(id)arg1;
- (void)endTwoFingerLongPressWithExecutionContext:(id)arg1;
- (void)endTwoFingerPanWithExecutionContext:(id)arg1;
- (id)feedbackBehaviour;
- (void)finishTwoFingerLongPressWithExecutionContext:(id)arg1;
- (bool)forceTouchGestureRecognizerShouldBegin:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)gestureRecognizerShouldBeginResponse:(id)arg1;
- (void)handleTwoFingerFlickInDirection:(long long)arg1 executionContext:(id)arg2;
- (void)indirectBlockPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint { double x1; double x2; })arg2;
- (void)indirectCursorPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint { double x1; double x2; })arg2 withFlickDirection:(unsigned long long)arg3;
- (void)indirectPanGestureWithState:(long long)arg1 withTranslation:(struct CGPoint { double x1; double x2; })arg2 withFlickDirection:(unsigned long long)arg3;
- (id)init;
- (bool)isLongPressing;
- (bool)isPanning;
- (bool)isPlacedCarefully;
- (struct CGPoint { double x1; double x2; })lastPanTranslation;
- (double)lastPressTimestamp;
- (long long)layoutDirectionFromFlickDirection:(unsigned long long)arg1;
- (id)longForcePressAction;
- (void)oneFingerForcePan:(id)arg1;
- (void)oneFingerForcePress:(id)arg1;
- (double)oneFingerForcePressAllowableMovement;
- (double)oneFingerForcePressMinimumDuration;
- (id)oneFingerForcePressRecognizer;
- (bool)oneFingerForcePressShouldCancelTouchesInView;
- (bool)oneFingerForcePressShouldFailWithoutForce;
- (long long)panGestureState;
- (int)previousForcePressCount;
- (long long)previousRepeatedGranularity;
- (void)redisableEnclosingScrollViewNestedPinching;
- (id)selectionController;
- (void)setAccumulatedAcceleration:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAccumulatedBounding:(struct CGPoint { double x1; double x2; })arg1;
- (void)setActiveGestures:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidFloatCursor:(bool)arg1;
- (void)setDidSuppressSelectionGrabbers:(bool)arg1;
- (void)setFeedbackBehaviour:(id)arg1;
- (void)setIsLongPressing:(bool)arg1;
- (void)setIsPanning:(bool)arg1;
- (void)setLastPanTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastPressTimestamp:(double)arg1;
- (void)setLongForcePressAction:(id)arg1;
- (void)setPreviousForcePressCount:(int)arg1;
- (void)setPreviousRepeatedGranularity:(long long)arg1;
- (void)setSuppressTwoFingerPan:(bool)arg1;
- (void)setTapLogTimer:(id)arg1;
- (void)setTwoFingerTapTimestamp:(double)arg1;
- (void)setWasNestedPinchingDisabled:(bool)arg1;
- (void)setWasScrollingEnabled:(bool)arg1;
- (void)setWeightedPoint:(id)arg1;
- (bool)suppressTwoFingerPan;
- (id)tapLogTimer;
- (void)twoFingerLongPressGestureWithState:(long long)arg1 withTranslation:(struct CGPoint { double x1; double x2; })arg2;
- (void)twoFingerPan:(id)arg1;
- (id)twoFingerPanRecognizer;
- (void)twoFingerTap:(id)arg1;
- (id)twoFingerTapRecognizer;
- (double)twoFingerTapTimestamp;
- (void)updateIndirectBlockPanWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)updateOneFingerSelectWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)updateTwoFingerLongPressWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (void)updateTwoFingerPanWithTranslation:(struct CGPoint { double x1; double x2; })arg1 executionContext:(id)arg2;
- (bool)wasNestedPinchingDisabled;
- (bool)wasScrollingEnabled;
- (id)weightedPoint;
- (void)willRemoveSelectionController;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (void)setPanGestureState:(long long)arg1;

@end
