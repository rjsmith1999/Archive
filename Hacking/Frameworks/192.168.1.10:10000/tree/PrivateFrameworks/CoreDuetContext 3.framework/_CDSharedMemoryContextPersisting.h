/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDSharedMemoryContextPersisting : NSObject <_CDContextPersisting> {
    NSCountedSet * _keyPathRegistrationCount;
    unsigned long long  _localDeviceID;
    NSObject<OS_dispatch_queue> * _queue;
    _CDSharedMemoryKeyValueStore * _store;
}

@property (nonatomic, retain) NSCountedSet *keyPathRegistrationCount;
@property (nonatomic) unsigned long long localDeviceID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) _CDSharedMemoryKeyValueStore *store;

+ (id)persistenceWithSharedMemoryKeyValueStore:(id)arg1;
+ (id)sharedMemoryKeyFromKeyPath:(id)arg1;
+ (id)sharedMemoryKeyFromRegistration:(id)arg1;

- (void).cxx_destruct;
- (id)allKeysForContextStore;
- (void)deleteAllData;
- (void)deleteDataCreatedBefore:(id)arg1;
- (void)deleteKeyPaths:(id)arg1;
- (void)deleteRegistration:(id)arg1;
- (id)initWithSharedMemoryKeyValueStore:(id)arg1;
- (id)keyPathRegistrationCount;
- (id)loadRegistrations;
- (id)loadValues;
- (unsigned long long)localDeviceID;
- (id)queue;
- (void)saveRegistration:(id)arg1;
- (void)saveValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setKeyPathRegistrationCount:(id)arg1;
- (void)setLocalDeviceID:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
