/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIScrollingTabBarBackgroundView : UIView {
    NSString * _backdropBarGroupName;
    _UIBackdropView * _backdropView;
    UIView * _bottomHairlineView;
    bool  _showsBackdrop;
    bool  _showsBottomHairline;
    bool  _showsTopHairline;
    UIView * _topHairlineView;
    bool  _usesOpaqueColorForTopHairline;
}

@property (nonatomic, copy) NSString *backdropBarGroupName;
@property (nonatomic) bool showsBackdrop;
@property (nonatomic) bool showsBottomHairline;
@property (nonatomic) bool showsTopHairline;
@property (nonatomic) bool usesOpaqueColorForTopHairline;

- (void).cxx_destruct;
- (void)_updateTopHairlineColor;
- (id)backdropBarGroupName;
- (void)layoutSubviews;
- (void)setBackdropBarGroupName:(id)arg1;
- (void)setShowsBackdrop:(bool)arg1;
- (void)setShowsBottomHairline:(bool)arg1;
- (void)setShowsTopHairline:(bool)arg1;
- (void)setUsesOpaqueColorForTopHairline:(bool)arg1;
- (bool)showsBackdrop;
- (bool)showsBottomHairline;
- (bool)showsTopHairline;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)usesOpaqueColorForTopHairline;

@end
