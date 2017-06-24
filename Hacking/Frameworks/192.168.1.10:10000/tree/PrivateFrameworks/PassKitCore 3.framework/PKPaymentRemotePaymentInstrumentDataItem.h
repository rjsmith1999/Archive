/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRemotePaymentInstrumentDataItem : PKPaymentDataItem

@property (nonatomic, readonly) CNContact *billingAddress;
@property (nonatomic, readonly) PKPaymentApplication *paymentApplication;
@property (nonatomic, readonly) PKRemoteDevice *remoteDevice;
@property (nonatomic, readonly) PKRemotePaymentInstrument *remotePaymentInstrument;
@property (nonatomic, readonly) bool requiresBillingAddress;

+ (long long)dataType;

- (id)billingAddress;
- (bool)isValidWithError:(id*)arg1;
- (id)paymentApplication;
- (id)remoteDevice;
- (id)remotePaymentInstrument;
- (bool)requiresBillingAddress;

@end
