/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIApplicationSceneSettings : FBSSceneSettings <UIApplicationSceneSettings>

@property (nonatomic, readonly) bool canShowAlerts;
@property (nonatomic, readonly) unsigned long long deactivationReasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool deviceOrientationEventsEnabled;
@property (getter=isEffectivelyBackgrounded, nonatomic, readonly) bool effectivelyBackgrounded;
@property (nonatomic, readonly) bool forcedStatusBarForegroundTransparent;
@property (nonatomic, readonly, retain) NSNumber *forcedStatusBarHidden;
@property (nonatomic, readonly, retain) NSNumber *forcedStatusBarStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool idleModeEnabled;
@property (nonatomic, readonly) int statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool underLock;
@property (nonatomic, readonly) long long userInterfaceStyle;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (bool)canShowAlerts;
- (unsigned long long)deactivationReasons;
- (bool)deviceOrientationEventsEnabled;
- (bool)forcedStatusBarForegroundTransparent;
- (id)forcedStatusBarHidden;
- (id)forcedStatusBarStyle;
- (bool)idleModeEnabled;
- (bool)isUISubclass;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)statusBarStyleOverridesToSuppress;
- (bool)underLock;
- (long long)userInterfaceStyle;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (bool)isEffectivelyBackgrounded;

@end
