/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareRetrieveResponse : PBCodable <NSCopying> {
    NSMutableArray * _shares;
}

@property (nonatomic, retain) NSMutableArray *shares;

+ (Class)shareType;

- (void).cxx_destruct;
- (void)addShare:(id)arg1;
- (void)clearShares;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setShares:(id)arg1;
- (id)shareAtIndex:(unsigned long long)arg1;
- (id)shares;
- (unsigned long long)sharesCount;
- (void)writeTo:(id)arg1;

@end
