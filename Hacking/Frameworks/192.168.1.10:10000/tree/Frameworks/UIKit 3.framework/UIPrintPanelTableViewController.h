/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintPanelTableViewController : UITableViewController <UITextFieldDelegate> {
    UIPrinterBrowserViewController * _browserController;
    bool  _contactingPrinter;
    long long  _copiesRow;
    long long  _duplexRow;
    long long  _grayscaleRow;
    long long  _jobAccountIDRow;
    long long  _paperRow;
    long long  _previousPageIndexInCenterOfPreview;
    UIPrintPanelViewController * _printPanelViewController;
    UIPrintPreviewViewController * _printPreviewViewController;
    bool  _printerWarningWasShown;
    long long  _punchRow;
    long long  _rangeRow;
    bool  _settingsExpanded;
    long long  _settingsRow;
    long long  _settingsSection;
    long long  _stapleRow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (void)_update:(bool)arg1;
- (void)_updateSize;
- (bool)accessibilityPerformMagicTap;
- (void)cancelButtonPressed:(id)arg1;
- (void)clearPrintPanelViewController;
- (void)dismissKeyboardIfNeccessary;
- (double)heightOfPreviewView;
- (id)initWithPrintPanelViewController:(id)arg1;
- (id)jobAccountTextField;
- (id)keyCommands;
- (void)moreButtonPushed:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pdfFileURL;
- (void)printButtonPressed:(id)arg1;
- (void)promptForJobAccountID;
- (void)selectJobAccountID;
- (void)setPdfFileURL:(id)arg1 destinationPaper:(id)arg2 pdfPassword:(id)arg3;
- (void)setShowContactingPrinter:(bool)arg1;
- (void)setShowPreviewGenerating:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldEnablePrintButton;
- (void)showCancelButton;
- (void)showContacting;
- (void)showPreviewGenerating;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)textForSettings;
- (void)updateDuplex:(id)arg1;
- (void)updateGrayscale:(id)arg1;
- (void)updateJobAccountID:(id)arg1;
- (void)updatePageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)updatePageRangeText;
- (void)updatePunch:(id)arg1;
- (void)updateSettingsSummaryText;
- (void)updateStaple:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

+ (Class)safeCategoryBaseClass;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)updateCopies:(id)arg1;

@end
