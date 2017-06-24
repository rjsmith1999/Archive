/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceSectionRowView : MKPlaceSectionItemView {
    bool  _highlighted;
    bool  _selected;
}

@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (getter=isSelected, nonatomic) bool selected;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_updateBackgroundColor:(bool)arg1;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

// Image: /System/Library/AccessibilityBundles/MapKitFramework.axbundle/MapKitFramework

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (bool)isAccessibilityElement;

@end