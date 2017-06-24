/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUIFeedbackManager : NSObject <SearchUIFeedbackDelegate, SearchUIFeedbackDelegatePrivate, _MKPlaceViewControllerFeedbackDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)aggdLogEngagementWithResult:(id)arg1 atDistanceFromTop:(double)arg2;
+ (void)cardViewDidDisappearForReason:(unsigned long long)arg1;
+ (void)didAppearFromSource:(unsigned long long)arg1;
+ (void)didAppendLateSections:(id)arg1;
+ (void)didClearInputForReason:(unsigned long long)arg1;
+ (void)didDisappearWithReason:(unsigned long long)arg1;
+ (void)didEndSearch:(id)arg1;
+ (void)didEngageResult:(id)arg1 forReason:(unsigned long long)arg2 withDestination:(unsigned long long)arg3;
+ (void)didEngageResultWithFeedback:(id)arg1;
+ (void)didPeekResult:(id)arg1;
+ (void)didPerformSearchOnSuggestion:(id)arg1;
+ (void)didRankSections:(id)arg1;
+ (void)didSearchInAppForSection:(id)arg1;
+ (void)didShowMoreForSection:(id)arg1 showMore:(bool)arg2;
+ (id)didStartSearch:(id)arg1 whyQuery:(unsigned long long)arg2 queryIdent:(unsigned long long)arg3;
+ (void)resultsDidBecomeVisible:(id)arg1 why:(unsigned long long)arg2;
+ (void)sectionHeaderDidBecomeVisible:(id)arg1 headerType:(unsigned long long)arg2;
+ (id)sharedManager;
+ (void)suggestionsDidBecomeVisible:(id)arg1;

- (void)didEngageActionItem:(id)arg1 actionPerformed:(bool)arg2;
- (bool)didHandleCardSectionEngagement:(id)arg1;
- (void)didPeekResult:(id)arg1;
- (void)didPopResult:(id)arg1;
- (void)didSelectResult:(id)arg1;
- (void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2;

@end
