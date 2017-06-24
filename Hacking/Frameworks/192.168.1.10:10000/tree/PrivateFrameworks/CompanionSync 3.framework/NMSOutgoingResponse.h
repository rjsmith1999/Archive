/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface NMSOutgoingResponse : NSObject <NMSDeviceTargetable, NMSObfuscatableDescriptionProviding> {
    NSData * _data;
    NSDictionary * _extraIDSOptions;
    NSString * _idsIdentifier;
    id  _pbResponse;
    NSDictionary * _persistentUserInfo;
    unsigned long long  _priority;
    NMSIncomingRequest * _request;
    double  _sendTimeout;
    bool  _sent;
    NSSet * targetDeviceIDs;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *extraIDSOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic, retain) id pbResponse;
@property (nonatomic, retain) NSDictionary *persistentUserInfo;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) NMSIncomingRequest *request;
@property (nonatomic) double sendTimeout;
@property (getter=isSent) bool sent;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSSet *targetDeviceIDs;

- (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;
- (id)_makePBResponse;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)extraIDSOptions;
- (id)idsIdentifier;
- (id)init;
- (bool)isSent;
- (id)pbResponse;
- (id)persistentUserInfo;
- (unsigned long long)priority;
- (id)request;
- (void)send;
- (double)sendTimeout;
- (void)setData:(id)arg1;
- (void)setExtraIDSOptions:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setPbResponse:(id)arg1;
- (void)setPersistentUserInfo:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setRequest:(id)arg1;
- (void)setSendTimeout:(double)arg1;
- (void)setSent:(bool)arg1;
- (void)setTargetDeviceIDs:(id)arg1;
- (id)targetDeviceIDs;

@end
