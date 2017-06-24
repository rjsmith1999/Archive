/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncGetAnchors : SABaseClientBoundCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *appMetaDataList;
@property (nonatomic, copy) NSDictionary *customVocabSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeAllKnownAnchors;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSArray *sources;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *watchAppMetaDataList;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)getAnchors;
+ (id)getAnchorsWithDictionary:(id)arg1 context:(id)arg2;

- (id)appMetaDataList;
- (id)customVocabSources;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)includeAllKnownAnchors;
- (bool)requiresResponse;
- (void)setAppMetaDataList:(id)arg1;
- (void)setCustomVocabSources:(id)arg1;
- (void)setIncludeAllKnownAnchors:(bool)arg1;
- (void)setSources:(id)arg1;
- (void)setWatchAppMetaDataList:(id)arg1;
- (id)sources;
- (id)watchAppMetaDataList;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (bool)siriCore_bufferingAllowedDuringActiveSession;

@end
