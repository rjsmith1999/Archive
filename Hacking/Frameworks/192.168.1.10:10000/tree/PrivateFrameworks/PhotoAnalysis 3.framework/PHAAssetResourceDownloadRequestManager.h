/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAAssetResourceDownloadRequestManager : NSObject <PHADownloadRequestManagement> {
    unsigned long long  _allowedDownloadCount;
    NSDate * _dateToRequestPermissionAgain;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _requestCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long requestCount;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)requestCount;
- (void)requestPermissionToDownloadWithPhotoLibrary:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setRequestCount:(unsigned long long)arg1;

@end
