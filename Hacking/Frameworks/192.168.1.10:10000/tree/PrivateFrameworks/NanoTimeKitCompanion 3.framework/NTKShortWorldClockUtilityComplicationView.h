/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKShortWorldClockUtilityComplicationView : NTKUtilityImageAndLabelsComplicationView <NTKWorldClockComplicationDisplay> {
    NTKDigitalTimeLabel * _timeLabel;
    bool  _timeTravel;
    NTKTimeOfDayLabel * _timeTravelLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool shouldUseTemplateColors;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

+ (id)_preferredAdditionalFontSettings;

- (void).cxx_destruct;
- (void)_applyForegroundAlpha;
- (void)_updateContentForEditingChange;
- (void)_updateLabelsForFontChange;
- (double)_widthThatFits;
- (void)endTimeTravelAnimated:(bool)arg1;
- (double)fontSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setFont:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setShortCity:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)startTimeTravelAnimated:(bool)arg1;

// Image: /System/Library/AccessibilityBundles/NanoTimeKitCompanion.axbundle/NanoTimeKitCompanion

+ (Class)safeCategoryBaseClass;

- (id)accessibilityHint;
- (id)accessibilityLabel;

@end
