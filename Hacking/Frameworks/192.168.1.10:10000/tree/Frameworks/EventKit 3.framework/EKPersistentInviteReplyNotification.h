/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentInviteReplyNotification : EKPersistentObject

@property (nonatomic, readonly) bool alerted;
@property (nonatomic, readonly) EKPersistentCalendar *calendar;
@property (nonatomic, readonly) NSString *calendarName;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSString *shareeAddress;
@property (nonatomic, readonly) NSString *shareeDisplayName;
@property (nonatomic, readonly) NSString *shareeFirstName;
@property (nonatomic, readonly) NSString *shareeLastName;
@property (nonatomic, readonly) unsigned long long status;

+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (bool)alerted;
- (id)calendar;
- (id)calendarName;
- (id)creationDate;
- (id)shareeAddress;
- (id)shareeDisplayName;
- (id)shareeFirstName;
- (id)shareeLastName;
- (unsigned long long)status;

@end
