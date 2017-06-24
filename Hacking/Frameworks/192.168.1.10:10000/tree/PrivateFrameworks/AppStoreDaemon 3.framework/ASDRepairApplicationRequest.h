/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDRepairApplicationRequest : ASDRequest <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSXPCConnection * _connection;
    ASDRepairApplicationRequestOptions * _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_sendRequestWithOptions:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_setupConnection;
- (id)initWithOptions:(id)arg1;
- (void)sendRequestWithCompletionBlock:(id /* block */)arg1;

@end
