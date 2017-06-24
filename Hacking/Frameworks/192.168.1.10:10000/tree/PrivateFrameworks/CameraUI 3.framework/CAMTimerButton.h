/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTimerButton : CAMExpandableMenuButton {
    UIImageView * __glyphView;
    <CAMTimerButtonDelegate> * _delegate;
    bool  _hideOffWhenCollapsed;
}

@property (nonatomic, readonly) UIImageView *_glyphView;
@property (nonatomic) <CAMTimerButtonDelegate> *delegate;
@property (nonatomic) long long duration;
@property (nonatomic) bool hideOffWhenCollapsed;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (void).cxx_destruct;
- (void)_commonCAMTimerButtonInitialization;
- (id)_currentGlyphImage;
- (id)_glyphView;
- (void)_updateCurrentGlyphImage;
- (id)delegate;
- (long long)duration;
- (id)headerView;
- (bool)hideOffWhenCollapsed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (long long)numberOfMenuItems;
- (double)padHeaderViewContentInsetLeft;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(long long)arg1;
- (void)setDuration:(long long)arg1 animated:(bool)arg2;
- (void)setHideOffWhenCollapsed:(bool)arg1;
- (id)shownIndexesWhileCollapsed;
- (id)titleForMenuItemAtIndex:(long long)arg1;

// Image: /System/Library/AccessibilityBundles/CameraUI.axbundle/CameraUI

+ (Class)safeCategoryBaseClass;

- (bool)accessibilityActivate;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)accessibilityValue;

@end