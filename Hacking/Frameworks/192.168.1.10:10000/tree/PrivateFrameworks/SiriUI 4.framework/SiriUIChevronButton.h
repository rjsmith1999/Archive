/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIChevronButton : UIButton {
    UIImageView * _chevronImageView;
    double  _chevronRightInset;
    bool  _hasChevron;
    SiriUIKeyline * _keyline;
    long long  _keylineType;
    double  _leftSubviewInset;
    UIView * _subview;
}

@property (nonatomic) double chevronRightInset;
@property (nonatomic) bool hasChevron;
@property (nonatomic) long long keylineType;
@property (nonatomic) double leftSubviewInset;
@property (nonatomic, retain) UIView *subview;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (void).cxx_destruct;
- (double)chevronRightInset;
- (bool)hasChevron;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)keylineType;
- (void)layoutSubviews;
- (double)leftSubviewInset;
- (void)setChevronRightInset:(double)arg1;
- (void)setHasChevron:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setKeylineType:(long long)arg1;
- (void)setLeftSubviewInset:(double)arg1;
- (void)setSubview:(id)arg1;
- (id)subview;

// Image: /System/Library/AccessibilityBundles/SiriUI.axbundle/SiriUI

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end
