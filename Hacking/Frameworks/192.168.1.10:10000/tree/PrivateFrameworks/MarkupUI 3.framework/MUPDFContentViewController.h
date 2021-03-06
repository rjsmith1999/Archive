/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MUPDFContentViewController : MUContentViewController <MUContentViewControllerAKControllerSubdelegate, MUContentViewControllerProtocol, PDFPageVisibilityDelegate, PDFViewDelegatePrivate> {
    bool  _constraintsAreHorizontal;
    bool  _didSetup;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    bool  _forcesPDFViewTopAlignment;
    bool  _navigationModeHorizontal;
    MUPDFPageLabelView * _pageLabelView;
    PDFDocument * _pdfDocument;
    MUCGPDFReader * _pdfReader;
    PDFView * _pdfView;
    bool  _showsThumbnailView;
    NSArray * _sourceContentReplacedAnnotationMaps;
    PDFThumbnailView * _thumbnailView;
    UIVisualEffectView * _thumbnailViewHolder;
    NSArray * _thumbnailViewHolderConstraints;
    NSLayoutConstraint * _thumbnailViewHolderRevealConstraint;
    bool  _viewIsTransitioningBetweenSizes;
    PDFPage * _viewTransitionPageToCenter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _viewTransitionPointOnPageToCenter;
    bool  _viewTransitionPreviousAutoscalingState;
    double  _viewTransitionPreviousScale;
}

@property (nonatomic) bool centersIgnoringContentInsets;
@property bool constraintsAreHorizontal;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didSetup;
@property (nonatomic, readonly) NSString *documentUnlockedWithPassword;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) bool forcesPDFViewTopAlignment;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool navigationModeHorizontal;
@property (readonly) unsigned long long pageCount;
@property (retain) MUPDFPageLabelView *pageLabelView;
@property (readonly) PDFDocument *pdfDocument;
@property (retain) MUCGPDFReader *pdfReader;
@property (retain) PDFView *pdfView;
@property (nonatomic) bool showsThumbnailView;
@property (retain) NSArray *sourceContentReplacedAnnotationMaps;
@property (readonly) Class superclass;
@property (retain) PDFThumbnailView *thumbnailView;
@property (retain) UIVisualEffectView *thumbnailViewHolder;
@property (retain) NSArray *thumbnailViewHolderConstraints;
@property (retain) NSLayoutConstraint *thumbnailViewHolderRevealConstraint;
@property bool viewIsTransitioningBetweenSizes;
@property PDFPage *viewTransitionPageToCenter;
@property struct CGPoint { double x1; double x2; } viewTransitionPointOnPageToCenter;
@property bool viewTransitionPreviousAutoscalingState;
@property double viewTransitionPreviousScale;

// Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_compensatingAffineTransformForPage:(id)arg1;
- (void)_createPDFView;
- (void)_loadContentForAnnotationController:(id)arg1;
- (struct CGPoint { double x1; double x2; })_maximumContentOffset;
- (struct CGSize { double x1; double x2; })_medianSizeForCurrentDocumentInPDFViewWithGetter:(id /* block */)arg1;
- (struct CGPoint { double x1; double x2; })_minimumContentOffset;
- (void)_prepareToRotate;
- (void)_recoverFromRotation;
- (void)_teardownPDFViewIfNecessary;
- (void)_uninstallOverlayAtIndex:(unsigned long long)arg1;
- (void)_updateMinMaxZoomFactor;
- (void)_updatePDFViewDisplayMode;
- (void)_updatePageNumberOverlayToPage:(unsigned long long)arg1 animate:(bool)arg2;
- (void)_updateThumbnailViewAppearance;
- (void)_updateThumbnailViewHolderConstraints;
- (void)_userChangedScrollViewMagnificationNotification:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)characterIndexesForQuadPoints:(id)arg1 onPageAtIndex:(unsigned long long)arg2;
- (void)clearHighlightableSelection;
- (bool)constraintsAreHorizontal;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentSnapshot;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2;
- (void)dealloc;
- (void)didEnterToolMode;
- (void)didExitToolMode;
- (bool)didSetup;
- (id)documentUnlockedWithPassword;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (bool)forcesPDFViewTopAlignment;
- (bool)hasHighlightableSelection;
- (void)highlight:(id)arg1;
- (id)highlightableSelectionCharacterIndexesOnPageAtIndex:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })idealContentSizeForScreenSize:(struct CGSize { double x1; double x2; })arg1 windowDecorationSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithPDFDocument:(id)arg1 andPDFReader:(id)arg2 annotationController:(id)arg3;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1;
- (void)loadDocumentWithCompletionHandler:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maxPageRectWithPageIndex:(unsigned long long)arg1;
- (id)menuItems:(id)arg1 forPage:(id)arg2;
- (bool)navigationModeHorizontal;
- (id)newContentSnapshotPDFDataIncludingAdornments:(bool)arg1 atScale:(double)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 onOverlayAtPageIndex:(unsigned long long)arg4;
- (unsigned long long)pageCount;
- (id)pageLabelView;
- (id)pdfDocument;
- (id)pdfReader;
- (id)pdfView;
- (void)pdfView:(id)arg1 didAddView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(id)arg1 willRemoveView:(id)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfViewDidChangeCurrentPage:(id)arg1;
- (void)pdfViewDidChangeCurrentSelection:(id)arg1;
- (bool)pdfViewShouldPopulateMenu:(id)arg1;
- (id)quadPointsForCharacterIndexes:(id)arg1 onPageAtIndex:(unsigned long long)arg2;
- (void)setConstraintsAreHorizontal:(bool)arg1;
- (void)setDidSetup:(bool)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setForcesPDFViewTopAlignment:(bool)arg1;
- (void)setNavigationModeHorizontal:(bool)arg1;
- (void)setPageLabelView:(id)arg1;
- (void)setPdfReader:(id)arg1;
- (void)setPdfView:(id)arg1;
- (void)setShowsThumbnailView:(bool)arg1;
- (void)setSourceContentReplacedAnnotationMaps:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (void)setThumbnailViewHolder:(id)arg1;
- (void)setThumbnailViewHolderConstraints:(id)arg1;
- (void)setThumbnailViewHolderRevealConstraint:(id)arg1;
- (void)setViewIsTransitioningBetweenSizes:(bool)arg1;
- (void)setViewTransitionPageToCenter:(id)arg1;
- (void)setViewTransitionPointOnPageToCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setViewTransitionPreviousAutoscalingState:(bool)arg1;
- (void)setViewTransitionPreviousScale:(double)arg1;
- (void)setup;
- (bool)shouldDetectFormElements;
- (bool)shouldPlaceFormElementAtPoint:(struct CGPoint { double x1; double x2; })arg1 onOverlayAtPageIndex:(unsigned long long)arg2;
- (bool)shouldPlaceProposedFormElementAtRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onOverlayAtPageIndex:(unsigned long long)arg2;
- (bool)shouldShowAnnotationsOfType:(id)arg1;
- (bool)showsThumbnailView;
- (id)sourceContentReplacedAnnotationMaps;
- (void)teardown;
- (id)thumbnailView;
- (id)thumbnailViewHolder;
- (id)thumbnailViewHolderConstraints;
- (id)thumbnailViewHolderRevealConstraint;
- (void)uninstallAllAnnotationControllerOverlays;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (bool)viewIsTransitioningBetweenSizes;
- (id)viewTransitionPageToCenter;
- (struct CGPoint { double x1; double x2; })viewTransitionPointOnPageToCenter;
- (bool)viewTransitionPreviousAutoscalingState;
- (double)viewTransitionPreviousScale;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRectInCoordinateSpace:(id)arg1;
- (void)willPlaceSingleShotAnnotation:(id)arg1 onProposedPageModelController:(id*)arg2;

// Image: /System/Library/AccessibilityBundles/MarkupUI.axbundle/MarkupUI

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (id)_axAKOverlayView;
- (void)_axHighlightPopoverDismissed;
- (void)_axHighlightPopoverPresentedForAnnotation:(id)arg1 withHighlightController:(id)arg2 pullFocus:(bool)arg3;
- (void)_installOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(unsigned long long)arg3;

@end
