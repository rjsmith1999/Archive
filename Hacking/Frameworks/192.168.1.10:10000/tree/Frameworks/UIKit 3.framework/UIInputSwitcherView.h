/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputSwitcherView : UIKeyboardMenuView {
    bool  _messagesWriteboardFromSwitcher;
    UISwitch * m_assistantSwitch;
    unsigned long long  m_currentInputModeIndex;
    bool  m_fileReportFromSwitcher;
    UISwitch * m_floatingSwitch;
    NSMutableArray * m_inputModes;
    long long  m_numberOfInputModes;
    UISwitch * m_predictiveSwitch;
    NSMutableArray * m_switches;
}

@property (nonatomic) bool fileReportFromSwitcher;
@property (nonatomic, retain) NSArray *inputModes;
@property (nonatomic) bool messagesWriteboardFromSwitcher;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)activeInstance;
+ (id)sharedInstance;

- (id)assistantSwitch;
- (unsigned long long)currentSelectedRow;
- (void)dealloc;
- (unsigned long long)defaultSelectedIndex;
- (bool)fileReportFromSwitcher;
- (id)floatingSwitch;
- (id)fontForItemAtIndex:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputModes;
- (id)localizedTitleForItemAtIndex:(unsigned long long)arg1;
- (bool)messagesWriteboardFromSwitcher;
- (id)nextInputMode;
- (unsigned long long)numberOfItems;
- (id)predictiveSwitch;
- (struct CGSize { double x1; double x2; })preferredSize;
- (id)previousInputMode;
- (void)selectInputMode:(id)arg1;
- (void)selectNextInputMode;
- (void)selectPreviousInputMode;
- (void)selectRowForInputMode:(id)arg1;
- (id)selectedInputMode;
- (void)setFileReportFromSwitcher:(bool)arg1;
- (void)setInputMode:(id)arg1;
- (void)setInputModes:(id)arg1;
- (void)setMessagesWriteboardFromSwitcher:(bool)arg1;
- (void)show;
- (id)subtitleFontForItemAtIndex:(unsigned long long)arg1;
- (id)subtitleForItemAtIndex:(unsigned long long)arg1;
- (void)switchAction;
- (id)switches;
- (id)titleForItemAtIndex:(unsigned long long)arg1;
- (void)toggleKeyboardAssistantPreference;
- (void)toggleKeyboardFloatingPreference;
- (void)toggleKeyboardPredictionPreference;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (id)accessibilityIdentifier;
- (bool)accessibilityViewIsModal;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
