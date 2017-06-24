/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDJobManagerClientConnection : NSObject {
    NSXPCConnection * _connection;
    <ASDJobManagerClient> * _delegate;
    bool  _invalidated;
    NSLock * _lock;
}

- (void).cxx_destruct;
- (void)_call:(id /* block */)arg1;
- (void)dealloc;
- (void)didChangeJobs:(id)arg1;
- (void)didCompleteJobs:(id)arg1;
- (void)didUpdateProgress:(id)arg1;
- (void)didUpdateStates:(id)arg1;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;
- (void)invalidate;

@end
