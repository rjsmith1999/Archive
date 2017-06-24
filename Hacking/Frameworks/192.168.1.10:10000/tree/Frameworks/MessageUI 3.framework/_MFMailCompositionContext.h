/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFMailCompositionContext : NSObject {
    MFAttachmentCompositionContext * _attachmentContext;
    NSString * _attachmentToMarkupContentID;
    id  _autosaveIdentifier;
    NSArray * _bccRecipients;
    MFComposeBodyField * _bodyField;
    unsigned long long  _caretPosition;
    NSArray * _ccRecipients;
    int  _composeType;
    NSMutableArray * _deferredAttachments;
    bool  _includeAttachments;
    bool  _loadRest;
    MFMessageLoadingContext * _loadingContext;
    NSString * _messageBody;
    id  _originalContent;
    MFMailMessage * _originalMessage;
    NSString * _originatingBundleID;
    bool  _prefersFirstLineSelection;
    bool  _registeredForDraw;
    NSString * _sendingAddress;
    bool  _showContentImmediately;
    bool  _showKeyboardImmediately;
    int  _sourceAccountManagement;
    NSString * _subject;
    NSArray * _toRecipients;
    bool  _usingDefaultAccount;
}

@property (nonatomic, readonly) MFAttachmentCompositionContext *attachmentContext;
@property (nonatomic, retain) NSString *attachmentToMarkupContentID;
@property (nonatomic, readonly) id autosaveIdentifier;
@property (nonatomic, copy) NSArray *bccRecipients;
@property MFComposeBodyField *bodyField;
@property (nonatomic) unsigned long long caretPosition;
@property (nonatomic, copy) NSArray *ccRecipients;
@property (nonatomic, readonly) int composeType;
@property (nonatomic, readonly) NSString *contextID;
@property (nonatomic) bool includeAttachments;
@property (nonatomic) bool loadRest;
@property (nonatomic, retain) MFMessageLoadingContext *loadingContext;
@property (nonatomic, retain) id originalContent;
@property (nonatomic, readonly) MFMailMessage *originalMessage;
@property (nonatomic, copy) NSString *originatingBundleID;
@property (nonatomic) bool prefersFirstLineSelection;
@property (nonatomic, copy) NSString *sendingAddress;
@property (nonatomic) bool showContentImmediately;
@property (nonatomic) bool showKeyboardImmediately;
@property (nonatomic) int sourceAccountManagement;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSArray *toRecipients;
@property (nonatomic) bool usingDefaultAccount;

- (void)_contextRegisterForDrawNotification;
- (void)_contextUnregisterForDrawNotification;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4;
- (id)attachmentContext;
- (id)attachmentToMarkupContentID;
- (id)attachments;
- (id)autosaveIdentifier;
- (id)bccRecipients;
- (id)bodyField;
- (unsigned long long)caretPosition;
- (id)ccRecipients;
- (int)composeType;
- (void)contextDidDraw:(id)arg1;
- (id)contextID;
- (void)dealloc;
- (bool)includeAttachments;
- (id)init;
- (id)initDraftRestoreOfMessage:(id)arg1;
- (id)initForwardOfMessage:(id)arg1;
- (id)initOutboxRestoreOfMessage:(id)arg1;
- (id)initRecoveredAutosavedMessageWithIdentifier:(id)arg1;
- (id)initReplyAllToMessage:(id)arg1;
- (id)initReplyToMessage:(id)arg1;
- (id)initSendAgainDraftOfMessage:(id)arg1;
- (id)initWithComposeType:(int)arg1;
- (id)initWithComposeType:(int)arg1 RFC822Data:(id)arg2;
- (id)initWithComposeType:(int)arg1 originalMessage:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 composeType:(int)arg2 originalMessage:(id)arg3;
- (void)insertAttachmentWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
- (void)insertAttachmentWithURL:(id)arg1;
- (bool)loadRest;
- (id)loadingContext;
- (id)messageBody;
- (id)originalContent;
- (id)originalMessage;
- (id)originatingBundleID;
- (bool)prefersFirstLineSelection;
- (void)recordPasteboardAttachmentsForURLs:(id)arg1;
- (void)recordUndoAttachmentsForURLs:(id)arg1;
- (void)removeAttachment:(id)arg1;
- (id)sendingAddress;
- (void)setAttachmentToMarkupContentID:(id)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setBodyField:(id)arg1;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setIncludeAttachments:(bool)arg1;
- (void)setLoadRest:(bool)arg1;
- (void)setLoadingContext:(id)arg1;
- (void)setMessageBody:(id)arg1 isHTML:(bool)arg2;
- (void)setOriginalContent:(id)arg1;
- (void)setOriginatingBundleID:(id)arg1;
- (void)setPrefersFirstLineSelection:(bool)arg1;
- (void)setSendingAddress:(id)arg1;
- (void)setShowContentImmediately:(bool)arg1;
- (void)setShowKeyboardImmediately:(bool)arg1;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (void)setUsingDefaultAccount:(bool)arg1;
- (bool)showContentImmediately;
- (bool)showKeyboardImmediately;
- (int)sourceAccountManagement;
- (id)subject;
- (id)toRecipients;
- (bool)usingDefaultAccount;

@end
