/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMNode : DOMObject <DOMEventTarget, UIKeyInput, UIKeyboardInput, UITextInputPrivate, UITextInputTokenizer, UITextInput_Internal, UIWebSelectionBlock>

@property (nonatomic, copy) NSIndexSet *PINEntrySeparatorIndexes;
@property (getter=_proxyTextInput, nonatomic, readonly) UIResponder<UITextInput> *__content;
@property (nonatomic) long long _textInputSource;
@property (nonatomic, readonly) UIView<UITextInputPrivate> *_textSelectingContainer;
@property (nonatomic) bool acceptsDictationSearchResults;
@property (nonatomic) bool acceptsEmoji;
@property (nonatomic) bool acceptsFloatingKeyboard;
@property (nonatomic) bool acceptsSplitKeyboard;
@property (readonly) DOMNamedNodeMap *attributes;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *baseURI;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (readonly) DOMNodeList *childNodes;
@property (nonatomic) bool contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deferBecomingResponder;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableInputBars;
@property (nonatomic) bool disablePrediction;
@property (nonatomic) bool displaySecureEditsUsingPlainText;
@property (nonatomic) bool displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic) bool enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (readonly) DOMNode *firstChild;
@property (nonatomic) bool forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) bool forceDisableDictation;
@property (nonatomic) bool forceEnableDictation;
@property (nonatomic) bool hasDefaultContents;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIInputContextHistory *inputContextHistory;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;
@property (nonatomic, retain) UIColor *insertionPointColor;
@property (nonatomic) unsigned long long insertionPointWidth;
@property (nonatomic, readonly) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic) bool isCarPlayIdiom;
@property (readonly) bool isContentEditable;
@property (nonatomic) bool isSingleLineDocument;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (readonly) DOMNode *lastChild;
@property (nonatomic) bool learnsCorrections;
@property (readonly, copy) NSString *localName;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (readonly) bool mf_isAttachment;
@property (readonly) bool mf_isBody;
@property (readonly, copy) NSString *namespaceURI;
@property (readonly) DOMNode *nextSibling;
@property (readonly, copy) NSString *nodeName;
@property (readonly) unsigned short nodeType;
@property (copy) NSString *nodeValue;
@property (readonly) DOMDocument *ownerDocument;
@property (readonly) DOMElement *parentElement;
@property (readonly) DOMNode *parentNode;
@property (copy) NSString *prefix;
@property (readonly) DOMNode *previousSibling;
@property (nonatomic, copy) NSString *recentInputIdentifier;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic) bool returnKeyGoesToNextResponder;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic, retain) UIColor *selectionBarColor;
@property (nonatomic, retain) UIImage *selectionDragDotImage;
@property (nonatomic) long long selectionGranularity;
@property (nonatomic, retain) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressReturnKeyStyling;
@property (copy) NSString *textContent;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) <UITextInputSuggestionDelegate> *textInputSuggestionDelegate;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) long long textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet { }*textTrimmingSet;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;
@property (nonatomic) bool useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } validTextRange;
@property (nonatomic, readonly) WebArchive *webArchive;

// Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore

+ (id)_nodeFromJSWrapper:(struct OpaqueJSValue { }*)arg1;

