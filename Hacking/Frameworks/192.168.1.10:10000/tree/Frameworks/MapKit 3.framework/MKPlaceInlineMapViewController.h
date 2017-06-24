/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceInlineMapViewController : UIViewController {
    bool  _bottomHairlineHidden;
    _MKPlaceInlineMapContentView * _contentView;
    MKMapItem * _mapItem;
    _MKPlaceViewController * _owner;
    MKMapItem * _updatingInlineMapItem;
}

@property (getter=isBottomHairlineHidden, nonatomic) bool bottomHairlineHidden;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) _MKPlaceViewController *owner;
@property (nonatomic, readonly) UIImage *snapshot;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void).cxx_destruct;
- (void)_addAnnotationToSnapshot:(id)arg1 mapItem:(id)arg2;
- (void)_handleTapOnMap;
- (void)_launchMaps;
- (void)_updateInlineMapWithRefinedMapItem:(id)arg1;
- (void)_updateSnapshotImage:(id)arg1 mapItem:(id)arg2;
- (bool)isBottomHairlineHidden;
- (void)loadView;
- (id)mapItem;
- (id)owner;
- (void)setBottomHairlineHidden:(bool)arg1;
- (void)setMapItem:(id)arg1;
- (void)setOwner:(id)arg1;
- (id)snapshot;
- (void)updateInlineMapWithRefinedMapItem:(id)arg1;
- (void)viewDidLoad;

// Image: /System/Library/AccessibilityBundles/MapKitFramework.axbundle/MapKitFramework

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axUpdateMapContentView;
- (void)_updateMap;

@end
