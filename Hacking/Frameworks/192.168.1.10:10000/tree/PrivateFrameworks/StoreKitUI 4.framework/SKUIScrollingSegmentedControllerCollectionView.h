/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIScrollingSegmentedControllerCollectionView : SKUIViewControllerContainerCollectionView {
    bool  _performingLayout;
}

@property (nonatomic) <SKUIScrollingSegmentedControllerCollectionViewDelegate> *delegate;
@property (getter=isPerformingLayout, nonatomic, readonly) bool performingLayout;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (bool)isPerformingLayout;
- (void)layoutSubviews;

// Image: /System/Library/AccessibilityBundles/StoreKitUI.axbundle/StoreKitUI

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityOpaqueElementScrollsContentIntoView;
- (bool)accessibilityCollectionViewBehavesLikeUIViewAccessibility;
- (unsigned long long)accessibilityTraits;

@end
