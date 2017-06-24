/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDFactoid : PBCodable <NSCopying> {
    NSString * _text;
    NSString * _title;
}

@property (nonatomic, readonly) bool hasText;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSString *title;

+ (bool)factoidPairAvailableForPlaceData:(id)arg1;
+ (id)factoidsForPlaceData:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasText;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)text;
- (id)title;
- (void)writeTo:(id)arg1;

@end
