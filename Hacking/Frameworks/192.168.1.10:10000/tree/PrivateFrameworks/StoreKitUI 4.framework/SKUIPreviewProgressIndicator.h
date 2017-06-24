/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPreviewProgressIndicator : UIControl {
    SKUIShapeView * _backgroundView;
    UIImageView * _cancelImageView;
    SKUIShapeView * _foregroundView;
    bool  _isIndeterminate;
    float  _progress;
}

@property (getter=isIndeterminate, nonatomic, readonly) bool indeterminate;
@property (nonatomic) float progress;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (void).cxx_destruct;
- (void)_beginIndeterminateAnimation;
- (id)_newShapeViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineWidth:(double)arg2;
- (void)beginIndeterminateAnimation;
- (void)endIndeterminateAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isIndeterminate;
- (float)progress;
- (void)reloadWithPlayerStatus:(id)arg1 animated:(bool)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgress:(float)arg1 animated:(bool)arg2;
- (void)tintColorDidChange;

// Image: /System/Library/AccessibilityBundles/StoreKitUI.axbundle/StoreKitUI

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (bool)isAccessibilityElement;

@end
