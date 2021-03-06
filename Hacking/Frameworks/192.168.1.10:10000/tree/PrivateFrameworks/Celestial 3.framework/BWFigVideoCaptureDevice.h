/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigVideoCaptureDevice : BWCaptureDevice <BWZoomCompletionDelegate> {
    float  _ISO;
    NSArray * _activePortTypes;
    int  _aeFrameWaitCount;
    int  _aeRequestCount;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _aeRequestTime;
    bool  _aeStable;
    bool  _allowAEStableNotifications;
    bool  _allowAWBStableNotifications;
    bool  _attachMetadataFlatDictionary;
    NSDictionary * _attributes;
    bool  _autoFlashEnabled;
    float  _autoFlashNormalizedSNRThreshold;
    int  _autoImageControlMode;
    bool  _autoTorchEnabled;
    bool  _autoTorchStatsCheckedForVideoRecording;
    NSMutableDictionary * _autofocusCachedPropertiesDictionary;
    struct OpaqueFigSampleBufferProcessor { } * _autofocusProcessor;
    NSObject<OS_dispatch_queue> * _autofocusProcessorQueue;
    struct OpaqueFigSimpleMutex { } * _autofocusStatusMutex;
    bool  _automaticStillImageDegradedSphereModeEnabled;
    bool  _awbStable;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedExposureRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedFocusRect;
    NSMutableDictionary * _cameraInfoByPortType;
    int  _cameraModeForGyroCalibration;
    BWFigVideoCaptureStream * _captureStream;
    int  _clientPID;
    struct OpaqueCMClock { } * _clock;
    int (* _createAutofocusSampleBufferProcessorFunction;
    int  _currentBiasedExposureCompletedID;
    struct { 
        double integrationTime; 
        float normalizedSNR; 
        float baseISO; 
        double exposureBias; 
        float gain; 
        unsigned int conversionGain; 
        unsigned int readNoise_1x; 
        unsigned int readNoise_8x; 
        unsigned int aeAvg; 
        unsigned char aeLimitsReached; 
        unsigned char aeStable; 
        int afStatus; 
        int focusingMethod; 
        unsigned int motionDataStatus; 
        float motionDataBiasErrorEstimate; 
        long long frameCount; 
    }  _currentFrameStatistics;
    int  _currentImageControlMode;
    int  _currentManualExposureCompletedID;
    int  _currentManualFocusCompletedID;
    int  _currentManualWhiteBalanceCompletedID;
    struct OpaqueFigCaptureDevice { } * _device;
    BWDeviceMotionActivityDetector * _deviceMotionActivityDetector;
    int  _deviceReleaseBehavior;
    struct { 
        float redGain; 
        float greenGain; 
        float blueGain; 
    }  _deviceWhiteBalanceGains;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _exposureDuration;
    float  _exposureTargetBias;
    float  _exposureTargetOffset;
    bool  _feature1Enabled;
    struct OpaqueFigSampleBufferProcessor { } * _feature1Processor;
    NSObject<OS_dispatch_queue> * _feature1ProcessorQueue;
    bool  _flashScene;
    NSObject<OS_dispatch_queue> * _focusAndExposureUpdateQueue;
    bool  _forcePostingForSceneDetectionNotifications;
    int  _frameStatisticsLock;
    struct { 
        float redGain; 
        float greenGain; 
        float blueGain; 
    }  _grayWorldWhiteBalanceGains;
    bool  _hasFlash;
    bool  _hasNightMode;
    bool  _hdrScene;
    bool  _hdrSceneDetectionEnabled;
    struct { 
        int width; 
        int height; 
    }  _ispOutputDimensions;
    struct { 
        int width; 
        int height; 
    }  _lastISPCropDimensions;
    float  _lastRequestedZoomFactor;
    float  _lensPosition;
    bool  _lowLightBoostActive;
    int  _lowLightBoostLock;
    bool  _lowLightBoostSupportedForFormat;
    struct OpaqueFigSimpleMutex { } * _manualPropertyMutex;
    struct { 
        int width; 
        int height; 
    }  _maxISPCropDimensions;
    float  _maxISPZoomFactor;
    int  _maxSkippedFramesForStillImageCaptureRetry;
    float  _maxTorchLevel;
    struct OpaqueFigFlatDictionaryKeySpec { } * _metadataKeySpec;
    NSDictionary * _moduleInfoByPortType;
    float  _motionDataBiasErrorEstimateThresholdAbandon;
    float  _motionDataBiasErrorEstimateThresholdDegraded;
    NSString * _nonLocalizedName;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    int  _numberOfCompletedStillCaptures;
    NSMutableDictionary * _observedProperties;
    struct CGSize { 
        double width; 
        double height; 
    }  _overscanPercentage;
    struct __CFString { } * _portType;
    int  _position;
    bool  _quadraHighResStillImageCaptureEnabled;
    float  _quadraLowLightResampledNormalizedSNRThreshold;
    bool  _retryCaptureStillImageNow;
    bool  _semaphoreHasStarted;
    bool  _semaphoreHasStopped;
    NSDictionary * _sensorIDDictionaryByPortType;
    int  _skippedFramesCountForStillImageCaptureRetry;
    NSObject<OS_dispatch_semaphore> * _startStopSemaphore;
    bool  _stillImageCaptureEnabled;
    bool  _stillImageCaptureNowAfterAutofocusTimeoutSupported;
    NSDictionary * _stillImageCaptureNowOptions;
    BWStillImageCaptureSettings * _stillImageCaptureSettings;
    int  _stillImageCaptureStateLock;
    NSDictionary * _stillImageCaptureStreamProperties;
    int  _stillImageContrastBasedAutofocusTimeout;
    NSObject<OS_dispatch_queue> * _stillImageDispatchQueue;
    bool  _stillImageISPChromaNoiseReductionEnabled;
    int  _stillImagePhaseDetectionAutofocusTimeout;
    bool  _stillImageStabilizationAutomaticallyEnabled;
    double  _stillImageStabilizationIntegrationTimeThreshold;
    bool  _stillImageStabilizationScene;
    struct OpaqueFigCaptureStream { } * _stream;
    BWFigVideoCaptureStream * _streamConfiguration;
    NSString * _streamName;
    NSDictionary * _streamProperties;
    float  _streamStarting;
    double  _streamStopping;
    NSDictionary * _supportedProperties;
    bool  _supportsHDR;
    bool  _supportsSIS;
    bool  _torchActive;
    float  _torchLevel;
    struct OpaqueFigSimpleMutex { } * _torchLock;
    bool  _useAutoImageControlMode;
    bool  _usingMultipleStreamOutputs;
    NSMutableDictionary * _whiteBalanceGains;
    NSMutableArray * _whiteBalanceGainsOrderedKeys;
    NSObject<OS_dispatch_queue> * _whiteBalanceGainsQueue;
    int  _whiteBalanceModeForExif;
    BWZoomCommandHandler * _zoomCommandHandler;
    int  _zoomFactorLock;
}

@property (readonly) NSArray *activePortTypes;
@property (readonly) NSDictionary *cameraInfoByPortTypeForSBPs;
@property (readonly) NSDictionary *cameraTuningParametersDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceReleaseBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) NSDictionary *moduleInfoByPortType;
@property (readonly) NSDictionary *sensorIDDictionaryByPortType;
@property (readonly) Class superclass;

