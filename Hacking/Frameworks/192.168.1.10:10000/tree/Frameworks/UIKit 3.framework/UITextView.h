/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextView : UIScrollView <ABText, MPUAutoupdatingTextContainer, UIContentSizeCategoryAdjusting, UIKeyboardInput, UIPreviewItemDelegate, UITextAutoscrolling, UITextInput, UITextInputControllerDelegate, UITextInputTraits_Private, UITextLinkInteraction, _UILayoutBaselineUpdating, _UIMultilineTextContentSizing, _UITextContainerViewDelegate> {
    bool  _adjustsFontForContentSizeCategory;
    UIAutoscroll * _autoscroll;
    struct CGSize { 
        double width; 
        double height; 
    }  _beforeFreezingFrameSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _beforeFreezingTextContainerInset;
    _UICharacterStreamingManager * _characterStreamingManager;
    bool  _clearsOnInsertion;
    _UITextContainerView * _containerView;
    long long  _contentSizeUpdateSeqNo;
    CUICatalog * _cuiCatalog;
    unsigned long long  _dataDetectorTypes;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _duringFreezingTextContainerInset;
    double  _firstBaselineOffsetFromTop;
    UIView * _inputAccessoryView;
    UITextInputController * _inputController;
    id  _inputDelegate;
    UIView * _inputView;
    UITextInteractionAssistant * _interactionAssistant;
    double  _lastBaselineOffsetFromBottom;
    NSLayoutManager * _layoutManager;
    id  _linkInteractionItem;
    NSDictionary * _linkTextAttributes;
    double  _offsetFromScrollPosition;
    UILabel * _placeholderLabel;
    double  _preferredMaxLayoutWidth;
    id  _private;
    _UITextViewRestorableScrollPosition * _scrollPosition;
    unsigned long long  _scrollPositionDontRecordCount;
    _UITextViewRestorableScrollPosition * _scrollTarget;
    long long  _siriAnimationStyle;
    NSDictionary * _siriParameters;
    _UISiriStreamingManager * _streamingManager;
    NSTextContainer * _textContainer;
    UITextInputTraits * _textInputTraits;
    NSTextStorage * _textStorage;
    <UITextInputTokenizer> * _tokenizer;
    struct { 
        unsigned int needsScrollToSelectionAfterLayout : 1; 
        unsigned int isInteractingWithLink : 1; 
        unsigned int linkInteractionIsLongPress : 1; 
        unsigned int linkInteractionIsPreview : 1; 
        unsigned int editable : 1; 
        unsigned int reentrancyGuard : 1; 
        unsigned int usesExplicitPreferredMaxLayoutWidth : 1; 
        unsigned int interactiveSelectionDisabled : 1; 
        unsigned int selectable : 1; 
        unsigned int shouldPresentSheetsInAWindowLayeredAboveTheKeyboard : 1; 
        unsigned int shouldAutoscrollAboveBottom : 1; 
        unsigned int disableUpdateTextColorOnTraitCollectionChange : 1; 
    }  _tvFlags;
    bool  _unfreezingTextContainerSize;
}

@property (setter=MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:, nonatomic) bool MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
@property (nonatomic, readonly) MPUTextContainerContentSizeUpdater *MPU_contentSizeUpdater;
@property (nonatomic, copy) NSIndexSet *PINEntrySeparatorIndexes;
@property (setter=_setDrawsDebugBaselines:, nonatomic) bool _drawsDebugBaselines;
@property (nonatomic, copy) NSString *ab_text;
@property (nonatomic, copy) NSDictionary *ab_textAttributes;
@property (nonatomic) bool acceptsDictationSearchResults;
@property (nonatomic) bool acceptsEmoji;
@property (nonatomic) bool acceptsFloatingKeyboard;
@property (nonatomic) bool acceptsSplitKeyboard;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) bool allowsEditingTextAttributes;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (copy) NSAttributedString *attributedText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic) bool clearsOnInsertion;
@property (nonatomic) bool contentsIsSingleValue;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deferBecomingResponder;
@property (nonatomic) <UITextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableInputBars;
@property (nonatomic) bool disablePrediction;
@property (nonatomic) bool displaySecureEditsUsingPlainText;
@property (nonatomic) bool displaySecureTextUsingPlainText;
@property (getter=isEditable, nonatomic) bool editable;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic) bool enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) bool forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) bool forceDisableDictation;
@property (nonatomic) bool forceEnableDictation;
@property (nonatomic) bool hasDefaultContents;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (retain) UIView *inputAccessoryView;
@property (nonatomic, retain) UIInputContextHistory *inputContextHistory;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (retain) UIView *inputView;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;
@property (nonatomic, retain) UIColor *insertionPointColor;
@property (nonatomic) unsigned long long insertionPointWidth;
@property (nonatomic) bool isCarPlayIdiom;
@property (nonatomic) bool isSingleLineDocument;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, readonly) NSLayoutManager *layoutManager;
@property (nonatomic) bool learnsCorrections;
@property (nonatomic, copy) NSDictionary *linkTextAttributes;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic, copy) NSString *recentInputIdentifier;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic) bool returnKeyGoesToNextResponder;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (getter=isSelectable, nonatomic) bool selectable;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic, retain) UIColor *selectionBarColor;
@property (nonatomic, retain) UIImage *selectionDragDotImage;
@property (nonatomic, retain) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressReturnKeyStyling;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) NSTextContainer *textContainer;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textContainerInset;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) long long textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic, readonly) NSTextStorage *textStorage;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet { }*textTrimmingSet;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;
@property (nonatomic, copy) NSDictionary *typingAttributes;
@property (nonatomic) bool useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } validTextRange;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_bestInterpretationForDictationResult:(id)arg1;
+ (bool)_isCompatibilityTextView;
+ (id)_sharedHighlightView;

