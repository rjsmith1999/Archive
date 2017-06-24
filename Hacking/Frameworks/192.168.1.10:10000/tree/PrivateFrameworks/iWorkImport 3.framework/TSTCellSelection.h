/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellSelection : TSKSelection <TSDTextSelection> {
    struct TSUCellCoord { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mAnchorCellID;
    TSTCellRegion * mBaseRegion;
    TSTCellRegion * mCellRegion;
    struct TSUCellCoord { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  mCursorCellID;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  mSearchReferenceRange;
    long long  mSelectionType;
}

@property (nonatomic, readonly) struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; } anchorCellID;
@property (nonatomic, readonly) TSTCellRegion *baseRegion;
@property (nonatomic, readonly) unsigned long long cellCount;
@property (nonatomic, readonly) TSTCellRegion *cellRegion;
@property (nonatomic, readonly) struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; } cursorCellID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAtEndOfLine;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } searchReferenceRange;
@property (nonatomic, readonly) long long selectionType;
@property (readonly) Class superclass;

+ (Class)archivedSelectionClass;
+ (id)selectionWithTableModel:(id)arg1 cellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
+ (id)selectionWithTableModel:(id)arg1 cellRegion:(id)arg2;
+ (id)selectionWithTableModel:(id)arg1 cellUID:(const struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg2;
+ (id)selectionWithTableModel:(id)arg1 columnIndices:(id)arg2;
+ (id)selectionWithTableModel:(id)arg1 rowIndices:(id)arg2;

- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })anchorCellID;
- (bool)areCellsInTheSameRegionInTable:(id)arg1;
- (id)baseRegion;
- (bool)canEditWithCellSubselectionInTable:(id)arg1;
- (bool)canEditWithControlCellSubselectionInTable:(id)arg1;
- (unsigned long long)cellCount;
- (id)cellRegion;
- (bool)containsCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)containsSelection:(id)arg1;
- (bool)containsSingleCellOrMergeInTable:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })cursorCellID;
- (void)dealloc;
- (id)description;
- (id)initWithArchive:(const struct SelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct CellID {} *x6; struct RepeatedPtrField<TST::CellRange> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TST::CellRange> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct CellID {} *x9; int x10; }*)arg1 unarchiver:(id)arg2;
- (id)initWithTableModel:(id)arg1 andCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)initWithTableModel:(id)arg1 andCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)initWithTableModel:(id)arg1 andPreviousSelection:(id)arg2 offsetBy:(struct { int x1; int x2; })arg3;
- (id)initWithTableModel:(id)arg1 cellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 selectionType:(long long)arg3;
- (id)initWithTableModel:(id)arg1 cellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 type:(long long)arg3 anchorCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 cursorCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg5;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursorCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg4;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursorCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 baseRegion:(id)arg5;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursorCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 baseRegion:(id)arg5 selectionType:(long long)arg6;
- (id)initWithTableModel:(id)arg1 cellRegion:(id)arg2 anchorCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursorCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 selectionType:(long long)arg5;
- (id)initWithTableModel:(id)arg1 columnIndices:(id)arg2;
- (id)initWithTableModel:(id)arg1 rowIndices:(id)arg2;
- (id)initWithTableModel:(id)arg1 rowOrColumn:(long long)arg2 index:(unsigned int)arg3 count:(unsigned int)arg4;
- (id)initWithTableModel:(id)arg1 selectionType:(long long)arg2;
- (id)initWithTableModel:(id)arg1 startingColumnIndex:(unsigned short)arg2 numberOfColumns:(unsigned short)arg3;
- (id)initWithTableModel:(id)arg1 startingRowIndex:(unsigned short)arg2 numberOfRows:(unsigned short)arg3;
- (void)insert:(long long)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3;
- (bool)intersectsPartialMergeRangeInTable:(id)arg1;
- (bool)isAtEndOfLine;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSelection:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)remove:(long long)arg1 atIndex:(unsigned short)arg2 count:(unsigned short)arg3;
- (void)saveToArchive:(struct SelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Reference {} *x5; struct CellID {} *x6; struct RepeatedPtrField<TST::CellRange> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TST::CellRange> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct CellID {} *x9; int x10; }*)arg1 archiver:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })searchReferenceRange;
- (id)selectionAdjustedForColumnVisibilityInTableInfo:(id)arg1;
- (id)selectionAdjustedForGeometryInTableInfo:(id)arg1;
- (id)selectionAdjustedForRowVisibilityInTableInfo:(id)arg1;
- (id)selectionByAddingCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 inTable:(id)arg2 withAnchor:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursor:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 selectionType:(long long)arg5;
- (id)selectionByExtendingWithCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 inTable:(id)arg2 selectionType:(long long)arg3 cursorCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg4;
- (id)selectionByRemovingCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 inTable:(id)arg2 withAnchor:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg3 cursor:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg4 selectionType:(long long)arg5;
- (long long)selectionType;
- (void)setCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setSearchReferenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
