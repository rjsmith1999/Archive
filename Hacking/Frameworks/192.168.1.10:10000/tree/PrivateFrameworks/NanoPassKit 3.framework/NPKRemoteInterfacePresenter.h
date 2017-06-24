/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKRemoteInterfacePresenter : NSObject {
    <NPKRemoteInterfacePresenterDelegate> * _delegate;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) <NPKRemoteInterfacePresenterDelegate> *delegate;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (bool)canPresentPaymentInterface;
- (id)delegate;
- (id)init;
- (void)presentContinuityPaymentInterfaceWithRemotePaymentRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostApplicationName:(id)arg2 hostBundleIdentifier:(id)arg3 hostProcessIdentifier:(int)arg4 hostIdentifier:(id)arg5 orientation:(id)arg6 completion:(id /* block */)arg7;
- (void)setDelegate:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
