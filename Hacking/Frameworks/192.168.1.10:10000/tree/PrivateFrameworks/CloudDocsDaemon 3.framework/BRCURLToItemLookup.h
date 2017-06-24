/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCURLToItemLookup : NSObject <NSSecureCoding> {
    BRCRelativePath * __relpath;
    bool  _allowAppLibraryRoot;
    unsigned long long  _byIDDiffs;
    BRCLocalItem * _byIDLocalItem;
    BRCServerItem * _byIDServerItem;
    unsigned long long  _byPathDiffs;
    BRCLocalItem * _byPathLocalItem;
    BRCServerItem * _byPathServerItem;
    BRCPQLConnection * _db;
    unsigned long long  _faultedDiffs;
    BRCDocumentItem * _faultedLocalItem;
    BRCRelativePath * _faultedRelpath;
    BRCServerItem * _faultedServerItem;
    NSString * _filename;
    union { 
        struct { 
            unsigned int parentItemID : 1; 
            unsigned int relpath : 1; 
            unsigned int pathMatch : 1; 
            unsigned int faultedMatch : 1; 
            unsigned int byIDMatch : 1; 
            unsigned int reservedMatch : 1; 
        } ; 
        unsigned int value; 
    }  _hasFetched;
    BRCItemID * _parentItemID;
    NSString * _parentPath;
    BRCRelativePath * _parentRelpath;
    BRCLocalItem * _reservedLocalItem;
    BRCServerItem * _reservedServerItem;
    BRCAccountSession * _session;
    NSURL * _url;
}

@property (nonatomic, readonly) unsigned long long byIDDiffs;
@property (nonatomic, readonly) BRCLocalItem *byIDLocalItem;
@property (nonatomic, readonly) struct { id x1; id x2; unsigned long long x3; } byIDMatch;
@property (nonatomic, readonly) BRCServerItem *byIDServerItem;
@property (nonatomic, readonly) unsigned long long byPathDiffs;
@property (nonatomic, readonly) BRCLocalItem *byPathLocalItem;
@property (nonatomic, readonly) struct { id x1; id x2; unsigned long long x3; } byPathMatch;
@property (nonatomic, readonly) BRCRelativePath *byPathRelpath;
@property (nonatomic, readonly) BRCServerItem *byPathServerItem;
@property (nonatomic, readonly) BRCDocumentItem *bySharedEnclosureDocItem;
@property (nonatomic, readonly) BRCPQLConnection *db;
@property (nonatomic, readonly) unsigned long long faultedDiffs;
@property (nonatomic, readonly) BRCDocumentItem *faultedLocalItem;
@property (nonatomic, readonly) struct { id x1; id x2; unsigned long long x3; } faultedMatch;
@property (nonatomic, readonly) BRCRelativePath *faultedRelpath;
@property (nonatomic, readonly) BRCServerItem *faultedServerItem;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) BRCItemID *parentItemID;
@property (nonatomic, readonly) NSString *parentPath;
@property (nonatomic, readonly) BRCRelativePath *parentRelpath;
@property (nonatomic, readonly) unsigned short pathType;
@property (nonatomic, readonly) BRCRelativePath *relpath;
@property (nonatomic, readonly) BRCLocalItem *reservedLocalItem;
@property (nonatomic, readonly) struct { id x1; id x2; unsigned long long x3; } reservedMatch;
@property (nonatomic, readonly) BRCServerItem *reservedServerItem;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_bounceBouncesHiddenByFault:(id)arg1;
- (bool)_canUpdatePathMatch:(const struct { id x1; id x2; unsigned long long x3; }*)arg1 hasAdditionsToApply:(bool)arg2;
- (void)_clearNamespace:(unsigned char)arg1;
- (void)_fetchFaultedPathMatch;
- (void)_fetchIDMatch;
- (void)_fetchPathMatch;
- (void)_fetchRelPath;
- (void)_fetchReservedPathMatch;
- (void)_moveMissingItemAsideInNamespace:(unsigned char)arg1;
- (struct { id x1; id x2; unsigned long long x3; })_pathMatchInNamespace:(unsigned char)arg1;
- (bool)_removeDirectory:(id)arg1 atPath:(id)arg2 error:(id*)arg3;
- (unsigned long long)byIDDiffs;
- (id)byIDLocalItem;
- (struct { id x1; id x2; unsigned long long x3; })byIDMatch;
- (id)byIDServerItem;
- (unsigned long long)byPathDiffs;
- (id)byPathLocalItem;
- (struct { id x1; id x2; unsigned long long x3; })byPathMatch;
- (id)byPathRelpath;
- (id)byPathServerItem;
- (id)bySharedEnclosureDocItem;
- (void)clearByIDItem;
- (void)clearByPathItem;
- (void)clearFaultedItem;
- (void)clearReservedItem;
- (void)closePaths;
- (id)db;
- (id)description;
- (void)didApplyChangesAtPath:(id)arg1 filename:(id)arg2 li:(id)arg3 si:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)faultedDiffs;
- (id)faultedLocalItem;
- (struct { id x1; id x2; unsigned long long x3; })faultedMatch;
- (id)faultedRelpath;
- (id)faultedServerItem;
- (id)filename;
- (void)handleReservedPathMatchesIfNeeded;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 allowAppLibraryRoot:(bool)arg2 session:(id)arg3;
- (id)initWithURL:(id)arg1 allowAppLibraryRoot:(bool)arg2 session:(id)arg3 db:(id)arg4;
- (id)initWithURL:(id)arg1 session:(id)arg2;
- (void)markPathMatchLostIfLocationDoesntMatch:(struct { id x1; id x2; unsigned long long x3; }*)arg1;
- (void)matchLookupItemsWithDisk;
- (id)parentItemID;
- (id)parentPath;
- (id)parentRelpath;
- (unsigned short)pathType;
- (void)refreshByIDDiffs;
- (void)refreshByPathDiffs;
- (void)refreshFaultedDiffs;
- (id)relpath;
- (id)reservedLocalItem;
- (struct { id x1; id x2; unsigned long long x3; })reservedMatch;
- (id)reservedServerItem;
- (bool)resolveAndKeepOpenWithError:(id*)arg1;
- (bool)resolveParentAndKeepOpenMustExist:(bool)arg1 errcode:(int*)arg2;
- (bool)tryToDeleteItemInNamespace:(unsigned char)arg1;
- (void)tryToUpdateItemInNamespace:(unsigned char)arg1 withDstLookup:(id)arg2;
- (id)url;

@end
