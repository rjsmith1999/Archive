/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPreviewView : UIView {
    int  __exposureBiasSide;
    NSMutableDictionary * __faceIndicators;
    UILabel * __simulatorLabel;
    CAMFocusIndicatorView * _continuousIndicator;
    CAMGridView * _gridView;
    UIView * _indicatorContainerView;
    CAMFocusIndicatorView * _pointIndicator;
    CAMVideoPreviewView * _videoPreviewView;
}

@property (nonatomic) int _exposureBiasSide;
@property (nonatomic, readonly) NSMutableDictionary *_faceIndicators;
@property (nonatomic, readonly) UILabel *_simulatorLabel;
@property (nonatomic, retain) CAMFocusIndicatorView *continuousIndicator;
@property (nonatomic, readonly) NSDictionary *faceIndicatorsByIdentifier;
@property (nonatomic) CAMGridView *gridView;
@property (nonatomic, readonly) UIView *indicatorContainerView;
@property (nonatomic, retain) CAMFocusIndicatorView *pointIndicator;
@property (nonatomic, retain) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic, readonly) CAMVideoPreviewView *videoPreviewView;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

+ (Class)layerClass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_aspectFaceRectFromSquareFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 angle:(double)arg2;
- (int)_exposureBiasSide;
- (id)_faceIndicators;
- (int)_faceOrientationForRollAngle:(double)arg1;
- (id)_simulatorLabel;
- (void)addFaceIndicator:(id)arg1 forIdentifier:(long long)arg2;
- (struct CGPoint { double x1; double x2; })captureDevicePointOfInterestForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)continuousIndicator;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceIndicatorFrameForFaceResult:(id)arg1;
- (id)faceIndicatorsByIdentifier;
- (id)gridView;
- (void)indicatePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (id)indicatorContainerView;
- (void)layoutSubviews;
- (struct CGPoint { double x1; double x2; })pointForCaptureDevicePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (id)pointIndicator;
- (void)removeFaceIndicatorForIdentifier:(long long)arg1;
- (void)setContinuousIndicator:(id)arg1;
- (void)setGridView:(id)arg1;
- (void)setPointIndicator:(id)arg1;
- (void)setVideoPreviewLayer:(id)arg1;
- (void)set_exposureBiasSide:(int)arg1;
- (id)videoPreviewLayer;
- (id)videoPreviewView;

// Image: /System/Library/AccessibilityBundles/CameraUI.axbundle/CameraUI

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityAllowsSiblingsWhenOvergrown;
- (id)_accessibilityFaceElements;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityZoomIn:(bool)arg1;
- (bool)_axIsBackFacing;
- (bool)_axIsFocusLocked;
- (bool)_axShowingEffects;
- (void)_showFocusAtPoint:(struct CGPoint { double x1; double x2; })arg1 startAnimating:(bool)arg2;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityElements;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;

@end