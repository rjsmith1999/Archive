/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDropShadowView : UIView {
    UIView * _backgroundImage;
    UIView * _contentView;
    double  _cornerRadius;
    NSDictionary * _preservedLayerValues;
}

@property (nonatomic) UIView *contentView;
@property (nonatomic) double cornerRadius;

- (void).cxx_destruct;
- (id)contentView;
- (double)cornerRadius;
- (void)didFinishRotation;
- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateShadowPath;
- (void)willBeginRotationWithOriginalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 newBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
