/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKFitnessFriendAchievement : HKSample <HDCoding, HDFitnessFriendsCloudKitCodable, HDFitnessFriendsFilterableSample, NSCopying> {
    NSDate * _completedDate;
    NSString * _definitionIdentifier;
    NSUUID * _friendUUID;
    NSNumber * _value;
    unsigned long long  _workoutActivityType;
}

@property (nonatomic, retain) NSDate *completedDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *definitionIdentifier;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *filter_date;
@property (nonatomic, readonly) NSUUID *filter_friendUUID;
@property (nonatomic, retain) NSUUID *friendUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *value;
@property (nonatomic) unsigned long long workoutActivityType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)achievementWithDefinitionIdentifier:(id)arg1 completedDate:(id)arg2 value:(id)arg3 workoutActivityType:(unsigned long long)arg4 friendUUID:(id)arg5;
+ (id)fitnessFriendAchievementFromHKAchievement:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)completedDate;
- (id)definitionIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)friendUUID;
- (id)hkAchievementFromFriendAchievement;
- (id)initWithCoder:(id)arg1;
- (void)setCompletedDate:(id)arg1;
- (void)setDefinitionIdentifier:(id)arg1;
- (void)setFriendUUID:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setWorkoutActivityType:(unsigned long long)arg1;
- (id)value;
- (unsigned long long)workoutActivityType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (id)fitnessFriendAchievementWithRecord:(id)arg1 friendUUID:(id)arg2;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
- (id)filter_date;
- (id)filter_friendUUID;
- (id)recordWithZoneID:(id)arg1;

@end
