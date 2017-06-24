/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimerCircularSmallComplicationView : NTKCircularSmallSimpleComplicationView <NTKTimerComplicationDisplay> {
    long long  _timerState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool shouldUseTemplateColors;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

- (void)_setLayoutForTime:(double)arg1;
- (void)_updateImage;
- (bool)actsAsOffWhenEditing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUsesMediumLayout:(bool)arg1;

// Image: /System/Library/AccessibilityBundles/NanoTimeKitCompanion.axbundle/NanoTimeKitCompanion

+ (Class)safeCategoryBaseClass;

- (double)_axCountdownInterval;
- (void)_axSetCountdownInterval:(double)arg1;
- (void)_axUpdateWithTime:(double)arg1;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)setStoppedWithTime:(double)arg1;
- (void)setTime:(double)arg1;

@end