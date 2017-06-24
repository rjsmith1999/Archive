/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUClassInfo : NSObject {
    unsigned int  _defaultScanType;
    NSString * _displayName;
    VMUClassInfo * _genericLayout;
    BOOL  _hasSpecificLayout;
    BOOL  _hasVariantLayout;
    unsigned int  _instanceSize;
    unsigned int  _ivarCount;
    id * _localIvarList;
    NSString * _remoteBinaryPath;
    NSString * _remoteClassName;
    unsigned long long  _remoteIsa;
    unsigned int  _remotePointerSize;
    unsigned int  _remoteType;
    unsigned int  _ro_flags;
    unsigned int  _rw_flags;
    const char * _strongLayout;
    VMUClassInfo * _superclassLayout;
    unsigned int  _superclassOffset;
    NSMutableArray * _variantActions;
    NSMutableDictionary * _variantCache;
    NSMutableArray * _variantEvaluators;
    const char * _weakLayout;
}

@property (readonly) NSString *binaryName;
@property (readonly) NSString *binaryPath;
@property (readonly) NSString *className;
@property (nonatomic, readonly) unsigned int defaultScanType;
@property (readonly) NSString *displayName;
@property (readonly) NSString *fullIvarDescription;
@property (readonly) VMUClassInfo *genericInfo;
@property (readonly) bool hasCppConstructorOrDestructor;
@property (nonatomic, readonly) bool hasSpecificLayout;
@property (nonatomic, readonly) bool hasVariantLayout;
@property (readonly) int infoType;
@property (readonly) unsigned int instanceSize;
@property (readonly) bool isARR;
@property (readonly) bool isMetaClass;
@property (readonly) bool isRealized;
@property (readonly) bool isRootClass;
@property (nonatomic, readonly) unsigned int pointerSize;
@property (readonly) unsigned long long remoteIsa;
@property (readonly) NSString *shortIvarDescription;
@property (readonly) VMUClassInfo *superclassInfo;
@property (readonly) NSString *typeName;

+ (id)_genericBlockByrefInfo;
+ (id)classInfoWithClassName:(id)arg1 binaryPath:(id)arg2 type:(int)arg3;
+ (id)descriptionForTypeEncoding:(const char *)arg1 ivarName:(const char *)arg2;
+ (void)disableTestingVersion;
+ (void)enableTestingVersion;
+ (void)initialize;
+ (unsigned long long)sizeofClassStructure:(bool)arg1;

- (void)_addVariantAction:(id /* block */)arg1 withEvaluator:(id /* block */)arg2;
- (void)_applyExtendedLayout:(const char *)arg1 withSize:(unsigned int)arg2;
- (id)_copyWithInstanceSize:(unsigned int)arg1 superclassOffset:(unsigned int)arg2 asVariant:(bool)arg3 mutable:(bool)arg4;
- (void)_demangleClassName;
- (void)_freeLocalIvarList;
- (id)_initWithClass:(unsigned long long)arg1 realizedOnly:(bool)arg2 infoMap:(id)arg3 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg4 type:(int)arg5 swiftFieldMetadataContext:(struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionContext {} *x1; unsigned short x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); }*)arg6 memoryReader:(id /* block */)arg7;
- (id)_ivarDescription:(unsigned int)arg1 withSpacing:(unsigned int)arg2;
- (void)_logDescriptionWithSuperclasses:(bool)arg1 indentation:(int)arg2 toLogger:(id /* block */)arg3;
- (void)_parseIvarsAndLayouts;
- (void)_processARRLayout:(const char *)arg1 scanType:(unsigned int)arg2;
- (void)_replaceField:(id)arg1 withFields:(id)arg2;
- (void)_setBinaryPath:(id)arg1;
- (void)_setClassNameWithAddress:(unsigned long long)arg1 reader:(id /* block */)arg2;
- (void)_setDefaultScanType:(unsigned int)arg1;
- (void)_setDisplayName:(id)arg1;
- (void)_setFields:(id)arg1;
- (void)_setIsa:(unsigned long long)arg1;
- (void)_setSuperclassInfo:(id)arg1;
- (unsigned int)_totalIvarCount;
- (id)binaryName;
- (id)binaryPath;
- (id)className;
- (void)dealloc;
- (id)debugDescription;
- (unsigned int)defaultScanType;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAllFieldsWithBlock:(id /* block */)arg1;
- (void)enumerateExternalValuesFromObject:(unsigned long long)arg1 withSize:(unsigned int)arg2 block:(id /* block */)arg3;
- (void)enumerateScanningLocationsForSize:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateStoredEntriesForObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 externalValues:(id)arg3 block:(id /* block */)arg4;
- (void)enumerateSublayoutsForSize:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateTypeFieldsWithBlock:(id /* block */)arg1;
- (id)fieldAtOrBeforeOffset:(unsigned int)arg1;
- (id)firstFieldWithName:(id)arg1;
- (id)fullIvarDescription;
- (id)genericInfo;
- (bool)hasCppConstructorOrDestructor;
- (bool)hasSpecificLayout;
- (bool)hasVariantLayout;
- (unsigned long long)hash;
- (int)infoType;
- (id)initWithClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg3 type:(int)arg4 swiftFieldMetadataContext:(struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionContext {} *x1; unsigned short x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); }*)arg5 memoryReader:(id /* block */)arg6;
- (id)initWithClassName:(id)arg1 binaryPath:(id)arg2 type:(int)arg3;
- (id)initWithClosureContext:(unsigned long long)arg1 typeInfo:(struct swift_typeinfo { int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg2 infoMap:(id)arg3 swiftFieldMetadataContext:(struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionContext {} *x1; unsigned short x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); }*)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithRealizedClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg3 type:(int)arg4 swiftFieldMetadataContext:(struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionContext {} *x1; unsigned short x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); }*)arg5 memoryReader:(id /* block */)arg6;
- (id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned int)arg3;
- (unsigned int)instanceSize;
- (id)instanceSpecificInfoForObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 memoryReader:(id /* block */)arg3;
- (bool)isARR;
- (bool)isEqual:(id)arg1;
- (bool)isMetaClass;
- (bool)isRealized;
- (bool)isRootClass;
- (id)mutableCopy;
- (unsigned int)pointerSize;
- (unsigned long long)remoteIsa;
- (id)scanDescriptionWithSize:(unsigned int)arg1;
- (void)serializeWithClassMap:(id)arg1 simpleSerializer:(id)arg2 version:(unsigned int)arg3;
- (id)shortIvarDescription;
- (id)superclassInfo;
- (id)type;
- (id)typeName;

@end
