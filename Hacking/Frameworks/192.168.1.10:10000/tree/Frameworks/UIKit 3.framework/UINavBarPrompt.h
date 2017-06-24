/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINavBarPrompt : UIView {
    UILabel * _label;
    UINavigationBar * _navBar;
}

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_labelFrame;
- (struct CGSize { double x1; double x2; })_updateLabelTextColorAndFontReturningShadowOffset;
- (struct CGSize { double x1; double x2; })_updateLabelTextColorAndFontReturningShadowOffset_legacy;
- (id)initWithPrompt:(id)arg1 navBar:(id)arg2;
- (void)layoutSubviews;
- (id)prompt;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })promptBounds;
- (void)setPrompt:(id)arg1;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (bool)isAccessibilityElement;

@end
