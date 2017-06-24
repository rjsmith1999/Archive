/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageViewingContext : NSObject {
    MFAttachmentManager * _attachmentManager;
    MFMessageBody * _body;
    id  _content;
    MFLock * _contentLock;
    unsigned long long  _contentOffset;
    NSObject<MFMessageViewingContextDelegate> * _delegate;
    unsigned int  _failedToLoad;
    unsigned int  _hasNoContent;
    unsigned int  _isDraftMessage;
    unsigned int  _isEditableMessage;
    unsigned int  _isOutgoingMessage;
    bool  _isReload;
    long long  _loadAlternative;
    unsigned int  _loadIncrement;
    MFActivityMonitor * _loadTask;
    unsigned int  _loadedFullData;
    MFMimePart * _loadedPart;
    MFMailMessage * _message;
    NSError * _messageAnalysisError;
    MFError * _secureMIMEError;
    unsigned int  _shouldAnalyzeMessage;
    unsigned int  _showMailboxName;
    NSArray * _signers;
    NSArray * _suggestions;
    NSConditionLock * _suggestionsLock;
    NSObject<OS_dispatch_queue> * _suggestionsQueue;
    NSObject<SGSuggestionsServiceMailProtocol> * _suggestionsService;
}

@property (nonatomic, readonly, retain) MFAttachmentManager *attachmentManager;
@property (setter=_setContent:, nonatomic, retain) id content;
@property (setter=_setContentOffset:, nonatomic) unsigned long long contentOffset;
@property (nonatomic) <MFMessageViewingContextDelegate> *delegate;
@property (nonatomic, readonly) bool failedToLoad;
@property (nonatomic, readonly) bool hasAnalyzedMessage;
@property (nonatomic, readonly) bool hasLoaded;
@property (nonatomic, readonly) bool hasNoContent;
@property (nonatomic) bool isDraftMessage;
@property (nonatomic) bool isEditableMessage;
@property (nonatomic, readonly) bool isMessageEncrypted;
@property (nonatomic, readonly) bool isMessageSigned;
@property (nonatomic) bool isOutgoingMessage;
@property (nonatomic, readonly) bool isPartial;
@property (nonatomic, readonly, retain) MFActivityMonitor *loadTask;
@property (setter=_setLoadedPart:, nonatomic, retain) MFMimePart *loadedPart;
@property (nonatomic, readonly, retain) MFMailMessage *message;
@property (setter=_setMessageAnalysisError:, nonatomic, retain) NSError *messageAnalysisError;
@property (setter=_setMessageBody:, nonatomic, retain) MFMessageBody *messageBody;
@property (setter=_setSecureMIMEError:, nonatomic, retain) MFError *secureMimeError;
@property (nonatomic) bool shouldAnalyzeMessage;
@property (nonatomic) bool showMailboxName;
@property (setter=_setSigners:, nonatomic, copy) NSArray *signers;
@property (setter=_setSuggestions:, nonatomic, copy) NSArray *suggestions;

+ (bool)isAttachmentTooLargeToDownload:(id)arg1;
+ (unsigned long long)nextOffsetForOffset:(unsigned long long)arg1 totalLength:(unsigned long long)arg2 requestedAmount:(unsigned long long)arg3;

- (void)_notifyCompletelyComplete;
- (void)_notifyFullMessageLoadFailed;
- (void)_notifyInitialLoadComplete;
- (void)_notifyMessageAnalysisComplete;
- (void)_setContent:(id)arg1;
- (void)_setContentOffset:(unsigned long long)arg1;
- (void)_setLoadedPart:(id)arg1;
- (void)_setMessageAnalysisError:(id)arg1;
- (void)_setMessageBody:(id)arg1;
- (void)_setSecureMIMEError:(id)arg1;
- (void)_setSigners:(id)arg1;
- (void)_setSuggestions:(id)arg1;
- (void)analyzeMessageContent:(id)arg1;
- (id)attachmentManager;
- (id)attachments;
- (void)cancelLoad;
- (id)content;
- (unsigned long long)contentOffset;
- (void)dealloc;
- (id)delegate;
- (bool)failedToLoad;
- (void)forceReload;
- (bool)hasAnalyzedMessage;
- (bool)hasAnalyzedMessageWithTimeout:(id)arg1;
- (bool)hasLoaded;
- (bool)hasNoContent;
- (id)initWithMessage:(id)arg1 attachmentManager:(id)arg2;
- (bool)isDraftMessage;
- (bool)isEditableMessage;
- (bool)isMessageEncrypted;
- (bool)isMessageSigned;
- (bool)isOutgoingMessage;
- (bool)isPartial;
- (void)load;
- (void)loadAsPlainText:(bool)arg1 asHTML:(bool)arg2 downloadIfNecessary:(bool)arg3;
- (void)loadBestAlternative;
- (void)loadFull;
- (void)loadMore;
- (id)loadTask;
- (void)loadWithPriority:(int)arg1;
- (id)loadedPart;
- (id)message;
- (id)messageAnalysisError;
- (id)messageBody;
- (id)secureMimeError;
- (void)setDelegate:(id)arg1;
- (void)setIsDraftMessage:(bool)arg1;
- (void)setIsEditableMessage:(bool)arg1;
- (void)setIsOutgoingMessage:(bool)arg1;
- (void)setLoadTask:(id)arg1;
- (void)setShouldAnalyzeMessage:(bool)arg1;
- (void)setShowMailboxName:(bool)arg1;
- (bool)shouldAnalyzeMessage;
- (bool)showMailboxName;
- (id)signers;
- (id)suggestions;
- (id)uniqueID;
- (void)unload;

@end
