/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaSocialAuthor : NSObject <NSCopying> {
    NSString * _authorType;
    NSString * _dsid;
    NSString * _identifier;
    NSString * _name;
    NSArray * _permissions;
    NSDictionary * _storePlatformData;
    NSURL * _thumbnailImageURL;
}

@property (nonatomic, copy) NSString *authorType;
@property (nonatomic, copy) NSString *dsid;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *permissions;
@property (nonatomic, copy) NSDictionary *storePlatformData;
@property (nonatomic, copy) NSURL *thumbnailImageURL;

- (void).cxx_destruct;
- (id)authorType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dsid;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAuthorDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)permissions;
- (void)setAuthorType:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPermissions:(id)arg1;
- (void)setStorePlatformData:(id)arg1;
- (void)setThumbnailImageURL:(id)arg1;
- (id)storePlatformData;
- (id)thumbnailImageURL;

@end