- (struct Element { int (**x1)(); struct Weak<WebCore::JSDOMObject> { struct WeakImpl {} *x_2_1_1; } x2; int x3; unsigned int x4; struct ContainerNode {} *x5; struct TreeScope {} *x6; struct Node {} *x7; struct Node {} *x8; union DataUnion { struct RenderObject {} *x_9_1_1; struct NodeRareDataBase {} *x_9_1_2; } x9; struct Node {} *x10; struct Node {} *x11; struct QualifiedName { struct RefPtr<WebCore::QualifiedName::QualifiedNameImpl> { struct QualifiedNameImpl {} *x_1_2_1; } x_12_1_1; } x12; struct RefPtr<WebCore::ElementData> { struct ElementData {} *x_13_1_1; } x13; }*)_linkElement;
- (struct RootObject { }*)_rootObject;
- (struct _WKQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })absoluteQuad;
- (struct _WKQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })absoluteQuadAndInsideFixedPosition:(bool*)arg1;
- (id)absoluteQuads;
- (void)addEventListener:(id)arg1 :(id)arg2 :(bool)arg3;
- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(bool)arg3;
- (id)appendChild:(id)arg1;
- (id)attributes;
- (id)baseURI;
- (id)borderRadii;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxUsingTransforms;
- (id)boundingBoxes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingFrame;
- (id)childNodes;
- (id)cloneNode:(bool)arg1;
- (unsigned short)compareDocumentPosition:(id)arg1;
- (float)computedFontSize;
- (bool)contains:(id)arg1;
- (bool)containsOnlyInlineObjects;
- (void)dealloc;
- (id)description;
- (bool)dispatchEvent:(id)arg1;
- (id)findExplodedTextNodeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)firstChild;
- (void)getPreviewSnapshotImage:(struct CGImage {}**)arg1 andRects:(id*)arg2;
- (bool)hasAttributes;
- (bool)hasChildNodes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hrefFrame;
- (id)hrefLabel;
- (id)hrefTarget;
- (id)hrefTitle;
- (id)hrefURL;
- (struct _WKQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })innerFrameQuad;
- (id)insertBefore:(id)arg1 :(id)arg2;
- (id)insertBefore:(id)arg1 refChild:(id)arg2;
- (void)inspect;
- (bool)isConnected;
- (bool)isContentEditable;
- (bool)isDefaultNamespace:(id)arg1;
- (bool)isEqualNode:(id)arg1;
- (bool)isSameNode:(id)arg1;
- (bool)isSelectableBlock;
- (bool)isSupported:(id)arg1 :(id)arg2;
- (bool)isSupported:(id)arg1 version:(id)arg2;
- (id)lastChild;
- (id)lineBoxQuads;
- (id)lineBoxRects;
- (id)localName;
- (id)lookupNamespaceURI:(id)arg1;
- (id)lookupPrefix:(id)arg1;
- (id)namespaceURI;
- (id)nextFocusNode;
- (id)nextSibling;
- (id)nodeName;
- (unsigned short)nodeType;
- (id)nodeValue;
- (void)normalize;
- (id)ownerDocument;
- (id)parentElement;
- (id)parentNode;
- (id)prefix;
- (id)previousFocusNode;
- (id)previousSibling;
- (id)rangeOfContainingParagraph;
- (id)removeChild:(id)arg1;
- (void)removeEventListener:(id)arg1 :(id)arg2 :(bool)arg3;
- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(bool)arg3;
- (id)replaceChild:(id)arg1 :(id)arg2;
- (id)replaceChild:(id)arg1 oldChild:(id)arg2;
- (void)setNodeValue:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setTextContent:(id)arg1;
- (id)textContent;
- (double)textHeight;
- (id)textRects;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityCheckBorderHit:(bool)arg1 left:(bool)arg2;
- (id)_moveLeft:(bool)arg1 withHistory:(id)arg2;
- (id)_moveRight:(bool)arg1 withHistory:(id)arg2;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(bool)arg2;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (void)_fixParagraphsAndQuotesFromMicrosoftNodesToRemove:(id)arg1;
- (id)mf_appendBlockPlaceholder;
- (id)mf_blockNodeAncestor;
- (id)mf_childNodeAtIndex:(int)arg1;
- (id)mf_commonAncestorWithNode:(id)arg1;
- (id)mf_containingBlockQuote;
- (bool)mf_containsOnlySelectionMarkers;
- (bool)mf_containsRichText;
- (id)mf_findElementWithTag:(id)arg1 className:(id)arg2 andIdName:(id)arg3;
- (id)mf_firstDescendantBlockQuote;
- (id)mf_firstSibling;
- (void)mf_fixParagraphsAndQuotesFromMicrosoft;
- (id)mf_highestContainingBlockQuote;
- (bool)mf_isAtBeginningOfContainerNode:(id)arg1;
- (bool)mf_isAtEndOfContainerNode:(id)arg1;
- (bool)mf_isAttachment;
- (bool)mf_isBody;
- (bool)mf_isDescendantOfNode:(id)arg1;
- (bool)mf_isQuoteOrWithinQuote;
- (id)mf_lastSibling;
- (id)mf_nextSiblingOrAunt;
- (int)mf_quoteLevelDelta;
- (id)mf_topmostContainingNodeWithNameInArray:(id)arg1;
- (id)mf_traverseNextNodeStayingWithin:(id)arg1;
- (id)mf_traverseNextSiblingStayingWithin:(id)arg1;
- (id)mf_traversePreviousNode;
- (void)recursivelyRemoveMailAttributes;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void)_accessoryClear;
- (unsigned int)_characterAfterCaretSelection;
- (unsigned int)_characterBeforeCaretSelection;
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned int)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (void)_deleteBackwardAndNotify:(bool)arg1;
- (void)_deleteByWord;
- (void)_deleteForwardAndNotify:(bool)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_expandSelectionToBackwardDeletionCluster;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (id)_fontForCaretSelection;
- (id)_fullRange;
- (id)_fullText;
- (bool)_hasMarkedText;
- (bool)_hasMarkedTextOrRangedSelection;
- (int)_indexForTextPosition:(id)arg1;
- (bool)_isEmptySelection;
- (id)_keyInput;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_lastRectForRange:(id)arg1;
- (void)_moveCurrentSelection:(int)arg1;
- (id)_moveDown:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(bool)arg1 withHistory:(id)arg2;
- (id)_moveUp:(bool)arg1 withHistory:(id)arg2;
- (id)_newPhraseBoundaryGestureRecognizer;
- (id)_nextAssistedNode;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_nsrangeForTextRange:(id)arg1;
- (long long)_opposingDirectionFromDirection:(long long)arg1;
- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(bool)arg4;
- (id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)_previousAssistedNode;
- (id)_proxyTextInput;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfSentenceEnclosingPosition:(id)arg1;
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
- (id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2;
- (id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2;
- (id)_realNode;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (bool)_requiresAccessoryView;
- (bool)_requiresInputView;
- (void)_scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)_selectAll;
- (id)_selectableText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedNSRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedRangeWithinMarkedText;
- (long long)_selectionAffinity;
- (bool)_selectionAtDocumentEnd;
- (bool)_selectionAtDocumentStart;
- (bool)_selectionAtWordStart;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_setGestureRecognizers;
- (id)_setHistory:(id)arg1 withExtending:(bool)arg2 withAnchor:(int)arg3 withAffinityDownstream:(bool)arg4;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(bool)arg2;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (bool)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(bool)arg3;
- (void)_startAssistingDocumentView:(id)arg1;
- (void)_stopAssistingDocumentView:(id)arg1;
- (bool)_supportsAccessoryClear;
- (bool)_supportsAutoFill;
- (id)_textColorForCaretSelection;
- (id)_textFormElement;
- (id)_textSelectingContainer;
- (void)_unmarkText;
- (bool)_usesAsynchronousProtocol;
- (id)_wordContainingCaretSelection;
- (id)absoluteQuadsAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)acceptedAutoFillWord:(id)arg1;
- (bool)alwaysAttemptToShowTapHighlight;
- (id)asDomNode;
- (id)asDomRange;
- (id)asElement;
- (id)automaticallySelectedOverlay;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (bool)becomesEditableWithGestures;
- (void)beginFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectAndInsideFixedPosition:(int*)arg1;
- (bool)canShrinkDirectlyToTextOnly;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (void)clearMarkedText;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)confirmMarkedText:(id)arg1;
- (struct CGPoint { double x1; double x2; })constrainedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })constrainedPoint:(struct CGPoint { double x1; double x2; })arg1 withInset:(double)arg2;
- (bool)containsBlock:(id)arg1;
- (bool)containsNode:(id)arg1;
- (bool)containsRange:(id)arg1;
- (id)content;
- (bool)contentsIsSingleValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertCaretRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (id)createPeripheral;
- (id)createPickerCell;
- (id)createSelectedItem;
- (id)delegate;
- (void)deleteBackward;
- (bool)editable;
- (bool)editing;
- (id)enclosingDocument;
- (id)enclosingElementIncludingSelf;
- (void)endFloatingCursor;
- (id)endOfDocument;
- (void)endSelectionChange;
- (void)extendCurrentSelection:(int)arg1;
- (id)firstDescendantOfAboutTheSameWidthOrHeight;
- (id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withDescentDirection:(int)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)fontForCaretSelection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (void)handleKeyWebEvent:(id)arg1;
- (bool)hasContent;
- (bool)hasCustomLineHeight;
- (bool)hasSelection;
- (bool)hasText;
- (int)initialSelectionBehavior;
- (id)inputDelegate;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (bool)isAutoFillMode;
- (bool)isEditable;
- (bool)isEditing;
- (bool)isLikelyToBeginPageLoad;
- (bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (bool)isSameBlock:(id)arg1;
- (bool)isSecure;
- (bool)isShowingPlaceholder;
- (bool)isTextControl;
- (id)itemTitle;
- (long long)keyboardType;
- (id)largerParent;
- (id)lastDescendantOfAboutTheSameWidthOrHeight;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (void)moveDown;
- (void)moveLeft;
- (void)moveRight;
- (void)moveUp;
- (bool)nodeCanBecomeFirstResponder;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)parentBlock;
- (void)populateCell:(id)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (id)rangeOfContents;
- (id)rangeOfEnclosingWord:(id)arg1;
- (id)rectsForNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;
- (bool)rendersAsBlock;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2 closeTyping:(bool)arg3;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (bool)requiresKeyEvents;
- (long long)returnKeyType;
- (void)selectAll;
- (bool)selectable;
- (id)selectedTextRange;
- (long long)selectionAffinity;
- (bool)selectionAtDocumentStart;
- (bool)selectionAtWordStart;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (int)selectionState;
- (id)selectionView;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(bool)arg1;
- (void)setContentsIsSingleValue:(bool)arg1;
- (void)setInitialSelectionBehavior:(int)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setSecure:(bool)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(bool)arg2;
- (void)setSelectionAffinity:(long long)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1 inset:(double)arg2;
- (void)setText:(id)arg1;
- (void)setTextLoupeVisibility:(int)arg1;
- (void)setTextSuggestionDelegate:(id)arg1;
- (void)setTextTrimmingSet:(struct __CFCharacterSet { }*)arg1;
- (void)setupPlaceholderTextIfNeeded;
- (bool)showsTapHighlight;
- (bool)strictlyContainsBlock:(id)arg1;
- (bool)strictlyContainsNode:(id)arg1;
- (id)tagName;
- (void)takeTraitsFrom:(id)arg1;
- (id)tapHighlightColor;
- (id)text;
- (id)textColorForCaretSelection;
- (id)textDocument;
- (id)textInRange:(id)arg1;
- (id)textInputSuggestionDelegate;
- (id)textInputTraits;
- (id)textInputView;
- (int)textLoupeVisibility;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textSuggestionDelegate;
- (struct __CFCharacterSet { }*)textTrimmingSet;
- (id)tokenizer;
- (bool)touchCalloutEnabled;
- (id)uiWebDocumentView;
- (void)unmarkText;
- (void)updateAutoscroll:(id)arg1;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateSelection;
- (id)urlScheme;
- (id)webFrame;
- (int)wordOffsetInRange:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

- (void)dd_removeResultLinks;
- (bool)dd_searchForLinkRemovingExistingDDLinksWithEndNode:(id)arg1 didModifyDOM:(bool*)arg2;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_renderRect:(bool*)arg1;
- (id)endPosition;
- (void)hidePlaceholder;
- (bool)isHorizontalWritingMode;
- (id)markupString;
- (id)rangeOfContents;
- (void)showPlaceholderIfNecessary;
- (id)startPosition;
- (id)webArchive;
- (id)webArchiveByFilteringSubframes:(id /* block */)arg1;

@end
