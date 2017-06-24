/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDeletedSampleEntity : HDDeletedObjectEntity

+ (bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)enumerateDeletedSamplesWithType:(id)arg1 profile:(id)arg2 sourceIdentifier:(id)arg3 limit:(unsigned long long)arg4 anchor:(long long)arg5 error:(id*)arg6 handler:(id /* block */)arg7;
+ (bool)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 excludedSyncStore:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg4 limit:(unsigned long long)arg5 lastSyncAnchor:(long long*)arg6 healthDatabase:(id)arg7 error:(id*)arg8 block:(id /* block */)arg9;
+ (id)insertDeletedObject:(id)arg1 dataType:(id)arg2 provenanceIdentifier:(id)arg3 deletionDate:(id)arg4 inDatabase:(id)arg5 error:(id*)arg6;
+ (id)insertDeletedObjectForObject:(id)arg1 provenanceIdentifier:(id)arg2 deletionDate:(id)arg3 inDatabase:(id)arg4 error:(id*)arg5;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 excludedSyncStore:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5;
+ (long long)protectionClass;

@end
