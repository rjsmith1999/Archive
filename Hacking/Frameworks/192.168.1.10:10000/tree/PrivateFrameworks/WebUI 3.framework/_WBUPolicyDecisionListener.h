/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface _WBUPolicyDecisionListener : NSObject <WebPolicyDecisionListener> {
    NSDictionary * _formMetadata;
    WebFrame * _frame;
    long long  _navigationType;
    <WebPolicyDecisionListener> * _originalListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)download;
- (void)ignore;
- (id)initWithFrame:(id)arg1 navigationType:(long long)arg2 formMetadata:(id)arg3 originalListener:(id)arg4;
- (void)use;

@end
