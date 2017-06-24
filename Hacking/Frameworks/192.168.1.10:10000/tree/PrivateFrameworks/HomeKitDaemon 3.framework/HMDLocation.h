/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLocation : NSObject <CLLocationManagerDelegate> {
    int  _authStatus;
    bool  _beingConfigured;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    int  _locationAuthorized;
    NSHashTable * _locationCallbacks;
    CLLocationManager * _locationManager;
    HMFMessageDispatcher * _msgDispatcher;
    NSMapTable * _pendingRegionCallbacks;
    NSMapTable * _pendingRegionMonitoringRequests;
    NSMapTable * _regionStateCallbacks;
}

@property (nonatomic) int authStatus;
@property (nonatomic) bool beingConfigured;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) int locationAuthorized;
@property (nonatomic, retain) NSHashTable *locationCallbacks;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSMapTable *pendingRegionCallbacks;
@property (nonatomic, retain) NSMapTable *pendingRegionMonitoringRequests;
@property (nonatomic, retain) NSMapTable *regionStateCallbacks;
@property (readonly) Class superclass;

+ (id)_getAlmanacWithLocation:(id)arg1;
+ (id)_getAlmanacWithLocation:(id)arg1 date:(id)arg2;
+ (id)findEvent:(id)arg1 withGeo:(id)arg2;
+ (id)nextSunriseTimeForLocation:(id)arg1 date:(id)arg2;
+ (id)nextSunsetTimeForLocation:(id)arg1 date:(id)arg2;
+ (id)sharedManager;
+ (id)sunriseTimeForLocation:(id)arg1;
+ (id)sunsetTimeForLocation:(id)arg1;
+ (void)timeZoneForCLLocationAsync:(id)arg1 withCompletion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_callDelegate:(id)arg1 withLocation:(id)arg2;
- (id)_delegateforRegion:(id)arg1;
- (void)_updateEntryForRegion:(id)arg1;
- (void)_updateExitForRegion:(id)arg1;
- (void)_updateRegionState:(long long)arg1 forRegion:(id)arg2;
- (void)_updateWithLocation:(id)arg1;
- (void)_updateWithLocationAutorizationStatus:(int)arg1;
- (int)authStatus;
- (bool)beingConfigured;
- (void)beingConfigured:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)deregisterForRegionUpdate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)extractLocationWithDelegate:(id)arg1;
- (id)handlerQueue;
- (id)init;
- (int)locationAuthorized;
- (id)locationCallbacks;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)msgDispatcher;
- (id)pendingRegionCallbacks;
- (id)pendingRegionMonitoringRequests;
- (id)regionStateCallbacks;
- (void)registerForRegionUpdate:(id)arg1 withDelegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAuthStatus:(int)arg1;
- (void)setBeingConfigured:(bool)arg1;
- (void)setHandlerQueue:(id)arg1;
- (void)setLocationAuthorized:(int)arg1;
- (void)setLocationCallbacks:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPendingRegionCallbacks:(id)arg1;
- (void)setPendingRegionMonitoringRequests:(id)arg1;
- (void)setRegionStateCallbacks:(id)arg1;

@end
