/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKStyleProvider : NSObject <TKVibrationRecorderStyleProvider> {
    NSBundle * _bundle;
    NSMutableDictionary * _cachedStyleProperties;
    UIScreen * _screen;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultAnimationDuration;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIScreen *screen;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIColor *vibrationRecorderBarsBackgroundColor;
@property (nonatomic, readonly) double vibrationRecorderControlsToolbarAdditionalHeight;
@property (nonatomic, readonly) double vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
@property (nonatomic, readonly) double vibrationRecorderControlsToolbarVerticalOffset;
@property (nonatomic, readonly) UIColor *vibrationRecorderInstructionsLabelBackgroundColor;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } vibrationRecorderInstructionsLabelEdgeInsets;
@property (nonatomic, readonly) double vibrationRecorderInstructionsLabelFadeAnimationDuration;
@property (nonatomic, readonly) UIFont *vibrationRecorderInstructionsLabelFont;
@property (nonatomic, readonly) struct UIOffset { double x1; double x2; } vibrationRecorderInstructionsLabelPositionOffset;
@property (nonatomic, readonly) UIColor *vibrationRecorderInstructionsLabelTextColor;
@property (nonatomic, readonly) double vibrationRecorderProgressToolbarAdditionalHeight;
@property (nonatomic, readonly) double vibrationRecorderProgressToolbarVerticalOffset;
@property (nonatomic, readonly) double vibrationRecorderProgressViewAccessibilityAdditionalHeight;
@property (nonatomic, readonly) double vibrationRecorderProgressViewDotHorizontalInset;
@property (nonatomic, readonly) double vibrationRecorderProgressViewHeight;
@property (nonatomic, readonly) double vibrationRecorderProgressViewHorizontalOffsetFromEdge;
@property (nonatomic, readonly) UIImage *vibrationRecorderProgressViewResizableDotImage;
@property (nonatomic, readonly) UIColor *vibrationRecorderProgressViewTrackColor;
@property (nonatomic, readonly) double vibrationRecorderRippleFinalRadius;
@property (nonatomic, readonly) double vibrationRecorderRippleFingerMovingSpeed;
@property (nonatomic, readonly) double vibrationRecorderRippleFingerStillSpeed;
@property (nonatomic, readonly) double vibrationRecorderRippleInitialRadius;
@property (nonatomic, readonly) double vibrationRecorderRippleRingLineWidth;
@property (nonatomic, readonly) UIColor *vibrationRecorderRippleViewBackgroundColor;

- (void).cxx_destruct;
- (id)_bundle;
- (id)_cachedImageForPropertyWithSelector:(SEL)arg1 size:(struct CGSize { double x1; double x2; })arg2 opaque:(bool)arg3 withDrawingBlock:(id /* block */)arg4;
- (id)_cachedImageWithName:(id)arg1 forPropertyWithSelector:(SEL)arg2;
- (id)_cachedResizableImageForPropertyWithSelector:(SEL)arg1 capInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 size:(struct CGSize { double x1; double x2; })arg3 opaque:(bool)arg4 withDrawingBlock:(id /* block */)arg5;
- (id)_cachedStyleObjectForPropertyWithSelector:(SEL)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_setCachedStyleObject:(id)arg1 forPropertyWithSelector:(SEL)arg2;
- (void)dealloc;
- (double)defaultAnimationDuration;
- (id)init;
- (id)screen;
- (void)setScreen:(id)arg1;
- (id)vibrationRecorderBarsBackgroundColor;
- (double)vibrationRecorderControlsToolbarAdditionalHeight;
- (double)vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
- (double)vibrationRecorderControlsToolbarVerticalOffset;
- (id)vibrationRecorderInstructionsLabelBackgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })vibrationRecorderInstructionsLabelEdgeInsets;
- (double)vibrationRecorderInstructionsLabelFadeAnimationDuration;
- (id)vibrationRecorderInstructionsLabelFont;
- (struct UIOffset { double x1; double x2; })vibrationRecorderInstructionsLabelPositionOffset;
- (id)vibrationRecorderInstructionsLabelTextColor;
- (double)vibrationRecorderProgressToolbarAdditionalHeight;
- (double)vibrationRecorderProgressToolbarVerticalOffset;
- (double)vibrationRecorderProgressViewAccessibilityAdditionalHeight;
- (double)vibrationRecorderProgressViewDotHorizontalInset;
- (double)vibrationRecorderProgressViewHeight;
- (double)vibrationRecorderProgressViewHorizontalOffsetFromEdge;
- (id)vibrationRecorderProgressViewResizableDotImage;
- (id)vibrationRecorderProgressViewTrackColor;
- (double)vibrationRecorderRippleFinalRadius;
- (double)vibrationRecorderRippleFingerMovingSpeed;
- (double)vibrationRecorderRippleFingerStillSpeed;
- (double)vibrationRecorderRippleInitialRadius;
- (double)vibrationRecorderRippleRingLineWidth;
- (id)vibrationRecorderRippleViewBackgroundColor;

@end
