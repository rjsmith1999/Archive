/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFDocumentView : UIView <PDFDocumentPageChangeDelegate> {
    PDFDocumentViewPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit

- (void).cxx_destruct;
- (void)_callPageVisibilityDelegateMethod:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned long long)arg3;
- (id)_createPageView:(id)arg1;
- (void)_shiftPagesAtIndex:(unsigned long long)arg1 downwards:(bool)arg2;
- (void)_updateVisibilityDelegateForVisiblePageView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)changedBoundsForBoxNotification:(id)arg1;
- (void)dealloc;
- (void)didInsertPage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didRemovePage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didSwapPage:(id)arg1 atIndex:(unsigned long long)arg2 forPage:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)document;
- (struct CGSize { double x1; double x2; })documentViewSize;
- (void)forceUpdateWithDuration:(double)arg1;
- (void)forceWebKitMainThread:(bool)arg1;
- (id)getPDFView;
- (id)init;
- (double)lastLayoutDuration;
- (void)layoutDocumentView;
- (void)magnificationDidChange;
- (void)magnificationWillChange;
- (id)pageViewForPageAtIndex:(unsigned long long)arg1;
- (id)pageViews;
- (void)previewRotateShiftPages:(double)arg1;
- (void)setDisplayBox:(long long)arg1;
- (void)setDocument:(id)arg1;
- (void)setEnablePageShadows:(bool)arg1;
- (void)setPageViewVisibilityDelegate:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)setShouldAntiAlias:(bool)arg1;
- (void)setWillForceUpdateWithDuration;
- (void)updateVisibilityWithWaitDuration:(double)arg1;

// Image: /System/Library/AccessibilityBundles/PDFKit.axbundle/PDFKit

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilitySetPDFViewOnPageViews;
- (void)updateVisibility;

@end