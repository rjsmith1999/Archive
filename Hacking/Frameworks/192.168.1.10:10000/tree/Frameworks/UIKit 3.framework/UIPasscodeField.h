/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPasscodeField : UIView <UITextFieldDelegate> {
    bool  _centerHorizontally;
    id  _delegate;
    int  _emptyContentReturnKeyType;
    NSMutableArray * _entryBackgrounds;
    NSMutableArray * _entryFields;
    long long  _keyboardAppearance;
    long long  _keyboardType;
    UIButton * _okButton;
    bool  _opaqueBackground;
    NSMutableString * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (double)defaultHeight;
+ (Class)textFieldClass;

- (void).cxx_destruct;
- (void)_textDidChange;
- (void)_updateFields;
- (void)appendString:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)deleteLastCharacter;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFirstResponder;
- (int)numberOfEntryFields;
- (void)okButtonClicked:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setKeyboardType:(long long)arg1 appearance:(long long)arg2;
- (void)setKeyboardType:(long long)arg1 appearance:(long long)arg2 emptyContentReturnKeyType:(int)arg3;
- (void)setNumberOfEntryFields:(int)arg1;
- (void)setNumberOfEntryFields:(int)arg1 opaqueBackground:(bool)arg2;
- (void)setStringValue:(id)arg1;
- (void)setTextCentersHorizontally:(bool)arg1;
- (bool)showsOKButton;
- (id)stringValue;
- (bool)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (bool)textFieldShouldStartEditing:(id)arg1;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityChildren;
- (id)_accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)_accessibilitySetValue:(id)arg1;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (void)dealloc;
- (bool)isAccessibilityElement;
- (void)setShowsOKButton:(bool)arg1;

@end
