/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate> {
    <MPArtworkDataSource> * _artworkDataSource;
    unsigned long long  _backgroundTask;
    unsigned long long  _backgroundTaskCount;
    NSObject<OS_dispatch_queue> * _backgroundTaskQueue;
    MPMediaEntityCache * _entityCache;
    bool  _hasScheduledEventPosting;
    ML3MusicLibrary * _library;
    int  _refreshState;
    NSOperationQueue * _setValuesWidthLimitedQueue;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) <MPArtworkDataSource> *artworkDataSource;
@property (nonatomic, readonly) <MPArtworkDataSource> *completeMyCollectionArtworkDataSource;
@property (nonatomic, readonly) NSString *databasePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MPMediaEntityCache *entityCache;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isGeniusEnabled;
@property (nonatomic, retain) ML3MusicLibrary *library;
@property (nonatomic, readonly) NSArray *localizedSectionIndexTitles;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long playbackHistoryPlaylistPersistentID;
@property (nonatomic, readonly) NSArray *preferredAudioLanguages;
@property (nonatomic, readonly) NSArray *preferredSubtitleLanguages;
@property (nonatomic, readonly) NSSet *propertiesToCache;
@property (nonatomic, readonly) bool requiresAuthentication;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *syncValidity;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)_unadjustedValueForItemDateWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyRatingWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyVolumeAdjustmentWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyVolumeNormalizationWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemTimeWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForMPProperty:(id)arg1 withDefaultValue:(id)arg2;

