/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicAVPlayer : MPUAVPlayer <MPNowPlayingPlaybackQueueDataSource> {
    bool  _banningCurrentItemShouldSkipToNextItem;
    bool  _checkedDefaultsForLastPlayedStation;
    bool  _isSubscribed;
    MPPlaybackContext * _lastPlaybackContext;
    MPCRadioStationPlaybackMetadata * _lastPlayedStationMetadata;
    NSObject<OS_dispatch_queue> * _lastPlayedStationSaveQueue;
    NSObject<OS_dispatch_queue> * _radioUIAccessQueue;
}

@property (nonatomic) bool banningCurrentItemShouldSkipToNextItem;
@property (nonatomic, readonly) RadioStation *currentStation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPCRadioStationPlaybackMetadata *lastPlayedStationMetadata;
@property (readonly) Class superclass;

+ (Class)playlistManagerClass;
+ (id)sharedAVPlayer;

- (void).cxx_destruct;
- (void)_connectAVPlayer;
- (id)_expectedAssetTypesForPlaybackMode:(long long)arg1;
- (id)_fallbackMusicPlaybackContext;
- (void)_feederContentsDidChangeNotification:(id)arg1;
- (void)_handlePlaybackQueueChangedNotification;
- (void)_initiateMusicPlayback;
- (void)_itemLikedStateDidChangeNotification:(id)arg1;
- (void)_musicPlayer_defaultsDidChangeNotification:(id)arg1;
- (void)_registerPlaybackQueueDataSource;
- (bool)_shouldVendContentItemForOffset:(long long)arg1;
- (void)_streamingDownloadSessionControllerDidFailDownloadSessionNotification:(id)arg1;
- (void)_subscriptionStatusDidChangeNotification;
- (void)_unregisterPlaybackQueueDataSource;
- (void)_updateLastPlayedStationMetadata;
- (bool)banningCurrentItemShouldSkipToNextItem;
- (void)beginOrTogglePlayback;
- (bool)beginOrTogglePlaybackWithCoordinator:(id)arg1;
- (void)beginPlayback;
- (bool)beginPlaybackWithCoordinator:(id)arg1;
- (id)contentItemForOffset:(long long)arg1;
- (id)contentItemIdentifierForOffset:(long long)arg1;
- (id)currentStation;
- (void)dealloc;
- (bool)hasVolumeControl;
- (id)init;
- (id)lastPlayedStationMetadata;
- (void)reloadWithPlaybackContext:(id)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)seekAlbum:(int)arg1;
- (void)seekPlaylist:(int)arg1;
- (void)setBanningCurrentItemShouldSkipToNextItem:(bool)arg1;
- (void)setLastPlayedStationMetadata:(id)arg1;

@end
