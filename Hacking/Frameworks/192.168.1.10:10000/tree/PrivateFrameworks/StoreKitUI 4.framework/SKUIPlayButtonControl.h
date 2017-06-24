/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPlayButtonControl : UIControl {
    NSString * _backdropGroupName;
    _UIBackdropView * _backdropView;
    UIColor * _backgroundColor;
    UIImage * _backgroundImageForBlurring;
    long long  _backgroundType;
    UIView * _backgroundView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _bigHitInsets;
    SKUIPlayButtonShapeView * _borderLayer;
    UIColor * _bufferProgressIndicatorColor;
    id  _bufferProgressIndicatorCompositingFilter;
    UIColor * _controlForeGroundColor;
    UIImage * _customPlayImage;
    UIImage * _customToggleImage;
    bool  _didInitialHighlightForTouch;
    bool  _disabledButSelectable;
    SKUIButtonViewElement * _element;
    SKUIPlayButtonGradientView * _gradientBackgroundView;
    NSArray * _gradientColors;
    long long  _gradientType;
    UIImageView * _imageView;
    bool  _indeterminate;
    SKUIPlayButtonShapeView * _innerProgressLayer;
    SKUIPlayButtonShapeView * _outerProgressLayer;
    float  _progress;
    UIColor * _progressIndicatorColor;
    id  _progressIndicatorCompositingFilter;
    SKUIPlayButtonShapeView * _selectedLayer;
    bool  _showBorder;
    bool  _showOuterBorder;
    bool  _showingPlayIndicator;
    bool  _showingProgress;
    bool  _usesBlurredBackground;
}

@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic) UIImage *backgroundImageForBlurring;
@property (nonatomic, readonly) long long backgroundType;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } bigHitInsets;
@property (nonatomic, readonly) UIColor *controlForeGroundColor;
@property (nonatomic, retain) UIImage *customPlayImage;
@property (nonatomic, retain) UIImage *customToggleImage;
@property (getter=isDisabledButSelectable, nonatomic) bool disabledButSelectable;
@property (nonatomic, retain) SKUIButtonViewElement *element;
@property (nonatomic, retain) UIImageView *imageView;
@property (getter=isIndeterminate, nonatomic, readonly) bool indeterminate;
@property (nonatomic) float progress;
@property (nonatomic, copy) UIColor *progressIndicatorColor;
@property (nonatomic) bool showOuterBorder;
@property (nonatomic, readonly) bool showingPlayIndicator;
@property (nonatomic, readonly) bool showingProgress;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

+ (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })_calculateStatistics:(struct CGImage { }*)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)blurColorForColor:(id)arg1;
+ (id)blurColorForImage:(id)arg1 forButtonSize:(struct CGSize { double x1; double x2; })arg2 withOffsetRight:(float)arg3 withOffsetBottom:(float)arg4;

- (void).cxx_destruct;
- (id)_backgroundView;
- (void)_beginIndeterminateAnimation;
- (id)_borderLayer;
- (id)_cancelImage;
- (id)_classicBackdropView;
- (void)_createGradient:(id)arg1 withGradientType:(long long)arg2;
- (id)_defaultBackgroundView;
- (id)_gradientBackgroundView;
- (id)_imageView;
- (id)_innerProgressLayer;
- (id)_newShapeViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineWidth:(double)arg2;
- (id)_outerProgressLayer;
- (id)_playImage;
- (void)_prepareForReuse;
- (bool)_renderAsEnabled;
- (id)_selectedLayer;
- (id)_simpleBackdrop;
- (void)_toggleToPlayState;
- (void)_updateBackdropView;
- (void)_updateBackgroundBlur:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3;
- (void)_updateEnabledState;
- (void)_updateInnerProgressLayerStroke;
- (void)_useBlurredBackground:(bool)arg1;
- (id)backdropGroupName;
- (id)backgroundImageForBlurring;
- (long long)backgroundType;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bigHitInsets;
- (float)buttonCornerRadius;
- (struct CGSize { double x1; double x2; })buttonSize;
- (id)cancelImage;
- (id)controlForeGroundColor;
- (id)customPlayImage;
- (id)customToggleImage;
- (id)defaultBackgroundColor;
- (id)element;
- (void)hideProgressAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isDisabledButSelectable;
- (bool)isIndeterminate;
- (void)layoutSubviews;
- (id)outerBorderColor;
- (float)playButtonDefaultAlpha;
- (id)playImage;
- (void)playIndicatorDidChange:(bool)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (float)progress;
- (id)progressIndicatorColor;
- (void)refresh;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBackgroundGradientColors:(id)arg1 withGradientType:(long long)arg2;
- (void)setBackgroundImageForBlurring:(id)arg1;
- (void)setBackgroundImageForBlurring:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3;
- (void)setBackgroundType:(long long)arg1;
- (void)setBigHitInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBufferProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2;
- (void)setControlColor:(id)arg1;
- (void)setControlForegroundColor:(id)arg1;
- (void)setCustomPlayImage:(id)arg1;
- (void)setCustomToggleImage:(id)arg1;
- (void)setDisabledButSelectable:(bool)arg1;
- (void)setElement:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgress:(float)arg1 animated:(bool)arg2;
- (void)setProgressIndicatorColor:(id)arg1;
- (void)setProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2;
- (void)setSelected:(bool)arg1;
- (void)setShowBorder:(bool)arg1;
- (void)setShowOuterBorder:(bool)arg1;
- (bool)showOuterBorder;
- (void)showPlayIndicator:(bool)arg1;
- (void)showPlayIndicator:(bool)arg1 force:(bool)arg2;
- (bool)showingPlayIndicator;
- (bool)showingProgress;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateOuterProgressLayerStroke;

// Image: /System/Library/AccessibilityBundles/StoreKitUI.axbundle/StoreKitUI

+ (Class)safeCategoryBaseClass;

- (void)_showPlayIndicator:(bool)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)beginIndeterminateAnimation;
- (void)endIndeterminateAnimation;
- (bool)isAccessibilityElement;

@end
