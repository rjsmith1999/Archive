/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKGame : NSObject <NSCoding, NSSecureCoding> {
    long long  _environment;
    GKGameInternal * _internal;
}

@property (nonatomic, readonly) NSNumber *adamID;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) NSString *defaultCategory;
@property (getter=isDownloading, nonatomic, readonly) bool downloading;
@property long long environment;
@property (nonatomic, readonly) NSNumber *externalVersion;
@property (nonatomic, readonly) NSDictionary *gameDescriptor;
@property (nonatomic, readonly) struct GKGameInfo { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; } gameInfo;
@property (getter=isInstalled, nonatomic, readonly) bool installedGame;
@property (retain) GKGameInternal *internal;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) unsigned char platform;
@property (getter=isPrerendered, nonatomic) bool prerendered;
@property (nonatomic, retain) GKStoreItemInternal *storeItem;
@property (nonatomic, readonly) bool supportsMultiplayer;
@property (nonatomic, readonly) bool supportsTurnBasedMultiplayer;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)currentGame;
+ (id)currentGameIncludingGameCenter:(bool)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (bool)isGameCenter;
+ (bool)isPreferences;
+ (void)loadGamesWithBundleIDs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadTopGamesWithCompletionHandler:(id /* block */)arg1;
+ (void)setCurrentGameFromInternal:(id)arg1 serverEnvironment:(long long)arg2;
+ (bool)supportsSecureCoding;
+ (void)updateGames:(id)arg1 withCompletionHandler:(id /* block */)arg2;

- (id)cacheKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)environment;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)gameDescriptor;
- (struct GKGameInfo { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; })gameInfo;
- (void)getFriendPlayersForAchievement:(id)arg1 handler:(id /* block */)arg2;
- (void)getFriendPlayersForLeaderboard:(id)arg1 handler:(id /* block */)arg2;
- (void)getFriendPlayersIncludingCompatibleGames:(bool)arg1 handler:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (bool)isDownloading;
- (bool)isEqual:(id)arg1;
- (bool)isGameCenter;
- (bool)isInstalled;
- (bool)isStoreItemUnexpired;
- (void)loadGameRatingWithCompletionHandler:(id /* block */)arg1;
- (void)loadTellAFriendMessageWithCompletionHandler:(id /* block */)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setEnvironment:(long long)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)submitRating:(float)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (void)gameCenterGamePurchasedWithBundleIdentifier:(id)arg1;
+ (void)launchAppStoreWithGameCenterGames;
+ (void)preloadIconsForGames:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
+ (void)removeHistoryForGameWithBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (struct CGSize { double x1; double x2; })serverImageSizeForIconStyle:(long long)arg1;

- (id)URLStringForImageWithShineIfNeeded;
- (void)_gkSetSharingInfo:(id)arg1;
- (id)_gkSharingInfo;
- (id)_imageSourceForIconSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_imageURLForIconStyle:(long long)arg1;
- (long long)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewControllerSubject:(id)arg1;
- (id)cachedIconForStyle:(long long)arg1;
- (id)fetchSharingInfo;
- (id)iconForStyle:(long long)arg1;
- (id)imageSourceForIconStyle:(long long)arg1;
- (id)imageSourceForiOSIconStyle:(long long)arg1;
- (id)loadIconForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)loadIconForStyle:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)logoImageWithMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (id)macBrushForIconStyle:(long long)arg1;
- (void)presentStoreSheetFromViewController:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)removeGameWithCompletionHandler:(id /* block */)arg1;
- (void)uninstallApplicationWithBundleIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
