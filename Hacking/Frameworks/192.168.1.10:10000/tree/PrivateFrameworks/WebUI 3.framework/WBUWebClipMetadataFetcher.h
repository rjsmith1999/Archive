/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUWebClipMetadataFetcher : NSObject {
    bool  _fetchingCompleted;
    WBUInjectedJavaScriptController * _jsController;
    NSArray * _linkTags;
    NSDictionary * _metaTags;
    NSMutableArray * _metadataConsumers;
}

+ (id)metadataFetcherScriptSource;

- (void).cxx_destruct;
- (void)_startFetchingMetadata;
- (id)_webClipLinkTagWithDictionary:(id)arg1;
- (void)fetchMetadataWithConsumer:(id /* block */)arg1;
- (id)initWithInjectedJavascriptController:(id)arg1;

@end