- (void).cxx_destruct;
- (void)_addShortcut:(id)arg1;
- (void)_adjustPreferredFontForCurrentContentSizeCategory;
- (bool)_allowAnimatedUpdateSelectionRectViews;
- (void)_baselineOffsetDidChange;
- (double)_baselineOffsetFromBottom;
- (void)_cancelDataDetectors;
- (void)_commonInitWithTextContainer:(id)arg1 isDecoding:(bool)arg2 isEditable:(bool)arg3 isSelectable:(bool)arg4;
- (struct CGSize { double x1; double x2; })_containerSizeForBoundsSize:(struct CGSize { double x1; double x2; })arg1 allowingOverflow:(bool)arg2;
- (id)_containerView;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_cuiCatalog;
- (id)_cuiStyleEffectConfiguration;
- (double)_currentPreferredMaxLayoutWidth;
- (id)_dataForPreviewItemController:(id)arg1 atPosition:(struct CGPoint { double x1; double x2; })arg2 type:(long long*)arg3;
- (void)_define:(id)arg1;
- (void)_deleteBackwardAndNotify:(bool)arg1;
- (void)_didFinishSpeechRecognition;
- (void)_didRecognizeSpeechStrings:(id)arg1;
- (void)_didRecognizeSpeechTokens:(id)arg1;
- (bool)_drawsDebugBaselines;
- (unsigned long long)_effectiveDataDetectorTypes;
- (void)_enableSiriAnimationDictationStyle;
- (void)_enableSiriAnimationDictationStyleWithCharacterInsertionRate:(double)arg1 minimumDurationBetweenHypotheses:(double)arg2;
- (void)_finishHandlingInteraction:(id)arg1;
- (double)_firstBaselineOffsetFromTop;
- (struct CGPoint { double x1; double x2; })_firstGlyphBaselineLeftPointWithLayoutManager:(id)arg1;
- (struct CGPoint { double x1; double x2; })_firstGlyphBaselineRightPointWithLayoutManager:(id)arg1;
- (bool)_freezeTextContainerSize;
- (bool)_getCloseQuoteAnchor:(struct CGPoint { double x1; double x2; }*)arg1;
- (bool)_getOpenQuoteAnchor:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)_highlightLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (id)_interactableItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_interactionShouldBeginFromPreviewItemController:(id)arg1 forPosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)_interactionStartedFromPreviewItemController:(id)arg1;
- (void)_interactionStoppedFromPreviewItemController:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_isDisplayingLookupViewController;
- (bool)_isDisplayingReferenceLibraryViewController;
- (bool)_isDisplayingShareViewController;
- (bool)_isDisplayingShortcutViewController;
- (bool)_isInteractiveTextSelectionDisabled;
- (void)_keyboardDidShow:(id)arg1;
- (struct CGPoint { double x1; double x2; })_lastGlyphBaselineLeftPointWithLayoutManager:(id)arg1;
- (struct CGPoint { double x1; double x2; })_lastGlyphBaselineRightPointWithLayoutManager:(id)arg1;
- (id)_layoutDebuggingTitle;
- (void)_layoutPlaceholder;
- (id)_linkTextAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2;
- (bool)_mightHaveSelection;
- (bool)_needsDoubleUpdateConstraintsPass;
- (void)_observedTextViewDidChange:(id)arg1;
- (bool)_ownsInputAccessoryView;
- (void)_performLayoutCalculation:(id /* block */)arg1 inSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_populateArchivedSubviews:(id)arg1;
- (double)_preferredMaxLayoutWidth;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentationRectForLinkAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_presentationRectsForLinkAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withMargin:(double)arg2;
- (id)_presentationRectsForPreviewItemController:(id)arg1;
- (Class)_printFormatterClass;
- (void)_promptForReplace:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForScrollToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_registerUndoOperationForReplacementWithActionName:(id)arg1 replacementText:(id)arg2;
- (void)_resetDataDetectorsResults;
- (void)_resetLinkInteraction;
- (void)_resetUsesExplicitPreferredMaxLayoutWidth;
- (id)_restorableScrollPosition;
- (id)_restorableScrollPositionForStateRestoration;
- (bool)_restoreFirstResponder;
- (void)_restoreScrollPosition:(id)arg1 animated:(bool)arg2;
- (void)_resyncContainerFrameForNonAutolayout;
- (void)_resyncContainerFrameForNonAutolayoutDeferringSizeToFit:(bool)arg1;
- (void)_scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 animated:(bool)arg2;
- (void)_scrollRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toVisibleInContainingScrollView:(bool)arg2;
- (void)_scrollSelectionToVisibleInContainingScrollView;
- (void)_scrollSelectionToVisibleInContainingScrollView:(bool)arg1;
- (void)_scrollToCaretIfNeeded;
- (void)_scrollToSelectionIfNeeded;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(bool)arg2;
- (void)_selectionMayChange:(id)arg1;
- (void)_setContentOffsetWithoutRecordingScrollPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setCuiCatalog:(id)arg1;
- (void)_setCuiStyleEffectConfiguration:(id)arg1;
- (void)_setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)_setDrawsDebugBaselines:(bool)arg1;
- (void)_setFrameOrBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromOldRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 settingAction:(id /* block */)arg3;
- (void)_setFreezeTextContainerSize:(bool)arg1;
- (void)_setInteractiveTextSelectionDisabled:(bool)arg1;
- (void)_setPreferredMaxLayoutWidth:(double)arg1;
- (void)_setTextColor:(id)arg1;
- (void)_setWhitelistedTypingAttributes:(id)arg1;
- (void)_share:(id)arg1;
- (bool)_shouldObscureInput;
- (bool)_shouldScrollEnclosingScrollView;
- (bool)_shouldStartDataDetectors;
- (bool)_shouldSuppressSelectionCommands;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_startDataDetectors;
- (void)_streamingManagerDidCommitFinalResults;
- (void)_textContainerSizeDidChange:(id)arg1;
- (id)_textInputTraits;
- (id)_textInputViewForAddingGestureRecognizers;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (unsigned long long)_totalNumberOfTextViewsInLayoutManager;
- (void)_transliterateChinese:(id)arg1;
- (void)_updateBaselineInformationDependentOnBounds;
- (void)_updateContainerTileAndSizingFlags;
- (void)_updateContentSize;
- (void)_updatePlaceholderVisibility;
- (void)_updateTextContainerSizeAndSizeToFit;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_visibleRangeWithLayout:(bool)arg1;
- (bool)_wantsBaselineUpdatingFollowingConstraintsPass;
- (id)_whitelistedTypingAttributes;
- (void)addTextAlternativesDisplayStyleToRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)adjustsFontForContentSizeCategory;
- (bool)allowsEditingTextAttributes;
- (id)attributedPlaceholder;
- (id)attributedText;
- (id)automaticallySelectedOverlay;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (bool)becomeFirstResponder;
- (bool)becomesEditableWithGestures;
- (void)beginFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (bool)canBecomeFirstResponder;
- (bool)canBecomeFocused;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canResignFirstResponder;
- (void)cancelAutoscroll;
- (void)cancelInteractionWithLink;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (bool)clearsOnInsertion;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (unsigned long long)dataDetectorTypes;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (void)deleteBackward;
- (void)disableClearsOnInsertion;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forViewPrintFormatter:(id)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endFloatingCursor;
- (id)endOfDocument;
- (void)endSelectionChange;
- (id)extractWordArrayFromTokensArray:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)font;
- (bool)forceDisableDictation;
- (bool)forceEnableDictation;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (bool)hasText;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)increaseSize:(id)arg1;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 font:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)inputAccessoryView;
- (id)inputDelegate;
- (id)inputView;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (bool)isAccessibilityElementByDefault;
- (bool)isEditable;
- (bool)isEditableForTextContainerView:(id)arg1;
- (bool)isEditing;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isInteractingWithLink;
- (bool)isSelectable;
- (bool)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (bool)keyboardInputShouldDelete:(id)arg1;
- (id)layoutManager;
- (void)layoutSubviews;
- (double)lineHeight;
- (id)linkTextAttributes;
- (id)linkTextAttributesForTextContainerView:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (unsigned long long)marginTop;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)mightHaveLinks;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)paste:(id)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (bool)respondsToSelector:(SEL)arg1;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)scrollSelectionToVisible:(bool)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRangeForTextContainerView:(id)arg1;
- (id)selectedText;
- (id)selectedTextRange;
- (long long)selectionAffinity;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAllowsEditingTextAttributes:(bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setClearsOnInsertion:(bool)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setContentToHTMLString:(id)arg1;
- (void)setContinuousSpellCheckingEnabled:(bool)arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setEditable:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setForceDisableDictation:(bool)arg1;
- (void)setForceEnableDictation:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setLineHeight:(double)arg1;
- (void)setLinkTextAttributes:(id)arg1;
- (void)setMarginTop:(unsigned long long)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setScrollEnabled:(bool)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setSelectable:(bool)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setShouldAutoscrollAboveBottom:(bool)arg1;
- (void)setShouldPresentSheetsInAWindowLayeredAboveTheKeyboard:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextContainerInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTiledViewsDrawAsynchronously:(bool)arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)setUsesTiledViews:(bool)arg1;
- (bool)shouldAutoscrollAboveBottom;
- (bool)shouldPresentSheetsInAWindowLayeredAboveTheKeyboard;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startAutoscroll:(struct CGPoint { double x1; double x2; })arg1;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)takeTraitsFrom:(id)arg1;
- (void)tapLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (id)textContainer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textContainerInset;
- (id)textContainerView:(id)arg1 cuiCatalogForTextEffectName:(id)arg2;
- (id)textContainerView:(id)arg1 linkTextAttributesForLink:(id)arg2 forCharacterAtIndex:(unsigned long long)arg3;
- (id)textInRange:(id)arg1;
- (bool)textInput:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textInputDidChange:(id)arg1;
- (void)textInputDidChangeSelection:(id)arg1;
- (id)textInputView;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStorage;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (bool)tiledViewsDrawAsynchronously;
- (void)tintColorDidChange;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)tokenizer;
- (void)traitCollectionDidChange:(id)arg1;
- (id)typingAttributes;
- (id)undoManager;
- (void)unmarkText;
- (void)updateAutoscrollAboveBottom;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateSelection;
- (void)updateSelectionForTextContainerView:(id)arg1;
- (bool)usesTiledViews;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectIgnoringKeyboard;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleTextRect;
- (id)webView;
- (bool)willInteractWithLinkAtPoint:(struct CGPoint { double x1; double x2; })arg1;

