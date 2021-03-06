/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCaptureCommandContext : NSObject {
    CAMCaptureEngine * __captureEngine;
    AVCaptureDevice * _currentAudioDevice;
    AVCaptureDeviceInput * _currentAudioDeviceInput;
    AVCaptureSession * _currentCaptureSession;
    AVCaptureVideoDataOutput * _currentEffectsPreviewOutput;
    AVCaptureStillImageOutput * _currentLegacyStillImageOutput;
    AVCaptureMetadataOutput * _currentMetadataOutput;
    AVCaptureMovieFileOutput * _currentMovieFileOutput;
    CAMPanoramaOutput * _currentPanoramaOutput;
    AVCapturePhotoOutput * _currentStillImageOutput;
    AVCaptureDevice * _currentVideoDevice;
    AVCaptureDeviceFormat * _currentVideoDeviceFormat;
    AVCaptureDeviceInput * _currentVideoDeviceInput;
    NSString * _currentVideoDevicePreset;
    AVCaptureVideoPreviewLayer * _currentVideoPreviewLayer;
}

@property (nonatomic, readonly) CAMCaptureEngine *_captureEngine;
@property (nonatomic, retain) AVCaptureDevice *currentAudioDevice;
@property (nonatomic, retain) AVCaptureDeviceInput *currentAudioDeviceInput;
@property (nonatomic, retain) AVCaptureSession *currentCaptureSession;
@property (nonatomic, retain) AVCaptureVideoDataOutput *currentEffectsPreviewOutput;
@property (nonatomic, retain) AVCaptureStillImageOutput *currentLegacyStillImageOutput;
@property (nonatomic, retain) AVCaptureMetadataOutput *currentMetadataOutput;
@property (nonatomic, retain) AVCaptureMovieFileOutput *currentMovieFileOutput;
@property (nonatomic, readonly) CAMPanoramaConfiguration *currentPanoramaConfiguration;
@property (nonatomic, retain) CAMPanoramaOutput *currentPanoramaOutput;
@property (nonatomic, readonly) <AVCaptureFileOutputRecordingDelegate> *currentRecordingDelegate;
@property (nonatomic, readonly) <AVCapturePhotoCaptureDelegate> *currentStillImageDelegate;
@property (nonatomic, retain) AVCapturePhotoOutput *currentStillImageOutput;
@property (nonatomic, retain) AVCaptureDevice *currentVideoDevice;
@property (nonatomic, retain) AVCaptureDeviceFormat *currentVideoDeviceFormat;
@property (nonatomic, retain) AVCaptureDeviceInput *currentVideoDeviceInput;
@property (nonatomic, retain) NSString *currentVideoDevicePreset;
@property (nonatomic, retain) AVCaptureVideoPreviewLayer *currentVideoPreviewLayer;

- (void).cxx_destruct;
- (id)_captureEngine;
- (id)_captureEngineDeviceForDevice:(long long)arg1;
- (id)audioDeviceInput;
- (void)clear;
- (id)currentAudioDevice;
- (id)currentAudioDeviceInput;
- (id)currentCaptureSession;
- (id)currentEffectsPreviewOutput;
- (id)currentLegacyStillImageOutput;
- (id)currentMetadataOutput;
- (id)currentMovieFileOutput;
- (id)currentPanoramaConfiguration;
- (id)currentPanoramaOutput;
- (id)currentRecordingDelegate;
- (id)currentStillImageDelegate;
- (id)currentStillImageOutput;
- (id)currentVideoDevice;
- (id)currentVideoDeviceFormat;
- (id)currentVideoDeviceInput;
- (id)currentVideoDevicePreset;
- (id)currentVideoPreviewLayer;
- (id)initWithCaptureEngine:(id)arg1;
- (void)legacyStillImageRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2;
- (id)metadataOutputForMode:(long long)arg1;
- (id)outputsForMode:(long long)arg1;
- (id)primaryOutputForMode:(long long)arg1;
- (void)registerLegacyStillImageCaptureRequest:(id)arg1;
- (void)registerStillImageCaptureRequest:(id)arg1 withSettings:(id)arg2;
- (void)registerVideoCaptureRequest:(id)arg1;
- (void)setCurrentAudioDevice:(id)arg1;
- (void)setCurrentAudioDeviceInput:(id)arg1;
- (void)setCurrentCaptureSession:(id)arg1;
- (void)setCurrentEffectsPreviewOutput:(id)arg1;
- (void)setCurrentLegacyStillImageOutput:(id)arg1;
- (void)setCurrentMetadataOutput:(id)arg1;
- (void)setCurrentMovieFileOutput:(id)arg1;
- (void)setCurrentPanoramaOutput:(id)arg1;
- (void)setCurrentStillImageOutput:(id)arg1;
- (void)setCurrentVideoDevice:(id)arg1;
- (void)setCurrentVideoDeviceFormat:(id)arg1;
- (void)setCurrentVideoDeviceInput:(id)arg1;
- (void)setCurrentVideoDevicePreset:(id)arg1;
- (void)setCurrentVideoPreviewLayer:(id)arg1;
- (void)startPanoramaCaptureWithRequest:(id)arg1;
- (void)stopPanoramaCapture;
- (id)videoDeviceForDevice:(long long)arg1;

@end
