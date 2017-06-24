/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLZipItemViewController : QLDetailItemViewController {
    unsigned long long  _numberOfContainedFiles;
    QLDetailItemViewControllerState * _readyToUnzipState;
    QLDetailItemViewControllerState * _unableToUnzipState;
    QLDetailItemViewControllerState * _unzippingState;
}

- (void).cxx_destruct;
- (void)_updateZipInformation;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performAction;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)viewDidLoad;

@end
