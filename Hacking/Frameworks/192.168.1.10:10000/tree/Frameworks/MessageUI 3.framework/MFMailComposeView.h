/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeView : UITransitionView <MFAutocompleteResultsTableViewControllerDelegate, MFComposeBodyFieldDelegate, MFComposeHeaderViewDelegate, MFDragContext, MFMailComposeContactsSearchControllerDelegate, UIPopoverControllerDelegate, UIScrollViewDelegate, UITextContentViewDelegate> {
    MFMailComposeRecipientView * _activeRecipientView;
    MFMailComposeRecipientView * _bccField;
    MFComposeBodyField * _bodyField;
    MFComposeScrollView * _bodyScroller;
    MFMailComposeRecipientView * _ccField;
    <MFComposeRecipientTextViewDelegate> * _composeRecipientViewDelegate;
    UIView * _contentView;
    UIView * _corecipientsSearchTableViewSeparator;
    MFAutocompleteResultsTableViewController * _corecipientsSearchViewController;
    unsigned int  _corecipientsTableVisible;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentContentSize;
    NSInvocation * _delayedPopoverInvocation;
    UIResponder * _firstResponderBeforeSheet;
    UIView * _fromAddressPickerBackgroundView;
    unsigned long long  _fromAddressPickerDisplayMode;
    UIPickerView * _fromAddressPickerView;
    MFFromAddressViewController * _fromAddressViewController;
    MFComposeFromView * _fromField;
    unsigned int  _hasAppeared;
    UIView * _headerView;
    MFComposeImageSizeView * _imageSizeField;
    unsigned int  _isAnimationDisabled;
    unsigned int  _isChangingRecipients;
    unsigned int  _isClosing;
    unsigned int  _isDraggingRecipients;
    unsigned int  _isForEditing;
    unsigned int  _isLoading;
    unsigned int  _isRotating;
    unsigned int  _isShowingPeoplePicker;
    double  _keyboardIntersection;
    MFMailComposeRecipientView * _lastChangedRecipientView;
    <MFMailComposeViewDelegate> * _mailComposeViewDelegate;
    MFComposeMultiView * _multiField;
    unsigned long long  _notifyingBodyField;
    double  _offsetBeforeSearch;
    unsigned long long  _options;
    UIResponder * _pinningResponder;
    UIViewController * _popoverOwner;
    MFMailComposeContactsSearchController * _searchController;
    MFAutocompleteResultsTableViewController * _searchViewController;
    UIView * _shadowView;
    unsigned int  _shouldShowOptionalHeaders;
    MFComposeSubjectView * _subjectField;
    MFComposeTextContentView * _textView;
    MFMailComposeRecipientView * _toField;
    <MFMailComposeToFieldDelegate> * _toFieldDelegate;
}

@property (getter=isAnimationDisabled, nonatomic) bool animationDisabled;
@property (nonatomic, readonly) MFMailComposeRecipientView *bccField;
@property (nonatomic, readonly) MFComposeBodyField *bodyField;
@property (nonatomic, readonly) MFComposeScrollView *bodyScroller;
@property (nonatomic, readonly) MFComposeTextContentView *bodyTextView;
@property (nonatomic, readonly) MFMailComposeRecipientView *ccField;
@property (getter=isChangingRecipients, nonatomic) bool changingRecipients;
@property (nonatomic) <MFComposeRecipientTextViewDelegate> *composeRecipientDelegate;
@property (nonatomic) <MFMailComposeViewDelegate> *composeViewDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long fromAddressPickerDisplayMode;
@property (nonatomic, readonly) MFComposeFromView *fromField;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MFComposeImageSizeView *imageSizeField;
@property (nonatomic) bool isForEditing;
@property (getter=isLoading, nonatomic) bool loading;
@property (nonatomic, readonly) MFComposeMultiView *multiField;
@property (nonatomic) UIViewController *popoverOwner;
@property (nonatomic, readonly) MFMailComposeContactsSearchController *searchController;
@property (nonatomic, readonly) MFAutocompleteResultsTableViewController *searchViewController;
@property (getter=isSearching, nonatomic, readonly) bool searching;
@property (getter=isShowingPeoplePicker, nonatomic) bool showingPeoplePicker;
@property (nonatomic, readonly) MFComposeSubjectView *subjectField;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MFMailComposeRecipientView *toField;
@property (nonatomic) <MFMailComposeToFieldDelegate> *toFieldDelegate;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (unsigned long long)expectedFromAddressPickerDisplayModeForTraitCollection:(id)arg1;

