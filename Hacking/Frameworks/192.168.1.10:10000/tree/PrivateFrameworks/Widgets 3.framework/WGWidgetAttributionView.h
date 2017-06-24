/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetAttributionView : UITextView {
    UIColor * _legibilityTextColor;
    NSMutableAttributedString * _widgetAttributedString;
}

@property (nonatomic, retain) UIColor *legibilityTextColor;

// Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets

+ (id)attributedStringForIdentifier:(id)arg1;
+ (id)widgetAttributionIDsInOrder;

- (void).cxx_destruct;
- (id)_attributionBackgroundColor;
- (id)_attributionFont;
- (void)_configureAttributedString;
- (id)initWithWidgetAttributedString:(id)arg1;
- (void)layoutSubviews;
- (id)legibilityTextColor;
- (void)setLegibilityTextColor:(id)arg1;

// Image: /System/Library/AccessibilityBundles/Widgets.axbundle/Widgets

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)axIsStockWidget;
- (bool)axIsWeatherWidget;
- (bool)isAccessibilityElement;

@end
