/* Generated by RuntimeBrowser.
 */

@protocol CPLPullFromTransportTaskDelegate <CPLEngineSyncTaskDelegate>

@required

- (<CPLEngineTransportDownloadBatchTask> *)task:(void *)arg1 wantsToDownloadBatchesFromSyncAnchor:(void *)arg2 progressHandler:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 17: CPLPullFromTransportTask *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLChangeBatch *, NSData *, void*, id /* block */, void*, void, id /* block */, NSData *, bool, NSError *, void*
- (<CPLEngineTransportQueryTask> *)task:(void *)arg1 wantsToQueryTaskForCursor:(void *)arg2 class:(void *)arg3 progressHandler:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 16: CPLPullFromTransportTask *, NSData *, Class, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLChangeBatch *, NSData *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (bool)taskSupportsBatchDownloadPipelining:(CPLPullFromTransportTask *)arg1;

@end
