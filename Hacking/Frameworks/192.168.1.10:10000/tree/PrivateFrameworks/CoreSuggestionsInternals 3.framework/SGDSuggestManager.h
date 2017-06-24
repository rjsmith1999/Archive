/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDSuggestManager : NSObject <SGDSuggestManagerAllProtocol> {
    SGAsset * _asset;
    NSXPCConnection * _connection;
    SGServiceContext * _context;
    struct SGDSuggestManagerCTSCriteriaState { 
        bool hasItemsHighPriority; 
        bool hasItemsLowPriority; 
    }  _ctsCriteriaState;
    bool  _dirty;
    id /* block */  _ekStoreFactory;
    NSObject<OS_dispatch_queue> * _frontfillQueue;
    NSObject<OS_dispatch_semaphore> * _frontfillSemaphoreForTesting;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _geocodeLock;
    NSObject<OS_dispatch_queue> * _harvestQueue;
    SGSqlEntityStore * _harvestStore;
    SGSuggestHistory * _history;
    NSOperationQueue * _messageHarvestQueue;
    SGQueryPredictions * _queryPredictions;
    bool  _xpcActivity;
}

@property (nonatomic, readonly) SGServiceContext *context;

+ (void)initialize;
+ (void)resetLastFrontfillFinishTimeForTesting;
+ (void)resetXpcActivityForTesting;

