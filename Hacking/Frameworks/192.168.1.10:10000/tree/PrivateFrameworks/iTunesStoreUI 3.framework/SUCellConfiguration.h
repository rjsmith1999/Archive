/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUCellConfiguration : NSObject {
    id  _context;
    unsigned int  _isDeleteConfirmationVisible;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutSize;
    unsigned int  _needsDisplay;
    id  _representedObject;
    UIView<SUCellConfigurationView> * _view;
}

@property (nonatomic, retain) id context;
@property (nonatomic) bool isDeleteConfirmationVisible;
@property (nonatomic) struct CGSize { double x1; double x2; } layoutSize;
@property (nonatomic) bool needsDisplay;
@property (nonatomic, readonly) unsigned long long numberOfImages;
@property (nonatomic, readonly) unsigned long long numberOfLabels;
@property (nonatomic, retain) id representedObject;
@property (nonatomic) UIView<SUCellConfigurationView> *view;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

+ (id)copyDefaultContext;
+ (double)minimumRowHeight;
+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;

- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (id)context;
- (void)dealloc;
- (void)drawBackgroundWithModifiers:(unsigned long long)arg1;
- (void)drawWithModifiers:(unsigned long long)arg1;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForAccessoryViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForImageAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForLabelAtIndex:(unsigned long long)arg1;
- (bool)getShadowColor:(id*)arg1 offset:(struct CGSize { double x1; double x2; }*)arg2 forLabelAtIndex:(unsigned long long)arg3 withModifiers:(unsigned long long)arg4;
- (id)imageAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (unsigned long long)indexOfLabelForPurchaseAnimation;
- (bool)isDeleteConfirmationVisible;
- (struct CGSize { double x1; double x2; })layoutSize;
- (bool)needsDisplay;
- (unsigned long long)numberOfImages;
- (unsigned long long)numberOfLabels;
- (void)reloadData;
- (id)representedObject;
- (void)setContext:(id)arg1;
- (void)setIsDeleteConfirmationVisible:(bool)arg1;
- (void)setLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNeedsDisplay:(bool)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setView:(id)arg1;
- (id)stringForLabelAtIndex:(unsigned long long)arg1;
- (long long)textAlignmentForLabelAtIndex:(unsigned long long)arg1;
- (id)view;

// Image: /System/Library/AccessibilityBundles/iTunesStoreUIFramework.axbundle/iTunesStoreUIFramework

+ (Class)safeCategoryBaseClass;

@end
