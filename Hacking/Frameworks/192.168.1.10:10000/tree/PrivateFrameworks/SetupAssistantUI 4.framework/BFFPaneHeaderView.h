/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFPaneHeaderView : UIView {
    UIView * _bottomLine;
    UILabel * _detailTextLabel;
    double  _flexibleHeight;
    UIImage * _icon;
    UIImageView * _iconView;
    UIButton * _linkButton;
    id /* block */  _linkHandler;
    UILabel * _subLabel;
    UILabel * _textLabel;
    bool  _textLabelAlignedByLastBaseline;
}

@property (nonatomic, retain) UIColor *bottomLineColor;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (nonatomic) double flexibleHeight;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, readonly) UILabel *subLabel;
@property (nonatomic, readonly) UILabel *textLabel;
@property (getter=isTextLabelAlignedByLastBaseline, nonatomic) bool textLabelAlignedByLastBaseline;

// Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI

- (void).cxx_destruct;
- (double)_labelsAndLinksBaselineOffsetForView:(id)arg1;
- (void)_linkButtonPressed;
- (id)bottomLineColor;
- (id)detailTextLabel;
- (double)flexibleHeight;
- (double)heightForWidth:(double)arg1 inView:(id)arg2;
- (id)icon;
- (bool)isTextLabelAlignedByLastBaseline;
- (void)layoutSubviews;
- (void)setBottomLineColor:(id)arg1;
- (void)setFlexibleHeight:(double)arg1;
- (void)setIcon:(id)arg1;
- (void)setLinkText:(id)arg1 handler:(id /* block */)arg2;
- (void)setTextLabelAlignedByLastBaseline:(bool)arg1;
- (void)setTitleText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subLabel;
- (id)textLabel;

// Image: /System/Library/AccessibilityBundles/SetupAssistantUI.axbundle/SetupAssistantUI

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
