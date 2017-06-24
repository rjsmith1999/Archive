/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardPredictionView : UIView {
    UITouch * _activeTouch;
    UITextSuggestion * _currentFirstTextSuggestion;
    NSDate * _lastTextSuggestionUpdateDate;
    long long  _lastTextSuggestionUpdateOrientation;
    NSDate * _lastUpdateDate;
    int  _notifyBatterySaverToken;
    TIKeyboardCandidate * _scheduledAutocorrection;
    NSArray * _scheduledEmojiList;
    NSArray * _scheduledPredictions;
    int  _state;
    NSTimer * _updateTimer;
    unsigned long long  m_activeIndex;
    unsigned long long  m_autocorrectionCell;
    UIKBBackgroundView * m_backgroundView;
    NSString * m_closeQuote;
    UIKBKeyView * m_collapsedView;
    bool  m_currentInputModeEnablePrediction;
    bool  m_delayActive;
    bool  m_dragging;
    NSMutableArray * m_emojiCells;
    UIKeyboardPredictionBarGrabber * m_grabber;
    bool  m_hasLongCandidates;
    struct CGPoint { 
        double x; 
        double y; 
    }  m_initLocation;
    bool  m_isMinimized;
    UIKeyboardPredictionCell * m_lastCell;
    bool  m_lightKeyboard;
    UIView * m_message;
    UIKBKeyView * m_messageKeyView;
    UILabel * m_messageLabel;
    double  m_messageShownTime;
    unsigned long long  m_numberOfVisibleCells;
    NSMutableArray * m_oneTextCells;
    NSString * m_openQuote;
    NSArray * m_predictionCells;
    NSMutableArray * m_textAndEmojiCells;
    NSMutableArray * m_threeTextCells;
    NSMutableArray * m_twoTextCells;
    double  m_width;
}

@property (nonatomic, retain) UITouch *activeTouch;
@property (nonatomic, retain) UITextSuggestion *currentFirstTextSuggestion;
@property (nonatomic, retain) NSDate *lastTextSuggestionUpdateDate;
@property (nonatomic) long long lastTextSuggestionUpdateOrientation;
@property (nonatomic, retain) NSDate *lastUpdateDate;
@property (nonatomic, retain) TIKeyboardCandidate *scheduledAutocorrection;
@property (nonatomic, retain) NSArray *scheduledEmojiList;
@property (nonatomic, retain) NSArray *scheduledPredictions;
@property (nonatomic) bool show;
@property (nonatomic) int state;
@property (nonatomic, retain) NSTimer *updateTimer;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)activeInstance;
+ (unsigned long long)numberOfCandidates;
+ (double)overlapHeight;
+ (double)predictionViewHeightForState:(int)arg1 orientation:(long long)arg2;
+ (double)predictionViewHeightPaddingForOrientation:(long long)arg1;
+ (double)predictionViewWidthForOrientation:(long long)arg1;
+ (id)resultCountToSingleCellWidth;
+ (id)sharedInstance;

- (void)_setPredictions:(id)arg1 autocorrection:(id)arg2 emojiList:(id)arg3;
- (void)acceptCandidate;
- (void)acceptCandidateAtCell:(id)arg1;
- (void)acceptPredictiveInput:(id)arg1;
- (void)activateCandidateAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)activeTouch;
- (id)autocorrection;
- (void)commitPrediction:(id)arg1;
- (id)createCells:(unsigned long long)arg1;
- (id)currentFirstTextSuggestion;
- (void)deactivateCandidate;
- (void)dealloc;
- (void)delayActivateCellForPrediction:(id)arg1;
- (id)description;
- (void)dimKeys:(id)arg1;
- (bool)enabled;
- (bool)hasPredictions;
- (double)heightBeforeStateChangeForInterfaceOrientation:(long long)arg1;
- (double)heightForInterfaceOrientation:(long long)arg1;
- (unsigned long long)indexForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)initCells;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)inputModeDidChange;
- (bool)isTextSuggestion;
- (id)labelTextForPrediction:(id)arg1 typedString:(id)arg2;
- (id)lastTextSuggestionUpdateDate;
- (long long)lastTextSuggestionUpdateOrientation;
- (id)lastUpdateDate;
- (int)maxMessageCount;
- (int)messageCount;
- (unsigned long long)predictionCount;
- (void)releaseMessage;
- (void)removeMessage;
- (id)scheduledAutocorrection;
- (id)scheduledEmojiList;
- (id)scheduledPredictions;
- (void)setActiveCellWithIndex:(unsigned long long)arg1;
- (void)setActiveTouch:(id)arg1;
- (void)setCurrentFirstTextSuggestion:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameForCells:(id)arg1 start:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)setLastTextSuggestionUpdateDate:(id)arg1;
- (void)setLastTextSuggestionUpdateOrientation:(long long)arg1;
- (void)setLastUpdateDate:(id)arg1;
- (void)setPredictionViewState:(int)arg1 animate:(bool)arg2;
- (void)setPredictionViewState:(int)arg1 animate:(bool)arg2 notify:(bool)arg3;
- (void)setPredictions:(id)arg1 autocorrection:(id)arg2 emojiList:(id)arg3;
- (void)setScheduledAutocorrection:(id)arg1;
- (void)setScheduledEmojiList:(id)arg1;
- (void)setScheduledPredictions:(id)arg1;
- (void)setShow:(bool)arg1;
- (void)setState:(int)arg1;
- (void)setTouchedCellState:(int)arg1;
- (void)setUpdateTimer:(id)arg1;
- (bool)show;
- (void)showMessageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (int)state;
- (int)stateForCurrentPreferences;
- (void)suppressLayoutSubviewsForCellLabels:(bool)arg1;
- (void)suspend;
- (void)touchUpdateTimer;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateBackgroundWithRenderConfig:(id)arg1;
- (id)updateTimer;
- (void)updateTimerFired:(id)arg1;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (int)_accessibilityScannerGroupTraits;
- (bool)_axHidePredictionView:(id)arg1;
- (bool)_axIsCollapsed;
- (bool)_axShowPredictionView:(id)arg1;
- (bool)accessibilityActivate;
- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (long long)accessibilityNavigationStyle;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end
