/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKLinkedAppView : PKTableViewCell <PKLinkedApplicationObserver> {
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _appName;
    UILabel * _appPublisher;
    UIImageView * _iconView;
    PKLinkedApplication * _linkedApplication;
    UILabel * _loadingLabel;
    UIColor * _mainLabelColor;
    UILabel * _price;
    UIColor * _subTextLabelColor;
    PKLinkedAppUserRatingView * _userRatingView;
    UIButton * _viewButton;
}

@property (nonatomic, copy) NSURL *appLaunchURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKLinkedApplication *linkedApplication;
@property (nonatomic) UIColor *mainLabelColor;
@property (nonatomic, copy) NSArray *storeIDs;
@property (nonatomic) UIColor *subTextLabelColor;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (void)_cleanupViews;
- (void)_layoutLoadingView;
- (void)_layoutLockupView;
- (void)_layoutNotAvailableView;
- (id)appLaunchURL;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithLinkedApplication:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2 reuseIdentifier:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)linkedApplication;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (id)mainLabelColor;
- (void)reloadApplicationStateIfNecessary;
- (void)setAppLaunchURL:(id)arg1;
- (void)setApplicationIcon:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (void)setLoadingText:(id)arg1;
- (void)setMainLabelColor:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)setSubTextLabelColor:(id)arg1;
- (id)storeIDs;
- (id)subTextLabelColor;

// Image: /System/Library/AccessibilityBundles/PassKitFramework.axbundle/PassKitFramework

+ (Class)safeCategoryBaseClass;

- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end
