/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPRemoteDeviceSecretValidator : NSObject {
    <CDPRemoteDeviceSecretValidatorProtocol> * _validator;
}

- (void).cxx_destruct;
- (void)_executeSyncOnMainThreadIfNeeded:(id /* block */)arg1;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)arg1;
- (void)cancelApproveFromAnotherDevice;
- (void)cancelValidationWithError:(id)arg1;
- (id)initWithContext:(id)arg1 validator:(id)arg2;
- (void)resetAccountCDPState;
- (unsigned long long)supportedEscapeOfferMask;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)arg1;
- (void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;

@end
