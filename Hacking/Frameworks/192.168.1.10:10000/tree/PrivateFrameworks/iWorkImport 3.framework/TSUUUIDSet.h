/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUUUIDSet : NSObject <NSCopying, NSMutableCopying> {
    unsigned int  _index;
    struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { 
        struct __hash_table<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { 
            struct unique_ptr<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > > { 
                    struct __hash_node<TSU::UUIDData<TSP::UUIDData>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>, std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> { 
                    struct __hash_node<TSU::UUIDData<TSP::UUIDData>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::hash<TSUUUID> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> > > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _uuidSet;
}

@property (readonly) unsigned long long count;
@property (readonly) unsigned int index;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })anyUuid;
- (bool)containsUuid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (id)expandedSetWithUuid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (id)expandedSetWithUuids:(const struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct __hash_table<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct unique_ptr<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > > { struct __hash_node<TSU::UUIDData<TSP::UUIDData>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>, std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> { struct __hash_node<TSU::UUIDData<TSP::UUIDData>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; }*)arg1;
- (id)expandedSetWithUuidsFromVector:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1;
- (void)foreachUuid:(id /* block */)arg1;
- (unsigned long long)hash;
- (unsigned int)index;
- (id)initFromMessage:(const struct UuidSetStoreArchive_UuidSet { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::UUID> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1;
- (id)initWithUUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (id)initWithUUIDSet:(id)arg1;
- (id)initWithUUIDVector:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1;
- (bool)intersectsSet:(id)arg1;
- (bool)isAllInvalid;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)p_addUUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (void)p_addUUIDs:(const struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct __hash_table<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct unique_ptr<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > > { struct __hash_node<TSU::UUIDData<TSP::UUIDData>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>, std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> { struct __hash_node<TSU::UUIDData<TSP::UUIDData>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; }*)arg1;
- (void)p_addUUIDsFromVector:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1;
- (bool)p_removeUUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (void)p_removeUUIDs:(const struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct __hash_table<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct unique_ptr<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > > { struct __hash_node<TSU::UUIDData<TSP::UUIDData>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>, std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> { struct __hash_node<TSU::UUIDData<TSP::UUIDData>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; }*)arg1;
- (void)p_removeUUIDsFromVector:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1;
- (id)reducedSetMinusUuid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (id)reducedSetMinusUuids:(const struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct __hash_table<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct unique_ptr<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > > { struct __hash_node<TSU::UUIDData<TSP::UUIDData>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>, std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> { struct __hash_node<TSU::UUIDData<TSP::UUIDData>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; }*)arg1;
- (id)reducedSetMinusUuidsFromVector:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1;
- (void)saveToMessage:(struct UuidSetStoreArchive_UuidSet { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::UUID> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1;
- (void)setIndex:(unsigned int)arg1;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; })uuidsAsVector;

@end
