/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSpatialLookupParameters : NSObject {
    NSArray * _categories;
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    double  _radius;
}

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic, readonly) double radius;

- (id)categories;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2 categories:(id)arg3;
- (double)radius;

@end
