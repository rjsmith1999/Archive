/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsUIViewController : UIViewController <PXActionPerformerDelegate, PXChangeObserver, PXPurgeableController, PXScrollViewControllerObserver, PXUIViewControllerZoomTransitionEndPoint, PXWidgetCompositionDelegate, UIViewControllerPreviewingDelegate> {
    Class  __barsControllerClass;
    PXWidgetComposition * __composition;
    bool  __hasAppeared;
    PXTilingController * __headerAssetWidgetTilingController;
    UIView * __headerTileView;
    PXPhotosDetailsHeaderTileWidget * __headerWidget;
    id /* block */  __ppt_allWidgetLoadingCompleteHandler;
    PXAssetCollectionActionController * __previewActionController;
    _PXPhotosDetailsPreviewOrbContext * __previewOrbContext;
    <PXUIWidget> * __previewWidget;
    <UIViewControllerPreviewing> * __previewingContext;
    PXUIScrollViewController * __scrollViewController;
    bool  __shouldFocusHeader;
    PXPhotosDetailsSpecManager * __specManager;
    PXSwipeSelectionManager * __swipeSelectionManager;
    PXPhotosDetailsViewModel * __viewModel;
    NSMutableArray * __widgetDisablingDimmingViews;
    NSMapTable * __widgetOptions;
    PXWidgetSpec * __widgetSpec;
    NSArray * __widgets;
    <PXActionPerformerDelegate> * _actionPerformerDelegate;
    PXBarsController * _barsController;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    PXPhotosDetailsContext * _context;
    bool  _empty;
    unsigned long long  _occludedContentEdges;
    unsigned long long  _options;
}

