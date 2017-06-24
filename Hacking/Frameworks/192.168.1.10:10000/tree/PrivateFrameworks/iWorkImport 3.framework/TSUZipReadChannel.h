/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSUZipReadChannel : NSObject <TSUStreamReadChannel> {
    <TSUReadChannel> * _archiveReadChannel;
    TSUZipEntry * _entry;
    NSObject<OS_dispatch_queue> * _readQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (void)handleFailureWithQueue:(id)arg1 handler:(id /* block */)arg2 error:(id)arg3;
- (id)initWithEntry:(id)arg1 archiveReadChannel:(id)arg2;
- (bool)processData:(id)arg1 CRC:(unsigned int*)arg2 isDone:(bool)arg3 queue:(id)arg4 handler:(id /* block */)arg5;
- (bool)readFileHeaderFromData:(id)arg1 headerLength:(unsigned long long*)arg2;
- (void)readWithHeaderLength:(unsigned long long)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (void)readWithQueue:(id)arg1 handler:(id /* block */)arg2;

@end
