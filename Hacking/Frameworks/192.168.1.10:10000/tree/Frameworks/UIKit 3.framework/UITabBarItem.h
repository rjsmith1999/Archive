/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBarItem : UIBarItem {
    long long  __barMetrics;
    long long  __imageStyle;
    UIColor * __tintColor;
    SEL  _action;
    _UITabBarItemAppearanceStorage * _appearanceStorage;
    NSString * _badgeValue;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imageInsets;
    UIImage * _selectedImage;
    UIImage * _selectedTemplateImage;
    struct { 
        unsigned int enabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
        unsigned int systemItem : 7; 
        unsigned int customSelectedImage : 1; 
        unsigned int customUnselectedImage : 1; 
    }  _tabBarItemFlags;
    id  _target;
    UIImage * _templateImage;
    NSString * _title;
    UIImage * _unselectedImage;
    UITabBarButton * _view;
}

@property (setter=_setBarMetrics:, nonatomic) long long _barMetrics;
@property (setter=_setImageStyle:, nonatomic) long long _imageStyle;
@property (getter=_isSelected, setter=_setSelected:, nonatomic) bool _selected;
@property (setter=_setTintColor:, nonatomic, retain) UIColor *_tintColor;
@property (nonatomic, copy) UIColor *badgeColor;
@property (nonatomic, copy) NSString *badgeValue;
@property (nonatomic, retain) UIImage *selectedImage;
@property (nonatomic) struct UIOffset { double x1; double x2; } titlePositionAdjustment;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_appearanceBlindViewClasses;

- (void).cxx_destruct;
- (long long)_barMetrics;
- (id)_imageForState:(unsigned long long)arg1 metrics:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (long long)_imageStyle;
- (id)_internalTemplateImage;
- (id)_internalTemplateImages;
- (id)_internalTitle;
- (bool)_isSelected;
- (void)_setBarMetrics:(long long)arg1;
- (void)_setImageStyle:(long long)arg1;
- (void)_setInternalTemplateImage:(id)arg1;
- (void)_setInternalTitle:(id)arg1;
- (void)_setSelected:(bool)arg1;
- (void)_setTintColor:(id)arg1;
- (void)_setTitleTextAttributeValue:(id)arg1 forAttributeKey:(id)arg2 state:(unsigned long long)arg3;
- (void)_showSelectedIndicator:(bool)arg1 changeSelection:(bool)arg2;
- (id)_tintColor;
- (void)_updateButtonForTintColor:(id)arg1 selected:(bool)arg2;
- (id)_updateImageWithTintColor:(id)arg1 isSelected:(bool)arg2 getImageOffset:(struct UIOffset { double x1; double x2; }*)arg3;
- (void)_updateToMatchCurrentState;
- (void)_updateView;
- (void)_updateViewAndPositionItems:(bool)arg1;
- (void)_updateViewBadge;
- (SEL)action;
- (bool)animatedBadge;
- (id)badgeColor;
- (id)badgeTextAttributesForState:(unsigned long long)arg1;
- (id)badgeValue;
- (void)encodeWithCoder:(id)arg1;
- (id)finishedSelectedImage;
- (id)finishedUnselectedImage;
- (bool)hasTitle;
- (id)image;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTabBarSystemItem:(long long)arg1 tag:(long long)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3;
- (id)initWithTitle:(id)arg1 image:(id)arg2 tag:(long long)arg3;
- (bool)isEnabled;
- (bool)isSystemItem;
- (id)resolvedTitle;
- (void)setAction:(SEL)arg1;
- (void)setAnimatedBadge:(bool)arg1;
- (void)setBadgeColor:(id)arg1;
- (void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBadgeValue:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSelectedImage:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setUnselectedImage:(id)arg1;
- (void)setView:(id)arg1;
- (long long)systemItem;
- (id)target;
- (id)title;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustment;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (id)view;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (id)_createViewForTabBar:(id)arg1 asProxyView:(bool)arg2;
- (id)selectedImage;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (id)unselectedImage;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)setBadgeValue:(id)arg1 animated:(bool)arg2 blink:(bool)arg3;

@end
