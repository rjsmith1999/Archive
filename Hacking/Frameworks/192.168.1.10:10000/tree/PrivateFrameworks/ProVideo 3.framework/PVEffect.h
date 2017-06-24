/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVEffect : NSObject <NSCopying, NSSecureCoding> {
    bool  _conformToInputAspect;
    NSString * _displayName;
    NSString * _effectID;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _effectRange;
    NSString * _effectType;
    NSMutableDictionary * _inspectableProperties;
    NSLock * _inspectablePropertiesLock;
    struct PCAtomicValue { int x1; } * _loadCount;
}

@property (nonatomic) bool conformToInputAspect;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } effectRange;
@property (nonatomic, retain) NSMutableDictionary *inspectableProperties;

// Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo

+ (id)_effectRegistry;
+ (id)_effectRegistryForLookup;
+ (void)_registerBuiltInEffects;
+ (void)_registerEffectsInBundle:(id)arg1 atPath:(id)arg2;
+ (id)_registeredEffectClasses;
+ (id)_registryEntryForEffectID:(id)arg1;
+ (id)allRegisteredEffectIDs;
+ (void)appFinishedLaunching:(id)arg1;
+ (id)categoryForEffectID:(id)arg1;
+ (Class)classForEffectID:(id)arg1;
+ (void)cleanupEffectsCache;
+ (void)clearPreviewStats;
+ (id)defaultVideoTransitionEffectID;
+ (void)deferEffectRegistrationForClass:(Class)arg1;
+ (id)descriptionForEffectID:(id)arg1;
+ (id)displayNameForEffectID:(id)arg1;
+ (id)displayNameForEffectType:(id)arg1;
+ (bool)effectIDIsRegistered:(id)arg1;
+ (id)effectTypeForEffectID:(id)arg1;
+ (void)ensureEffectsRegistered;
+ (id)firstRegisteredEffectIDContainingSubstring:(id)arg1;
+ (void)initEffectRegistry;
+ (bool)isVideoForEffectID:(id)arg1;
+ (id)newEffectWithID:(id)arg1;
+ (void)noteApplicationDidReceiveMemoryWarning;
+ (void)noteApplicationWillTerminate;
+ (id)propertiesForEffect:(id)arg1;
+ (void)registerEffectClass:(Class)arg1 forEffectID:(id)arg2 withProperties:(id)arg3;
+ (void)registerEffects;
+ (id)registeredEffectIDsForClass:(Class)arg1;
+ (id)registeredEffectIDsForEffectType:(id)arg1;
+ (id)registeredEffectIDsForEffectTypes:(id)arg1;
+ (void)runDeferredRegistration;
+ (bool)supportsSecureCoding;
+ (id)themeForEffectID:(id)arg1;
+ (id)userVisibleEffectIDs;
+ (void)willTerminate:(id)arg1;

- (void).cxx_destruct;
- (void)_copyWithZone:(struct _NSZone { }*)arg1 into:(id)arg2;
- (void)_decodeFromCoder:(id)arg1 into:(id)arg2;
- (void)_postInit:(id)arg1;
- (void)applyInspectableProperties;
- (void)asyncPreviewImageForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 image:(id)arg2 needsBorder:(bool)arg3 size:(struct CGSize { double x1; double x2; })arg4 completionHandler:(id /* block */)arg5;
- (void)cancelAsyncPreviewImageJob;
- (id)categoryName;
- (bool)conformToInputAspect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)effectDescription;
- (id)effectID;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })effectRange;
- (id)effectType;
- (void)encodeWithCoder:(id)arg1;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })hgNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputs:(const struct PVInputHGNodeMap<unsigned int> { struct map<unsigned int, HGRef<HGNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, HGRef<HGNode> > > > { struct __tree<std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, HGRef<HGNode> > > > { struct __tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode> >, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)arg2 renderer:(const struct HGRef<HGRenderer> { struct HGRenderer {} *x1; }*)arg3 renderContext:(struct HGRef<PVRenderContext> { struct PVRenderContext {} *x1; })arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffectID:(id)arg1;
- (id)inspectableProperties;
- (void)loadEffect;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })outputSize;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })previewHGNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputHGNode:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg2 outputSize:(struct CGSize { double x1; double x2; })arg3 renderer:(struct HGRenderer { int (**x1)(); unsigned int x2; struct HGNode {} *x3; struct HGBuffer {} *x4; struct HGRendererTextureUnit { struct HGTexture {} *x_5_1_1; struct HGTransform {} *x_5_1_2; int x_5_1_3; } x5[8]; struct vector<DepthBufferManager *, std::__1::allocator<DepthBufferManager *> > { struct DepthBufferManager {} **x_6_1_1; struct DepthBufferManager {} **x_6_1_2; struct __compressed_pair<DepthBufferManager **, std::__1::allocator<DepthBufferManager *> > { struct DepthBufferManager {} **x_3_2_1; } x_6_1_3; } x6; struct vector<HGExecutionUnit *, std::__1::allocator<HGExecutionUnit *> > { struct HGExecutionUnit {} **x_7_1_1; struct HGExecutionUnit {} **x_7_1_2; struct __compressed_pair<HGExecutionUnit **, std::__1::allocator<HGExecutionUnit *> > { struct HGExecutionUnit {} **x_3_2_1; } x_7_1_3; } x7; struct HGExecutionData {} *x8; struct HGSyncData {} *x9; struct _opaque_pthread_rwlock_t { long long x_10_1_1; BOOL x_10_1_2[192]; } x10; struct _opaque_pthread_mutex_t { long long x_11_1_1; BOOL x_11_1_2[56]; } x11; struct HGLUTCacheManager {} *x12; }*)arg4;
- (id)previewImageForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 image:(id)arg2 needsBorder:(bool)arg3 size:(struct CGSize { double x1; double x2; })arg4;
- (void)releaseEffect;
- (void)releaseResources;
- (void)setConformToInputAspect:(bool)arg1;
- (void)setEffectRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setInspectableProperties:(id)arg1;
- (bool)supportsExtendedRangeInputs;
- (void)updateInspectableProperties;
- (bool)usesDefaultChannelDataEncoding;
- (bool)writeDefaultChannels;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

+ (id)objectFromPlist:(id)arg1 inProject:(id)arg2;

- (id)plistRepresentation;

@end
