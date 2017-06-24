/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNMetalContext : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
}

@property (retain) <MTLCommandQueue> *commandQueue;
@property (retain) <MTLDevice> *device;

+ (bool)supportGPU;
+ (bool)supportNeon;

- (void).cxx_destruct;
- (id)commandQueue;
- (id)device;
- (id)initNewContext;
- (void)setCommandQueue:(id)arg1;
- (void)setDevice:(id)arg1;

@end
