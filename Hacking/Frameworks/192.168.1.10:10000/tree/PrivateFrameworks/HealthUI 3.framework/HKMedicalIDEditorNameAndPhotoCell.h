/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMedicalIDEditorNameAndPhotoCell : HKMedicalIDEditorMultilineStringCell {
    UIButton * _editPhotoButton;
    UIButton * _editPhotoLabelButton;
    UIView * _nameBottomSeparator;
}

@property (nonatomic, readonly) UIButton *editPhotoButton;
@property (nonatomic, readonly) UIButton *editPhotoLabelButton;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) UIImage *photo;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (bool)showsLabelAndValue;

- (void).cxx_destruct;
- (void)_adjustEditPhotoButtonFontSizeIfNecessary;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)editPhotoButton;
- (id)editPhotoLabelButton;
- (void)layoutSubviews;
- (id)name;
- (id)photo;
- (void)setName:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;

// Image: /System/Library/AccessibilityBundles/HealthUI.axbundle/HealthUI

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityIgnoreInternalLabels;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setPhoto:(id)arg1;

@end
