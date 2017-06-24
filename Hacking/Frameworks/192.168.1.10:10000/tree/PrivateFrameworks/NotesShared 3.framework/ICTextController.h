/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICTextController : TTTextController {
    bool  _disableAddingExtraLinesIfNeeded;
    ICNote * _note;
    unsigned long long  _pauseMergeForScrollingCounter;
    bool  _shouldMergeNoteAfterScrolling;
    bool  _trackAddedExtraNewlineRanges;
    NSMutableArray * _trackedRangesForAddedExtraNewlines;
    NSMutableDictionary * _trackedToDoParagraphs;
    bool  _userChangedWritingDirection;
}

@property (nonatomic) bool disableAddingExtraLinesIfNeeded;
@property (nonatomic) ICNote *note;
@property (nonatomic) unsigned long long pauseMergeForScrollingCounter;
@property (nonatomic) bool shouldMergeNoteAfterScrolling;
@property (nonatomic) bool trackAddedExtraNewlineRanges;
@property (nonatomic, retain) NSMutableArray *trackedRangesForAddedExtraNewlines;
@property (nonatomic, readonly) NSMutableDictionary *trackedToDoParagraphs;
@property bool userChangedWritingDirection;

+ (double)extraBulletWidthForNumberedListWithMaxItemNumber:(id)arg1 textFont:(struct UIFont { Class x1; }*)arg2;
+ (double)indentForStyle:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 attributedString:(id)arg3 textView:(struct UITextView { Class x1; }*)arg4;
+ (id)removeBeginningListStyleIfNecessaryForAttributedString:(id)arg1 fromTextStorage:(id)arg2 andRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
+ (bool)shouldRetainFirstListStyleForFilteredAttributedSubstring:(id)arg1 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })addExtraLinesIfNeededToTextStorage:(id)arg1 editedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 actualLengthIncrease:(long long*)arg3;
- (bool)attachmentsExistInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 textStorage:(id)arg2;
- (bool)canChangeStyleForSelectedRanges:(id)arg1 inTextStorage:(id)arg2;
- (bool)canIndentTextView:(struct UITextView { Class x1; }*)arg1 byDelta:(long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })cleanupTextStorage:(id)arg1 afterProcessingEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4 changeInLengthAfterCleanup:(long long*)arg5;
- (bool)containsOnlyStyle:(unsigned int)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextStorage:(id)arg3;
- (void)createToDoItemForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 paragraphStyle:(id)arg2 textStorage:(id)arg3;
- (void)dealloc;
- (bool)deleteBackwardForSpecialCasesInTextView:(struct UITextView { Class x1; }*)arg1;
- (bool)deleteWordBackwardForSpecialCasesInTextView:(struct UITextView { Class x1; }*)arg1;
- (bool)disableAddingExtraLinesIfNeeded;
- (void)fadeTextHighlightInTextStorage:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })firstParagraphForSetListStyleRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextStorage:(id)arg2;
- (void)fixModelAttributesInTextStorage:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)fixTextStorage:(id)arg1 afterProcessingEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;
- (struct UIColor { Class x1; }*)highlightColorWithPercentage:(double)arg1;
- (void)highlightTextAfter:(id)arg1 inTextStorage:(id)arg2;
- (id)indentParagraphStyle:(id)arg1 byAmount:(long long)arg2;
- (void)indentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 byAmount:(long long)arg2 inTextStorage:(id)arg3 textView:(struct UITextView { Class x1; }*)arg4;
- (id)init;
- (void)insertNewlineAtCharacterIndex:(unsigned long long)arg1 textStorage:(id)arg2;
- (bool)insertNewlineForSpecialCasesInTextView:(struct UITextView { Class x1; }*)arg1;
- (bool)insertedSpaceInTextView:(struct UITextView { Class x1; }*)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)insertedText:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextView:(struct UITextView { Class x1; }*)arg3;
- (bool)isTodoDoneRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextStorage:(id)arg2;
- (id)keyboardLanguageForTextView:(struct UITextView { Class x1; }*)arg1;
- (bool)mergePausedForScrolling;
- (id)note;
- (id)nsParagraphStyleForTTParagraphStyle:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 attributedString:(id)arg3 textView:(struct UITextView { Class x1; }*)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })numberListsInAttributedString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned int)paragraphStyleForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextView:(struct UITextView { Class x1; }*)arg2 inTextStorage:(id)arg3;
- (unsigned int)paragraphStyleForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextView:(struct UITextView { Class x1; }*)arg2 inTextStorage:(id)arg3 ignoreTypingAttributes:(bool)arg4;
- (void)pauseMergeForScrolling;
- (unsigned long long)pauseMergeForScrollingCounter;
- (id)rangesWithCutOutAttachmentsFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 textStorage:(id)arg2;
- (void)refreshTextStylingForTextStorage:(id)arg1 withTextController:(id)arg2;
- (void)refreshTypingAttributesForAllTextViewsOfTextStorage:(id)arg1;
- (void)refreshTypingAttributesForTextView:(struct UITextView { Class x1; }*)arg1 textStorage:(id)arg2;
- (void)removeFontsAndColorsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextStorage:(id)arg2;
- (bool)removeListStyleBeforeDeletingParagraphContentIfNecessaryForTextView:(struct UITextView { Class x1; }*)arg1 textStorage:(id)arg2 rangeToBeDeleted:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 blockBeforeEndEditing:(id /* block */)arg4;
- (bool)removeListStyleForDeletingEmptyParagrahIfNecessaryForTextView:(struct UITextView { Class x1; }*)arg1 textStorage:(id)arg2 paragraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 andLocation:(unsigned long long)arg4;
- (void)resetTrackedToDoParagraphs;
- (void)resumeMergeAfterScrolling;
- (struct UIFont { Class x1; }*)scaleFont:(struct UIFont { Class x1; }*)arg1 withScale:(double)arg2;
- (void)scaleFontPointSize:(double)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextStorage:(id)arg3;
- (void)setDisableAddingExtraLinesIfNeeded:(bool)arg1;
- (void)setDone:(bool)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextStorage:(id)arg3;
- (void)setNeedsMergeAfterScrolling;
- (void)setNote:(id)arg1;
- (void)setNote:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(bool)arg2 withLayoutManager:(id)arg3;
- (void)setParagraphWritingDirectionInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toDirection:(long long)arg2 inTextView:(struct UITextView { Class x1; }*)arg3;
- (void)setPauseMergeForScrollingCounter:(unsigned long long)arg1;
- (void)setShouldMergeNoteAfterScrolling:(bool)arg1;
- (long long)setTextStyle:(unsigned int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextStorage:(id)arg3;
- (long long)setTextStyle:(unsigned int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextStorage:(id)arg3 inTextView:(struct UITextView { Class x1; }*)arg4;
- (long long)setTextStyle:(unsigned int)arg1 removeExtraStyling:(bool)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 inTextStorage:(id)arg4;
- (long long)setTextStyle:(unsigned int)arg1 removeExtraStyling:(bool)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 inTextStorage:(id)arg4 inTextView:(struct UITextView { Class x1; }*)arg5;
- (void)setTrackAddedExtraNewlineRanges:(bool)arg1;
- (void)setTrackedRangesForAddedExtraNewlines:(id)arg1;
- (void)setTypingAttributesForUndo:(id)arg1;
- (void)setTypingTextStyle:(unsigned int)arg1 textView:(struct UITextView { Class x1; }*)arg2;
- (void)setUserChangedWritingDirection:(bool)arg1;
- (bool)shouldMergeNoteAfterScrolling;
- (void)styleListsAndIndentsInAttributedString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)superscriptDelta:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextStorage:(id)arg3;
- (void)superscriptUpdate:(id /* block */)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextStorage:(id)arg3;
- (id)todoForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextStorage:(id)arg2;
- (bool)trackAddedExtraNewlineRanges;
- (void)trackExtraNewLineRangeIfNecessary:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)trackedRangesForAddedExtraNewlines;
- (id)trackedToDoParagraphs;
- (void)uniqueParagraphStylesInTextStorage:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)unscriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextStorage:(id)arg2;
- (void)updateAttachmentsInNote;
- (void)updateAttachmentsSelectionStateInTextStorage:(id)arg1 forSelectedRanges:(id)arg2 layoutManager:(id)arg3;
- (void)updateParagraphWritingDirectionToKeyboardWritingDirectionInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 textStorage:(id)arg2 textView:(struct UITextView { Class x1; }*)arg3;
- (void)updateTrackedAttributesInTextStorage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (void)updateTrackedToDoParagraphsAfterIndex:(unsigned long long)arg1 byDelta:(long long)arg2 excludingSeenParagraphs:(id)arg3;
- (void)updateTrackingInTextStorage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (bool)userChangedWritingDirection;
- (long long)writingDirectionForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextView:(struct UITextView { Class x1; }*)arg2 inTextStorage:(id)arg3;

@end
