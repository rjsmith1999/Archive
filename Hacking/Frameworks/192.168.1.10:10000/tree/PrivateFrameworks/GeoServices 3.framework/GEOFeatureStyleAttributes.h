/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOFeatureStyleAttributes : NSObject <NSCopying, NSSecureCoding> {
    GEOFeatureStyleAttributes * _sharedAttributes;
    unsigned char  countAttrs;
    unsigned char  countExtAttrs;
    struct { unsigned int x1; unsigned long long x2; } * extAttrs;
    BOOL  featureType;
    struct { unsigned int x1; int x2; } * v;
}

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)drivingSide;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)featureType;
- (bool)hasAttributes;
- (bool)hasDrivingSide;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAttributes:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGEOStyleAttributes:(id)arg1;
- (id)initWithPlaceDataStyleAttributes:(id)arg1;
- (id)initWithSharedStyleAttributes:(id)arg1 extAttributes:(const struct { unsigned int x1; unsigned long long x2; }*)arg2 extAttributeCount:(unsigned char)arg3;
- (id)initWithStyleAttributes:(id)arg1;
- (bool)isBorder;
- (bool)isBridge;
- (bool)isDrivable;
- (bool)isEqual:(id)arg1;
- (bool)isFreeway;
- (bool)isRailway;
- (bool)isRamp;
- (bool)isSuperset:(id)arg1;
- (bool)isTunnel;
- (bool)isWalkable;
- (unsigned int)lineType;
- (int)rampDirection;
- (int)rampType;
- (void)removeKey:(unsigned int)arg1;
- (void)replaceAttributes:(const struct { unsigned int x1; int x2; }*)arg1 count:(unsigned int)arg2;
- (void)setExtAttributes:(const struct { unsigned int x1; unsigned long long x2; }*)arg1 count:(unsigned int)arg2;
- (bool)shouldSuppress3DBuildingStrokes;
- (void)sort;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)markerStyleAttributes;
+ (id)styleAttributesForCalloutWithAttributes:(id)arg1;
+ (id)styleAttributesForTrafficIncidentType:(long long)arg1;

@end
