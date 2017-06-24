/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIPhoneProductPageViewController : SKUIViewController <SKStoreProductViewControllerDelegate, SKUIMessageBannerDelegate, SKUIMetricsViewController, SKUINetworkErrorDelegate, SKUIProductPageChildViewControllerDelegate, SKUIProductPageHeaderViewDelegate, UIScrollViewDelegate> {
    bool  _askPermission;
    SKUIMessageBanner * _banner;
    NSString * _bannerText;
    UIViewController<SKUIProductPageChildViewController> * _childViewController;
    <SKUIIPhoneProductPageDelegate> * _delegate;
    SKUIProductPageDetailsViewController * _detailsViewController;
    SKUINetworkErrorViewController * _errorViewController;
    SKUIProductPageHeaderViewController * _headerViewController;
    SKUIIncompatibleAppViewController * _incompatibleViewController;
    SKUIItem * _item;
    SSMetricsPageEvent * _lastPageEvent;
    SKUILoadProductPageOperation * _loadOperation;
    SKUIProductPagePlaceholderViewController * _loadingViewController;
    long long  _lookupItemIdentifier;
    SKUIMetricsController * _metricsController;
    NSOperationQueue * _operationQueue;
    SKUIProductPage * _productPage;
    SKUIProductPagePlaceholderViewController * _relatedPlaceholderViewController;
    SKUISwooshArrayViewController * _relatedViewController;
    SKUIProductPageReviewsViewController * _reviewsViewController;
    long long  _sectionIndex;
    NSURLRequest * _urlRequest;
    bool  _wantsActivityViewController;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic) bool askPermission;
@property (nonatomic, copy) NSString *bannerText;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIIPhoneProductPageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUIItem *item;
@property (nonatomic, readonly) SKUIProductPage *productPage;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (void).cxx_destruct;
- (id)URL;
- (void)_animateAddToWishlist;
- (id)_detailsViewController;
- (id)_headerViewController;
- (void)_hideBanner;
- (id)_initSKUIIPhoneProductPageViewController;
- (void)_invalidateChildViewControllers;
- (bool)_isIncompatibleItem;
- (id)_loadingViewController;
- (void)_metricsEnterEventNotification:(id)arg1;
- (void)_presentHTMLProductPage;
- (id)_relatedPlaceholderViewController;
- (id)_relatedViewController;
- (void)_reloadChildViewControllers;
- (id)_reviewsViewController;
- (void)_setContentInsetsForChildViewController:(id)arg1;
- (void)_setHeaderPositionForChildViewController:(id)arg1;
- (void)_setMetricsController:(id)arg1;
- (void)_setProductPage:(id)arg1 error:(id)arg2;
- (void)_setSectionIndexWithFragment:(long long)arg1;
- (void)_shareButtonAction:(id)arg1;
- (void)_showActivityViewController;
- (void)_showBanner;
- (void)_showError:(id)arg1;
- (id)_viewControllerForSectionIndex:(unsigned long long)arg1;
- (id)activeMetricsController;
- (bool)askPermission;
- (void)askPermissionBannerDidSelect:(id)arg1;
- (id)bannerText;
- (void)configureMetricsWithPageEvent:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)initWithItem:(id)arg1;
- (id)initWithItemIdentifier:(long long)arg1;
- (id)initWithProductPage:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)item;
- (void)loadView;
- (id)metricsControllerForProductPageHeader:(id)arg1;
- (void)networkErrorViewControllerInvalidated:(id)arg1;
- (id)productPage;
- (void)productPageChildOpenItem:(id)arg1;
- (void)productPageChildOpenURL:(id)arg1 viewControllerBlock:(id /* block */)arg2;
- (void)productPageChildViewControllerDidLoad:(id)arg1;
- (void)productPageChildViewControllerDidLoadScrollView:(id)arg1;
- (void)productPageChildViewControllerDidScroll:(id)arg1;
- (void)productPageHeaderView:(id)arg1 didReloadItemOffer:(id)arg2;
- (void)productPageHeaderView:(id)arg1 didSelectSectionIndex:(long long)arg2;
- (void)productPageHeaderView:(id)arg1 didSelectURL:(id)arg2;
- (void)productPageHeaderViewDidWantAskPermissionBanner:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)reloadData;
- (void)setAskPermission:(bool)arg1;
- (void)setBannerText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (struct CGPoint { double x1; double x2; })topContentOffset;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

// Image: /System/Library/AccessibilityBundles/StoreKitUI.axbundle/StoreKitUI

+ (Class)safeCategoryBaseClass;

@end
