/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroSliderViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView * _collectionView;
    NSObject<MiroSliderViewControllerDataSource> * _dataSource;
    bool  _ignoreScrolling;
    bool  _needsMiddlePositionUpdate;
    long long  _selectedItem;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic) NSObject<MiroSliderViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreScrolling;
@property (nonatomic) bool needsMiddlePositionUpdate;
@property (nonatomic) long long selectedItem;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

- (void).cxx_destruct;
- (id)_generateDurationSliderViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGPoint { double x1; double x2; })collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)dataSource;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (bool)ignoreScrolling;
- (id)indexPathToMiddleItemInCollectionView:(id)arg1;
- (id)init;
- (void)invalidateSelectedItemPostion;
- (float)moodPercentOfCenter;
- (bool)needsMiddlePositionUpdate;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGPoint { double x1; double x2; })pointForMiddleOfItemInCollectionView:(id)arg1 withOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)reloadData;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (long long)selectedItem;
- (void)setCollectionView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setIgnoreScrolling:(bool)arg1;
- (void)setNeedsMiddlePositionUpdate:(bool)arg1;
- (void)updateFonts;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/AccessibilityBundles/Memories.axbundle/Memories

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (bool)_axDraggingSlider;
- (id)_axLastSpokenSliderDescription;
- (long long)_axMemoriesEditSliderType;
- (id)_axMemoriesMoodSlider;
- (void)_axSetMemoriesEditSliderType:(long long)arg1;
- (void)_setAXDraggingSlider:(bool)arg1;
- (void)_setAXLastSpokenSliderDescription:(id)arg1;
- (void)_setAXMemoriesEditSliderType:(long long)arg1;
- (void)_setAXMemoriesMoodSlider:(id)arg1;
- (void)_setFontStyleForCell:(id)arg1 highlighted:(bool)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setSelectedItem:(long long)arg1;
- (void)viewDidLayoutSubviews;

@end
