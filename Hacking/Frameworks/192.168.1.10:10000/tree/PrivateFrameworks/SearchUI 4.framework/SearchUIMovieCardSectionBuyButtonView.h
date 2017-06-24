/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMovieCardSectionBuyButtonView : UIView {
    SKUIItemOfferButton * _button;
    SearchUICardViewController * _controller;
    SFPunchout * _punchout;
    SFMediaInfoCardSection * _section;
    UILabel * _subtitleLabel;
}

@property (retain) SKUIItemOfferButton *button;
@property SearchUICardViewController *controller;
@property (retain) SFPunchout *punchout;
@property (retain) SFMediaInfoCardSection *section;
@property (retain) UILabel *subtitleLabel;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (void).cxx_destruct;
- (id)button;
- (void)buttonPressed;
- (id)controller;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 punchout:(id)arg3 adamID:(id)arg4 offerIdentifier:(id)arg5 controller:(id)arg6 section:(id)arg7;
- (void)lookupPriceForAdamID:(id)arg1 offerIdentifier:(id)arg2;
- (id)punchout;
- (id)section;
- (void)setButton:(id)arg1;
- (void)setController:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (id)subtitleLabel;

// Image: /System/Library/AccessibilityBundles/SearchUI.axbundle/SearchUI

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (bool)isAccessibilityElement;

@end