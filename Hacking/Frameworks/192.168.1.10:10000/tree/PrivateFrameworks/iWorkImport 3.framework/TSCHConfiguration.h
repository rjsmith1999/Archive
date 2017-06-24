/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHConfiguration : NSObject {
    bool  mDisableHighQualityRenderingIfNecessary;
    bool  mExportsUsingSageKeynoteChartNonStyleDefaultsOverride;
    Class  mMultiDataChartOptionsControllerBuildSupportClass;
    NSString * mSaveChartStyleHelpKey;
    bool  mShouldForceDiscreteGraphicsFor3D;
    bool  mShowMessageOnSelection;
    bool  mSupports3DFillDataEmbeddingRecovery;
    bool  mSupportsChartDataEditor;
    bool  mSupportsChartRangeEditingMode;
    bool  mSupportsNumberFormatSameAsSource;
    bool  mSupportsTextBackground;
    bool  mSupportsTextWrapping;
    bool  mUse3DFillFor3DChartFallback;
}

@property (readonly) TSSPropertyMap *appSpecificPropertyOverrides;
@property (nonatomic) bool disableHighQualityRenderingIfNecessary;
@property (nonatomic) bool exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
@property (nonatomic) Class multiDataChartOptionsControllerBuildSupportClass;
@property (nonatomic, copy) NSString *saveChartStyleHelpKey;
@property (nonatomic) bool shouldForceDiscreteGraphicsFor3D;
@property (nonatomic) bool showMessageOnSelection;
@property (nonatomic) bool supports3DFillDataEmbeddingRecovery;
@property (nonatomic) bool supportsChartDataEditor;
@property (nonatomic) bool supportsChartRangeEditingMode;
@property (nonatomic) bool supportsNumberFormatSameAsSource;
@property (nonatomic) bool supportsTextBackground;
@property (nonatomic) bool supportsTextWrapping;
@property (nonatomic) bool use3DFillFor3DChartFallback;

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)resetSharedChartConfiguration;
+ (id)sharedChartConfiguration;

- (id)appSpecificPropertyOverrides;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disableHighQualityRenderingIfNecessary;
- (bool)exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
- (id)init;
- (Class)multiDataChartOptionsControllerBuildSupportClass;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)saveChartStyleHelpKey;
- (void)setDisableHighQualityRenderingIfNecessary:(bool)arg1;
- (void)setExportsUsingSageKeynoteChartNonStyleDefaultsOverride:(bool)arg1;
- (void)setMultiDataChartOptionsControllerBuildSupportClass:(Class)arg1;
- (void)setSaveChartStyleHelpKey:(id)arg1;
- (void)setShouldForceDiscreteGraphicsFor3D:(bool)arg1;
- (void)setShowMessageOnSelection:(bool)arg1;
- (void)setSupports3DFillDataEmbeddingRecovery:(bool)arg1;
- (void)setSupportsChartDataEditor:(bool)arg1;
- (void)setSupportsChartRangeEditingMode:(bool)arg1;
- (void)setSupportsNumberFormatSameAsSource:(bool)arg1;
- (void)setSupportsTextBackground:(bool)arg1;
- (void)setSupportsTextWrapping:(bool)arg1;
- (void)setUse3DFillFor3DChartFallback:(bool)arg1;
- (bool)shouldForceDiscreteGraphicsFor3D;
- (bool)showMessageOnSelection;
- (bool)supports3DFillDataEmbeddingRecovery;
- (bool)supportsChartDataEditor;
- (bool)supportsChartRangeEditingMode;
- (bool)supportsNumberFormatSameAsSource;
- (bool)supportsTextBackground;
- (bool)supportsTextWrapping;
- (bool)use3DFillFor3DChartFallback;

@end
