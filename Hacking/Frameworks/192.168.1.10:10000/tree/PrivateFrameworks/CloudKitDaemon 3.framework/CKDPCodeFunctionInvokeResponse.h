/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCodeFunctionInvokeResponse : PBCodable <NSCopying> {
    NSData * _serializedResult;
}

@property (nonatomic, readonly) bool hasSerializedResult;
@property (nonatomic, retain) NSData *serializedResult;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSerializedResult;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serializedResult;
- (void)setSerializedResult:(id)arg1;
- (void)writeTo:(id)arg1;

@end
