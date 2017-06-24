/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKProcessPoolConfiguration : NSObject <NSCopying, WKObject> {
    struct ObjectStorage<API::ProcessPoolConfiguration> { 
        struct type { 
            unsigned char __lx[176]; 
        } data; 
    }  _processPoolConfiguration;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (nonatomic, copy) NSArray *alwaysRevalidatedURLSchemes;
@property (nonatomic, copy) NSArray *cachePartitionedURLSchemes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long diskCacheSizeOverride;
@property (nonatomic) bool diskCacheSpeculativeValidationEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreSynchronousMessagingTimeoutsForTesting;
@property (nonatomic, copy) NSURL *injectedBundleURL;
@property (nonatomic) unsigned long long maximumProcessCount;
@property (readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id)alwaysRevalidatedURLSchemes;
- (id)cachePartitionedURLSchemes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (long long)diskCacheSizeOverride;
- (bool)diskCacheSpeculativeValidationEnabled;
- (bool)ignoreSynchronousMessagingTimeoutsForTesting;
- (id)init;
- (id)injectedBundleURL;
- (unsigned long long)maximumProcessCount;
- (void)setAlwaysRevalidatedURLSchemes:(id)arg1;
- (void)setCachePartitionedURLSchemes:(id)arg1;
- (void)setDiskCacheSizeOverride:(long long)arg1;
- (void)setDiskCacheSpeculativeValidationEnabled:(bool)arg1;
- (void)setIgnoreSynchronousMessagingTimeoutsForTesting:(bool)arg1;
- (void)setInjectedBundleURL:(id)arg1;
- (void)setMaximumProcessCount:(unsigned long long)arg1;

@end
