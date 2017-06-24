/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnnotationMarker : VKAnnotationMarkerLayer <VKTrackableAnnotationPresentation> {
    bool  _animatingToCoordinate;
    <VKAnnotation> * _annotation;
    struct { 
        double latitude; 
        double longitude; 
    }  _presentationCoordinate;
    struct { 
        int from; 
        int to; 
        struct { 
            unsigned char timePeriod; 
            unsigned char overlayType; 
            unsigned char applicationState; 
            unsigned char searchResultsType; 
            bool mapHasLabels; 
        } fromDisplayStyle; 
        struct { 
            unsigned char timePeriod; 
            unsigned char overlayType; 
            unsigned char applicationState; 
            unsigned char searchResultsType; 
            bool mapHasLabels; 
        } toDisplayStyle; 
        float fraction; 
    }  _styleTransitionState;
    bool  _tracking;
}

@property (nonatomic) bool animatingToCoordinate;
@property (nonatomic, retain) <VKAnnotation> *annotation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { double x1; double x2; } presentationCoordinate;
@property (nonatomic) struct { int x1; int x2; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; bool x_3_1_5; } x3; struct { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned char x_4_1_3; unsigned char x_4_1_4; bool x_4_1_5; } x4; float x5; } styleTransitionState;
@property (readonly) Class superclass;
@property (getter=isTracking, nonatomic) bool tracking;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

- (bool)animatingToCoordinate;
- (id)annotation;
- (id)init;
- (id)initWithAnnotation:(id)arg1;
- (bool)isTracking;
- (struct { double x1; double x2; })presentationCoordinate;
- (void)setAnimatingToCoordinate:(bool)arg1;
- (void)setAnnotation:(id)arg1;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setStyleTransitionState:(struct { int x1; int x2; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; bool x_3_1_5; } x3; struct { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned char x_4_1_3; unsigned char x_4_1_4; bool x_4_1_5; } x4; float x5; })arg1;
- (void)setTracking:(bool)arg1;
- (struct { int x1; int x2; struct { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; bool x_3_1_5; } x3; struct { unsigned char x_4_1_1; unsigned char x_4_1_2; unsigned char x_4_1_3; unsigned char x_4_1_4; bool x_4_1_5; } x4; float x5; })styleTransitionState;

// Image: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)_accessibilityIsAlternateRouteAnnotationMarker;
- (bool)_accessibilityIsVisibleByCompleteHitTest;
- (id)_accessibilityMapView;
- (struct CGSize { double x1; double x2; })_accessibilityMarkerSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityPath;
- (void)dealloc;
- (bool)isAccessibilityElement;

@end
