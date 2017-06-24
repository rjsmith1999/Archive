/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsFriendListManager : NSObject <HDFitnessAppBadgeCountProvider, HDFitnessFriendsContactsManagerObserver, HDFitnessFriendsManagerReadyObserver> {
    HDFitnessFriendsActivityDataManager * _activityDataManager;
    int  _activitySharingHasFriendsChangedToken;
    HDFitnessFriendsContactsManager * _contactsManager;
    NSObject<OS_dispatch_queue> * _friendListQueue;
    NSSet * _friends;
    bool  _hasFriendsToShareWith;
    HDDaemon * _healthDaemon;
    bool  _isWatch;
    NSDate * _lastReportedFriendsDate;
    long long  _lastReportedNumberOfFriends;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    HDFitnessFriendsPeriodicUpdateManager * _periodicUpdateManager;
    HDFitnessFriendsRelationshipManager * _relationshipManager;
}

@property (nonatomic) HDFitnessFriendsActivityDataManager *activityDataManager;
@property (nonatomic, readonly) unsigned long long badgeCount;
@property (nonatomic) HDFitnessFriendsContactsManager *contactsManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *friends;
@property (readonly) bool hasFriendsToShareWith;
@property (readonly) unsigned long long hash;
@property (nonatomic) HDDaemon *healthDaemon;
@property (nonatomic) bool isWatch;
@property (nonatomic) HDFitnessFriendsPeriodicUpdateManager *periodicUpdateManager;
@property (nonatomic) HDFitnessFriendsRelationshipManager *relationshipManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allContactsPreferringPlaceholderContacts;
- (void)_handleHasFriendsChanged;
- (void)_queue_friendListDidUpdate;
- (id)_queue_friendWithUUID:(id)arg1;
- (bool)_queue_hasFriendsToShareWith;
- (void)_queue_notifyObserversOfFriendListChanges;
- (void)_queue_reportHasNumberOfFriends:(long long)arg1;
- (void)_queue_updateFriendList;
- (id)activityDataManager;
- (void)addObserver:(id)arg1;
- (unsigned long long)badgeCount;
- (void)clearFriendListWithCompletion:(id /* block */)arg1;
- (id)contactsManager;
- (void)contactsManagerDidUpdateContacts:(id)arg1;
- (void)dealloc;
- (void)fitnessFriendsManagerReady:(id)arg1;
- (id)friendWithUUID:(id)arg1;
- (id)friends;
- (bool)hasFriendsToShareWith;
- (id)healthDaemon;
- (id)init;
- (id)initWithIsWatch:(bool)arg1;
- (void)initializeFriendList;
- (bool)isWatch;
- (id)periodicUpdateManager;
- (id)relationshipManager;
- (void)removeObserver:(id)arg1;
- (void)setActivityDataManager:(id)arg1;
- (void)setContactsManager:(id)arg1;
- (void)setHealthDaemon:(id)arg1;
- (void)setIsWatch:(bool)arg1;
- (void)setPeriodicUpdateManager:(id)arg1;
- (void)setRelationshipManager:(id)arg1;
- (void)updateFriendListWithNewSnapshots:(id)arg1 achievements:(id)arg2 workouts:(id)arg3;

@end
