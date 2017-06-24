/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICardDetailsView : UIView {
    UITextView * _detailsTextView;
    UILabel * _titleLabel;
}

@property (retain) UITextView *detailsTextView;
@property unsigned long long maximumNumberOfLines;
@property (retain) UILabel *titleLabel;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (void).cxx_destruct;
- (double)currentTextViewHeight;
- (id)detailsTextView;
- (double)idealTextViewHeightForCurrentWidth;
- (unsigned long long)maximumNumberOfLines;
- (void)setDetailsTextView:(id)arg1;
- (void)setMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

// Image: /System/Library/AccessibilityBundles/SearchUI.axbundle/SearchUI

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityLabel;
- (id)initWithTitle:(id)arg1 details:(id)arg2 controller:(id)arg3;
- (bool)isAccessibilityElement;

@end