// Image: /System/Library/AccessibilityBundles/MessageUIFramework.axbundle/MessageUIFramework

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;

// Image: /System/Library/AccessibilityBundles/PhotoLibraryFramework.axbundle/PhotoLibraryFramework

- (id)accessibilityPlaceholderValue;

// Image: /System/Library/AccessibilityBundles/PreferencesFramework.axbundle/PreferencesFramework

- (bool)_axHasOnlyOneLink;
- (bool)isAccessibilityElement;

// Image: /System/Library/AccessibilityBundles/SocialFramework.axbundle/SocialFramework

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

- (id)_accessibilityAttributedValueForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityBoundsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint { double x1; double x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (id)_accessibilitySupplementaryHeaderViews;
- (bool)_allowCustomActionHintSpeakOverride;
- (bool)accessibilityActivate;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityCustomRotors;
- (id)accessibilityValue;
- (bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(bool)arg3;
- (bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (bool)resignFirstResponder;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)_cnui_applyContactStyle;
- (id)ab_text;
- (id)ab_textAttributes;
- (void)setAb_text:(id)arg1;
- (void)setAb_textAttributes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

- (bool)dd_ignoreSignatures;
- (id)dd_newOperation;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (bool)MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
- (id)MPU_contentSizeUpdater;
- (void)MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeFromTextRange:(id)arg1;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 consideringInsets:(bool)arg2 animated:(bool)arg3;
- (id)selectedRanges;
- (id)textRangeFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (id)pkui_plainInteractiveTextViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)pkui_plainNonInteractiveTextViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (void)pkui_styleTextView:(id)arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pkui_frameForTextFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pkui_textFrame;
- (struct CGSize { double x1; double x2; })pkui_textSizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
