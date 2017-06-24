/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventGestureController : NSObject <UIAlertViewDelegate, UIGestureRecognizerDelegate> {
    id /* block */  _alertSheetCompletionHandler;
    bool  _commitBlocked;
    long long  _consecutivePageTurnCount;
    EKCalendarDate * _currentDay;
    int  _currentDragType;
    int  _currentDraggingState;
    double  _dateAtFirstTouchPoint;
    <EKEventGestureControllerDelegate> * _delegate;
    bool  _dragLockDisabled;
    UILongPressGestureRecognizer * _draggingGestureRecognizer;
    EKDayOccurrenceView * _draggingView;
    EKDayOccurrenceView * _draggingViewSource;
    EKEvent * _event;
    double  _firstContactOfDraggingViewTop;
    struct CGPoint { 
        double x; 
        double y; 
    }  _firstTouchPoint;
    double  _firstTouchTime;
    bool  _forcedStart;
    bool  _hasStartedScrolling;
    bool  _horizontalDragLocked;
    bool  _isDragging;
    bool  _isInCancelRegion;
    bool  _isMultiDayTimedEvent;
    bool  _isNewEvent;
    struct CGPoint { 
        double x; 
        double y; 
    }  _latestTouchPoint;
    bool  _needsCommit;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousTouchPoint;
    double  _previousTouchTime;
    double  _previousTouchVelocity;
    NSTimer * _scrollTimer;
    NSString * _sessionIdentifierForDebug;
    UITapGestureRecognizer * _tapGestureRecognizer;
    double  _timeSinceEnteredPageMargin;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchOffset;
    long long  _touchOffsetDays;
    <EKEventGestureControllerUntimedDelegate> * _untimedDelegate;
    bool  _usesHorizontalDragLocking;
    bool  _usesXDragOffsetInCancelRegion;
}

@property (nonatomic) bool commitBlocked;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKEventGestureControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dragGestureInProgress;
@property (nonatomic, readonly) EKDayOccurrenceView *draggingView;
@property (nonatomic, retain) EKDayOccurrenceView *draggingViewSource;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } firstTouchPoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } latestTouchPoint;
@property (nonatomic, retain) NSString *sessionIdentifierForDebug;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } touchOffset;
@property (nonatomic) <EKEventGestureControllerUntimedDelegate> *untimedDelegate;
@property (nonatomic) bool usesHorizontalDragLocking;
@property (nonatomic) bool usesXDragOffsetInCancelRegion;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (void).cxx_destruct;
- (double)_Debug_HoursSinceStartOfDay:(double)arg1;
- (bool)__timedDelegateBeginEditingSessionAtPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (double)_alignedYOriginForAllDayOccurrence:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 floorAtAllDayRegionBottom:(bool)arg3;
- (void)_animateInNewEvent;
- (bool)_beginEditingSessionAtPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)_beginNewDragFromOffStateWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateFrameForDraggingViewIncludingTravelTime:(bool)arg1;
- (void)_cancel;
- (double)_capOccurrenceViewYOrigin:(double)arg1;
- (void)_cleanUpAllStateWithTouchPoint:(struct CGPoint { double x1; double x2; })arg1 commit:(bool)arg2;
- (void)_commit;
- (void)_commitUntimed;
- (double)_computeHeightForOccurrenceViewOfDuration:(double)arg1 allDay:(bool)arg2;
- (struct CGPoint { double x1; double x2; })_computeOriginAtTouchPoint:(struct CGPoint { double x1; double x2; })arg1 forDate:(double)arg2 isAllDay:(bool)arg3 allowXOffset:(bool)arg4 allowFloorAtRegionBottom:(bool)arg5;
- (double)_computeWidthForOccurrenceView;
- (bool)_createAndSetUpDraggingViewWithTouchPoint:(struct CGPoint { double x1; double x2; })arg1 event:(id)arg2;
- (id)_createNewEventIfNeededAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_createSystemPreviewImageForEvent:(id)arg1;
- (id)_debugStringForDraggingState:(int)arg1;
- (int)_draggingState;
- (void)_handleLongPressResponseForOldAPI:(id)arg1;
- (void)_installScrollTimer;
- (bool)_isPointInCancelRegion:(struct CGPoint { double x1; double x2; })arg1;
- (void)_manageDraggingViewInteractivityForStateChangeFrom:(int)arg1 to:(int)arg2;
- (double)_minimumDuration;
- (void)_removeScrollTimer;
- (void)_resumePreviousDrag;
- (void)_returnDraggingViewToLastCommittedPositionFromTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_scrollTimerFired:(id)arg1;
- (bool)_setDraggingState:(int)arg1 withPoint:(struct CGPoint { double x1; double x2; })arg2 event:(id)arg3;
- (void)_setTouchOffsetsFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setUpAfterForcedStartFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_setUpNewDragGestureHandling;
- (void)_suspendCurrentDrag;
- (void)_tapGesture:(id)arg1;
- (void)_update;
- (void)_updateFlingToCancelParameters;
- (void)_updateHorizontalDragLockForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_viewForTracking;
- (void)_writeDraggingChangesToOccurrenceWithTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (bool)canProposeNewTime:(id)arg1;
- (bool)commitBlocked;
- (void)dealloc;
- (id)delegate;
- (void)didCrossDragBoundary:(int)arg1;
- (bool)dragGestureInProgress;
- (id)draggingView;
- (id)draggingViewSource;
- (void)endForcedStart;
- (id)event;
- (struct CGPoint { double x1; double x2; })firstTouchPoint;
- (void)forceStartWithOccurrence:(id)arg1 shouldUpdateViewSource:(bool)arg2 shouldUpdateOrigin:(bool)arg3;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithView:(id)arg1;
- (void)invalidate;
- (bool)isDraggingOccurrence;
- (struct CGPoint { double x1; double x2; })latestTouchPoint;
- (id)originalStartDateForEvent:(id)arg1 includingTravel:(bool)arg2;
- (void)promptUserForProposeNewTime:(id)arg1 forEvent:(id)arg2 whenFinished:(id /* block */)arg3;
- (void)promptUserForRecurrenceActionOnOccurrence:(id)arg1 whenFinished:(id /* block */)arg2;
- (void)removeDraggedOccurrence;
- (id)sessionIdentifierForDebug;
- (void)setCommitBlocked:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDraggingViewSource:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setSessionIdentifierForDebug:(id)arg1;
- (void)setUntimedDelegate:(id)arg1;
- (void)setUsesHorizontalDragLocking:(bool)arg1;
- (void)setUsesXDragOffsetInCancelRegion:(bool)arg1;
- (struct CGPoint { double x1; double x2; })touchOffset;
- (id)untimedDelegate;
- (void)updateDraggingOccurrence;
- (void)updateDraggingOccurrenceForced:(bool)arg1 animated:(bool)arg2;
- (void)updateDraggingOccurrenceFrame;
- (void)updateDraggingOccurrenceFrameFromSource;
- (void)updateDraggingOccurrenceOrigin;
- (bool)usesHorizontalDragLocking;
- (bool)usesXDragOffsetInCancelRegion;

// Image: /System/Library/AccessibilityBundles/EventKitUIFramework.axbundle/EventKitUIFramework

+ (Class)safeCategoryBaseClass;

- (void)_createTemporaryView:(id)arg1 animated:(bool)arg2;
- (bool)_flingOrCancelDraggingViewIfNeeded;
- (void)_longPress:(id)arg1;

@end
