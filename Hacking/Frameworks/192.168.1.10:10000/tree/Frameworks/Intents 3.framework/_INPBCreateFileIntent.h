/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCreateFileIntent : PBCodable <NSCopying> {
    _INPBString * _destinationName;
    int  _destinationType;
    _INPBString * _entityName;
    int  _entityType;
    struct { 
        unsigned int destinationType : 1; 
        unsigned int entityType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBString *destinationName;
@property (nonatomic) int destinationType;
@property (nonatomic, retain) _INPBString *entityName;
@property (nonatomic) int entityType;
@property (nonatomic, readonly) bool hasDestinationName;
@property (nonatomic) bool hasDestinationType;
@property (nonatomic, readonly) bool hasEntityName;
@property (nonatomic) bool hasEntityType;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationName;
- (int)destinationType;
- (id)dictionaryRepresentation;
- (id)entityName;
- (int)entityType;
- (bool)hasDestinationName;
- (bool)hasDestinationType;
- (bool)hasEntityName;
- (bool)hasEntityType;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setEntityName:(id)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasDestinationType:(bool)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
