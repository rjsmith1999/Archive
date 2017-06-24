/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPayloadNotSpecificEnough : PBCodable <NSCopying> {
    NSMutableArray * _refinementItems;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *refinementItems;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)refinementItemsType;

- (void).cxx_destruct;
- (void)addRefinementItems:(id)arg1;
- (void)clearRefinementItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)refinementItems;
- (id)refinementItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)refinementItemsCount;
- (void)setRefinementItems:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