- (void).cxx_destruct;
- (void)_adjustCriteriaForCTS;
- (bool)_attemptToProcessSearchableItemWithoutDissection:(id)arg1;
- (bool)_canBannerUseStoredDissection:(id)arg1 needsOptionalDissectorsToRun:(bool*)arg2 options:(unsigned long long)arg3;
- (bool)_clientIsMail;
- (bool)_clientIsMessages;
- (void)_delayedBannerConfirmWithEvent:(id)arg1;
- (void)_doAdjustCriteriaForCTS;
- (bool)_isContactInteresting:(id)arg1 emailEntity:(id)arg2 enrichments:(id)arg3 hasContactCard:(bool)arg4;
- (id)_mapToPseudoEvents:(id)arg1;
- (id)_maybeFormatString;
- (void)_onInteractionBlacklistUpdate:(id)arg1;
- (void)_performAction:(id)arg1 onContactDetailRecord:(id)arg2 completion:(id /* block */)arg3;
- (void)_performAction:(id)arg1 onRecord:(id)arg2 completion:(id /* block */)arg3;
- (void)_registerForCTSHarvestActivity;
- (void)_registerForCTSIdentityAnalysisActivity;
- (void)_registerForCTSSendRTCActivity;
- (void)_registerForCTSTrimActivity;
- (void)_registerForCTSVacuumActivity;
- (void)_sendChatChangedNotificationWithDomainIdentifier:(id)arg1;
- (void)_setupHistoryObserver:(id)arg1;
- (void)_storeAndGeocodeEntity:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 store:(id)arg5 afterCallbackQueue:(id)arg6 finalize:(id /* block */)arg7;
- (void)_suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 dissectIfNecessary:(bool)arg3 completionDelivery:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)_suggestionsFromMessageWithIdentifier:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4 completionDelivery:(unsigned long long)arg5 providedBy:(id /* block */)arg6 dissectIfNecessary:(bool)arg7;
- (void)_suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 dissectIfNecessary:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)addInteractions:(id)arg1 bundleId:(id)arg2 completion:(id /* block */)arg3;
- (void)addSearchableItemMetadata:(id)arg1 htmlData:(id)arg2 completion:(id /* block */)arg3;
- (void)addSearchableItems:(id)arg1 completion:(id /* block */)arg2;
- (void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (id)cachedResultForKey:(id)arg1 generateResult:(id /* block */)arg2 validateResults:(id /* block */)arg3;
- (void)clearCachesFully:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)clearContactAggregator;
- (void)clearContactAggregatorConversation:(id)arg1;
- (void)cnContactMatchesForRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)cnContactMatchesForRecordIds:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)confirmContact:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmContactDetailRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmEventByRecordId:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)contactDetailUsed:(id)arg1 field:(id)arg2 completion:(id /* block */)arg3;
- (void)contactFromRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)contactMatchesOrLookupIdByEmailAddress:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)contactMatchesOrLookupIdByPhoneNumber:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)contactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)contactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (bool)containsNonCuratedData:(id)arg1;
- (id)context;
- (id)curatedEventKeyForExactMatchOfPseudoEvent:(id)arg1 candidates:(id)arg2;
- (id)curatedEventsWithSameOpaqueKeyAsPseudoEvent:(id)arg1;
- (void)daemonExitWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteInteractionsWithBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 groupIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 identifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)didEndSearch:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)didEngageResult:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)didEngageSuggestion:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)didStartSearch:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)dissectMessage:(id)arg1 fromSource:(id)arg2 store:(id)arg3 existingEnrichments:(id)arg4;
- (void)drainDefaultQueueCompletely;
- (void)drainDefaultQueueCompletelyRunningOptionalDissectors:(bool)arg1;
- (bool)drainHarvestQueue:(id)arg1 runningOptionalDissectors:(bool)arg2 highPriorityOnly:(bool)arg3 continuingWhile:(id /* block */)arg4;
- (void)drainQueueCompletelyWithCompletion:(id /* block */)arg1;
- (id)ekStore;
- (void)emailAddressIsSignificant:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)enqueueSearchableItems:(id)arg1;
- (void)eventFromRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)eventFromUniqueId:(id)arg1 completion:(id /* block */)arg2;
- (void)eventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(id /* block */)arg3;
- (void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(id /* block */)arg5;
- (void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(id /* block */)arg6;
- (id)fetchEKEventForPseudoEventBySimilarTitleAndStartTime:(id)arg1;
- (id)fetchEKEventForPseudoNLEvent:(id)arg1 entityTitle:(id)arg2;
- (id)filterRealtimeEvents:(id)arg1;
- (void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)harvestedSuggestionsFromMessages:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)initWithConnection:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 xpcActivity:(bool)arg2;
- (void)isEnabledWithCompletion:(id /* block */)arg1;
- (void)keepDirty:(bool)arg1;
- (void)messagesToRefreshWithCompletion:(id /* block */)arg1;
- (void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)originFromRecordId:(id)arg1 completion:(id /* block */)arg2;
- (void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(id /* block */)arg6;
- (void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(id /* block */)arg6;
- (void)prepareForRealtimeExtraction:(id /* block */)arg1;
- (void)processPendingGeocodes;
- (bool)processSearchableItem:(id)arg1 pipeline:(id)arg2 dissectionQueue:(id)arg3 storeQueue:(id)arg4;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)queryPredictionsFeedbackReportForConversation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)queryPredictionsForConversation:(id)arg1 count:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)realtimeContactsFromEntity:(id)arg1 enrichments:(id)arg2 sourceTextMessage:(id)arg3 store:(id)arg4;
- (void)registerForCTS;
- (void)registerForCoreSpotlightIndexing;
- (void)rejectContact:(id)arg1 completion:(id /* block */)arg2;
- (void)rejectContactDetailRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)rejectEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)rejectEventByRecordId:(id)arg1 completion:(id /* block */)arg2;
- (void)rejectRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)relevantABRecordIDsWithLimit:(long long)arg1 completion:(id /* block */)arg2;
- (void)removeAllStoredPseudoContactsWithCompletion:(id /* block */)arg1;
- (void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)resetConfirmationAndRejectionHistory:(id /* block */)arg1;
- (void)resolveFullDownloadRequests:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resumeFrontfillForTesting;
- (void)schemaOrgToEvents:(id)arg1 completion:(id /* block */)arg2;
- (void)searchViewDidAppear:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)searchViewDidDisappear:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendCustomFeedback:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendRTCLogsWithCompletion:(id /* block */)arg1;
- (void)setEKStoreFactoryForTesting:(id /* block */)arg1;
- (void)setupManagerWithConnection:(id)arg1 store:(id)arg2 xpcActivity:(bool)arg3 queryPredictions:(id)arg4;
- (id)shortNamesAndRealtimeEventsFromEntity:(id)arg1 enrichments:(id)arg2 store:(id)arg3;
- (void)sleepWithCompletion:(id /* block */)arg1;
- (id)storageContactFromRecordId:(id)arg1;
- (void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 withCompletion:(id /* block */)arg5;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionDelivery:(unsigned long long)arg3 completionHandler:(id /* block */)arg4 fullCompletionHandler:(id /* block */)arg5;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 fullCompletionHandler:(id /* block */)arg3;
- (void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)suspendFrontfillForTesting;
- (void)updateMessages:(id)arg1 state:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithLastModificationDate:(id)arg2 completion:(id /* block */)arg3;
- (void)waitForXpcActivityQueue;
- (void)waitUntilFrontfillFinishedForTesting;
- (id)xpcActivity;

@end
