/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUSystemMediaControlsViewController : UIViewController <MPAVRoutingControllerDelegate, MPUChronologicalProgressViewDelegate, MPUMediaControlsTitlesViewDelegate, MPUNowPlayingDelegate, MPURemoteViewControllerPresentation, MPUSystemMediaControlsViewDelegate, MPUTransportControlMediaRemoteControllerDelegate, MPUTransportControlsViewDataSource, MPUTransportControlsViewDelegate, MPUTransportControlsViewLayoutDelegate> {
    UIImageView * _artworkImageView;
    NSString * _audioCategoryForDisabledHUD;
    NSArray * _currentlySupportedCommands;
    <MPUSystemMediaControlsDelegate> * _delegate;
    double  _lastDurationFromUpdate;
    bool  _lockscreenDisabledForScreenTurnOff;
    MPUSystemMediaControlsView * _mediaControlsView;
    NSArray * _notificationObservers;
    MPUNowPlayingController * _nowPlayingController;
    bool  _nowPlayingIsRadioStation;
    bool  _persistentUpdatesEnabled;
    MPAVRoutingController * _routingController;
    double  _scrubbedTimeDestination;
    NSTimer * _scrubberCommitTimer;
    NSTimer * _skipInformationRevealTimer;
    long long  _style;
    MPUTransportControlMediaRemoteController * _transportControlMediaRemoteController;
    bool  _wantsToLaunchNowPlayingApp;
}

@property (nonatomic, readonly) UIView *artworkView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPUSystemMediaControlsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool persistentUpdatesEnabled;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI

- (void).cxx_destruct;
- (void)_backlightLevelChangedNotification:(id)arg1;
- (void)_beginScrubberCommitTimer;
- (void)_buyButtonActionForSender:(id)arg1 command:(unsigned int)arg2;
- (bool)_canScrub;
- (void)_commitCurrentScrubberValue;
- (id)_imageForTransportButtonWithControlType:(long long)arg1;
- (void)_invalidateSkipInformationRevealTimer;
- (void)_launchCurrentNowPlayingApp;
- (void)_launchFirstPartyMusicAppForShareCommand;
- (bool)_mediaRemoteCommandIsSupportedAndEnabled:(unsigned int)arg1;
- (void)_revealSkipInformation;
- (void)_scheduleSkipInformationRevealTimer;
- (void)_setupNotifications;
- (bool)_shouldUseExtendedTransportControls;
- (void)_stopScrubberCommitTimer;
- (void)_supportedCommandsDidChangeNotification:(id)arg1;
- (void)_systemAppDidSkipTrackNotification:(id)arg1;
- (void)_tearDownNotifications;
- (void)_updateBuyButtonsWithNowPlayingInfo:(id)arg1;
- (void)_updateSupportedCommands;
- (void)_updateTransportControlCount;
- (id)artworkView;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (void)mediaControlsTitlesViewWasTapped:(id)arg1;
- (void)mediaControlsViewDidCancelBuyTrackDownloadAction:(id)arg1;
- (void)mediaControlsViewDidConfirmBuyAlbumAction:(id)arg1;
- (void)mediaControlsViewDidConfirmBuyTrackAction:(id)arg1;
- (void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2;
- (void)nowPlayingController:(id)arg1 nowPlayingApplicationDidChange:(id)arg2;
- (void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2;
- (void)nowPlayingController:(id)arg1 playbackStateDidChange:(bool)arg2;
- (bool)persistentUpdatesEnabled;
- (id)presentingViewControllerForLikeBanActionSheetForTransportControlMediaRemoteController:(id)arg1;
- (void)progressViewDidBeginScrubbing:(id)arg1;
- (void)progressViewDidEndScrubbing:(id)arg1;
- (void)remoteViewControllerDidFinish;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPersistentUpdatesEnabled:(bool)arg1;
- (long long)style;
- (void)transportControlMediaRemoteController:(id)arg1 requestsPushingMediaRemoteCommand:(unsigned int)arg2 withOptions:(id)arg3 shouldLaunchApplication:(bool)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transportControlsView:(id)arg1 adjustedFrameOfTransportButtonWithControlType:(long long)arg2 proposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGSize { double x1; double x2; })transportControlsView:(id)arg1 adjustedMaximumTransportButtonSizeWithProposedSize:(struct CGSize { double x1; double x2; })arg2;
- (id)transportControlsView:(id)arg1 buttonForControlType:(long long)arg2;
- (void)transportControlsView:(id)arg1 longPressBeginOnControlType:(long long)arg2;
- (void)transportControlsView:(id)arg1 longPressEndOnControlType:(long long)arg2;
- (void)transportControlsView:(id)arg1 tapOnControlType:(long long)arg2;
- (double)transportControlsView:(id)arg1 transportButtonUnhighlightAnimationDurationForControlType:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

// Image: /System/Library/AccessibilityBundles/MediaPlayerUIFramework.axbundle/MediaPlayerUIFramework

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityIsPlaying;

@end
