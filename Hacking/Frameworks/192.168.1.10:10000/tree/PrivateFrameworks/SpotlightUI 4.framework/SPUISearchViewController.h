/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchViewController : UIViewController <SPSearchAgentDelegate, SPUISearchHeaderDelegate, SPUISearchResultHandlerDelegate, SPUITableViewDelegate, SearchUIFirstTimeExperienceDelegate> {
    NSTimer * _clearResultsTimer;
    bool  _clearSearchFieldAfterDismissal;
    <SPUISearchViewControllerDelegate> * _delegate;
    SPUISearchFirstTimeViewController * _firstTimeExperienceViewController;
    SPUILockScreenFooterView * _footerView;
    bool  _internetOverrideForPPT;
    bool  _isBeingPresented;
    _UILegibilitySettings * _legibilitySettings;
    unsigned long long  _presentationMode;
    unsigned long long  _queryStartTime;
    NSTimer * _queryUpdateTimer;
    UIView * _replicatorView;
    SPUISearchResultHandler * _resultHandler;
    SPUISearchHeader * _searchHeader;
    NSMutableArray * _searchRatingSessionFeedback;
    SPUITableViewController * _searchTableViewController;
    double  _statusBarDismissTime;
    bool  _wasVisibleWhenPresented;
    SPUITableViewController * _zeroKeywordTableViewController;
}

@property (retain) NSTimer *clearResultsTimer;
@property bool clearSearchFieldAfterDismissal;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SPUISearchViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double distanceToTopOfAppIcons;
@property (retain) SPUISearchFirstTimeViewController *firstTimeExperienceViewController;
@property (retain) SPUILockScreenFooterView *footerView;
@property (readonly) unsigned long long hash;
@property bool internetOverrideForPPT;
@property bool isBeingPresented;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property unsigned long long presentationMode;
@property (retain) UIView *replicatorView;
@property (retain) SPUISearchResultHandler *resultHandler;
@property (retain) SPUISearchHeader *searchHeader;
@property (retain) NSMutableArray *searchRatingSessionFeedback;
@property (retain) SPUITableViewController *searchTableViewController;
@property double statusBarDismissTime;
@property (readonly) Class superclass;
@property bool wasVisibleWhenPresented;
@property (retain) SPUITableViewController *zeroKeywordTableViewController;

// Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI

- (void).cxx_destruct;
- (void)activateFirstTimeExperienceViewAnimate:(bool)arg1;
- (void)activateFirstTimeExperienceViewIfNecessary;
- (id)activeViewController;
- (bool)allowInternet;
- (void)cancelButtonPressed;
- (id)clearResultsTimer;
- (bool)clearSearchFieldAfterDismissal;
- (void)clearSearchResults;
- (void)clearSearchResultsPrefsChanged;
- (void)clearTimerExpired;
- (id)contentScrollView;
- (id)currentQuery;
- (id)delegate;
- (void)didBeginEditing;
- (void)didBeginScrollingInTableView;
- (void)didPullDownTableView;
- (void)didSelectResult:(id)arg1 withFeedback:(id)arg2 wasPop:(bool)arg3;
- (void)didSwipeUpOnTableView;
- (void)didTapInEmptyAreaOfTableView;
- (double)distanceToTopOfAppIcons;
- (void)enableUpdates:(id)arg1;
- (void)firstTimeExperienceContinueButtonPressed;
- (id)firstTimeExperienceViewController;
- (id)footerView;
- (id)headerNextResponder;
- (void)hideKeyboard;
- (void)hideSeparator;
- (id)init;
- (bool)internetOverrideForPPT;
- (bool)isBeingPresented;
- (bool)isVisible;
- (id)legibilitySettings;
- (void)numberOfRowsDidChange:(id)arg1;
- (void)performSearchWithQuery:(id)arg1;
- (unsigned long long)presentationMode;
- (void)queryContextDidChange:(id)arg1 allowZKW:(bool)arg2;
- (bool)queryIsPresent;
- (id)replicatorView;
- (id)resultHandler;
- (void)scrollSearchTable:(id)arg1 iterations:(unsigned long long)arg2 delta:(unsigned long long)arg3;
- (void)searchAgentClearedResults:(id)arg1;
- (void)searchAgentReceivedSuggestions:(id)arg1;
- (void)searchForSuggestedQuery:(id)arg1;
- (id)searchHeader;
- (id)searchRatingSessionFeedback;
- (id)searchTableViewController;
- (void)searchViewDidDismissWithReason:(unsigned long long)arg1;
- (void)searchViewDidPresentFromSource:(unsigned long long)arg1;
- (void)searchViewWillDismissWithReason:(unsigned long long)arg1;
- (void)searchViewWillPresentFromSource:(unsigned long long)arg1;
- (void)sendRatingFeedback;
- (void)setClearResultsTimer:(id)arg1;
- (void)setClearSearchFieldAfterDismissal:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstTimeExperienceViewController:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setInternetOverrideForPPT:(bool)arg1;
- (void)setInternetOverrideToDisable:(bool)arg1;
- (void)setIsBeingPresented:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setReplicatorView:(id)arg1;
- (void)setResultHandler:(id)arg1;
- (void)setSearchHeader:(id)arg1;
- (void)setSearchRatingSessionFeedback:(id)arg1;
- (void)setSearchTableViewController:(id)arg1;
- (void)setStatusBarDismissTime:(double)arg1;
- (void)setWasVisibleWhenPresented:(bool)arg1;
- (void)setZeroKeywordTableViewController:(id)arg1;
- (void)settingsChanged;
- (double)statusBarDismissTime;
- (id)tableViewControllerWithSearchModel:(id)arg1;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)update:(id)arg1;
- (id)viewControllerForPresenting;
- (bool)wasVisibleWhenPresented;
- (id)zeroKeywordTableViewController;

// Image: /System/Library/AccessibilityBundles/SpotlightUIFramework.axbundle/SpotlightUIFramework

+ (Class)safeCategoryBaseClass;

- (bool)accessibilityPerformEscape;
- (void)activateViewController:(id)arg1 animate:(bool)arg2;
- (void)searchAgentUpdatedResults:(id)arg1;

@end
