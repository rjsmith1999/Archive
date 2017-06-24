/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIButtonLikeSectionSplitView : CCUIControlCenterSectionView {
    CCUIControlCenterPushButton * _leftSection;
    unsigned long long  _mode;
    CCUIControlCenterPushButton * _rightSection;
    double  _separatorWidth;
}

@property (nonatomic, retain) CCUIControlCenterPushButton *leftSection;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, retain) CCUIControlCenterPushButton *rightSection;

// Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForSectionSlot:(int)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_landscapeInsetsForSection;
- (void)_relayout;
- (void)_updateButtonsCorners;
- (void)_updateLabelParameters;
- (id)_viewForSectionSlot:(int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)leftSection;
- (unsigned long long)mode;
- (id)rightSection;
- (void)setLeftSection:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setRightSection:(id)arg1;

// Image: /System/Library/AccessibilityBundles/ControlCenterUI.axbundle/ControlCenterUI

+ (Class)safeCategoryBaseClass;

- (bool)shouldGroupAccessibilityChildren;

@end
