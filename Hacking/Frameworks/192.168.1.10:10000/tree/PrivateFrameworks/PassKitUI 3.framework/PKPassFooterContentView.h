/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassFooterContentView : UIView {
    PKLinkedAppIconView * _appIconView;
    UIView * _bottomRule;
    <PKPassFooterContentViewDelegate> * _delegate;
    UIButton * _infoButton;
    bool  _isPassAuthorized;
    bool  _isVisibleAsFooter;
    PKPass * _pass;
    long long  _style;
}

@property (nonatomic, readonly) PKLinkedAppIconView *appIconView;
@property (nonatomic, readonly) UIView *bottomRule;
@property (nonatomic) <PKPassFooterContentViewDelegate> *delegate;
@property (nonatomic, readonly) UIButton *infoButton;
@property (nonatomic, readonly) bool isPassAuthorized;
@property (nonatomic, readonly) bool isVisibleAsFooter;
@property (nonatomic, readonly) PKPass *pass;
@property (nonatomic, readonly) PKPaymentPass *paymentPass;
@property (nonatomic, readonly) long long style;

- (void).cxx_destruct;
- (double)_bottomRulePadding;
- (void)_infoButtonPressed:(id)arg1;
- (id)appIconView;
- (id)bottomRule;
- (void)dealloc;
- (id)delegate;
- (void)didBecomeHiddenAnimated:(bool)arg1;
- (void)didBecomeVisibleAnimated:(bool)arg1;
- (id)infoButton;
- (id)initWithStyle:(long long)arg1 pass:(id)arg2;
- (bool)isPassAuthorized;
- (bool)isVisibleAsFooter;
- (void)layoutSubviews;
- (id)pass;
- (id)paymentPass;
- (void)setDelegate:(id)arg1;
- (long long)style;
- (void)willBecomeHiddenAnimated:(bool)arg1;
- (void)willBecomeVisibleAnimated:(bool)arg1;

@end
