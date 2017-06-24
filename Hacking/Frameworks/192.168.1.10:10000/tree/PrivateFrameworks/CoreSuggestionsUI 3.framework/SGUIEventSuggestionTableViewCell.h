/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
 */

@interface SGUIEventSuggestionTableViewCell : UITableViewCell {
    UIButton * _addUpdateButton;
    NSLayoutConstraint * _bottomMarginConstraint;
    <SGUIEventSuggestionTableViewCellDelegate> * _delegate;
    UILabel * _descriptionLabel;
    UIImageView * _iconImageView;
    UIButton * _ignoreButton;
    NSLayoutConstraint * _interLabelAndButtonBaselineConstraint;
    NSLayoutConstraint * _interLabelBaselineDeltaConstraint;
    SGRealtimeEvent * _realtimeEvent;
    UILabel * _titleLabel;
    NSLayoutConstraint * _topMarginConstraint;
}

@property (nonatomic) <SGUIEventSuggestionTableViewCellDelegate> *delegate;
@property (nonatomic, retain) SGRealtimeEvent *realtimeEvent;

+ (id)actionButtonTitleForEvent:(id)arg1;
+ (double)bottomMarginConstant;
+ (id)buttonTitleFont;
+ (id)descriptionFont;
+ (double)interLabelAndButtonBaselineDeltaConstant;
+ (double)interLabelBaselineDeltaConstant;
+ (id)titleFont;
+ (double)topMarginConstant;

- (void).cxx_destruct;
- (void)_addUpdateButtonTapped:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_ignoreButtonTapped:(id)arg1;
- (void)_setLabelAndButtonFonts;
- (void)dealloc;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)realtimeEvent;
- (void)setDelegate:(id)arg1;
- (void)setRealtimeEvent:(id)arg1;

@end