+ (struct __CFString { }*)_autofocusProcessorImageControlModeFromImageControlMode:(int)arg1;
+ (void)initialize;
+ (void)unregisterCallbacksForClient:(int)arg1;

- (float)ISO;
- (void)_addAutofocusAndDiagnosticMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_addCoreMediaMetadataAttachmentsToStillImageSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 fromTimeMachine:(bool)arg2;
- (void)_addExifWhiteBalanceMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_addFeature1ToMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)_attachMetadataFlatDictionaryToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (struct OpaqueFigSampleBufferProcessor { }*)_autofocusProcessor;
- (int)_captureStillImageNowOnStreamWithOptions:(id)arg1 captureStreamProperties:(id)arg2;
- (void)_captureStillImageNowWithSettings:(id)arg1;
- (int)_convertStillImageCaptureSettings:(id)arg1 toStillImageCaptureNowOptions:(id*)arg2 captureStreamPropertyValues:(id*)arg3;
- (int)_copyAutofocusProcessorProperty:(struct __CFString { }*)arg1 propertyValueOut:(void*)arg2;
- (int)_copyAutofocusProcessorPropertyInternal:(struct __CFString { }*)arg1 propertyValueOut:(void*)arg2;
- (int)_currentStillImageSceneTypeForcingFlashSceneDetectionEnabled:(bool)arg1 forcingHDRSceneDetectionEnabled:(bool)arg2 forcingSISSceneDetectionEnabled:(bool)arg3;
- (void)_deviceDidStopStreaming;
- (void)_deviceWillStartStreaming;
- (id)_initWithFigCaptureDeviceRef:(struct OpaqueFigCaptureDevice { }*)arg1 attributes:(id)arg2 streamAttributes:(id)arg3 forPID:(int)arg4 createAutofocusSampleBufferProcessorFunction:(int (*)arg5;
- (float)_ispAppliedZoomFromSampleBufferMetadataDictionary:(id)arg1;
- (void)_postManualControlRequestCompletedWithName:(id)arg1 requestID:(int)arg2 timeDictionary:(id)arg3 additionalPayloadItems:(id)arg4;
- (void)_postNotificationWithName:(id)arg1 payloadNewPropertyValue:(id)arg2;
- (void)_postNotificationWithPayload:(id)arg1 notificationPayload:(id)arg2;
- (void)_resetStillImageCaptureRequestState;
- (id)_sensorIDDictionaryFromCameraTuningParametersForStream:(struct OpaqueFigCaptureStream { }*)arg1;
- (void)_serviceAutoTorchNotification:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; long long x16; }*)arg1;
- (void)_serviceCompletedRequestNotifications:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_serviceLowLightBoostActiveNotification:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_servicePropertyChangeNotifications:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_serviceRetryStillImageCaptureUsingFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; long long x16; }*)arg1;
- (void)_serviceZoomForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 updateISPZoom:(bool)arg2;
- (int)_setAutofocusProcessorImageControlModeProperty:(int)arg1;
- (int)_setAutofocusProcessorProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (int)_setAutofocusProcessorPropertyInternal:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (int)_setExposureModeAutoWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)_setupAutofocusSampleBufferProcessor;
- (int)_setupFeature1SampleBufferProcessor;
- (bool)_shouldUseSphereForStillImageCaptureTakingIntoAccountExposureDuration:(bool)arg1 deviceMotionActivity:(bool)arg2;
- (unsigned int)_stillImageCaptureInProgressSubstateForFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; long long x16; }*)arg1 captureType:(int)arg2;
- (id)_stillImageCaptureSettingsForCaptureType:(int)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; long long x16; }*)arg2 deliverOriginalImage:(bool)arg3 deliverSushiRaw:(bool)arg4 includePreBracketedEV0ForProcessing:(bool)arg5 clientBracketSettings:(id)arg6;
- (int)_stillImageSceneTypeForFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; long long x16; }*)arg1 flashSceneDetectionEnabled:(bool)arg2 hdrSceneDetectionEnabled:(bool)arg3 sisSceneDetectionEnabled:(bool)arg4;
- (void)_teardownAutoFocusSampleBufferProcessor;
- (void)_teardownFeature1SampleBufferProcessor;
- (void)_terminateCaptureAndEmitStillImageCaptureError:(int)arg1 stillImageCaptureNowOptions:(id)arg2 stillImageCaptureStreamProperties:(id)arg3;
- (int)_updateAutoFocusRectIfNeededForZoomFactor:(float)arg1;
- (int)_updateExposureRectIfNeededForZoomFactor:(float)arg1;
- (void)_updateExposureStateForAutofocusProperty:(struct __CFString { }*)arg1;
- (void)_updateFaceDetectionStateForAutofocusProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (void)_updateISPCropForZoomFactor:(float)arg1;
- (void)_updateImageControlModeStateForAutofocusProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (void)_updateWhiteBalanceStateForAutofocusProperty:(struct __CFString { }*)arg1 propertyValue:(void*)arg2;
- (void)_updateZoomCapabilitiesForActiveFormatIndex:(long long)arg1;
- (void)_validateSphereModeBasedOnMotionDataBiasErrorEstimate:(bool*)arg1 useStillDegradedMode:(bool*)arg2;
- (id)activePortTypes;
- (int)autoImageControlMode;
- (id)cameraInfo;
- (id)cameraInfoByPortTypeForSBPs;
- (int)cameraModeForGyroCalibration;
- (id)cameraTuningParametersDictionary;
- (int)captureStillImageNowWithSettings:(id)arg1;
- (id)captureStream;
- (void)captureStream:(id)arg1 willDiscardVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureStream:(id)arg1 willEmitStillImageSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromTimeMachine:(bool)arg3;
- (void)captureStream:(id)arg1 willEmitVideoPreviewSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureStream:(id)arg1 willEmitVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureStreamDidChangeActiveFormatIndex:(id)arg1;
- (void)captureStreamDidCompleteStillImageCapture:(id)arg1;
- (void)captureStreamDidStartStreaming:(id)arg1;
- (void)captureStreamDidStopStreaming:(id)arg1;
- (void)captureStreamWillStartStreaming:(id)arg1;
- (void)captureStreamWillStopStreaming:(id)arg1;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (int)deviceReleaseBehavior;
- (struct { float x1; float x2; float x3; })deviceWhiteBalanceGains;
- (void)disposeFigCaptureDevice;
- (void)drainNotifications;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (float)exposureTargetBias;
- (float)exposureTargetOffset;
- (id)fvcd_streamConfiguration;
- (void)getCurrentVideoFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; long long x16; }*)arg1;
- (struct { float x1; float x2; float x3; })grayWorldDeviceWhiteBalanceGains;
- (id)initWithAttributes:(id)arg1 streamAttributes:(id)arg2 forPID:(int)arg3 clientIDOut:(int*)arg4 deviceAvailabilityChangedHandler:(id /* block */)arg5;
- (bool)isFlashScene;
- (bool)isHDRScene;
- (bool)isPropertyObserved:(id)arg1;
- (bool)isStillImageISPChromaNoiseReductionEnabled;
- (bool)isStillImageStabilizationScene;
- (float)lensPosition;
- (float)maximumAllowedFrameRate;
- (float)maximumFrameRate;
- (float)minimumAllowedFrameRate;
- (float)minimumFrameRate;
- (id)moduleInfoByPortType;
- (struct OpaqueFigCaptureISPProcessingSession { }*)newISPProcessingSessionWithType:(int)arg1;
- (int)position;
- (void)prepareToCaptureStillImageNow:(id /* block */)arg1;
- (bool)quadraHighResStillImageCaptureEnabled;
- (void)rampToVideoZoomFactor:(float)arg1 withRampType:(int)arg2 rate:(float)arg3 duration:(double)arg4 commandID:(int)arg5;
- (void)registerForAEMatrixMetadata;
- (int)resolveStillImageCaptureTypeFromStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; long long x16; }*)arg1 flashMode:(int)arg2 hdrMode:(int)arg3 sisMode:(int)arg4 clientBracketMode:(int)arg5;
- (id)sensorIDDictionaryByPortType;
- (int)setAlternateOutputSizeAndCrop:(id)arg1;
- (bool)setAutoFlashEnabled:(bool)arg1 error:(id*)arg2;
- (void)setAutoFocusSensorCalibrationData:(id)arg1;
- (int)setAutoImageControlMode:(int)arg1;
- (int)setAutomaticallyAdjustsImageControlMode:(bool)arg1;
- (int)setAutomaticallyAdjustsTorch:(bool)arg1;
- (void)setCameraModeForGyroCalibration:(int)arg1;
- (void)setDeviceReleaseBehavior:(int)arg1;
- (int)setExposureModeAutoWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)setExposureModeCustomWithExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 minFrameRate:(double)arg2 maxFrameRate:(double)arg3 ISO:(float)arg4 requestID:(int)arg5;
- (int)setExposureModeLocked;
- (int)setExposureTargetBias:(float)arg1 requestID:(int)arg2;
- (void)setFaceDetectionConfiguration:(id)arg1;
- (int)setFaceDetectionDrivenImageProcessingMode:(int)arg1;
- (int)setFocusModeAutoWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 continuous:(bool)arg2 smooth:(bool)arg3 rangeRestrictionNear:(float)arg4 rangeRestrictionFar:(float)arg5;
- (int)setFocusModeManualWithLensPosition:(float)arg1 requestID:(int)arg2;
- (bool)setHDRSceneDetectionEnabled:(bool)arg1 error:(id*)arg2;
- (void)setISPZoomFactor:(float)arg1;
- (int)setImageControlMode:(int)arg1;
- (int)setLowLightBoostAutomaticallyEnabled:(bool)arg1 supportedForFormat:(bool)arg2;
- (void)setMaxTorchLevel:(float)arg1;
- (void)setMaximumFrameRate:(float)arg1;
- (void)setMinimumFrameRate:(float)arg1;
- (void)setOverscanPercentage:(struct CGSize { double x1; double x2; })arg1;
- (void)setProperty:(id)arg1 isObserved:(bool)arg2;
- (int)setProvidesStortorgetMetadata:(bool)arg1;
- (void)setQuadraHighResStillImageCaptureEnabled:(bool)arg1;
- (void)setStillImageCaptureEnabled:(bool)arg1;
- (void)setStillImageISPChromaNoiseReductionEnabled:(bool)arg1;
- (void)setStillImageStabilizationSceneDetectionEnabled:(bool)arg1;
- (int)setSubjectAreaChangeMonitoringEnabled:(bool)arg1;
- (int)setTorchLevel:(float)arg1;
- (int)setWhiteBalanceModeAuto;
- (int)setWhiteBalanceModeLockedWithGains:(struct { float x1; float x2; float x3; })arg1 requestID:(int)arg2;
- (void)setZoomFactor:(float)arg1;
- (void)startupFaceDetectionIfNeeded;
- (bool)stillImageCaptureEnabled;
- (id)stillImageCaptureSettingsForCaptureType:(int)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; int x12; int x13; unsigned int x14; float x15; long long x16; }*)arg2 deliverOriginalImage:(bool)arg3 deliverSushiRaw:(bool)arg4 includePreBracketedEV0ForProcessing:(bool)arg5 clientBracketSettings:(id)arg6;
- (id)supportedFormats;
- (bool)supportsProperty:(struct __CFString { }*)arg1;
- (void)unregisterForAEMatrixMetadata;
- (id)zoomCommandHandler;
- (void)zoomCommandHandler:(id)arg1 didApplyZoomFactor:(float)arg2 rampComplete:(bool)arg3 rampCommandID:(int)arg4;
- (float)zoomFactor;

@end
