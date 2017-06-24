/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardLayoutCursor : UIKeyboardLayoutStar <UIKBAlertControllerDelegate> {
    bool  _cachedCanMultitap;
    UIKBTree * _cachedMultitapKeyplane;
    UILabel * _dictationHelpLabel;
    bool  _didVariantDelete;
    bool  _disableTouchInput;
    bool  _ignoreEventsUntilPressEnds;
    UIKBTree * _indirectKeyboard;
    NSString * _keyplaneBeforeDictation;
    NSArray * _keyplaneKeys;
    UILexicon * _recentInputs;
    UIAlertController * _recentInputsAlert;
    long long  _selectedKeyBeforeDictation;
    long long  _selectedKeyIndex;
    UIView * _selectionView;
    bool  _suppressOperations;
}

@property (nonatomic, readonly) UIKBTree *currentKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *keyplaneBeforeDictation;
@property (nonatomic, retain) UIAlertController *recentInputsAlert;
@property (nonatomic) long long selectedKeyBeforeDictation;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)carKeyboardNameForKeyboard:(id)arg1 screenTraits:(id)arg2;
+ (struct CGSize { double x1; double x2; })keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3;

- (void)_handleKeyUIEvent:(id)arg1;
- (bool)_handleMoveWithEvent:(id)arg1;
- (bool)_handlePhysicalButtonEvent:(id)arg1;
- (bool)_handlePhysicalKeyDownWithEvent:(id)arg1;
- (bool)_handleRemoteControlReceivedWithEvent:(id)arg1;
- (bool)_handleWheelChangedWithEvent:(id)arg1;
- (bool)_isDirectionalHeading:(unsigned long long)arg1;
- (id)_keyplaneForKeyplaneProperties;
- (bool)_menuTapShouldExitVariants;
- (void)_moveWithEvent:(id)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)acceptRecentInputIfNecessary;
- (int)activeStateForKey:(id)arg1;
- (void)alertDidDismiss;
- (id)cacheTokenForKeyplane:(id)arg1;
- (bool)canHandleEvent:(id)arg1;
- (bool)canMultitap;
- (void)clearVariantStateForKey:(id)arg1;
- (void)configureChildCollectionViewCellsIfNeeded;
- (id)currentKey;
- (unsigned long long)cursorLocation;
- (void)deactivateKey:(id)arg1;
- (void)dealloc;
- (long long)defaultSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2;
- (bool)diacriticForwardCompose;
- (void)didSelectRecentInputString:(id)arg1;
- (unsigned long long)downActionFlagsForKey:(id)arg1;
- (int)enabledStateForKey:(id)arg1;
- (void)endMultitapForKey:(id)arg1;
- (void)flushKeyCache:(id)arg1;
- (unsigned char)getHandRestRecognizerState;
- (bool)handleLinearDirectionalInput:(int)arg1;
- (void)handleVariantDeleteIfNecessaryForKey:(id)arg1;
- (bool)handleVisualDirectionalInput:(int)arg1;
- (bool)ignoresShiftState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAlphabeticPlane;
- (bool)isKeyplaneDisabledWithName:(id)arg1;
- (id)keyHitTestInSameRowAsCenter:(struct CGPoint { double x1; double x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)keyViewAnimator;
- (id)keyplaneBeforeDictation;
- (void)longPressAction;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)recentInputsAlert;
- (bool)refreshSelectedCellIfNecessaryForKey:(id)arg1;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)returnToKeyplaneAfterDictation;
- (void)runWithSuppressedActions:(id /* block */)arg1;
- (void)selectInitialKeyIfNecessary;
- (long long)selectedKeyBeforeDictation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionFrameForKeyIndex:(long long)arg1;
- (void)setCursorLocation:(unsigned long long)arg1;
- (void)setDisableTouchInput:(bool)arg1;
- (void)setHighlightedVariantIndex:(long long)arg1 key:(id)arg2;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setKeyboardName:(id)arg1 appearance:(long long)arg2;
- (void)setKeyplaneBeforeDictation:(id)arg1;
- (void)setKeyplaneName:(id)arg1;
- (void)setRecentInputs:(id)arg1;
- (void)setRecentInputsAlert:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setSelectedKeyBeforeDictation:(long long)arg1;
- (bool)shouldAllowCurrentKeyplaneReload;
- (bool)shouldDeactivateWithoutWindow;
- (bool)shouldMatchCaseForDomainKeys;
- (bool)shouldMergeKey:(id)arg1;
- (bool)shouldPreventInputManagerHitTestingForKey:(id)arg1;
- (bool)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2;
- (bool)shouldShowDictationKey;
- (bool)shouldToggleKeyplaneWithName:(id)arg1;
- (bool)shouldUseDefaultShiftStateFromLayout;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (void)showRecentInputsAlert;
- (int)stateForCandidateListKey:(id)arg1;
- (int)stateForKeyplaneSwitchKey:(id)arg1;
- (bool)supportsEmoji;
- (void)switchToDictationKeyplaneWithActivationIdentifier:(id)arg1;
- (void)takeKeyAction:(id)arg1;
- (unsigned long long)targetEdgesForScreenGestureRecognition;
- (long long)targetKeyIndexAtOffset:(struct CGPoint { double x1; double x2; })arg1 fromKey:(id)arg2;
- (void)updateDictationHelpString;
- (void)updateKeyplaneSwitchEdgeBiases;
- (void)updateRecentInputsKeyIfNecessary;
- (void)updateStatesForGridSelection;
- (bool)usesAutoShift;
- (unsigned long long)variantCountForKey:(id)arg1;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (void)setSelectedKeyIndex:(long long)arg1;

@end
