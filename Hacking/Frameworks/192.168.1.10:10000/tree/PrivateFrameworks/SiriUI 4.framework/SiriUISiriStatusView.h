/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUISiriStatusView : UIView <SUICFlamesViewDelegate, SiriUISiriStatusViewProtocol, UIGestureRecognizerDelegate> {
    <SiriUISiriStatusViewAnimationDelegate> * _animationDelegate;
    UIButton * _button;
    SiriUIConfiguration * _configuration;
    int  _deferredFlamesViewState;
    <SiriUISiriStatusViewDelegate> * _delegate;
    double  _disabledMicOpacity;
    UIView * _flamesContainerView;
    SUICFlamesView * _flamesView;
    bool  _flamesViewDeferred;
    double  _flamesViewWidth;
    double  _lastStateChangeTime;
    UILongPressGestureRecognizer * _longPressRecognizer;
    UIImageView * _micGlyphImageView;
    long long  _mode;
    UIScreen * _screen;
}

@property (nonatomic) <SiriUISiriStatusViewAnimationDelegate> *animationDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SiriUISiriStatusViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double disabledMicOpacity;
@property (nonatomic, readonly) UIView *flamesContainerView;
@property (nonatomic) bool flamesViewDeferred;
@property (nonatomic) double flamesViewWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mode;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

+ (double)statusViewHeightForWidthSizeClass:(bool)arg1;

- (void).cxx_destruct;
- (void)_animateMicGlyphHidden:(bool)arg1;
- (void)_attachFlamesViewIfNeeded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_flamesFrame;
- (id)_flamesView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_flamesViewFrame;
- (void)_layoutFlamesViewIfNeeded;
- (void)_micButtonHeld:(id)arg1;
- (void)_micButtonTapped:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_micGlyphTappableRect;
- (void)_setFlamesViewState:(int)arg1;
- (id)animationDelegate;
- (float)audioLevelForFlamesView:(id)arg1;
- (id)delegate;
- (double)disabledMicOpacity;
- (id)flamesContainerView;
- (bool)flamesViewDeferred;
- (double)flamesViewWidth;
- (void)forceMicVisible:(bool)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (long long)mode;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAnimationDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabledMicOpacity:(double)arg1;
- (void)setFlamesViewDeferred:(bool)arg1;
- (void)setFlamesViewWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/AccessibilityBundles/SiriUI.axbundle/SiriUI

+ (Class)safeCategoryBaseClass;

- (void)accessibilityElementDidLoseFocus;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (bool)accessibilityPerformMagicTap;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 screen:(id)arg2 configuration:(id)arg3;
- (bool)isAccessibilityElement;
- (void)setMode:(long long)arg1;

@end