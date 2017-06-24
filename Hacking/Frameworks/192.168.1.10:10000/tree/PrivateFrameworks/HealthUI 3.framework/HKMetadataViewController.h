/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMetadataViewController : HKTableViewController {
    HKHealthStore * _healthStore;
    bool  _isFetchingDocument;
    NSArray * _metadata;
    HKCDADocumentSample * _sample;
}

@property (nonatomic) bool isFetchingDocument;

- (void).cxx_destruct;
- (id)_defaultDetailValues;
- (id)cellForDocumentView;
- (id)documentImageForXMLFiles;
- (void)fetchDetailedReportWithHealthStore:(id)arg1 reportDataBlock:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2;
- (bool)isFetchingDocument;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setIsFetchingDocument:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
