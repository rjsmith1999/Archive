/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellIterator : NSObject <TSTCellIterating> {
    TSTCell * mCell;
    TSTMutableCellIteratorData * mCellData;
    TSTTableTileRowInfo * mCurRow;
    unsigned short  mCurRowID;
    TSTTableTile * mCurTile;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  mCurTileRange;
    bool  mDontCheckSize;
    bool  mDontExpandCellRefs;
    bool  mDontInflateFormulas;
    bool  mDontReturnMergeRegions;
    TSTCellRegion * mModelRegion;
    struct NSObject { Class x1; } * mModelRegionIterator;
    bool  mReturnCellBorder;
    bool  mReturnEmptyCells;
    bool  mReturnHiddenCells;
    long long  mRowWalkDirection;
    bool  mSkipCommentStorageOnlyCells;
    bool  mSkipStyleOnlyCells;
    TSTTableDataStore * mTableDataStore;
    TSTTableModel * mTableModel;
}

@property (nonatomic, readonly) TSTTableTileRowInfo *currentRowInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool dontExpandCellRefs;
@property (readonly) unsigned long long hash;
@property (readonly) long long rowWalkDirection;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TSTTableModel *tableModel;

- (id)currentRowInfo;
- (void)dealloc;
- (bool)dontExpandCellRefs;
- (bool)getNextCellData:(id*)arg1;
- (id)initWithTableModel:(id)arg1;
- (id)initWithTableModel:(id)arg1 flags:(unsigned long long)arg2;
- (id)initWithTableModel:(id)arg1 range:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)initWithTableModel:(id)arg1 range:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 flags:(unsigned long long)arg3;
- (id)initWithTableModel:(id)arg1 region:(id)arg2;
- (id)initWithTableModel:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3;
- (id)initWithTableModel:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 clampingRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg4;
- (void)iterateCellsUsingBlock:(id /* block */)arg1;
- (id)nextCellData;
- (bool)p_updateDataForCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (long long)rowWalkDirection;
- (id)tableModel;
- (void)terminate;

@end
