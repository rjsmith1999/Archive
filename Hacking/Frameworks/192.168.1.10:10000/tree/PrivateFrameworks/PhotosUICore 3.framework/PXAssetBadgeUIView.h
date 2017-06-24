/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetBadgeUIView : UIView {
    UIImageView * __backgroundImageView;
    _PXBadgeCache * __badgeCache;
    UIImageView * __badgeImageView;
    NSString * __bannerText;
    UIImageView * __cloudIconImageView;
    UIImageView * __favoriteBadgeImageView;
    bool  __favoriteBadgeVisible;
    unsigned long long  __mediaBadgeType;
    UILabel * __textLabel;
    long long  _badgeStyle;
    unsigned long long  _badgeTypes;
    bool  _cloudIconVisible;
    bool  _flattensSubviews;
    bool  _isPerformingUpdates;
    struct { 
        bool flattenSubviews; 
        bool cloudIconView; 
        bool favoriteBadgeView; 
        bool badgeImageView; 
        bool bannerText; 
        bool textLabel; 
        bool backgroundView; 
        bool subviewsOrdering; 
    }  _needsUpdateFlags;
    double  _videoDuration;
}

@property (setter=_setBackgroundImageView:, nonatomic, retain) UIImageView *_backgroundImageView;
@property (setter=_setBadgeCache:, nonatomic, retain) _PXBadgeCache *_badgeCache;
@property (setter=_setBadgeImageView:, nonatomic, retain) UIImageView *_badgeImageView;
@property (setter=_setBannerText:, nonatomic, retain) NSString *_bannerText;
@property (setter=_setCloudIconImageView:, nonatomic, retain) UIImageView *_cloudIconImageView;
@property (setter=_setFavoriteBadgeImageView:, nonatomic, retain) UIImageView *_favoriteBadgeImageView;
@property (setter=_setFavoriteBadgeVisible:, nonatomic) bool _favoriteBadgeVisible;
@property (setter=_setMediaBadgeType:, nonatomic) unsigned long long _mediaBadgeType;
@property (setter=_setTextLabel:, nonatomic, retain) UILabel *_textLabel;
@property (nonatomic) long long badgeStyle;
@property (nonatomic) unsigned long long badgeTypes;
@property (getter=isCloudIconVisible, nonatomic) bool cloudIconVisible;
@property (nonatomic) bool flattensSubviews;
@property (nonatomic) double videoDuration;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (double)preferredHeight;

- (void).cxx_destruct;
- (id)_backgroundImageView;
- (id)_badgeCache;
- (id)_badgeImageView;
- (id)_bannerText;
- (id)_cloudIconImageView;
- (id)_favoriteBadgeImageView;
- (bool)_favoriteBadgeVisible;
- (void)_invalidateBackgroundView;
- (void)_invalidateBadgeImageView;
- (void)_invalidateBannerText;
- (void)_invalidateCloudIconView;
- (void)_invalidateFavoriteBadgeView;
- (void)_invalidateFlattenSubviews;
- (void)_invalidateSubviewsOrdering;
- (void)_invalidateTextLabel;
- (unsigned long long)_mediaBadgeType;
- (bool)_needsUpdate;
- (void)_setBackgroundImageView:(id)arg1;
- (void)_setBadgeCache:(id)arg1;
- (void)_setBadgeImageView:(id)arg1;
- (void)_setBannerText:(id)arg1;
- (void)_setCloudIconImageView:(id)arg1;
- (void)_setFavoriteBadgeImageView:(id)arg1;
- (void)_setFavoriteBadgeVisible:(bool)arg1;
- (void)_setMediaBadgeType:(unsigned long long)arg1;
- (void)_setNeedsUpdate;
- (void)_setTextLabel:(id)arg1;
- (id)_textLabel;
- (void)_updateBackgroundViewIfNeeded;
- (void)_updateBadgeImageViewIfNeeded;
- (void)_updateBannerTextIfNeeded;
- (void)_updateCloudIconViewIfNeeded;
- (void)_updateFavoriteBadgeViewIfNeeded;
- (void)_updateFlattenSubviewsIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateSubviewsOrdering;
- (void)_updateTextLabelIfNeeded;
- (long long)badgeStyle;
- (unsigned long long)badgeTypes;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)flattensSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCloudIconVisible;
- (void)layoutSubviews;
- (void)setBadgeStyle:(long long)arg1;
- (void)setBadgeTypes:(unsigned long long)arg1;
- (void)setCloudIconVisible:(bool)arg1;
- (void)setFlattensSubviews:(bool)arg1;
- (void)setVideoDuration:(double)arg1;
- (double)videoDuration;

// Image: /System/Library/AccessibilityBundles/PhotosUICore.axbundle/PhotosUICore

+ (Class)safeCategoryBaseClass;

- (bool)accessibilityElementsHidden;

@end
