/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoTileBadgeView : UIView {
    UIView * __backgroundView;
    UIImageView * __badgeImageView;
    UIButton * __button;
    UIImageView * __photoIrisBadgeImageView;
    UILabel * __textLabel;
    bool  _enabled;
    bool  _isIrisBadgeHidden;
    bool  _isOverContent;
    long long  _numberOfPhotos;
    bool  _selected;
    long long  _style;
}

@property (nonatomic, readonly) UIView *_backgroundView;
@property (nonatomic, readonly) UIImageView *_badgeImageView;
@property (setter=_setButton:, nonatomic, retain) UIButton *_button;
@property (nonatomic, readonly) UIImageView *_photoIrisBadgeImageView;
@property (nonatomic, readonly) UILabel *_textLabel;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (setter=setIrisBadgeHidden:, nonatomic) bool isIrisBadgeHidden;
@property (setter=setOverContent:, nonatomic) bool isOverContent;
@property (nonatomic) long long numberOfPhotos;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) long long style;

// Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary

- (id)_backgroundView;
- (id)_badgeImageView;
- (id)_button;
- (void)_commonPLPhotoTileBadgeViewInitialization:(long long)arg1;
- (id)_photoIrisBadgeImageView;
- (void)_setButton:(id)arg1;
- (id)_textLabel;
- (void)_updateBadgeImage;
- (void)_updateBadgeText;
- (void)_updatePhotoIrisBadgeAppearanceAnimated:(bool)arg1;
- (void)_updateSubviewsForStyle;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (bool)isEnabled;
- (bool)isIrisBadgeHidden;
- (bool)isOverContent;
- (bool)isSelected;
- (void)layoutSubviews;
- (long long)numberOfPhotos;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAlpha:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIrisBadgeHidden:(bool)arg1;
- (void)setIrisBadgeHidden:(bool)arg1 animated:(bool)arg2;
- (void)setNumberOfPhotos:(long long)arg1;
- (void)setOverContent:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;

// Image: /System/Library/AccessibilityBundles/PhotoLibraryFramework.axbundle/PhotoLibraryFramework

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end