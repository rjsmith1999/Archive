/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface OZFxPlugHostPrivateAPI : NSObject <FxHostPrivateAPI, PROAPIObject> {
    struct OZFxPlugSharedBase { int (**x1)(); void *x2; id x3; void *x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*x12; unsigned char x13; unsigned short x14; void*x15; const int x16; in void*x17; void*x18; struct __CFString {} *x19; } * _plugin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (bool)giveEffectUIFocus;
- (id)initWithPlugin:(struct OZFxPlugSharedBase { int (**x1)(); void *x2; id x3; void *x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*x12; unsigned char x13; unsigned short x14; void*x15; const int x16; in void*x17; void*x18; struct __CFString {} *x19; }*)arg1;
- (bool)navigateToTime:(union { double x1; struct { /* ? */ } *x2; })arg1;

@end
