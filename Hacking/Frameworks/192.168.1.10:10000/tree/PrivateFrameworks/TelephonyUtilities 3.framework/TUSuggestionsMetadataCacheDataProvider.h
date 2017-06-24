/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUSuggestionsMetadataCacheDataProvider : TUMetadataCacheDataProvider {
    NSObject<OS_dispatch_semaphore> * _suggestionsServiceThrottleSemaphore;
}

@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *suggestionsServiceThrottleSemaphore;

+ (id)newestSuggestedContactForDestinationID:(id)arg1;
+ (id)sharedService;
+ (void)suggestedNamesForDestinationID:(id)arg1 withCompletion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)init;
- (void)setSuggestionsServiceThrottleSemaphore:(id)arg1;
- (id)suggestionsServiceThrottleSemaphore;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;

@end
