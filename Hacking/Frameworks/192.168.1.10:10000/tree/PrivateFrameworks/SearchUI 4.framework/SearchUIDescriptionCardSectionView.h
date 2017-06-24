/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIDescriptionCardSectionView : SearchUICardSectionView {
    SearchUICardDetailsView * _detailsView;
    UIButton * _moreButton;
    NSLayoutConstraint * _moreButtonHorizontalInsetConstraint;
}

@property (retain) SearchUICardDetailsView *detailsView;
@property (retain) UIButton *moreButton;
@property (retain) NSLayoutConstraint *moreButtonHorizontalInsetConstraint;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (void).cxx_destruct;
- (id)detailsView;
- (id)initWithCardSection:(id)arg1 controller:(id)arg2;
- (void)layoutSubviews;
- (id)moreButton;
- (id)moreButtonHorizontalInsetConstraint;
- (void)setDetailsView:(id)arg1;
- (void)setMoreButton:(id)arg1;
- (void)setMoreButtonHorizontalInsetConstraint:(id)arg1;

// Image: /System/Library/AccessibilityBundles/SearchUI.axbundle/SearchUI

+ (Class)safeCategoryBaseClass;

- (void)moreButtonPressed;

@end