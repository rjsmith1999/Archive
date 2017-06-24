/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationLongLookView : NCAnimatableBlurringView <NCContentSizeCategoryAdjusting, NCCustomContentContainingLookView, NCNotificationStaticContentAccepting, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    UIView * _actionsBackgroundView;
    UIView * _actionsClippingView;
    bool  _actionsHidden;
    NCKeyLineView * _actionsKeyLineView;
    UIInterfaceActionGroupView * _actionsView;
    unsigned long long  _customContentLocation;
    struct CGSize { 
        double width; 
        double height; 
    }  _customContentSize;
    UIView * _customContentView;
    UIView * _headerClippingView;
    NCLookHeaderContentView * _headerContentView;
    UIView * _headerDivider;
    bool  _hidesNotificationContent;
    UITapGestureRecognizer * _lookViewTapGestureRecognizer;
    UIView * _mainContentClippingView;
    UIView * _mainContentView;
    NCNotificationContentView * _notificationContentView;
    UIScrollView * _scrollView;
    UIView * _topRubberbandingView;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (getter=isActionsHidden, nonatomic) bool actionsHidden;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (getter=isBackgroundBlurred, nonatomic) bool backgroundBlurred;
@property (getter=isBanner, nonatomic) bool banner;
@property (nonatomic, retain) UIView *colorInfusionView;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSizeExcludingActions;
@property (nonatomic) unsigned long long customContentLocation;
@property (nonatomic) struct CGSize { double x1; double x2; } customContentSize;
@property (nonatomic, readonly) UIView *customContentView;
@property (nonatomic, copy) NSDate *date;
@property (getter=isDateAllDay, nonatomic, readonly) bool dateAllDay;
@property (nonatomic) long long dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesNotificationContent;
@property (nonatomic, copy) NSString *hintText;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, readonly) UIButton *iconButton;
@property (nonatomic, retain) NSArray *interfaceActions;
@property (nonatomic, readonly) UITapGestureRecognizer *lookViewTapGestureRecognizer;
@property (nonatomic) unsigned long long messageNumberOfLines;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, copy) NSString *primarySubtitleText;
@property (nonatomic, copy) NSString *primaryText;
@property (getter=_scrollView, nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic) bool showAdditionalMessageLines;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeExcludingActions;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *thumbnail;
@property (nonatomic) long long thumbnailViewContentMode;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UIButton *utilityButton;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

- (void).cxx_destruct;
- (void)_configureActionViewIfNecessaryWithActions:(id)arg1;
- (void)_configureActionsBackgroundViewIfNecessaryWithActions:(id)arg1;
- (void)_configureActionsClippingViewIfNecessaryWithActions:(id)arg1;
- (void)_configureActionsKeyLineViewIfNecessaryWithActions:(id)arg1;
- (void)_configureCustomContentViewIfNecessary;
- (void)_configureHeaderClippingViewIfNecessary;
- (void)_configureHeaderContentViewIfNecessary;
- (void)_configureLookViewTapGestureRecognizerIfNecessary;
- (void)_configureMainContentClippingViewIfNecessary;
- (void)_configureMainContentViewIfNecessary;
- (void)_configureNotificationContentViewIfNecessary;
- (void)_configureScrollViewIfNecessary;
- (struct CGSize { double x1; double x2; })_contentSizeThatFitsContentWithSizeExcludingActions:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutActionsView;
- (void)_layoutCustomContentView;
- (void)_layoutCustomContentViewInRelationToContentView;
- (void)_layoutHeader;
- (void)_layoutMainContentClippingView;
- (void)_layoutMainContentView;
- (void)_layoutNotificationContentView;
- (void)_layoutScrollView;
- (void)_layoutTopRubberbandingView;
- (bool)_lookViewTapGestureRecognizerShouldReceiveTouch:(id)arg1;
- (id)_scrollView;
- (struct CGSize { double x1; double x2; })_sizeThatFitsContentExcludingActionsWithSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)colorInfusionView;
- (struct CGSize { double x1; double x2; })contentSizeExcludingActions;
- (struct CGSize { double x1; double x2; })contentSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)customContentLocation;
- (struct CGSize { double x1; double x2; })customContentSize;
- (id)customContentView;
- (id)date;
- (long long)dateFormatStyle;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)hidesNotificationContent;
- (id)icon;
- (id)iconButton;
- (id)interfaceActions;
- (bool)isActionsHidden;
- (bool)isBackgroundBlurred;
- (bool)isBanner;
- (bool)isDateAllDay;
- (void)layoutSubviews;
- (long long)lookStyle;
- (id)lookViewTapGestureRecognizer;
- (id)primarySubtitleText;
- (id)primaryText;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)secondaryText;
- (void)setActionsHidden:(bool)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setBackgroundBlurred:(bool)arg1;
- (void)setBanner:(bool)arg1;
- (void)setColorInfusionView:(id)arg1;
- (void)setCustomContentLocation:(unsigned long long)arg1;
- (void)setCustomContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDate:(id)arg1;
- (void)setDateAllDay:(bool)arg1;
- (void)setDateFormatStyle:(long long)arg1;
- (void)setHidesNotificationContent:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setInterfaceActions:(id)arg1;
- (void)setPrimarySubtitleText:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeExcludingActions;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)timeZone;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;
- (id)utilityButton;

// Image: /System/Library/AccessibilityBundles/NotificationsUI.axbundle/NotificationsUI

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityBannerIsSticky;

@end
