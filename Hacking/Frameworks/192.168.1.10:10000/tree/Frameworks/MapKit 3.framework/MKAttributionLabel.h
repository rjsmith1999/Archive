/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAttributionLabel : UIView {
    _MKUILabel * _innerLabel;
    unsigned long long  _mapType;
    _MKUILabel * _strokeLabel;
    bool  _useDarkText;
}

@property (nonatomic) unsigned long long mapType;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void).cxx_destruct;
- (id)_attributesWithStroke:(bool)arg1;
- (void)_prepareLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)mapType;
- (void)setMapType:(unsigned long long)arg1;
- (void)sizeToFit;

// Image: /System/Library/AccessibilityBundles/MapKitFramework.axbundle/MapKitFramework

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (bool)isAccessibilityElement;

@end
