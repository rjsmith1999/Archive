/* Generated by RuntimeBrowser.
 */

@protocol SWCXPCServer <NSObject>

@required

- (void)addAllAppsWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)addService:(void *)arg1 app:(void *)arg2 domain:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)checkService:(void *)arg1 app:(void *)arg2 domain:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 11: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned int, NSDictionary *, void*
- (void)getInfoForService:(void *)arg1 app:(void *)arg2 domain:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)logControl:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)removeService:(void *)arg1 app:(void *)arg2 domain:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)setService:(void *)arg1 app:(void *)arg2 domain:(void *)arg3 details:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)setService:(void *)arg1 app:(void *)arg2 domain:(void *)arg3 mask:(void *)arg4 flags:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 12: NSString *, NSString *, NSString *, unsigned int, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned int, void*
- (void)show:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*

@end
