/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUColoredButtonCell : UITableViewCell <HUDisableableCellProtocol> {
    HUColoredButton * _button;
    UIColor * _buttonBackgroundColor;
    bool  _buttonColorFollowsTintColor;
    <HUColoredButtonCellDelegate> * _delegate;
    bool  _disabled;
}

@property (nonatomic, retain) HUColoredButton *button;
@property (nonatomic, retain) UIColor *buttonBackgroundColor;
@property (nonatomic) bool buttonColorFollowsTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUColoredButtonCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIColor *titleColor;

- (void).cxx_destruct;
- (id)button;
- (id)buttonBackgroundColor;
- (bool)buttonColorFollowsTintColor;
- (void)buttonPressed:(id)arg1;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (void)prepareForReuse;
- (void)setButton:(id)arg1;
- (void)setButtonBackgroundColor:(id)arg1;
- (void)setButtonColorFollowsTintColor:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)tintColorDidChange;
- (id)title;
- (id)titleColor;
- (void)updateButtonColor;

@end
