/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUBannerCell : SUTableCell <SUCellConfigurationView> {
    UIButton * _leftButton;
    UIButton * _rightButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)_buttonAction:(id)arg1;
- (id)_newButton;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)reloadView;
- (void)setConfiguration:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;

// Image: /System/Library/AccessibilityBundles/iTunesStoreUIFramework.axbundle/iTunesStoreUIFramework

+ (Class)safeCategoryBaseClass;

- (void)_reloadButtons;

@end