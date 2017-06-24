/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDEntityFilter : PBCodable <NSCopying> {
    struct { 
        unsigned int includeSpokenNames : 1; 
    }  _has;
    bool  _includeSpokenNames;
}

@property (nonatomic) bool hasIncludeSpokenNames;
@property (nonatomic) bool includeSpokenNames;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIncludeSpokenNames;
- (unsigned long long)hash;
- (bool)includeSpokenNames;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIncludeSpokenNames:(bool)arg1;
- (void)setIncludeSpokenNames:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
