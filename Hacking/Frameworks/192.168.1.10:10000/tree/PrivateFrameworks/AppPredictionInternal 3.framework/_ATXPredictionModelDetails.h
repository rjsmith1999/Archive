/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXPredictionModelDetails : NSObject <NSSecureCoding> {
    NSString * _abGroup;
    long long  _assetCompatibilityVersion;
    long long  _assetResourceVersion;
    long long  _assetVersion;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic) long long assetCompatibilityVersion;
@property (nonatomic) long long assetResourceVersion;
@property (nonatomic) long long assetVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)abGroup;
- (long long)assetCompatibilityVersion;
- (long long)assetResourceVersion;
- (long long)assetVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAssetResourceVersion:(long long)arg1 assetCompatibilityVersion:(long long)arg2 assetVersion:(long long)arg3 abGroup:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setAssetCompatibilityVersion:(long long)arg1;
- (void)setAssetResourceVersion:(long long)arg1;
- (void)setAssetVersion:(long long)arg1;

@end