- (void).cxx_destruct;
- (id)ML3SystemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2 subscriptionFilteringOptions:(long long)arg3 additionalFilterPredicates:(id)arg4;
- (void)_addGlobalPlaylistToLibraryDatabase:(id)arg1 asLibraryOwned:(bool)arg2 completion:(id /* block */)arg3;
- (id)_adjustedItemDateOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyAssetURLOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyChapterArtworkTimesOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyChaptersOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyContentRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyEQPresetOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyEpisodeNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyFilePathOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyMovieInfoOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertySeasonNameOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertySeasonNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyVerifiedIntegrityOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyVolumeAdjustmentOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyVolumeNormalizationOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemTimeOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedPlaylistPropertySeedItemsOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedPropertyMediaTypeOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (void)_coalesceEvents;
- (bool)_dataProviderSupportsEntityChangeTracking;
- (void)_displayValuesDidChange:(id)arg1;
- (void)_dynamicPropertiesDidChange:(id)arg1;
- (void)_importStoreItemElements:(id)arg1 andAddTracksToCloudLibrary:(bool)arg2 usingCloudAdamID:(long long)arg3 withCompletion:(id /* block */)arg4;
- (void)_invisiblePropertiesDidChange:(id)arg1;
- (void)_libraryCloudLibraryAvailabilityDidChange:(id)arg1;
- (void)_libraryContentsDidChange:(id)arg1;
- (void)_libraryUIDDidChange:(id)arg1;
- (void)_loadProperties:(id)arg1 ofEntityWithIdentifier:(long long)arg2 ML3EntityClass:(Class)arg3 completionBlock:(id /* block */)arg4;
- (void)_loadValueForAggregateFunction:(id)arg1 entityClass:(Class)arg2 property:(id)arg3 query:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)_postEvents;
- (bool)_removeEntitiesWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 entityClass:(Class)arg3;
- (void)_syncGenerationDidChange:(id)arg1;
- (void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(bool)arg2 completion:(id /* block */)arg3;
- (void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(id /* block */)arg3;
- (void)addItemsWithIdentifiers:(id)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(id /* block */)arg3;
- (void)addNonLibraryOwnedPlaylistWithGlobalID:(id)arg1 completion:(id /* block */)arg2;
- (void)addPlaylistStoreItemsForLookupItems:(id)arg1 withCompletion:(id /* block */)arg2;
- (long long)addPlaylistWithValuesForProperties:(id)arg1;
- (void)addTracksToMyLibrary:(id)arg1;
- (id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3;
- (id)artworkDataSource;
- (void)clearLocationPropertiesOfItemWithIdentifier:(long long)arg1;
- (bool)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long*)arg4;
- (bool)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (bool)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (bool)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (id)collectionResultSetForQueryCriteria:(id)arg1;
- (unsigned long long)currentEntityRevision;
- (id)databasePath;
- (void)dealloc;
- (bool)deleteItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2;
- (id)entityCache;
- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)arg1 ordered:(bool)arg2 cancelBlock:(id /* block */)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 inUsersLibrary:(bool)arg3 itemBlock:(id /* block */)arg4 collectionBlock:(id /* block */)arg5;
- (void)enumerateItemIdentifiersForQueryCriteria:(id)arg1 ordered:(bool)arg2 cancelBlock:(id /* block */)arg3 usingBlock:(id /* block */)arg4;
- (bool)hasGeniusMixes;
- (bool)hasMediaOfType:(unsigned long long)arg1;
- (bool)hasUbiquitousBookmarkableItems;
- (void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;
- (bool)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5;
- (id)initWithLibrary:(id)arg1;
- (bool)isCurrentThreadInTransaction;
- (bool)itemExistsWithPersistentID:(unsigned long long)arg1;
- (long long)itemPersistentIDForStoreID:(long long)arg1;
- (id)itemResultSetForQueryCriteria:(id)arg1;
- (id)lastModifiedDate;
- (id)library;
- (void)loadProperties:(id)arg1 ofCollectionWithIdentifier:(long long)arg2 groupingType:(long long)arg3 completionBlock:(id /* block */)arg4;
- (void)loadProperties:(id)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id /* block */)arg3;
- (void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(id /* block */)arg2;
- (void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(id /* block */)arg2;
- (void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(id /* block */)arg2;
- (void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(id /* block */)arg2;
- (void)loadValueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)loadValueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (id)localizedSectionIndexTitles;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(id /* block */)arg4;
- (id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;
- (id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (id)name;
- (void)performBackgroundTaskWithBlock:(id /* block */)arg1;
- (void)performReadTransactionWithBlock:(id /* block */)arg1;
- (void)performStoreItemLibraryImport:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)performTransactionWithBlock:(id /* block */)arg1;
- (long long)playbackHistoryPlaylistPersistentID;
- (bool)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (long long)playlistGeneration;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3;
- (id)preferredAudioLanguages;
- (id)preferredSubtitleLanguages;
- (bool)recordPlayEventForAlbumPersistentID:(long long)arg1;
- (bool)recordPlayEventForPlaylistPersistentID:(long long)arg1;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
- (void)removeFirstItemFromPlaylistWithIdentifier:(long long)arg1;
- (void)removeItemsAtIndexes:(id)arg1 inPlaylistWithIdentifier:(long long)arg2 completionBlock:(id /* block */)arg3;
- (bool)removeItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2;
- (bool)removePlaylistWithIdentifier:(long long)arg1;
- (void)sdk_addItemWithOpaqueID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sdk_addItemWithOpaqueIdentifier:(id)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(id /* block */)arg3;
- (long long)sdk_addPlaylistWithValuesForProperties:(id)arg1;
- (void)setItemsWithIdentifiers:(id)arg1 forPlaylistWithIdentifier:(long long)arg2 completionBlock:(id /* block */)arg3;
- (void)setLibrary:(id)arg1;
- (void)setLibraryContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;
- (void)setLibraryEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;
- (void)setLibraryPublicContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;
- (void)setLibraryPublicEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;
- (bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(long long)arg4 completionBlock:(id /* block */)arg5;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(id /* block */)arg4;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(id /* block */)arg4;
- (unsigned long long)syncGenerationID;
- (id)syncValidity;
- (id)systemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2 subscriptionFilteringOptions:(long long)arg3;
- (id)uniqueIdentifier;
- (id)valueForDatabaseProperty:(id)arg1;
- (bool)writable;

@end
