/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCameraItemProvider : HFItemProvider {
    NSMutableSet * _cameraItems;
    id /* block */  _filter;
}

@property (nonatomic, retain) NSMutableSet *cameraItems;
@property (nonatomic, copy) id /* block */ filter;

- (void).cxx_destruct;
- (id)cameraItems;
- (id /* block */)filter;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setCameraItems:(id)arg1;
- (void)setFilter:(id /* block */)arg1;

@end
