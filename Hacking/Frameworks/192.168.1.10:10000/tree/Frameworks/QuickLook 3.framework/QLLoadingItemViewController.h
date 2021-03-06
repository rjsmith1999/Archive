/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLLoadingItemViewController : QLItemViewController {
    UILabel * _loadingLabel;
    UIActivityIndicatorView * _spinner;
}

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

- (void).cxx_destruct;
- (void)_updateLoadingLabel;
- (bool)canEnterFullScreen;
- (bool)canPinchToDismiss;
- (bool)canSwipeToDismiss;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;

// Image: /System/Library/AccessibilityBundles/QuickLook.axbundle/QuickLook

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityLabel;
- (bool)isAccessibilityElement;
- (void)loadViewIfNeeded;

@end
