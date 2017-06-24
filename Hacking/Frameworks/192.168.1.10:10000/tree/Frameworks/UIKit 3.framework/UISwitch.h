/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISwitch : UIControl <NSCoding, UISwitchControl, UISwitchVisualElementProvider> {
    bool  _alwaysShowOnOffLabel;
    UIImage * _offImage;
    bool  _on;
    UIImage * _onImage;
    UIColor * _onTintColor;
    UIColor * _thumbTintColor;
    UIColor * _tintColor;
    UISwitchVisualElement * _visualElement;
}

@property (getter=_alwaysShowOnOffLabel, setter=_setAlwaysShowsOnOffLabel:, nonatomic) bool alwaysShowOnOffLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *offImage;
@property (getter=isOn, nonatomic) bool on;
@property (nonatomic, retain) UIImage *onImage;
@property (nonatomic, retain) UIColor *onTintColor;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *thumbTintColor;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) UISwitchVisualElement *visualElement;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (void)setVisualElementProvider:(id)arg1;
+ (id)visualElementForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserValueChangedEvent;
- (bool)_alwaysShowOnOffLabel;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_encodeFrameWithCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_refreshVisualElement;
- (void)_refreshVisualElementForTraitCollection:(id)arg1;
- (void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(bool)arg2;
- (void)_setAlwaysShowsOnOffLabel:(bool)arg1;
- (bool)_shouldAlterCodedFrame;
- (bool)_shouldShowOnOffLabels;
- (void)_showingOnOffLabelChanged;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)dealloc;
- (unsigned long long)defaultAccessibilityTraits;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElementByDefault;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isOn;
- (id)offImage;
- (id)onImage;
- (id)onTintColor;
- (bool)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOffImage:(id)arg1;
- (void)setOn:(bool)arg1;
- (void)setOn:(bool)arg1 animated:(bool)arg2;
- (void)setOn:(bool)arg1 animated:(bool)arg2 notifyingVisualElement:(bool)arg3;
- (void)setOnImage:(id)arg1;
- (void)setOnTintColor:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setThumbTintColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setVisualElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)thumbTintColor;
- (id)tintColor;
- (void)traitCollectionDidChange:(id)arg1;
- (id)visualElement;
- (void)visualElement:(id)arg1 transitionedToOn:(bool)arg2;
- (void)visualElementHadTouchUpInside:(id)arg1;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)_accessibilityIsAccessibleViaTableViewCell;
- (void)_accessibilitySetIsAccessibleViaTableViewCell:(bool)arg1;
- (bool)_accessibilitySupportsActivateAction;
- (bool)accessibilityActivate;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;
- (void)setEnabled:(bool)arg1;

@end