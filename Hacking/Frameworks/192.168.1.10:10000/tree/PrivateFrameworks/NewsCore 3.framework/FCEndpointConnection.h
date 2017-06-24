/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCEndpointConnection : NSObject <FCAppConfigurationObserving, NSURLSessionDelegate> {
    NSURL * _baseURL;
    <FCContentContext> * _context;
    FCAsyncSerialQueue * _requestSerialQueue;
    NSURLSession * _session;
}

@property (copy) NSURL *baseURL;
@property (nonatomic, retain) <FCContentContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCAsyncSerialQueue *requestSerialQueue;
@property (nonatomic, retain) NSURLSession *session;
@property (readonly) Class superclass;

+ (id)_errorByUpdatingRetryStatusForError:(id)arg1;
+ (id)_errorForStatus:(long long)arg1 url:(id)arg2;

- (void).cxx_destruct;
- (id)baseURL;
- (id)context;
- (id)initWithContext:(id)arg1;
- (void)performHTTPRequestWithURL:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 callbackQueue:(id)arg6 completion:(id /* block */)arg7;
- (id)requestSerialQueue;
- (id)session;
- (void)setBaseURL:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setRequestSerialQueue:(id)arg1;
- (void)setSession:(id)arg1;

@end