@property (nonatomic, readonly) Class _barsControllerClass;
@property (nonatomic, readonly) PXWidgetComposition *_composition;
@property (setter=_setHasAppeared:, nonatomic) bool _hasAppeared;
@property (nonatomic, readonly) PXTilingController *_headerAssetWidgetTilingController;
@property (setter=_setHeaderTileView:, nonatomic, retain) UIView *_headerTileView;
@property (nonatomic, readonly) PXPhotosDetailsHeaderTileWidget *_headerWidget;
@property (setter=_ppt_setAllWidgetLoadingCompleteHandler:, nonatomic, copy) id /* block */ _ppt_allWidgetLoadingCompleteHandler;
@property (setter=_setPreviewActionController:, nonatomic, retain) PXAssetCollectionActionController *_previewActionController;
@property (setter=_setPreviewOrbContext:, nonatomic, retain) _PXPhotosDetailsPreviewOrbContext *_previewOrbContext;
@property (nonatomic, readonly) <PXUIWidget> *_previewWidget;
@property (setter=_setPreviewingContext:, nonatomic, retain) <UIViewControllerPreviewing> *_previewingContext;
@property (nonatomic, readonly) PXUIScrollViewController *_scrollViewController;
@property (setter=_setShouldFocusHeader:, nonatomic) bool _shouldFocusHeader;
@property (nonatomic, readonly) PXPhotosDetailsSpecManager *_specManager;
@property (setter=_setSwipeSelectionManager:, nonatomic, retain) PXSwipeSelectionManager *_swipeSelectionManager;
@property (nonatomic, readonly) PXPhotosDetailsViewModel *_viewModel;
@property (nonatomic, readonly) NSMutableArray *_widgetDisablingDimmingViews;
@property (nonatomic, readonly) NSMapTable *_widgetOptions;
@property (setter=_setWidgetSpec:, nonatomic, retain) PXWidgetSpec *_widgetSpec;
@property (nonatomic, readonly) NSArray *_widgets;
@property (nonatomic) <PXActionPerformerDelegate> *actionPerformerDelegate;
@property (nonatomic, readonly) PXBarsController *barsController;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (nonatomic, readonly) PXPhotosDetailsContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic) bool empty;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool keepsSourceRegionOfInterestContent;
@property (nonatomic) unsigned long long occludedContentEdges;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) UIScrollView *ppt_scrollView;
@property (nonatomic, readonly) PXScrollViewController *scrollViewController;
@property (nonatomic, readonly) bool shouldUpdateStatusBarTitle;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (Class)_barsControllerClass;
- (id)_composition;
- (bool)_dismissSelfIfSafeAnimated:(bool)arg1;
- (void)_ensureComposition;
- (void)_handleWidgetsLoadingDelay;
- (bool)_hasAppeared;
- (id)_headerAssetWidgetTilingController;
- (id)_headerTileView;
- (id)_headerWidget;
- (void)_invalidateBarSpec;
- (void)_invalidateCompositionSpec;
- (void)_invalidateWidgetSpec;
- (void)_loadComposition;
- (unsigned long long)_optionsForWidget:(id)arg1;
- (void)_performAddToMemoriesAnimation;
- (id)_photosDetailsContextForTransition:(id)arg1;
- (id)_photosDetailsContextForTransitionWithViewController:(id)arg1;
- (id /* block */)_ppt_allWidgetLoadingCompleteHandler;
- (void)_ppt_informAllWidgetsLoadedHandlerIfNeeded;
- (void)_ppt_setAllWidgetLoadingCompleteHandler:(id /* block */)arg1;
- (id)_previewActionController;
- (id)_previewOrbContext;
- (id)_previewWidget;
- (id)_previewingContext;
- (id)_regionOfInterestForContext:(id)arg1;
- (id)_scrollViewController;
- (void)_setHasAppeared:(bool)arg1;
- (void)_setHeaderTileView:(id)arg1;
- (void)_setPreviewActionController:(id)arg1;
- (void)_setPreviewOrbContext:(id)arg1;
- (void)_setPreviewingContext:(id)arg1;
- (void)_setShouldFocusHeader:(bool)arg1;
- (void)_setSwipeSelectionManager:(id)arg1;
- (void)_setWidgetSpec:(id)arg1;
- (bool)_shouldFocusHeader;
- (bool)_shouldShowMovieHeader;
- (id)_specManager;
- (id)_swipeSelectionManager;
- (void)_updateAllWidgetsFaceModeState;
- (void)_updateAllWidgetsSelectionState;
- (void)_updateAllWidgetsSpec;
- (void)_updateBarSpec;
- (void)_updateCompositionSpec;
- (void)_updatePreviewActionController;
- (void)_updateScrollViewControllerContentInset;
- (void)_updateStatusBarTitle;
- (void)_updateTitleAndSubtitle;
- (void)_updateWidgetDisablingWithAnimationOptions:(id)arg1;
- (void)_updateWidgetSpec;
- (id)_viewModel;
- (id)_widgetAtLocation:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)_widgetDisablingDimmingViews;
- (id)_widgetOptions;
- (id)_widgetSpec;
- (id)_widgets;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (id)actionPerformerDelegate;
- (id)barsController;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (id)contentScrollView;
- (id)context;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1 configuration:(id)arg2;
- (id)initWithContext:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isEmpty;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (unsigned long long)occludedContentEdges;
- (unsigned long long)options;
- (void)ppt_performBlockAfterAllWidgetLoadingCompletes:(id /* block */)arg1;
- (id)ppt_scrollView;
- (void)ppt_toggleDiscloseWidgets;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)preferredFocusEnvironments;
- (void)preloadWithSourceRegionOfInterest:(id)arg1 forTransition:(id)arg2;
- (id)previewActionItems;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)purgeIfPossible;
- (bool)px_canPerformPinchTransitionWithMasterViewController:(id)arg1;
- (bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (bool)px_canPerformZoomTransitionWithMasterViewController:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)px_endPointForTransition:(id)arg1;
- (bool)px_isSnapBackDestination;
- (id)regionOfInterestForTransition:(id)arg1;
- (id)removeBackgroundColorForTransition:(id)arg1;
- (void)restoreBackgroundColor:(id)arg1 forTransition:(id)arg2;
- (void)scrollRegionOfInterestToVisible:(id)arg1 forTransition:(id)arg2;
- (id)scrollViewController;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)setActionPerformerDelegate:(id)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEmpty:(bool)arg1;
- (void)setOccludedContentEdges:(unsigned long long)arg1;
- (bool)shouldUpdateStatusBarTitle;
- (id)standaloneMapViewController;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)widgetComposition:(id)arg1 didUpdateCompositionWithDefaultAnimationOptions:(id)arg2;
- (long long)widgetComposition:(id)arg1 loadingPriorityForWidget:(id)arg2;
- (bool)widgetComposition:(id)arg1 requestViewControllerDismissalAnimated:(bool)arg2;
- (bool)widgetComposition:(id)arg1 shouldUseEdgeToEdgeLayoutForWidget:(id)arg2;
- (struct NSObject { Class x1; }*)widgetComposition:(id)arg1 viewControllerHostingWidget:(id)arg2;
- (bool)widgetComposition:(id)arg1 widget:(id)arg2 transitionToViewController:(id)arg3 withTransitionType:(long long)arg4;
- (void)widgetComposition:(id)arg1 widgetHasLoadedContentDataDidChange:(id)arg2;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;

// Image: /System/Library/AccessibilityBundles/PhotosUICore.axbundle/PhotosUICore

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_ensureScrollViewController;
- (void)_loadWidgets;

@end
