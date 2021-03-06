/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolNetworkResourceTiming : RWIProtocolJSONObject

@property (nonatomic) double connectEnd;
@property (nonatomic) double connectStart;
@property (nonatomic) double domainLookupEnd;
@property (nonatomic) double domainLookupStart;
@property (nonatomic) double navigationStart;
@property (nonatomic) double requestStart;
@property (nonatomic) double responseStart;
@property (nonatomic) double secureConnectionStart;

- (double)connectEnd;
- (double)connectStart;
- (double)domainLookupEnd;
- (double)domainLookupStart;
- (id)initWithNavigationStart:(double)arg1 domainLookupStart:(double)arg2 domainLookupEnd:(double)arg3 connectStart:(double)arg4 connectEnd:(double)arg5 secureConnectionStart:(double)arg6 requestStart:(double)arg7 responseStart:(double)arg8;
- (double)navigationStart;
- (double)requestStart;
- (double)responseStart;
- (double)secureConnectionStart;
- (void)setConnectEnd:(double)arg1;
- (void)setConnectStart:(double)arg1;
- (void)setDomainLookupEnd:(double)arg1;
- (void)setDomainLookupStart:(double)arg1;
- (void)setNavigationStart:(double)arg1;
- (void)setRequestStart:(double)arg1;
- (void)setResponseStart:(double)arg1;
- (void)setSecureConnectionStart:(double)arg1;

@end
