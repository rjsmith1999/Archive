/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitOptions : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _avoidedModes;
    GEOFareOptions * _fareOptions;
    struct { 
        unsigned int prioritization : 1; 
    }  _has;
    int  _prioritization;
}

@property (nonatomic, readonly) int*avoidedModes;
@property (nonatomic, readonly) unsigned long long avoidedModesCount;
@property (nonatomic, retain) GEOFareOptions *fareOptions;
@property (nonatomic, readonly) bool hasFareOptions;
@property (nonatomic) bool hasPrioritization;
@property (nonatomic) int prioritization;

- (int)StringAsAvoidedModes:(id)arg1;
- (int)StringAsPrioritization:(id)arg1;
- (void)addAvoidedMode:(int)arg1;
- (int)avoidedModeAtIndex:(unsigned long long)arg1;
- (int*)avoidedModes;
- (id)avoidedModesAsString:(int)arg1;
- (unsigned long long)avoidedModesCount;
- (void)clearAvoidedModes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fareOptions;
- (bool)hasFareOptions;
- (bool)hasPrioritization;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)prioritization;
- (id)prioritizationAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAvoidedModes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setFareOptions:(id)arg1;
- (void)setHasPrioritization:(bool)arg1;
- (void)setPrioritization:(int)arg1;
- (void)writeTo:(id)arg1;

@end
