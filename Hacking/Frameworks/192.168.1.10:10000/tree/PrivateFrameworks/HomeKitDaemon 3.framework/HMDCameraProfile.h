/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraProfile : HMDAccessoryProfile <HMDCameraSettingProactiveReaderDelegate> {
    NSSet * _cameraStreamManagers;
    bool  _microphonePresent;
    NSMutableArray * _settingProactiveReaders;
    HMDCameraSnapshotManager * _snapshotManager;
    bool  _speakerPresent;
    HMDCameraStreamSnapshotHandler * _streamSnapshotHandler;
}

@property (nonatomic, readonly) NSSet *cameraStreamManagers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMicrophonePresent, nonatomic, readonly) bool microphonePresent;
@property (nonatomic, readonly) NSMutableArray *settingProactiveReaders;
@property (nonatomic, readonly) HMDCameraSnapshotManager *snapshotManager;
@property (getter=isSpeakerPresent, nonatomic, readonly) bool speakerPresent;
@property (nonatomic, readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_createCameraManagers:(id)arg1;
- (void)_handleNegotiateStreamRequest:(id)arg1;
- (void)_handleStreamControlRequest:(id)arg1;
- (void)_setControlSupport;
- (void)cameraSettingProactiveReaderDidCompleteRead:(id)arg1;
- (id)cameraStreamManagers;
- (void)dealloc;
- (id)description;
- (id)dumpState;
- (unsigned long long)hash;
- (id)initWithAccessory:(id)arg1 uuid:(id)arg2 services:(id)arg3 msgDispatcher:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isMicrophonePresent;
- (bool)isSpeakerPresent;
- (id)logIdentifier;
- (void)monitorForEventsForServices:(id)arg1;
- (void)registerForMessages;
- (id)settingProactiveReaders;
- (id)snapshotManager;
- (id)streamSnapshotHandler;

@end