- (void)_adjustHeaderFieldsPreferredContentSize;
- (void)_adjustScrollerContentSize;
- (void)_adjustScrollerForBottomView;
- (id)_allHeaderViews;
- (void)_cancelAnimations;
- (void)_cancelDelayedPopover;
- (void)_collectKeyViews:(id)arg1;
- (id)_corecipientResultsTable;
- (void)_finishUpRotationToInterfaceOrientation:(long long)arg1;
- (id)_focusedRecipientView;
- (struct CGPoint { double x1; double x2; })_headerViewOriginWithScrollViewOffsetCalculation;
- (double)_heightForBottomView;
- (void)_layoutComposeHeaderViewsWithChangingHeader:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 withPinFrame:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)_layoutFromFieldWithChangingView:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 fieldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_layoutMultiFieldWithChangingView:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 fieldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_layoutSubviews:(bool)arg1;
- (void)_layoutSubviews:(bool)arg1 changingView:(id)arg2 toSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_layoutSubviews:(bool)arg1 changingView:(id)arg2 toSize:(struct CGSize { double x1; double x2; })arg3 searchResultsWereDismissed:(bool)arg4;
- (void)_layoutSubviewsWithActiveRecipientView:(bool)arg1 changingView:(id)arg2 toSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_multiFieldClicked;
- (void)_presentDelayedPopover;
- (bool)_presentsSearchResultsTableAsPopover;
- (void)_setCorecipientsTableViewVisible:(bool)arg1 withFieldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_setShadowViewVisible:(bool)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_setupBodyFieldWithHeaderFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 enclosingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 changingView:(id)arg3 frameToPin:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 wasSearching:(bool)arg5;
- (void)_setupField:(id*)arg1 withLabel:(id)arg2 navTitle:(id)arg3 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)_shouldShowCorecipientsTableView;
- (void)_updateKeyboardIntersection:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateOptionalHeaderVisibilityForceVisible:(bool)arg1;
- (bool)_userInterfaceConfigurationSupportsCorecipientsTableView;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)automaticKeyboardFinishedAppearing:(id)arg1;
- (void)automaticKeyboardFinishedDisappearing:(id)arg1;
- (id)bccField;
- (void)beginSearchForText:(id)arg1 recipientView:(id)arg2;
- (id)bodyField;
- (id)bodyScroller;
- (id)bodyTextView;
- (id)bottomView;
- (void)cancelDelayedPopover;
- (void)cancelSearch;
- (id)ccField;
- (bool)chooseSelectedSearchResult;
- (void)clearSearchForActiveRecipientView;
- (void)clearSearchForRecipientView:(id)arg1 reflow:(bool)arg2 clear:(bool)arg3;
- (void)composeBodyFieldDidDraw:(id)arg1;
- (void)composeBodyFieldDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (void)composeBodyFieldFrameChanged:(id)arg1;
- (void)composeContactsSearchController:(id)arg1 didFindCorecipients:(id)arg2;
- (void)composeContactsSearchController:(id)arg1 didSortResults:(id)arg2;
- (void)composeContactsSearchController:(id)arg1 finishedWithResults:(bool)arg2;
- (void)composeHeaderViewClicked:(id)arg1;
- (id)composeRecipientDelegate;
- (id)composeViewDelegate;
- (void)dealloc;
- (void)didAppear;
- (void)didIgnoreSearchResults;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)dismissSearchResults;
- (void)dragBeganInWindow:(id)arg1;
- (void)dragEnded;
- (id)dragScrollView;
- (id)dragWindow;
- (bool)endEditing:(bool)arg1;
- (void)findCorecipientsWithRecipientView:(id)arg1;
- (void)focusFirstResponderAfterRecipientView:(id)arg1;
- (unsigned long long)fromAddressPickerDisplayMode;
- (void)fromAddressPickerNeedsToBeRefreshed;
- (void)fromAddressPickerPopoverWasDismissed;
- (id)fromField;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)imageSizeField;
- (void)invalidateSearchResultRecipient:(id)arg1;
- (bool)isAnimationDisabled;
- (bool)isChangingRecipients;
- (bool)isForEditing;
- (bool)isKeyboardVisible;
- (bool)isLoading;
- (bool)isSearchResultsPopoverVisible;
- (bool)isSearching;
- (bool)isShowingFromAddressPickerWheel;
- (bool)isShowingPeoplePicker;
- (void)layoutForChangedComposeRecipientView:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)menuDidHide;
- (id)multiField;
- (void)parentDidClose;
- (void)parentWillClose;
- (id)popoverOwner;
- (bool)presentSearchResults;
- (void)removeFromSuperview;
- (void)resetContentSize;
- (void)restoreFirstResponder;
- (void)restoreFirstResponderWithKeyboardPinning:(bool)arg1;
- (void)saveFirstResponder;
- (void)saveFirstResponderWithKeyboardPinning:(bool)arg1;
- (void)scrollToTopAnimated:(bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)searchController;
- (void)searchResultsPopoverWasDismissed;
- (id)searchViewController;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (id)sendingAccountProxyForComposeContactsSearchController:(id)arg1;
- (void)setAnimationDisabled:(bool)arg1;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)setChangingRecipients:(bool)arg1;
- (void)setComposeRecipientDelegate:(id)arg1;
- (void)setComposeViewDelegate:(id)arg1;
- (void)setFromAddressPickerVisible:(bool)arg1;
- (void)setIsForEditing:(bool)arg1;
- (void)setKeyboardVisible:(bool)arg1 animate:(bool)arg2;
- (void)setLoading:(bool)arg1;
- (void)setNeedsLayout;
- (void)setPopoverOwner:(id)arg1;
- (void)setRecipientFieldsEditable:(bool)arg1 animated:(bool)arg2;
- (void)setScrollsToTop:(bool)arg1;
- (void)setShowingPeoplePicker:(bool)arg1;
- (void)setToFieldDelegate:(id)arg1;
- (id)subjectField;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize { double x1; double x2; })arg2;
- (id)toField;
- (id)toFieldDelegate;
- (void)toggleImageSizeFieldIfNecessary;
- (void)updateOptionalHeaderVisibility;
- (void)viewDidBecomeFirstResponder:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willDisappear;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Image: /System/Library/AccessibilityBundles/MessageUIFramework.axbundle/MessageUIFramework

+ (Class)safeCategoryBaseClass;

- (long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_searchResultsTable;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(unsigned long long)arg2;
- (bool)presentSearchResults:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setFromAddressPickerVisible:(bool)arg1 animated:(bool)arg2;
- (bool)shouldGroupAccessibilityChildren;

@end
