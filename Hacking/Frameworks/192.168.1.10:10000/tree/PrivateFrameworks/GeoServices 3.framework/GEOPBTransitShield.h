/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitShield : PBCodable <GEOTransitShieldDataSource, NSCopying> {
    struct { 
        unsigned int shieldEnumValue : 1; 
    }  _has;
    NSString * _shieldColor;
    unsigned int  _shieldEnumValue;
    NSString * _shieldText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasShieldColor;
@property (nonatomic) bool hasShieldEnumValue;
@property (nonatomic, readonly) bool hasShieldText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *shieldColor;
@property (nonatomic, readonly) NSString *shieldColorString;
@property (nonatomic) unsigned int shieldEnumValue;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, retain) NSString *shieldText;
@property (nonatomic, readonly) long long shieldType;
@property (readonly) Class superclass;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShieldColor;
- (bool)hasShieldEnumValue;
- (bool)hasShieldText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasShieldEnumValue:(bool)arg1;
- (void)setShieldColor:(id)arg1;
- (void)setShieldEnumValue:(unsigned int)arg1;
- (void)setShieldText:(id)arg1;
- (id)shieldColor;
- (id)shieldColorString;
- (unsigned int)shieldEnumValue;
- (id)shieldText;
- (long long)shieldType;
- (void)writeTo:(id)arg1;

@end
