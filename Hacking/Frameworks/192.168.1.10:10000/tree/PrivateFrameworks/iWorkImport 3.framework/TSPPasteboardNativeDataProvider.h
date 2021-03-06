/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPasteboardNativeDataProvider : NSObject <TSPDecoder, TSPPasteboardWriting> {
    NSMutableDictionary * _nativeData;
    TSPPasteboard * _pasteboard;
    NSMutableDictionary * _tspData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataForIdentifier:(long long)arg1;
- (id)debugDescription;
- (id)init;
- (id)initWithPasteboard:(id)arg1 nativeData:(id)arg2 tspData:(id)arg3;
- (void)loadNativeData;
- (id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2;
- (id)newReadChannelForMetadata;
- (id)newReadChannelForRootObjectComponent;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;

@end
