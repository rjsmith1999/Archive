/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIBannerItem : NSObject <SBUIQuietModePlayability>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id /* block */)action;
- (id)actionWithIdentifier:(id)arg1;
- (bool)canShowInAssistant;
- (bool)canShowWhileLocked;
- (id)defaultActionWithContext:(id)arg1;
- (bool)hasSubActions;
- (bool)inertWhenLocked;
- (bool)isCritical;
- (bool)isSticky;
- (id)lockScreenActionContextWithContext:(id)arg1;
- (id)message;
- (bool)overridesPocketMode;
- (bool)overridesQuietMode;
- (unsigned long long)priority;
- (id)pullDownNotification;
- (bool)shouldPlayLightsAndSirens;
- (bool)shouldShowModalSubActions;
- (id)sortDate;
- (id)sound;
- (id)subActionLabels;
- (id)subActions;
- (id)title;

@end
