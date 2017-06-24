/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGBloomFilter : NSObject {
    <SGBloomFilterChunk> * _head;
    NSObject<OS_dispatch_queue> * _queue;
    <SGBloomFilterChunk> * _tail;
}

- (void).cxx_destruct;
- (void)_rotateIfNecessary;
- (void)add:(id)arg1;
- (void)addAsync:(id)arg1;
- (id)counts;
- (bool)exists:(id)arg1;
- (id)initWithDirectory:(id)arg1 name:(id)arg2;
- (id)initWithHead:(id)arg1 tail:(id)arg2;
- (id)initWithInMemoryStorage;
- (id)initWithInMemoryStorageSparse;
- (void)rotate;

@end
