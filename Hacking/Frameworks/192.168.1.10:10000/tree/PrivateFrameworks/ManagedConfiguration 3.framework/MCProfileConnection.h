/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCProfileConnection : NSObject <MCProfileConnectionXPCProtocol> {
    <MCInteractionDelegate> * _interactionDelegate;
    NSObject<OS_dispatch_queue> * _notificationSyncQueue;
    NSMutableArray * _notificationTokens;
    struct __CFBag { } * _observers;
    NSData * _originalProfileData;
    NSDictionary * _preflightResponse;
    NSXPCConnection * _publicXPCConnection;
    NSObject<OS_dispatch_queue> * _publicXPCConnectionSyncQueue;
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcConnectionSyncQueue;
    id /* block */  passcodeReplyBlock;
    id /* block */  showWarningsReplyBlock;
    id /* block */  userInputReplyBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCConnection *publicXPCConnection;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)profileInstallationErrorWithUnderlyingError:(id)arg1;
+ (id)sharedConnection;

- (void).cxx_destruct;
- (void)__checkForProfiledCrash;
- (void)_appWhitelistDidChange:(id)arg1;
- (void)_applyToObservers:(id /* block */)arg1;
- (bool)_areProfilesRestrictingSettings:(id)arg1 outMDMName:(id*)arg2 outExchangeName:(id*)arg3 outExchangeCount:(long long*)arg4 outProfileName:(id*)arg5 outProfileCount:(long long*)arg6;
- (void)_createAndResumePublicXPCConnection;
- (void)_createAndResumeXPCConnection;
- (void)_defaultsDidChange;
- (void)_detectProfiledCrashes;
- (void)_effectiveSettingsDidChange:(id)arg1;
- (int)_getPasscodeComplianceWarningExpiryDate:(id)arg1 lastLockDate:(id)arg2 outLocalizedTitle:(id*)arg3 outLocalizedMessage:(id*)arg4;
- (id)_init;
- (void)_internalDefaultsDidChange;
- (id)_localizedRestricitionSourceDescriptionFromMDMName:(id)arg1 exchangeName:(id)arg2 exchangeCount:(long long)arg3 profileName:(id)arg4 profileCount:(long long)arg5;
- (bool)_openSensitiveURLString:(id)arg1 unlock:(bool)arg2;
- (void)_passcodeDidChange;
- (void)_passcodePolicyDidChange;
- (void)_profileListDidChange;
- (void)_queueCreateAndResumePublicXPCConnection;
- (void)_queueCreateAndResumeXPCConnection;
- (id)_queueDataForAcceptance:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(bool)arg4 outError:(id*)arg5;
- (void)_restrictionDidChange;
- (id)_settingsLockedDownByRestrictions:(id)arg1;
- (id)_sharedDeviceConfiguration;
- (id)acceptedFileExtensions;
- (id)acceptedMIMETypes;
- (id)activationLockBypassHash;
- (id)activationLockBypassKey;
- (id)activationLockBypassKeyCreateNewIfNeeded:(bool)arg1;
- (bool)activationRecordIndicatesCloudConfigurationIsAvailable;
- (void)addObserver:(id)arg1;
- (void)addUserBookmark:(id)arg1;
- (void)addWebContentFilterAutoPermittedURLString:(id)arg1;
- (id)allClientUUIDsForClientType:(id)arg1;
- (id)allowedAppBundleIDsForBidirectionalDataMovementAfterApplyingFilterToBundleIDs:(id)arg1 localAppBundleID:(id)arg2 localAccountIsManaged:(bool)arg3;
- (id)allowedImportFromAppBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingAccountIsManaged:(bool)arg3;
- (void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 hostAppBundleID:(id)arg2 accountIsManaged:(bool)arg3 completion:(id /* block */)arg4;
- (id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(bool)arg3;
- (int)appWhitelistState;
- (int)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 complianceBlocking:(int)arg6 displayImmediateAlert:(bool)arg7 outRestrictionChanged:(bool*)arg8 outEffectiveSettingsChanged:(bool*)arg9 outError:(id*)arg10;
- (bool)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 outRestrictionChanged:(bool*)arg6 outEffectiveSettingsChanged:(bool*)arg7 outError:(id*)arg8;
- (bool)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 outRestrictionChanged:(bool*)arg4 outEffectiveSettingsChanged:(bool*)arg5 outError:(id*)arg6;
- (id)appsRestrictedFromCloudSync;
- (bool)areSettingsLockedDownByRestrictions:(id)arg1;
- (id)autonomousSingleAppModePermittedBundleIDs;
- (int)boolRestrictionForFeature:(id)arg1;
- (bool)canSendMail:(id)arg1 sourceAccountManagement:(int)arg2;
- (void)cancelUserInputResponses;
- (bool)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id*)arg3;
- (id)chaperoneOrganization;
- (void)checkCarrierProfile;
- (void)checkCarrierProfileForceInstallation:(bool)arg1;
- (void)checkIn;
- (void)checkInAsynchronously;
- (void)checkInIfNeeded;
- (bool)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id*)arg3;
- (id)clientRestrictionsForClientUUID:(id)arg1;
- (id)cloudConfigurationDetails;
- (void)cloudConfigurationUIDidCompleteWasApplied:(bool)arg1;
- (bool)communicationServiceRulesExistForBundleID:(id)arg1 forCommunicationServiceType:(id)arg2;
- (bool)currentPasscodeIsCompliantWithGlobalRestrictionsOutError:(id*)arg1;
- (bool)currentPasscodeIsCompliantWithProfileRestrictionsOutError:(id*)arg1;
- (void)dealloc;
- (id)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2;
- (int)defaultBoolValueForSetting:(id)arg1;
- (int)defaultNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1;
- (id)defaultParametersForBoolSetting:(id)arg1;
- (id)defaultParametersForIntersectionSetting:(id)arg1;
- (id)defaultParametersForUnionSetting:(id)arg1;
- (id)defaultParametersForValueSetting:(id)arg1;
- (id)defaultUserBookmarks;
- (id)defaultValueForSetting:(id)arg1;
- (id)defaultValuesForIntersectionSetting:(id)arg1;
- (id)defaultValuesForUnionSetting:(id)arg1;
- (void)deleteActivationLockBypassKey;
- (id)deviceAssetTag;
- (id)deviceDepartmentName;
- (id)deviceIfLostMessage;
- (id)deviceLockScreenFootnote;
- (id)deviceOrganizationName;
- (void)doMCICDidBeginInstallingNextProfileData:(id)arg1 completion:(id /* block */)arg2;
- (void)doMCICDidFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)doMCICDidFinishPreflightWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)doMCICDidRequestCurrentPasscodeWithCompletion:(id /* block */)arg1;
- (void)doMCICDidRequestShowUserWarnings:(id)arg1 completion:(id /* block */)arg2;
- (void)doMCICDidRequestUserInput:(id)arg1 completion:(id /* block */)arg2;
- (void)doMCICDidUpdateStatus:(id)arg1 completion:(id /* block */)arg2;
- (id)doNotBackupAppIDs;
- (id)doNotDocumentSyncAppIDs;
- (id)effectiveBlacklistedAppBundleIDs;
- (id)effectiveBlacklistedAppBundleIDsExcludingRemovedSystemApps;
- (void)effectiveBlacklistedAppBundleIDsExcludingRemovedSystemApps:(bool)arg1 completion:(id /* block */)arg2;
- (void)effectiveBlacklistedAppBundleIDsExcludingRemovedSystemApps:(bool)arg1 includeWatchBundleIDs:(bool)arg2 completion:(id /* block */)arg3;
- (void)effectiveBlacklistedAppBundleIDsIncludingWatchBundleIDs:(bool)arg1 completion:(id /* block */)arg2;
- (void)effectiveBlacklistedAppBundleIDsWithCompletion:(id /* block */)arg1;
- (int)effectiveBoolValueForSetting:(id)arg1;
- (int)effectiveBoolValueForSetting:(id)arg1 outAsk:(bool*)arg2;
- (id)effectiveParametersForBoolSetting:(id)arg1;
- (id)effectiveParametersForIntersectionSetting:(id)arg1;
- (id)effectiveParametersForUnionSetting:(id)arg1;
- (id)effectiveParametersForValueSetting:(id)arg1;
- (int)effectiveRestrictedBoolValueForSetting:(id)arg1;
- (id)effectiveRestrictions;
- (id)effectiveUserSettings;
- (id)effectiveValueForSetting:(id)arg1;
- (id)effectiveValuesForIntersectionSetting:(id)arg1;
- (id)effectiveValuesForUnionSetting:(id)arg1;
- (id)effectiveWhitelistedAppBundleIDs;
- (void)effectiveWhitelistedAppBundleIDsIncludingWatchBundleIDs:(bool)arg1 completion:(id /* block */)arg2;
- (void)effectiveWhitelistedAppBundleIDsWithCompletion:(id /* block */)arg1;
- (id)effectiveWhitelistedAppsAndOptions;
- (id)filteredMailSheetAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
- (void)flush;
- (void)getPasscodeComplianceWarningLastLockDate:(id)arg1 completionBlock:(id /* block */)arg2;
- (int)getPasscodeComplianceWarningLastLockDate:(id)arg1 outLocalizedTitle:(id*)arg2 outLocalizedMessage:(id*)arg3;
- (unsigned long long)gracePeriod;
- (bool)hasAppAnalyticsAllowedBeenSet;
- (bool)hasDiagnosticSubmissionAllowedBeenSet;
- (bool)hasHealthDataSubmissionAllowedBeenSet;
- (bool)hasWheelchairDataSubmissionAllowedBeenSet;
- (int)hostMayPairWithOptions:(id)arg1 challenge:(id)arg2;
- (void)installProfileData:(id)arg1 interactionDelegate:(id)arg2;
- (void)installProfileData:(id)arg1 options:(id)arg2 interactionDelegate:(id)arg3;
- (id)installProfileData:(id)arg1 options:(id)arg2 outError:(id*)arg3;
- (id)installProfileData:(id)arg1 outError:(id*)arg2;
- (void)installProfileDataStoredForPurpose:(int)arg1 completionBlock:(id /* block */)arg2;
- (bool)installProvisioningProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 outError:(id*)arg3;
- (id)installedConfigurationProfileInfoWithOutMDMProfileInfo:(id*)arg1;
- (id)installedMDMProfileIdentifier;
- (id)installedProfileDataWithIdentifier:(id)arg1;
- (id)installedProfileIdentifiers;
- (id)installedProfileIdentifiersInstalledBy:(id)arg1;
- (id)installedProfileIdentifiersWithFilterFlags:(int)arg1;
- (id)installedProfileWithIdentifier:(id)arg1;
- (id)installedProfilesInstalledBy:(id)arg1;
- (id)installedProfilesWithFilterFlags:(int)arg1;
- (id)installedSystemProfileDataWithIdentifier:(id)arg1;
- (id)installedSystemProfileWithIdentifier:(id)arg1;
- (id)installedUserProfileDataWithIdentifier:(id)arg1;
- (id)installedUserProfileWithIdentifier:(id)arg1;
- (bool)isActivationLockAllowed;
- (bool)isActivityContinuationAllowed;
- (bool)isAdTrackingLimited;
- (bool)isAirDropAllowed;
- (bool)isAirDropUnmanagedForced;
- (bool)isAirPlayIncomingRequestsPairingPasswordRequired;
- (bool)isAirPlayOutgoingRequestsPairingPasswordRequired;
- (bool)isAirPlaySettingsUIAllowedOutAsk:(bool*)arg1;
- (bool)isAppAnalyticsAllowed;
- (bool)isAppCellularDataModificationAllowed;
- (bool)isAppInstallationAllowed;
- (bool)isAppManaged:(id)arg1;
- (bool)isAppRatingLimitInEffect;
- (bool)isAppRemovalAllowed;
- (bool)isAssistantUserGeneratedContentAllowed;
- (bool)isAutoCorrectionAllowed;
- (bool)isAutomaticAppDownloadsAllowed;
- (bool)isAutomaticAppUpdatesAllowed;
- (bool)isAutomaticAppUpdatesModificationAllowed;
- (bool)isAwaitingDeviceConfigured;
- (bool)isBluetoothModificationAllowed;
- (bool)isBoolSettingLockedDownByRestrictions:(id)arg1;
- (bool)isChaperoned;
- (bool)isCloudKeychainSyncAllowed;
- (bool)isCloudSyncAllowed:(id)arg1;
- (bool)isConferenceRoomDisplayModeEnabledOutAsk:(bool*)arg1;
- (bool)isConferenceRoomDisplaySettingsUIAllowedOutAsk:(bool*)arg1;
- (bool)isContactlessPaymentAllowed;
- (bool)isContentProtectionInEffect;
- (bool)isControlCenterAllowedInApps;
- (bool)isDeviceNameModificationAllowed;
- (bool)isDiagnosticSubmissionAllowed;
- (bool)isDiagnosticSubmissionModificationAllowed;
- (bool)isEnterpriseBookBackupAllowed;
- (bool)isEnterpriseBookMetadataSyncAllowed;
- (bool)isEphemeralMultiUser;
- (bool)isExplicitContentAllowedOutAsk:(bool*)arg1;
- (bool)isFeatureM1Allowed;
- (bool)isFindMyCarAllowed;
- (bool)isFindMyDeviceAllowed;
- (bool)isFindMyFriendsAllowed;
- (bool)isFingerprintForContactlessPaymentAllowed;
- (bool)isFingerprintModificationAllowed;
- (bool)isFingerprintUnlockAllowed;
- (bool)isGeotagSharingAllowed;
- (bool)isHashtagImagesAllowed;
- (bool)isHealthDataSubmissionAllowed;
- (bool)isHomeAllowed;
- (bool)isInAppPaymentAllowed;
- (bool)isInSingleAppMode;
- (bool)isInstalledAppNearMeSuggestionsAllowed;
- (bool)isIntersectionSettingLockedDownByRestrictions:(id)arg1;
- (bool)isKeyboardShortcutsAllowed;
- (bool)isLockScreenControlCenterAllowed;
- (bool)isLockScreenNotificationsViewAllowed;
- (bool)isLockScreenTodayViewAllowed;
- (bool)isLockScreenWiFiModificationAllowed;
- (bool)isMUAllowed;
- (bool)isMediaPurchaseAllowedOutAsk:(bool*)arg1;
- (bool)isMultitaskingAllowed;
- (bool)isMusicArtistActivityAllowed;
- (bool)isMusicServiceAllowed;
- (bool)isNewsAllowed;
- (bool)isNewsTodayAllowed;
- (bool)isNotificationsModificationAllowedForBundleID:(id)arg1;
- (bool)isOTAPKIUpdatesAllowed;
- (bool)isOnDeviceAppInstallationAllowed;
- (bool)isOpenInRestrictionInEffect;
- (bool)isParentalControlsAllowPasscodeAccessToNonWhitelistedAppsUIForcedByRestrictions;
- (bool)isPasscodeModificationAllowed;
- (bool)isPasscodeRequired;
- (bool)isPasscodeRequiredByPolicy;
- (bool)isPasscodeRequiredByProfiles;
- (bool)isPasscodeRequiredToAccessWhitelistedApps;
- (bool)isPasscodeSet;
- (bool)isPodcastsAllowed;
- (bool)isPredictiveKeyboardAllowed;
- (void)isProfileInstalledWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)isSafariPasswordAutoFillAllowedForURL:(id)arg1;
- (bool)isScreenRecordingAllowed;
- (bool)isScreenShotAllowed;
- (bool)isSettingLockedDownByRestrictions:(id)arg1;
- (bool)isSpellCheckAllowed;
- (bool)isSpotlightInternetResultsAllowed;
- (bool)isSupervised;
- (bool)isTeslaCloudConfigurationAvailable;
- (bool)isTodayViewAllowed;
- (bool)isTodayViewModificationAllowed;
- (bool)isUIAppInstallationAllowed;
- (bool)isURLManaged:(id)arg1;
- (bool)isUninstalledAppNearMeSuggestionsAllowed;
- (bool)isUnionSettingLockedDownByRestrictions:(id)arg1;
- (bool)isValueSettingLockedDownByRestrictions:(id)arg1;
- (bool)isVehicleUIAllowed;
- (bool)isWallpaperModificationAllowed;
- (bool)isWebContentFilteringInEffect;
- (bool)isWebFilterUIActive;
- (bool)isWebTextDefineAllowed;
- (bool)isWheelchairDataSubmissionAllowed;
- (bool)isiCloudDriveAllowed;
- (bool)isiTunesAllowed;
- (id)knownAirPrintIPPURLStrings;
- (id)localizedDescriptionOfCurrentPasscodeConstraints;
- (id)localizedDescriptionOfDefaultNewPasscodeConstraints;
- (id)localizedRestrictionSourceDescriptionForFeatures:(id)arg1;
- (void)lockDevice;
- (void)lockDeviceImmediately:(bool)arg1;
- (void)lockdownDidReceiveActivationRecord:(id)arg1;
- (id)managedAppIDs;
- (id)managedAppIDsWithFlags:(int)arg1;
- (id)managedEmailDomains;
- (id)managedMedia;
- (id)managedSystemConfigurationServiceIDs;
- (id)managedWiFiNetworkNames;
- (void)markStoredProfileForPurposeAsInstalled:(int)arg1;
- (bool)mayEnterPasscodeToAccessNonWhitelistedApps;
- (bool)mayOpenFromManagedToUnmanaged;
- (bool)mayOpenFromUnmanagedToManaged;
- (bool)mayShareToAirDropOriginatingAccountIsManaged:(bool)arg1;
- (bool)mayShareToMessagesOriginatingAccountIsManaged:(bool)arg1;
- (bool)mayShowLocalAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (void)migratePostDataMigrator;
- (void)migratePostMDMDataMigratorWithContext:(int)arg1 completion:(id /* block */)arg2;
- (void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(bool)arg2 forceAllowHostPairing:(bool)arg3 completion:(id /* block */)arg4;
- (int)minimumNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1;
- (bool)mustInstallProfileNonInteractively:(id)arg1;
- (int)newPasscodeEntryScreenType;
- (int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1;
- (void)notifyClientsToRecomputeCompliance;
- (void)notifyDeviceUnlocked;
- (void)notifyKeybagUpdated;
- (void)notifyUserHasSeenComplianceMessageWithLastLockDate:(id)arg1;
- (id)objectForFeature:(id)arg1;
- (id)objectRestrictionForFeature:(id)arg1;
- (id)parametersForBoolSetting:(id)arg1;
- (id)parametersForIntersectionSetting:(id)arg1;
- (id)parametersForUnionSetting:(id)arg1;
- (id)parametersForValueSetting:(id)arg1;
- (bool)parentalControlsAllowPasscodeAccessToNonWhitelistedApps;
- (id)parentalControlsBlacklistedAppBundleIDs;
- (void)parentalControlsBlacklistedAppBundleIDsIncludingWatchBundleIDs:(bool)arg1 completion:(id /* block */)arg2;
- (void)parentalControlsBlacklistedAppBundleIDsWithCompletion:(id /* block */)arg1;
- (void)parentalControlsSetAllowPasscodeAccessToNonWhitelistedApps:(bool)arg1;
- (id)parentalControlsWhitelistedAppBundleIDs;
- (void)parentalControlsWhitelistedAppBundleIDsIncludingWatchBundleIDs:(bool)arg1 completion:(id /* block */)arg2;
- (void)parentalControlsWhitelistedAppBundleIDsWithCompletion:(id /* block */)arg1;
- (bool)passcode:(id)arg1 meetsCurrentConstraintsOutError:(id*)arg2;
- (id)passcodeExpiryDate;
- (id)passcodeExpiryDateOutError:(id*)arg1;
- (void)performBootTimeChecks;
- (id)popProfileDataFromHeadOfInstallationQueue;
- (id)popProvisioningProfileDataFromHeadOfInstallationQueue;
- (void)preflightUserInputResponses:(id)arg1 forPayloadIndex:(unsigned long long)arg2;
- (void)processProfilesPostMigrate;
- (void)processProfilesPostRestore;
- (void)profileDataStoredForPurpose:(int)arg1 completionBlock:(id /* block */)arg2;
- (id)profileFromProfileData:(id)arg1 outError:(id*)arg2;
- (id)publicXPCConnection;
- (id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 forBundleID:(id)arg3 outError:(id*)arg4;
- (id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 outError:(id*)arg3;
- (id)queueFileDataForProfileInstallation:(id)arg1 originalFileName:(id)arg2 outError:(id*)arg3;
- (id)queueProfileDataForAcceptance:(id)arg1 outError:(id*)arg2;
- (id)queueProfileDataForInstallation:(id)arg1 outError:(id*)arg2;
- (void)recomputeUserComplianceWarning;
- (void)recomputeUserComplianceWarningSynchronously;
- (void)removeBoolSetting:(id)arg1;
- (void)removeExpiredProfiles;
- (void)removeObserver:(id)arg1;
- (void)removeOrphanedClientRestrictions;
- (void)removeProfileAsyncWithIdentifier:(id)arg1;
- (void)removeProfileAsyncWithIdentifier:(id)arg1 installationType:(long long)arg2;
- (void)removeProfileWithIdentifier:(id)arg1;
- (void)removeProfileWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2;
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(id /* block */)arg3;
- (bool)removeProvisioningProfileWithUUID:(id)arg1 outError:(id*)arg2;
- (void)removeValueSetting:(id)arg1;
- (void)removeWebContentFilterUserBlacklistedURLString:(id)arg1;
- (id)removedSystemAppBundleIDs;
- (void)removedSystemAppBundleIDsIncludingWatchBundleIDs:(bool)arg1 completion:(id /* block */)arg2;
- (void)removedSystemAppBundleIDsWithCompletion:(id /* block */)arg1;
- (void)rereadManagedAppAttributes;
- (void)resetAllSettingsToDefaults;
- (void)resetAllSettingsToDefaultsIsUserInitiated:(bool)arg1 completion:(id /* block */)arg2;
- (void)respondToCurrentPasscodeRequestContinue:(bool)arg1 passcode:(id)arg2;
- (void)respondToWarningsContinueInstallation:(bool)arg1;
- (id)restrictedAppBundleIDs;
- (id)restrictedAppBundleIDsExcludingRemovedSystemApps;
- (void)restrictedAppBundleIDsExcludingRemovedSystemApps:(bool)arg1 completion:(id /* block */)arg2;
- (void)restrictedAppBundleIDsExcludingRemovedSystemApps:(bool)arg1 includeWatchBundleIDs:(bool)arg2 completion:(id /* block */)arg3;
- (void)restrictedAppBundleIDsIncludingWatchBundleIDs:(bool)arg1 completion:(id /* block */)arg2;
- (void)restrictedAppBundleIDsWithCompletion:(id /* block */)arg1;
- (int)restrictedBoolValueForFeature:(id)arg1;
- (id)restrictionEnforcedBlacklistedAppBundleIDs;
- (id)restrictionEnforcedBlacklistedAppBundleIDsExcludingRemovedSystemApps;
- (void)restrictionEnforcedBlacklistedAppBundleIDsExcludingRemovedSystemApps:(bool)arg1 completion:(id /* block */)arg2;
- (void)restrictionEnforcedBlacklistedAppBundleIDsExcludingRemovedSystemApps:(bool)arg1 includeWatchBundleIDs:(bool)arg2 completion:(id /* block */)arg3;
- (void)restrictionEnforcedBlacklistedAppBundleIDsWithCompletion:(id /* block */)arg1;
- (id)restrictionEnforcedHomeScreenLayout;
- (id)restrictionEnforcedNotificationSettings;
- (id)restrictionEnforcedNotificationSettingsForBundleID:(id)arg1;
- (id)restrictionEnforcedWhitelistedAppBundleIDs;
- (void)restrictionEnforcedWhitelistedAppBundleIDsIncludingWatchBundleIDs:(bool)arg1 completion:(id /* block */)arg2;
- (void)restrictionEnforcedWhitelistedAppBundleIDsWithCompletion:(id /* block */)arg1;
- (void)retrieveAndStoreCloudConfigurationDetailsCompletionBlock:(id /* block */)arg1;
- (void)retrieveCloudConfigurationDetailsCompletionBlock:(id /* block */)arg1;
- (void)retrieveCloudConfigurationFromURL:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)setAirPlaySettingsUIAllowed:(bool)arg1 ask:(bool)arg2 completion:(id /* block */)arg3;
- (void)setAutoCorrectionAllowed:(bool)arg1;
- (void)setAutomaticAppUpdatesAllowed:(bool)arg1;
- (void)setBoolValue:(bool)arg1 ask:(bool)arg2 forSetting:(id)arg3 passcode:(id)arg4 completion:(id /* block */)arg5;
- (void)setBoolValue:(bool)arg1 ask:(bool)arg2 forSetting:(id)arg3 toSystem:(bool)arg4 user:(bool)arg5 passcode:(id)arg6 completion:(id /* block */)arg7;
- (void)setBoolValue:(bool)arg1 forSetting:(id)arg2;
- (void)setBoolValue:(bool)arg1 forSetting:(id)arg2 passcode:(id)arg3;
- (void)setBoolValue:(bool)arg1 forSetting:(id)arg2 passcode:(id)arg3 completion:(id /* block */)arg4;
- (void)setBoolValue:(bool)arg1 forSetting:(id)arg2 toSystem:(bool)arg3 user:(bool)arg4;
- (void)setBoolValue:(bool)arg1 forSetting:(id)arg2 toSystem:(bool)arg3 user:(bool)arg4 passcode:(id)arg5;
- (void)setBoolValue:(bool)arg1 forSetting:(id)arg2 toSystem:(bool)arg3 user:(bool)arg4 passcode:(id)arg5 completion:(id /* block */)arg6;
- (void)setConferenceRoomDisplayModeEnabled:(bool)arg1 ask:(bool)arg2 completion:(id /* block */)arg3;
- (void)setConferenceRoomDisplaySettingsUIAllowed:(bool)arg1 ask:(bool)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setExplicitContentAllowed:(bool)arg1 ask:(bool)arg2 completion:(id /* block */)arg3;
- (void)setFeatureM1Allowed:(bool)arg1;
- (void)setFindMyCarAllowed:(bool)arg1;
- (void)setFingerprintUnlockAllowed:(bool)arg1 passcode:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setGracePeriod:(unsigned long long)arg1 passcode:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setHealthDataSubmissionAllowed:(bool)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setKeyboardShortcutsAllowed:(bool)arg1;
- (void)setManagedEmailDomains:(id)arg1;
- (void)setMediaPurchaseAllowed:(bool)arg1 ask:(bool)arg2 completion:(id /* block */)arg3;
- (void)setMultitaskingAllowed:(bool)arg1;
- (void)setParameters:(id)arg1 forBoolSetting:(id)arg2;
- (void)setParameters:(id)arg1 forValueSetting:(id)arg2;
- (void)setParametersForSettingsByType:(id)arg1;
- (void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2;
- (void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2 completion:(id /* block */)arg3;
- (void)setParametersForSettingsByType:(id)arg1 toSystem:(bool)arg2 user:(bool)arg3;
- (void)setParametersForSettingsByType:(id)arg1 toSystem:(bool)arg2 user:(bool)arg3 passcode:(id)arg4;
- (void)setParametersForSettingsByType:(id)arg1 toSystem:(bool)arg2 user:(bool)arg3 passcode:(id)arg4 completion:(id /* block */)arg5;
- (void)setParentalControlsBlacklistedAppBundleIDs:(id)arg1;
- (void)setParentalControlsWhitelistedAppBundleIDs:(id)arg1;
- (void)setPasscodeWasSetInBackup:(bool)arg1;
- (void)setPredictiveKeyboardAllowed:(bool)arg1;
- (void)setSpellCheckAllowed:(bool)arg1;
- (void)setTrustedCodeSigningIdentities:(id)arg1;
- (void)setUserBookmarks:(id)arg1;
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2;
- (void)setValue:(id)arg1 forSetting:(id)arg2;
- (void)setValue:(id)arg1 forSetting:(id)arg2 passcode:(id)arg3;
- (void)setValue:(id)arg1 forSetting:(id)arg2 toSystem:(bool)arg3 user:(bool)arg4;
- (void)setValue:(id)arg1 forSetting:(id)arg2 toSystem:(bool)arg3 user:(bool)arg4 passcode:(id)arg5;
- (void)setValues:(id)arg1 forIntersectionSetting:(id)arg2;
- (void)setValues:(id)arg1 forIntersectionSetting:(id)arg2 toSystem:(bool)arg3 user:(bool)arg4;
- (void)setValues:(id)arg1 forUnionSetting:(id)arg2;
- (void)setValues:(id)arg1 forUnionSetting:(id)arg2 toSystem:(bool)arg3 user:(bool)arg4;
- (void)setWebContentFilterAutoPermittedURLStrings:(id)arg1;
- (void)setWebContentFilterUserBlacklistedURLStrings:(id)arg1;
- (void)setWheelchairDataSubmissionAllowed:(bool)arg1;
- (void)setupAssistantDidFinish;
- (bool)shouldApplyFilterForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 outAllowManagedAccounts:(bool*)arg3 outAllowUnmanagedAccounts:(bool*)arg4;
- (bool)shouldDestroyOldKeybag;
- (bool)shouldInstallStoredProfileForPurpose:(int)arg1;
- (bool)shouldShowCloudConfigurationUI;
- (bool)shouldShowSetupAssistant;
- (bool)shouldSkipSetupPanes;
- (bool)showProfileErrorUIWithProfileIdentifier:(id)arg1 outError:(id*)arg2;
- (void)shutDown;
- (void)stashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2;
- (void)stashWebContentFilterAutoPermittedURLStrings;
- (void)stashWebContentFilterUserBlacklistedURLStrings;
- (void)storeCertificateData:(id)arg1 forHostIdentifier:(id)arg2;
- (void)storeCloudConfigurationDetails:(id)arg1;
- (void)storeCloudConfigurationDetails:(id)arg1 completion:(id /* block */)arg2;
- (void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3;
- (void)submitUserInputResponses:(id)arg1;
- (bool)transitionToProfileAcceptanceUI;
- (bool)transitionToProfileAcceptanceUIAndReturnToBundleID:(id)arg1;
- (bool)transitionToProfileOverviewUI;
- (id)trustedCodeSigningIdentities;
- (bool)unlockDeviceWithPasscode:(id)arg1 outError:(id*)arg2;
- (int)unlockScreenType;
- (int)unlockScreenTypeWithOutSimplePasscodeType:(int*)arg1;
- (void)unstashUserBookmarksFromLabel:(id)arg1;
- (void)unstashWebContentFilterAutoPermittedURLStrings;
- (void)unstashWebContentFilterUserBlacklistedURLStrings;
- (void)updateProfileWithIdentifier:(id)arg1 interactionDelegate:(id)arg2;
- (id)updateProfileWithIdentifier:(id)arg1 outError:(id*)arg2;
- (id)userBookmarks;
- (int)userBoolValueForSetting:(id)arg1;
- (id)userInfoForClientUUID:(id)arg1;
- (int)userMode;
- (id)userSettings;
- (id)userSettingsForCurrentUser;
- (id)userSettingsForSystem;
- (id)userValueForIntersectionSetting:(id)arg1;
- (id)userValueForSetting:(id)arg1;
- (id)userValueForUnionSetting:(id)arg1;
- (void)validateAppBundleIDs:(id)arg1 completion:(id /* block */)arg2;
- (bool)validatePasscode:(id)arg1;
- (bool)validatePasscode:(id)arg1 andUnlockContentProtectedDevice:(bool)arg2;
- (id)valueForFeature:(id)arg1;
- (id)valueRestrictionForFeature:(id)arg1;
- (void)waitForMigrationIncludingPostRestoreMigration:(bool)arg1 completion:(id /* block */)arg2;
- (bool)wasCloudConfigurationApplied;
- (bool)wasTeslaCloudConfigurationApplied;
- (id)webContentFilterEffectiveBlacklistedURLStrings;
- (id)webContentFilterUserBlacklistedURLStrings;
- (id)xpcConnection;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

- (bool)installConfigurationProfileWithData:(id)arg1;

@end