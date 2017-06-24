/* Generated by RuntimeBrowser.
 */

@protocol RWIProtocolDOMDomainHandler <NSObject>

@required

- (void)discardSearchResultsWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 searchId:(void *)arg3; // needs 3 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, NSString *
- (void)focusWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3; // needs 3 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, int
- (void)getAccessibilityPropertiesForNodeWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, RWIProtocolDOMAccessibilityProperties *, void*, int
- (void)getAttributesWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSArray *, void*, int
- (void)getDocumentWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, RWIProtocolDOMNode *, void*
- (void)getEventListenersForNodeWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3 objectGroup:(void *)arg4; // needs 4 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSArray *, void*, int, id*
- (void)getOuterHTMLWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSString *, void*, int
- (void)getSearchResultsWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 searchId:(void *)arg3 fromIndex:(void *)arg4 toIndex:(void *)arg5; // needs 5 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSArray *, void*, NSString *, int, int
- (void)hideHighlightWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*
- (void)highlightFrameWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 frameId:(void *)arg3 contentColor:(void *)arg4 contentOutlineColor:(void *)arg5; // needs 5 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, NSString *, id*, id*
- (void)highlightNodeWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 highlightConfig:(void *)arg3 nodeId:(void *)arg4 objectId:(void *)arg5; // needs 5 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, RWIProtocolDOMHighlightConfig *, int*, id*
- (void)highlightQuadWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 quad:(void *)arg3 color:(void *)arg4 outlineColor:(void *)arg5 usePageCoordinates:(void *)arg6; // needs 6 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, NSArray *, id*, id*, bool*
- (void)highlightRectWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 x:(void *)arg3 y:(void *)arg4 width:(void *)arg5 height:(void *)arg6 color:(void *)arg7 outlineColor:(void *)arg8 usePageCoordinates:(void *)arg9; // needs 9 arg types, found 18: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, int, int, int, int, id*, id*, bool*
- (void)highlightSelectorWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 highlightConfig:(void *)arg3 selectorString:(void *)arg4 frameId:(void *)arg5; // needs 5 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, RWIProtocolDOMHighlightConfig *, NSString *, id*
- (void)markUndoableStateWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*
- (void)moveToWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3 targetNodeId:(void *)arg4 insertBeforeNodeId:(void *)arg5; // needs 5 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, int, void*, int, int, int*
- (void)performSearchWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 query:(void *)arg3 nodeIds:(void *)arg4; // needs 4 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSString *, int, void*, NSString *, id*
- (void)pushNodeByBackendIdToFrontendWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 backendNodeId:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, int, void*, int
- (void)pushNodeByPathToFrontendWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 path:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, int, void*, NSString *
- (void)querySelectorAllWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3 selector:(void *)arg4; // needs 4 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, NSArray *, void*, int, NSString *
- (void)querySelectorWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3 selector:(void *)arg4; // needs 4 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, int, void*, int, NSString *
- (void)redoWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*
- (void)releaseBackendNodeIdsWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeGroup:(void *)arg3; // needs 3 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, NSString *
- (void)removeAttributeWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3 name:(void *)arg4; // needs 4 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, int, NSString *
- (void)removeNodeWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3; // needs 3 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, int
- (void)requestChildNodesWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3 depth:(void *)arg4; // needs 4 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, int, int*
- (void)requestNodeWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 objectId:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, int, void*, NSString *
- (void)resolveNodeWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3 objectGroup:(void *)arg4; // needs 4 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, RWIProtocolRuntimeRemoteObject *, void*, int, id*
- (void)setAttributeValueWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3 name:(void *)arg4 value:(void *)arg5; // needs 5 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, int, NSString *, NSString *
- (void)setAttributesAsTextWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3 text:(void *)arg4 name:(void *)arg5; // needs 5 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, int, NSString *, id*
- (void)setInspectModeEnabledWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 enabled:(void *)arg3 highlightConfig:(void *)arg4; // needs 4 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, bool, id*
- (void)setNodeNameWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3 name:(void *)arg4; // needs 4 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, int, void*, int, NSString *
- (void)setNodeValueWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3 value:(void *)arg4; // needs 4 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, int, NSString *
- (void)setOuterHTMLWithErrorCallback:(void *)arg1 successCallback:(void *)arg2 nodeId:(void *)arg3 outerHTML:(void *)arg4; // needs 4 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*, int, NSString *
- (void)undoWithErrorCallback:(void *)arg1 successCallback:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, id /* block */, void*, void, id /* block */, void*

@end
