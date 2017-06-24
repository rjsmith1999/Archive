/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKUserLocation : NSObject <MKAnnotation> {
    double  _expectedCoordinateUpdateInterval;
    double  _expectedHeadingUpdateInterval;
    MKUserLocationInternal * _internal;
}

@property (nonatomic, readonly) double accuracy;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double expectedCoordinateUpdateInterval;
@property (nonatomic) double expectedHeadingUpdateInterval;
@property (nonatomic, retain) CLLocation *fixedLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLHeading *heading;
@property (nonatomic, readonly) double headingDegrees;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) CLLocation *predictedLocation;
@property (nonatomic, readonly) NSString *shortDescription;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic, copy) NSString *title;
@property (getter=isUpdating, nonatomic) bool updating;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (void)_setAnnotationClass:(Class)arg1;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)title;

- (void).cxx_destruct;
- (void)_updateCoordinate;
- (double)accuracy;
- (id)annotation;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (double)course;
- (void)dealloc;
- (double)expectedCoordinateUpdateInterval;
- (double)expectedHeadingUpdateInterval;
- (id)fixedLocation;
- (id)heading;
- (double)headingDegrees;
- (id)init;
- (bool)isEqualToLocation:(id)arg1;
- (bool)isUpdating;
- (id)location;
- (id)predictedLocation;
- (void)reset;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setCourse:(double)arg1;
- (void)setExpectedCoordinateUpdateInterval:(double)arg1;
- (void)setExpectedHeadingUpdateInterval:(double)arg1;
- (void)setFixedLocation:(id)arg1;
- (void)setHeading:(id)arg1;
- (void)setPredictedLocation:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpdating:(bool)arg1;
- (id)shortDescription;
- (id)subtitle;
- (double)timestamp;
- (id)title;

// Image: /System/Library/AccessibilityBundles/MapKitFramework.axbundle/MapKitFramework

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLocality;
- (void)setLocation:(id)arg1;

@end
