/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHObjectDeleteRequest : NSObject <PHDeleteChangeRequest> {
    bool  _clientEntitled;
    NSString * _clientName;
    int  _clientProcessID;
    NSManagedObjectID * _objectID;
    NSString * _uuid;
}

@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) int clientProcessID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

+ (id)deleteRequestForObject:(id)arg1;

- (void).cxx_destruct;
- (id)clientName;
- (int)clientProcessID;
- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)init;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (bool)isClientEntitled;
- (id)managedEntityName;
- (id)objectID;
- (id)uuid;
- (bool)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2;

@end