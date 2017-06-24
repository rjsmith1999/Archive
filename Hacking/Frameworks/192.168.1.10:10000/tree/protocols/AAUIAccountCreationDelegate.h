/* Generated by RuntimeBrowser.
 */

@protocol AAUIAccountCreationDelegate

@required

- (void)accountCreationDidFailWithError:(NSError *)arg1;
- (void)accountCreationDidSucceedWithAppleID:(NSString *)arg1 password:(NSString *)arg2 emailChoice:(NSString *)arg3;
- (void)accountCreationWasCanceled;
- (void)accountCreationWillBeginWithAppleID:(NSString *)arg1 password:(NSString *)arg2;

@end
