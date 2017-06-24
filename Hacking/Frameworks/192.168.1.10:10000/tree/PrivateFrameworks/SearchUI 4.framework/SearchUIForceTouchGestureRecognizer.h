/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIForceTouchGestureRecognizer : SBUIForceTouchGestureRecognizer {
    SBFApplication * _application;
    bool  _canHaveSmallSpotlightIcons;
    SFSearchResult * _result;
    <SearchUIFeedbackDelegatePrivate> * _selectionAndFeedbackDelegate;
    UIView * _thumbnailView;
}

@property (retain) SBFApplication *application;
@property bool canHaveSmallSpotlightIcons;
@property (retain) SFSearchResult *result;
@property <SearchUIFeedbackDelegatePrivate> *selectionAndFeedbackDelegate;
@property (retain) UIView *thumbnailView;

- (void).cxx_destruct;
- (id)application;
- (id)bundleID;
- (id)bundleURL;
- (bool)canHaveSmallSpotlightIcons;
- (double)cornerRadius;
- (void)didPeek;
- (void)didPop;
- (void)iconButtonPressed;
- (id)initWithView:(id)arg1 canHaveSmallSpotlightIcons:(bool)arg2 selectionAndFeedbackDelegate:(id)arg3;
- (id)result;
- (id)selectionAndFeedbackDelegate;
- (void)setApplication:(id)arg1;
- (void)setCanHaveSmallSpotlightIcons:(bool)arg1;
- (void)setResult:(id)arg1;
- (void)setSelectionAndFeedbackDelegate:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (id)shortcutItems;
- (id)thumbnailView;
- (id)thumbnailViewCopy;
- (void)updateApplicationIfNecessary;
- (void)updateWithResult:(id)arg1;
- (id)widgetBundleID;

@end
