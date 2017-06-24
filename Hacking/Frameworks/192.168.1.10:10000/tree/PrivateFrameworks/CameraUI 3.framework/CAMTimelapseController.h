/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTimelapseController : NSObject <CAMNebulaDaemonTimelapseClientProtocol, CAMStillImageCaptureRequestDelegate, UIAlertViewDelegate> {
    bool  __backendRecoveryNeeded;
    CUCaptureController * __captureController;
    NSObject<OS_dispatch_source> * __captureTimer;
    CAMLowDiskSpaceAlertView * __diskSpaceAlert;
    bool  __focusAndExposureAdjusted;
    bool  __ignoringTimerCallbacksForTearDown;
    bool  __ignoringTimerCallbacksWaitingForCaptureResponse;
    NSCountedSet * __inFlightTimelapseUUIDs;
    CAMLocationController * __locationController;
    CAMMotionController * __motionController;
    CAMNebulaDaemonProxyManager * __nebulaDaemonProxyManager;
    NSMutableSet * __pendingCompletedStates;
    CAMPersistenceController * __persistenceController;
    bool  __previewStarted;
    bool  __shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
    CAMTimelapseState * __state;
    <CAMTimelapseControllerDelegate> * _delegate;
    CAMFocusResult * _lastFocusResult;
}

@property (setter=_setBackendRecoveryNeeded:, nonatomic) bool _backendRecoveryNeeded;
@property (nonatomic, readonly) CUCaptureController *_captureController;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *_captureTimer;
@property (nonatomic, readonly) CAMLowDiskSpaceAlertView *_diskSpaceAlert;
@property (getter=_isFocusAndExposureAdjusted, setter=_setFocusAndExposureAdjusted:, nonatomic) bool _focusAndExposureAdjusted;
@property (nonatomic, readonly) bool _ignoringTimerCallbacksForTearDown;
@property (nonatomic, readonly) bool _ignoringTimerCallbacksWaitingForCaptureResponse;
@property (nonatomic, readonly) NSCountedSet *_inFlightTimelapseUUIDs;
@property (nonatomic, readonly) CAMLocationController *_locationController;
@property (nonatomic, readonly) CAMMotionController *_motionController;
@property (nonatomic, readonly) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager;
@property (nonatomic, readonly) NSMutableSet *_pendingCompletedStates;
@property (nonatomic, readonly) CAMPersistenceController *_persistenceController;
@property (setter=_setPreviewStarted:, nonatomic) bool _previewStarted;
@property (setter=_setShouldUpdateFocusAndExposureWhenContrastDetectionCompletes:, nonatomic) bool _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
@property (nonatomic, readonly) CAMTimelapseState *_state;
@property (nonatomic, readonly) NSDate *captureStartTime;
@property (getter=isCapturing, nonatomic, readonly) bool capturing;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMTimelapseControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) CAMFocusResult *lastFocusResult;
@property (readonly) Class superclass;

+ (struct __IOSurface { }*)_newVideoPreviewSurfaceForTimelapseState:(id)arg1;
+ (id)createPlaceholderResultForTimelapseState:(id)arg1;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (bool)_backendRecoveryNeeded;
- (bool)_canCapturePhoto;
- (id)_captureController;
- (id)_captureTimer;
- (void)_captureTimerFired;
- (id)_createThumbnailImageFromPlaceholderResult:(id)arg1;
- (void)_deviceStarted:(id)arg1;
- (id)_diskSpaceAlert;
- (void)_dismissDiskSpaceAlert;
- (bool)_enqueueCaptureRequest;
- (bool)_ignoringTimerCallbacksForTearDown;
- (bool)_ignoringTimerCallbacksWaitingForCaptureResponse;
- (id)_inFlightTimelapseUUIDs;
- (bool)_isFocusAndExposureAdjusted;
- (id)_locationController;
- (id)_motionController;
- (id)_nebulaDaemonProxyManager;
- (void)_notifyAGGDForDidStopCapturingWithState:(id)arg1;
- (void)_notifyInsufficientDiskSpaceForContinuingCapture;
- (void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2;
- (id)_pendingCompletedStates;
- (id)_persistenceController;
- (void)_prepareForTimelapseCaptureSetModeAndDevice:(bool)arg1;
- (bool)_previewStarted;
- (void)_previewStarted:(id)arg1;
- (void)_reserveDiskSpaceForTimelapseUUID:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
- (void)_restoreCaptureStateFromDisk;
- (void)_saveStateToDisk:(id)arg1;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_setBackendRecoveryNeeded:(bool)arg1;
- (void)_setFocusAndExposureAdjusted:(bool)arg1;
- (void)_setNewCaptureStateForCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2;
- (void)_setPreviewStarted:(bool)arg1;
- (void)_setShouldUpdateFocusAndExposureWhenContrastDetectionCompletes:(bool)arg1;
- (bool)_shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
- (void)_startCaptureTimer;
- (void)_startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2;
- (id)_state;
- (id)_stillImageCaptureRequestWithCurrentSettings;
- (void)_stopCapturingWithReasons:(long long)arg1;
- (void)_teardownCaptureTimer;
- (void)_triggerBackendCrashRecoveryIfNeeded;
- (void)_updateFocusAndExposureForStartCapturing;
- (void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(bool)arg3;
- (void)_updateLocationIfNecessary;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)captureStartTime;
- (void)dealloc;
- (id)delegate;
- (void)forceStopTimelapseCaptureWithReasons:(long long)arg1;
- (id)init;
- (id)initWithCaptureController:(id)arg1 locationController:(id)arg2 motionController:(id)arg3 persistenceController:(id)arg4 nebulaDaemonProxyManager:(id)arg5;
- (bool)isCapturing;
- (id)lastFocusResult;
- (void)restoreConfiguration;
- (void)setDelegate:(id)arg1;
- (void)setLastFocusResult:(id)arg1;
- (bool)startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2;
- (void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (bool)stopCapturingWithReasons:(long long)arg1;

@end
