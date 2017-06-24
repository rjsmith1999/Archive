/* Generated by RuntimeBrowser.
 */

@protocol QLPreviewingController <NSObject>

@required

- (void)loadPreviewControllerWithPreviewItem:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: QLItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (bool)canEnterFullScreen;
- (bool)canPinchToDismiss;
- (bool)canShowToolBar;
- (bool)canSwipeToDismiss;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (void)previewWillFinishAppearing;
- (<QLPrintingProtocol> *)printer;

@end
