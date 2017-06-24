/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicContextualActionsHeaderBlendingHighlightView : UIView {
    UIView * _colorBurnView;
    UIView * _plusDView;
}

@property double cornerRadius;

+ (id)_blendingPressedView;
+ (id)_blendingSeparatorView;

- (double)cornerRadius;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 colorBurnColor:(id)arg2 plusDColor:(id)arg3;
- (void)layoutSubviews;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setPressed:(bool)arg1 animated:(bool)arg2;

@end
