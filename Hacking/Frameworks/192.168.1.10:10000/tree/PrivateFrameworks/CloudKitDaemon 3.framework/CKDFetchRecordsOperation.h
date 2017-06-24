/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordsOperation : CKDDatabaseOperation {
    unsigned long long  _URLOptions;
    NSSet * _assetFieldNamesToPublishURLs;
    CKDRecordCache * _cache;
    NSMutableDictionary * _cachedRecords;
    CKDDecryptRecordsOperation * _decryptOperation;
    NSSet * _desiredKeySet;
    NSDictionary * _desiredPackageFileIndices;
    NSMapTable * _downloadTasksByRecordID;
    NSMutableDictionary * _errorsByRecordID;
    NSObject<OS_dispatch_group> * _fetchRecordsGroup;
    bool  _forcePCSDecrypt;
    NSArray * _fullRecordsToFetch;
    id /* block */  _recordFetchCommandBlock;
    id /* block */  _recordFetchCompletionBlock;
    id /* block */  _recordFetchProgressBlock;
    NSDictionary * _recordIDsToETags;
    NSArray * _recordIDsToFetch;
    NSDictionary * _recordIDsToVersionETags;
    unsigned long long  _requestedTTL;
    bool  _shouldFetchAssetContent;
    bool  _shouldFetchAssetContentInMemory;
    NSDictionary * _signaturesOfAssetsByRecordIDAndKey;
    bool  _useCachedEtags;
    NSDictionary * _webSharingIdentityDataByRecordID;
}

@property (nonatomic) unsigned long long URLOptions;
@property (nonatomic, retain) NSSet *assetFieldNamesToPublishURLs;
@property (nonatomic, retain) CKDRecordCache *cache;
@property (nonatomic, retain) NSMutableDictionary *cachedRecords;
@property (nonatomic, retain) NSSet *desiredKeySet;
@property (nonatomic, retain) NSDictionary *desiredPackageFileIndices;
@property (nonatomic, retain) NSMapTable *downloadTasksByRecordID;
@property (nonatomic, retain) NSMutableDictionary *errorsByRecordID;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchRecordsGroup;
@property (nonatomic) bool forcePCSDecrypt;
@property (nonatomic, retain) NSArray *fullRecordsToFetch;
@property (nonatomic, readonly) bool hasRecordDecryptOperation;
@property (nonatomic, readonly) CKDDecryptRecordsOperation *recordDecryptOperation;
@property (nonatomic, copy) id /* block */ recordFetchCommandBlock;
@property (nonatomic, copy) id /* block */ recordFetchCompletionBlock;
@property (nonatomic, copy) id /* block */ recordFetchProgressBlock;
@property (nonatomic, retain) NSDictionary *recordIDsToETags;
@property (nonatomic, retain) NSArray *recordIDsToFetch;
@property (nonatomic, retain) NSDictionary *recordIDsToVersionETags;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) bool shouldFetchAssetContent;
@property (nonatomic) bool shouldFetchAssetContentInMemory;
@property (nonatomic, retain) NSDictionary *signaturesOfAssetsByRecordIDAndKey;
@property (nonatomic) bool useCachedEtags;
@property (nonatomic, retain) NSDictionary *webSharingIdentityDataByRecordID;

- (void).cxx_destruct;
- (unsigned long long)URLOptions;
- (void)_addDownloadTaskForRecord:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_continueHandleFetchedRecord:(id)arg1;
- (void)_decryptPropertiesOnRecord:(id)arg1;
- (void)_didDownloadAssetsWithError:(id)arg1;
- (void)_downloadAssets;
- (void)_fetchRecords;
- (void)_findCurrentUserParticipantOnShare:(id)arg1 identityDelegate:(id)arg2;
- (void)_finishAllDownloadTasksWithError:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordFetch:(id)arg1 recordID:(id)arg2 etagMatched:(bool)arg3 responseCode:(id)arg4;
- (bool)_prepareAsset:(id)arg1 record:(id)arg2 recordKey:(id)arg3 signature:(id)arg4;
- (id)activityCreate;
- (id)assetFieldNamesToPublishURLs;
- (id)cache;
- (id)cachedRecords;
- (id)desiredKeySet;
- (id)desiredPackageFileIndices;
- (id)downloadTasksByRecordID;
- (id)errorForRecordID:(id)arg1;
- (id)errorsByRecordID;
- (id)fetchRecordsGroup;
- (void)finishWithError:(id)arg1;
- (bool)forcePCSDecrypt;
- (id)fullRecordsToFetch;
- (bool)hasRecordDecryptOperation;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (id)recordDecryptOperation;
- (id /* block */)recordFetchCommandBlock;
- (id /* block */)recordFetchCompletionBlock;
- (id /* block */)recordFetchProgressBlock;
- (id)recordIDsToETags;
- (id)recordIDsToFetch;
- (id)recordIDsToVersionETags;
- (unsigned long long)requestedTTL;
- (void)setAssetFieldNamesToPublishURLs:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setCachedRecords:(id)arg1;
- (void)setDesiredKeySet:(id)arg1;
- (void)setDesiredPackageFileIndices:(id)arg1;
- (void)setDownloadTasksByRecordID:(id)arg1;
- (void)setError:(id)arg1 forRecordID:(id)arg2;
- (void)setErrorsByRecordID:(id)arg1;
- (void)setFetchRecordsGroup:(id)arg1;
- (void)setForcePCSDecrypt:(bool)arg1;
- (void)setFullRecordsToFetch:(id)arg1;
- (void)setRecordFetchCommandBlock:(id /* block */)arg1;
- (void)setRecordFetchCompletionBlock:(id /* block */)arg1;
- (void)setRecordFetchProgressBlock:(id /* block */)arg1;
- (void)setRecordIDsToETags:(id)arg1;
- (void)setRecordIDsToFetch:(id)arg1;
- (void)setRecordIDsToVersionETags:(id)arg1;
- (void)setRequestedTTL:(unsigned long long)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setShouldFetchAssetContentInMemory:(bool)arg1;
- (void)setSignaturesOfAssetsByRecordIDAndKey:(id)arg1;
- (void)setURLOptions:(unsigned long long)arg1;
- (void)setUseCachedEtags:(bool)arg1;
- (void)setWebSharingIdentityDataByRecordID:(id)arg1;
- (bool)shouldFetchAssetContent;
- (bool)shouldFetchAssetContentInMemory;
- (id)signaturesOfAssetsByRecordIDAndKey;
- (bool)useCachedEtags;
- (id)webSharingIdentityDataByRecordID;

@end
