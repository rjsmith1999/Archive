/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDServiceController : NSObject {
    NSMutableDictionary * _services;
}

@property (nonatomic, readonly) NSArray *allServices;

+ (id)sharedInstance;

- (id)allServices;
- (void)dealloc;
- (id)init;
- (void)registerSessionClassWithBundle:(id)arg1;
- (id)serviceWithName:(id)arg1;

@end
