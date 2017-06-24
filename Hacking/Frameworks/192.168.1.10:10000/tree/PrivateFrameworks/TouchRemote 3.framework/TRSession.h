/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRSession : NSObject {
    TRAnisetteDataHandler * _anisetteDataHandler;
    TRConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQ;
    id /* block */  _disconnectHandler;
    NSObject<OS_dispatch_source> * _heartbeatRequestTimer;
    NSMutableDictionary * _messageHandlerMap;
    NSObject<OS_dispatch_queue> * _messageHandlerMapQ;
    TRNearbyDevice * _nearbyDevice;
}

@property (nonatomic, retain) TRAnisetteDataHandler *anisetteDataHandler;
@property (getter=isConnected, readonly) bool connected;
@property (retain) TRConnection *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQ;
@property (nonatomic, copy) id /* block */ disconnectHandler;
@property (retain) NSObject<OS_dispatch_source> *heartbeatRequestTimer;
@property (nonatomic, retain) NSMutableDictionary *messageHandlerMap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *messageHandlerMapQ;
@property (nonatomic, retain) TRNearbyDevice *nearbyDevice;

- (void).cxx_destruct;
- (void)_handleEvent:(id)arg1;
- (void)_handleHeartbeatWithResponseHandler:(id /* block */)arg1;
- (void)_handleRequest:(id)arg1;
- (id /* block */)_handlerForEventClass:(Class)arg1;
- (id /* block */)_handlerForRequestClass:(Class)arg1;
- (id)_messageHandlerForMessageClass:(Class)arg1;
- (void)_respondToRequest:(id)arg1 withError:(id)arg2;
- (void)_sendHeartbeat;
- (void)_sendResponse:(id)arg1 forRequest:(id)arg2;
- (void)_setMessageHandler:(id)arg1 forMessageClass:(Class)arg2;
- (id)anisetteDataHandler;
- (id)connection;
- (id)connectionQ;
- (void)disconnect;
- (id /* block */)disconnectHandler;
- (id)heartbeatRequestTimer;
- (id)init;
- (id)initWithNearbyDevice:(id)arg1;
- (bool)isConnected;
- (id)messageHandlerMap;
- (id)messageHandlerMapQ;
- (id)nearbyDevice;
- (void)sendEvent:(id)arg1;
- (void)sendRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)setAnisetteDataHandler:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionQ:(id)arg1;
- (void)setDisconnectHandler:(id /* block */)arg1;
- (void)setEventHandler:(id /* block */)arg1 forEventClass:(Class)arg2;
- (void)setHeartbeatRequestTimer:(id)arg1;
- (void)setMessageHandlerMap:(id)arg1;
- (void)setMessageHandlerMapQ:(id)arg1;
- (void)setNearbyDevice:(id)arg1;
- (void)setRequestHandler:(id /* block */)arg1 forRequestClass:(Class)arg2;
- (void)startHeartbeat;

@end
