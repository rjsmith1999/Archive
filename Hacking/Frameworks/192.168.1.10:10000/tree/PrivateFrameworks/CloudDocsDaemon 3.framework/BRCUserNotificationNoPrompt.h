/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUserNotificationNoPrompt : NSObject <BRCUserNotifier>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)close;
- (void)moveToFront;
- (void)showErrorDeviceOfflineForShareURL:(id)arg1 reply:(id /* block */)arg2;
- (void)showErrorInstallNativeAppForShareMetadata:(id)arg1 reply:(id /* block */)arg2;
- (void)showErrorItemUnavailableOrAccessRestrictedForShareURL:(id)arg1 reply:(id /* block */)arg2;
- (void)showErrorNativeAppDisabledByProfileForShareMetadata:(id)arg1 reply:(id /* block */)arg2;
- (void)showErrorParticipantLimitReachedForShareURL:(id)arg1 reply:(id /* block */)arg2;
- (void)showErrorReasonUnknownForShareURL:(id)arg1 reply:(id /* block */)arg2;
- (void)showErrorServerNotReachableForShareURL:(id)arg1 reply:(id /* block */)arg2;
- (void)showErrorSignInToiCloudForShareMetadata:(id)arg1 reply:(id /* block */)arg2;
- (void)showErrorTurnOniCloudDriveForShareMetadata:(id)arg1 reply:(id /* block */)arg2;
- (void)showErroriCloudDriveAppNotVisibleForShareURL:(id)arg1 reply:(id /* block */)arg2;
- (void)showJoinDialogForShareMetadata:(id)arg1 session:(id)arg2 reply:(id /* block */)arg3;

@end
