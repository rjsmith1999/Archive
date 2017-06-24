/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPRecordIdentifier : PBCodable <NSCopying> {
    FCCKPIdentifier * _value;
    FCCKPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, readonly) bool hasZoneIdentifier;
@property (nonatomic, retain) FCCKPIdentifier *value;
@property (nonatomic, retain) FCCKPRecordZoneIdentifier *zoneIdentifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasValue;
- (bool)hasZoneIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end
