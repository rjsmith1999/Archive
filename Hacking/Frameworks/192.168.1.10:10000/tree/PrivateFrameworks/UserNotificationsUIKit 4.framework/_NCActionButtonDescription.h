/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface _NCActionButtonDescription : NSObject {
    NCNotificationAction * _notificationAction;
    NSString * _selectorString;
    NSString * _title;
}

@property (nonatomic, readonly) NCNotificationAction *notificationAction;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)initWithNotificationAction:(id)arg1;
- (id)initWithTitle:(id)arg1 selector:(SEL)arg2;
- (id)notificationAction;
- (SEL)selector;
- (id)title;

@end
