/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSViewServiceRequestOperation : VSAsyncOperation <VSViewServiceHostViewControllerDelegate> {
    <VSViewServiceRequestOperationDelegate> * _delegate;
    bool  _isPresentingViewController;
    NSUUID * _requestID;
    VSFailable * _result;
    VSViewServiceHostViewController * _viewServiceHostViewController;
    VSViewServiceRequest * _viewServiceRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSViewServiceRequestOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *requestID;
@property (nonatomic, retain) VSFailable *result;
@property (readonly) Class superclass;
@property (nonatomic, retain) VSViewServiceHostViewController *viewServiceHostViewController;
@property (nonatomic, readonly, copy) VSViewServiceRequest *viewServiceRequest;

- (void).cxx_destruct;
- (void)_dismissViewController;
- (void)_dismissViewControllerIfRequired;
- (void)_presentViewController;
- (void)cancel;
- (id)delegate;
- (void)dismissViewServiceHostViewController:(id)arg1;
- (void)executionDidBegin;
- (id)init;
- (id)initWithViewServiceRequest:(id)arg1;
- (void)presentViewServiceHostViewController:(id)arg1;
- (id)requestID;
- (id)result;
- (void)setDelegate:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setViewServiceHostViewController:(id)arg1;
- (id)viewServiceHostViewController;
- (void)viewServiceHostViewController:(id)arg1 didCancelRequest:(id)arg2;
- (void)viewServiceHostViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;
- (void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
- (void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;
- (id)viewServiceRequest;

@end
