/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapEdgeTransitFinder : GEOMapEdgeFinder {
    struct unordered_set<geo::TransitEdgePiece, std::__1::hash<geo::TransitEdgePiece>, std::__1::equal_to<geo::TransitEdgePiece>, std::__1::allocator<geo::TransitEdgePiece> > { 
        struct __hash_table<geo::TransitEdgePiece, std::__1::hash<geo::TransitEdgePiece>, std::__1::equal_to<geo::TransitEdgePiece>, std::__1::allocator<geo::TransitEdgePiece> > { 
            struct unique_ptr<std::__1::__hash_node<geo::TransitEdgePiece, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<geo::TransitEdgePiece, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<geo::TransitEdgePiece, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<geo::TransitEdgePiece, void *> *> > > { 
                    struct __hash_node<geo::TransitEdgePiece, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<geo::TransitEdgePiece, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<geo::TransitEdgePiece, void *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<geo::TransitEdgePiece, void *> *>, std::__1::allocator<std::__1::__hash_node<geo::TransitEdgePiece, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<geo::TransitEdgePiece, void *> *> { 
                    struct __hash_node<geo::TransitEdgePiece, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::hash<geo::TransitEdgePiece> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::equal_to<geo::TransitEdgePiece> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _piecesConsidered;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildersInTile:(id)arg1 localPoint:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg2 localRadiusSqr:(float)arg3 localSearch:(const struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; }*)arg4 handler:(id /* block */)arg5;
- (bool)_checkEdgeForDuplicates:(const struct shared_ptr<geo::MapEdge> { struct MapEdge {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (id)initWithMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;

@end
