/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSURemoteDefaults : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_source> * _updateTimer;
}

@property (nonatomic, readonly) NSURL *downloadableContentURL;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)sharedDefaults;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)URLRequest;
- (void)checkForUpdate;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)init;
- (id)initInternal;
- (id)objectForKey:(id)arg1;
- (void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)registerDefaults;
- (id)stringForKey:(id)arg1;
- (double)timeIntervalUntilNextUpdate;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (id)downloadableContentURL;

@end