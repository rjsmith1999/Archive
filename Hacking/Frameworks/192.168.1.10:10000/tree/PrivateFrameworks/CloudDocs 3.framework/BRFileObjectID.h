/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRFileObjectID : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly) NSNumber *documentID;
@property (nonatomic, readonly) NSNumber *folderID;
@property (nonatomic, readonly) bool isDocumentID;
@property (nonatomic, readonly) bool isFolderOrAliasID;
@property (nonatomic, readonly) unsigned long long rawID;

+ (id)fileObjectIDForURL:(id)arg1 allocateDocID:(bool)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)documentID;
- (void)encodeWithCoder:(id)arg1;
- (id)folderID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isDocumentID;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFileObjectID:(id)arg1;
- (bool)isFolderOrAliasID;
- (unsigned long long)rawID;

@end
