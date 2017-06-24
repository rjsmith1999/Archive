/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlContainerView : UIView {
    unsigned long long  _activeControlType;
    HUPillButton * _alternateControlButton;
    HUQuickControlAuxiliaryHostView * _auxiliaryHostView;
    _UIBackdropViewSettings * _blurSettings;
    UIView * _blurTintView;
    double  _blurTransitionProgress;
    _UIBackdropView * _blurView;
    HUQuickControlButtonRowView * _buttonRowView;
    double  _chromeTransitionProgress;
    NSLayoutConstraint * _compactControlBottomConstraint;
    NSArray * _contentConstraints;
    UILayoutGuide * _controlButtonSpacingLayoutGuide;
    HUControlHostView * _controlHostView;
    double  _controlTransitionProgress;
    UILayoutGuide * _controlViewLayoutGuide;
    <HUQuickControlContainerViewDelegate> * _delegate;
    HUPillButton * _detailsButton;
    double  _horizontalControlCompressionFactor;
    double  _initialSourceViewScale;
    UIView<HUQuickControlPresentableView> * _primaryControlView;
    UIView<HUQuickControlPresentableView> * _secondaryControlView;
    bool  _shouldShowAlternateControlButton;
    bool  _shouldShowControls;
    bool  _shouldShowDetailsButton;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    HUQuickControlSummaryView * _summaryView;
    UILayoutGuide * _topSummarySpacingLayoutGuide;
    double  _verticalDirectionalControlStretchFactor;
}

@property (nonatomic) unsigned long long activeControlType;
@property (nonatomic, readonly) UIView<HUQuickControlPresentableView> *activeControlView;
@property (nonatomic, retain) HUPillButton *alternateControlButton;
@property (nonatomic, retain) HUQuickControlAuxiliaryHostView *auxiliaryHostView;
@property (nonatomic, retain) _UIBackdropViewSettings *blurSettings;
@property (nonatomic, retain) UIView *blurTintView;
@property (nonatomic) double blurTransitionProgress;
@property (nonatomic, retain) _UIBackdropView *blurView;
@property (nonatomic, retain) HUQuickControlButtonRowView *buttonRowView;
@property (nonatomic) double chromeTransitionProgress;
@property (nonatomic, retain) NSLayoutConstraint *compactControlBottomConstraint;
@property (nonatomic, retain) NSArray *contentConstraints;
@property (nonatomic, retain) UILayoutGuide *controlButtonSpacingLayoutGuide;
@property (nonatomic, retain) HUControlHostView *controlHostView;
@property (nonatomic) double controlTransitionProgress;
@property (nonatomic, retain) UILayoutGuide *controlViewLayoutGuide;
@property (nonatomic, readonly) <HUQuickControlContainerViewDelegate> *delegate;
@property (nonatomic, retain) HUPillButton *detailsButton;
@property (nonatomic) double horizontalControlCompressionFactor;
@property (nonatomic) double initialSourceViewScale;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } presentedControlFrame;
@property (nonatomic, readonly) UIView<HUQuickControlPresentableView> *primaryControlView;
@property (nonatomic, readonly) UIView<HUQuickControlPresentableView> *secondaryControlView;
@property (nonatomic) bool shouldShowAlternateControlButton;
@property (nonatomic) bool shouldShowControls;
@property (nonatomic) bool shouldShowDetailsButton;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) HUQuickControlSummaryView *summaryView;
@property (nonatomic, retain) UILayoutGuide *topSummarySpacingLayoutGuide;
@property (nonatomic) double verticalDirectionalControlStretchFactor;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_alternateControlButtonTapped:(id)arg1;
- (void)_configureCompactHeightConstraints:(id)arg1;
- (void)_configureControlViewLayoutGuideConstraints:(id)arg1;
- (void)_configureRegularHeightConstraints:(id)arg1;
- (struct CGPoint { double x1; double x2; })_controlHostCenter;
- (struct CGPoint { double x1; double x2; })_controlHostCenterForPresentationProgress:(double)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_controlHostTransform;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_controlHostTransformForPresentationProgress:(double)arg1;
- (void)_detailsButtonTapped:(id)arg1;
- (struct CGSize { double x1; double x2; })_presentedControlHostSize;
- (void)_setupAlternateControlButtonIfNecessary;
- (void)_setupBlurView;
- (bool)_shouldShowControlView;
- (long long)_sizeSubclass;
- (double)_summaryFirstBaselineToControlTopSpacing;
- (struct CGPoint { double x1; double x2; })_transformedPresentedControlHostCenterOffset;
- (void)_updateAlternateControlButtonText;
- (void)_updateCompactControlBottomConstraint;
- (void)_updateContentAlignment;
- (void)_updateControlHostLayout;
- (bool)_useCompactHeightLayout;
- (unsigned long long)activeControlType;
- (id)activeControlView;
- (id)alternateControlButton;
- (id)auxiliaryHostView;
- (id)blurSettings;
- (id)blurTintView;
- (double)blurTransitionProgress;
- (id)blurView;
- (id)buttonRowView;
- (double)chromeTransitionProgress;
- (id)compactControlBottomConstraint;
- (id)contentConstraints;
- (id)controlButtonSpacingLayoutGuide;
- (id)controlHostView;
- (double)controlTransitionProgress;
- (id)controlViewLayoutGuide;
- (id)delegate;
- (id)detailsButton;
- (void)hideAuxiliaryView;
- (double)horizontalControlCompressionFactor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 delegate:(id)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)initialSourceViewScale;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentedControlFrame;
- (id)primaryControlView;
- (id)secondaryControlView;
- (void)setActiveControlType:(unsigned long long)arg1;
- (void)setAlternateControlButton:(id)arg1;
- (void)setAuxiliaryHostView:(id)arg1;
- (void)setBlurSettings:(id)arg1;
- (void)setBlurTintView:(id)arg1;
- (void)setBlurTransitionProgress:(double)arg1;
- (void)setBlurView:(id)arg1;
- (void)setButtonRowView:(id)arg1;
- (void)setChromeTransitionProgress:(double)arg1;
- (void)setCompactControlBottomConstraint:(id)arg1;
- (void)setContentConstraints:(id)arg1;
- (void)setControlButtonSpacingLayoutGuide:(id)arg1;
- (void)setControlHostView:(id)arg1;
- (void)setControlTransitionProgress:(double)arg1;
- (void)setControlViewLayoutGuide:(id)arg1;
- (void)setDetailsButton:(id)arg1;
- (void)setHorizontalControlCompressionFactor:(double)arg1;
- (void)setInitialSourceViewScale:(double)arg1;
- (void)setShouldShowAlternateControlButton:(bool)arg1;
- (void)setShouldShowControls:(bool)arg1;
- (void)setShouldShowDetailsButton:(bool)arg1;
- (void)setSummaryView:(id)arg1;
- (void)setTopSummarySpacingLayoutGuide:(id)arg1;
- (void)setVerticalDirectionalControlStretchFactor:(double)arg1;
- (bool)shouldShowAlternateControlButton;
- (bool)shouldShowControls;
- (bool)shouldShowDetailsButton;
- (void)showAuxiliaryView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })sourceViewTransformForPresentationProgress:(double)arg1;
- (id)summaryView;
- (id)topSummarySpacingLayoutGuide;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (double)verticalDirectionalControlStretchFactor;

// Image: /System/Library/AccessibilityBundles/HomeUI.axbundle/HomeUI

+ (Class)safeCategoryBaseClass;

- (bool)accessibilityPerformEscape;

@end
