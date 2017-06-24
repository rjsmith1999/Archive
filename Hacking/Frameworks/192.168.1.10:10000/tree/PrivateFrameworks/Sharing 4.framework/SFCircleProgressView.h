/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCircleProgressView : UIView

@property (nonatomic) double progress;
@property (nonatomic, readonly) UIColor *progressColor;
@property (nonatomic) double progressLineWidth;
@property (nonatomic) long long progressStartPoint;
@property (nonatomic) bool showProgressTray;

// Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing

+ (Class)layerClass;

- (void)animateProgressCompletedWithCompletion:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)progress;
- (id)progressColor;
- (double)progressLineWidth;
- (double)progressPresentationValue;
- (long long)progressStartPoint;
- (void)setProgress:(double)arg1;
- (void)setProgress:(double)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setProgress:(double)arg1 animated:(bool)arg2 forced:(bool)arg3 completion:(id /* block */)arg4;
- (void)setProgressColor:(id)arg1;
- (void)setProgressLineWidth:(double)arg1;
- (void)setProgressStartPoint:(long long)arg1;
- (void)setShowProgressTray:(bool)arg1;
- (bool)showProgressTray;

// Image: /System/Library/AccessibilityBundles/SharingFramework.axbundle/SharingFramework

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (id)accessibilityPath;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end
