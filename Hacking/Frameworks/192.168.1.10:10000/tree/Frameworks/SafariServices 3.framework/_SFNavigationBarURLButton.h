/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFNavigationBarURLButton : UIButton <UIGestureRecognizerDelegate> {
    double  _backgroundAlphaFactor;
    long long  _backgroundStyle;
    UIImage * _darkBackgroundImage;
    <_SFNavigationBarURLButtonDelegate> * _delegate;
    UIImage * _lightBackgroundImage;
    UIGestureRecognizer * _longPressGestureRecognizer;
    UIImageView * _overlayImageView;
    UIImageView * _tintImageView;
    bool  _usesLightOverlayAndTintAlpha;
}

@property (nonatomic) double backgroundAlphaFactor;
@property (nonatomic) long long backgroundStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFNavigationBarURLButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool usesLightOverlayAndTintAlpha;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (void).cxx_destruct;
- (void)_dismissMenu:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)_updateBackgroundImageAnimated:(bool)arg1;
- (double)backgroundAlphaFactor;
- (long long)backgroundStyle;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pasteAndNavigate:(id)arg1;
- (id)pasteButtonTitle;
- (bool)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBackgroundAlphaFactor:(double)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setUsesLightOverlayAndTintAlpha:(bool)arg1;
- (bool)usesLightOverlayAndTintAlpha;

// Image: /System/Library/AccessibilityBundles/SafariServices.axbundle/SafariServices

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)accessibilityElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame:(id)arg1;
- (id)accessibilityLabel:(id)arg1;
- (unsigned long long)accessibilityTraits:(id)arg1;
- (id)accessibilityValue:(id)arg1;
- (bool)isAccessibilityElement;

@end
