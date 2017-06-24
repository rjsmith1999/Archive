/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PanoramaClip : KenBurnsClip <CompoundClipInformation> {
    double  _burstAcrossSubClipDuration;
    NSArray * _containedClips;
    NSArray * _detectedFaceRects;
    unsigned long long  _panoramaDirection;
    unsigned long long  _panoramaStyle;
    double  _panoramaTransitionDuration;
    double  _projectAspectRatio;
    int  _projectFrameRate;
    KenBurnsClip * _templateClip;
}

@property (nonatomic) double burstAcrossSubClipDuration;
@property (nonatomic, retain) NSArray *containedClips;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *detectedFaceRects;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool panSupportsDoublePan;
@property (nonatomic, readonly) bool panSupportsTriplePan;
@property (nonatomic) unsigned long long panoramaDirection;
@property (nonatomic) unsigned long long panoramaStyle;
@property (nonatomic) double panoramaTransitionDuration;
@property (nonatomic) double projectAspectRatio;
@property (nonatomic) int projectFrameRate;
@property (readonly) Class superclass;
@property (nonatomic, retain) KenBurnsClip *templateClip;

+ (id)sharedRandomNumberGenerator;

- (void).cxx_destruct;
- (void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3;
- (id)appendLetterboxZoomOutToClips:(id)arg1 zoomOutFromLastClip:(bool)arg2;
- (id)buildClipsForBurstAcrossPanorama;
- (id)buildClipsForDoublePanorama;
- (id)buildClipsForSinglePanorama;
- (id)buildClipsForTriplePanorama;
- (double)burstAcrossSubClipDuration;
- (void)computeBurstAcrossClipCount:(int*)arg1 minLeftEdge:(double*)arg2 maxLeftEdge:(double*)arg3;
- (id)containedClips;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionOfPanoramaDirection;
- (id)descriptionOfPanoramaStyle;
- (id)detectedFaceRects;
- (void)equalizeDurationsOfClips:(id)arg1 totalDuration:(int)arg2;
- (bool)expandsEditList;
- (id)initWithKenBurnsClip:(id)arg1 projectAspectRatio:(double)arg2 projectFrameRate:(int)arg3;
- (bool)isBurstAcrossStyleSuitable;
- (bool)isPano;
- (void)logDetectedFaceRects;
- (void)lowLevelCustomizePanoramaKB:(id)arg1 panRight:(bool)arg2 leftLimit:(double)arg3 rightLimit:(double)arg4 allowLeftCrop:(bool)arg5 allowRightCrop:(bool)arg6 leftZoom:(double)arg7 rightZoom:(double)arg8;
- (void)offsetKenBurnsFramesForFaces:(id)arg1 panRight:(bool)arg2;
- (bool)panSupportsDoublePan;
- (bool)panSupportsTriplePan;
- (unsigned long long)panoramaDirection;
- (unsigned long long)panoramaStyle;
- (double)panoramaTransitionDuration;
- (struct CGSize { double x1; double x2; })panoramaViewportSizeForImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)plistRepresentationFromProject:(id)arg1;
- (double)projectAspectRatio;
- (int)projectFrameRate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectEnclosingAllFacesWithFaceScale:(double)arg1 imageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setBurstAcrossSubClipDuration:(double)arg1;
- (void)setContainedClips:(id)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)setDetectedFaceRects:(id)arg1;
- (void)setDuration:(int)arg1;
- (void)setPanoramaDirection:(unsigned long long)arg1;
- (void)setPanoramaStyle:(unsigned long long)arg1;
- (void)setPanoramaTransitionDuration:(double)arg1;
- (void)setProjectAspectRatio:(double)arg1;
- (void)setProjectFrameRate:(int)arg1;
- (void)setTemplateClip:(id)arg1;
- (void)takePropertiesFromKenBurnsClip:(id)arg1;
- (id)templateClip;
- (int)totalDurationOfClips:(id)arg1;

@end
