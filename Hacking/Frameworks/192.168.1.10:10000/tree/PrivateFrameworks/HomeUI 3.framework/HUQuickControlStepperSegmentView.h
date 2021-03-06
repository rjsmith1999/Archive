/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlStepperSegmentView : UIView {
    double  _cornerRadius;
    bool  _highlighted;
    UIView * _highlightedOverlayView;
    unsigned long long  _segmentLocation;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic) double cornerRadius;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UIView *highlightedOverlayView;
@property (nonatomic) unsigned long long segmentLocation;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (void).cxx_destruct;
- (void)_createHighlightedOverlayViewIfNecessary;
- (void)_createTitleLabelIfNecessary;
- (void)_updateCornerMask;
- (void)_updateTitleFontSize;
- (double)cornerRadius;
- (id)highlightedOverlayView;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (unsigned long long)segmentLocation;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedOverlayView:(id)arg1;
- (void)setSegmentLocation:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)title;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

// Image: /System/Library/AccessibilityBundles/HomeUI.axbundle/HomeUI

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityContainerView;
- (id)_accessibilitySummaryView;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end
