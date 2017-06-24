/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMVendorModelCollection : NSObject {
    HMVendorModelEntry * _defaultEntry;
    NSMutableArray * _vendorModelCollection;
}

@property (nonatomic, retain) HMVendorModelEntry *defaultEntry;
@property (nonatomic, readonly) NSMutableArray *vendorModelCollection;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (id)defaultEntry;
- (id)description;
- (id)init;
- (id)lookupModel:(id)arg1;
- (void)setDefaultEntry:(id)arg1;
- (id)vendorModelCollection;

@end
