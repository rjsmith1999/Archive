/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKBatteryCircularSmallComplicationView : NTKCircularSmallRingTextComplicationView <NTKBatteryComplicationDisplay> {
    double  _level;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool shouldUseTemplateColors;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

- (bool)_wantsPlatter;
- (void)setLevel:(float)arg1;
- (void)setState:(long long)arg1;

// Image: /System/Library/AccessibilityBundles/NanoTimeKitCompanion.axbundle/NanoTimeKitCompanion

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;

@end
