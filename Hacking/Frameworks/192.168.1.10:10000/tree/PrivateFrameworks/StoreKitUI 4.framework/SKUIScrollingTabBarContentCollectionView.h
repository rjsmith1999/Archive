/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIScrollingTabBarContentCollectionView : SKUIViewControllerContainerCollectionView {
    bool  _performingLayout;
}

@property (nonatomic) <SKUIScrollingTabBarContentCollectionViewDelegate> *delegate;
@property (getter=isPerformingLayout, nonatomic, readonly) bool performingLayout;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (void)_reuseCell:(id)arg1;
- (bool)isPerformingLayout;
- (void)layoutSubviews;

// Image: /System/Library/AccessibilityBundles/StoreKitUI.axbundle/StoreKitUI

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityOpaqueElementScrollsContentIntoView;
- (id)_accessibilityScrollStatus;
- (bool)accessibilityCollectionViewBehavesLikeUIViewAccessibility;
- (unsigned long long)accessibilityTraits;

@end
