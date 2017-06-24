/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVVideoCompositingContext : NSObject <NSSecureCoding> {
    PVColorSpace * _workingColorSpace;
    int  bufferFormat;
    bool  concatenationFlag;
    int  conformColorSpacesToDestinationBufferSpace;
    int  dotGraphLevel;
    bool  dynamicPlayback;
    int  filterMode;
    int  gpuRenderAPI;
    int  instructionGraphDumpLevel;
    int  numCPUThreads;
    PVColorSpace * outputColorSpace;
    int  pageSize;
    int  perfStatsLogLevel;
    int  pmrLevel;
    bool  powerFriendlyExport;
    int  renderDevice;
    int  renderGraphDumpLevel;
    bool  renderStatsFlag;
    int  renderStatsMaxVals;
    int  renderStatsWarmUp;
    int  shaderFormat;
    int  signPostLevel;
    bool  textureBorder;
    int  tileSize;
    int  traceGLLevel;
    int  traceMetalLevel;
    int  workingColorSpaceConformIntent;
}

@property int bufferFormat;
@property bool concatenationFlag;
@property (nonatomic) int conformColorSpacesToDestinationBufferSpace;
@property int dotGraphLevel;
@property bool dynamicPlayback;
@property int filterMode;
@property int gpuRenderAPI;
@property (nonatomic) int instructionGraphDumpLevel;
@property int numCPUThreads;
@property (nonatomic, retain) PVColorSpace *outputColorSpace;
@property int pageSize;
@property (nonatomic) int perfStatsLogLevel;
@property (nonatomic) int pmrLevel;
@property (nonatomic) bool powerFriendlyExport;
@property (nonatomic) int renderDevice;
@property int renderGraphDumpLevel;
@property bool renderStatsFlag;
@property int renderStatsMaxVals;
@property int renderStatsWarmUp;
@property int shaderFormat;
@property (nonatomic) int signPostLevel;
@property bool textureBorder;
@property int tileSize;
@property int traceGLLevel;
@property (nonatomic) int traceMetalLevel;
@property (nonatomic, retain) PVColorSpace *workingColorSpace;
@property (nonatomic) int workingColorSpaceConformIntent;

+ (id)createContextForCPU;
+ (id)createContextForGPU;
+ (void)setColorSpaceDefaultsForDeviceClass;
+ (void)setWorkingColorSpace:(id)arg1 outputColorSpace:(id)arg2 workingSpaceConformIntent:(int)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setIntermediateBufferFormat;
- (int)bufferFormat;
- (bool)concatenationFlag;
- (int)conformColorSpacesToDestinationBufferSpace;
- (int)dotGraphLevel;
- (void)dumpContext;
- (bool)dynamicPlayback;
- (void)encodeWithCoder:(id)arg1;
- (int)filterMode;
- (int)gpuRenderAPI;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(int)arg1;
- (int)instructionGraphDumpLevel;
- (int)numCPUThreads;
- (id)outputColorSpace;
- (int)pageSize;
- (int)perfStatsLogLevel;
- (int)pmrLevel;
- (bool)powerFriendlyExport;
- (int)renderDevice;
- (int)renderGraphDumpLevel;
- (bool)renderStatsFlag;
- (int)renderStatsMaxVals;
- (int)renderStatsWarmUp;
- (void)setBufferFormat:(int)arg1;
- (void)setConcatenationFlag:(bool)arg1;
- (void)setConformColorSpacesToDestinationBufferSpace:(int)arg1;
- (void)setContext:(id)arg1;
- (void)setDotGraphLevel:(int)arg1;
- (void)setDynamicPlayback:(bool)arg1;
- (void)setFilterMode:(int)arg1;
- (void)setGpuRenderAPI:(int)arg1;
- (void)setInstructionGraphDumpLevel:(int)arg1;
- (void)setNumCPUThreads:(int)arg1;
- (void)setOutputColorSpace:(id)arg1;
- (void)setPageSize:(int)arg1;
- (void)setPerfStatsLogLevel:(int)arg1;
- (void)setPmrLevel:(int)arg1;
- (void)setPowerFriendlyExport:(bool)arg1;
- (void)setRenderDevice:(int)arg1;
- (void)setRenderGraphDumpLevel:(int)arg1;
- (void)setRenderStatsFlag:(bool)arg1;
- (void)setRenderStatsMaxVals:(int)arg1;
- (void)setRenderStatsWarmUp:(int)arg1;
- (void)setShaderFormat:(int)arg1;
- (void)setSignPostLevel:(int)arg1;
- (void)setTextureBorder:(bool)arg1;
- (void)setTileSize:(int)arg1;
- (void)setTraceGLLevel:(int)arg1;
- (void)setTraceMetalLevel:(int)arg1;
- (void)setWorkingColorSpace:(id)arg1;
- (void)setWorkingColorSpaceConformIntent:(int)arg1;
- (int)shaderFormat;
- (int)signPostLevel;
- (bool)textureBorder;
- (int)tileSize;
- (int)traceGLLevel;
- (int)traceMetalLevel;
- (id)workingColorSpace;
- (int)workingColorSpaceConformIntent;

@end
