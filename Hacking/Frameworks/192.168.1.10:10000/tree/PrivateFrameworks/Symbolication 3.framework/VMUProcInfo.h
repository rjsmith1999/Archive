/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUProcInfo : NSObject {
    NSArray * _arguments;
    NSArray * _envVars;
    NSString * _firstArg;
    NSString * _name;
    bool  _needTaskPortDealloc;
    int  _pid;
    int  _ppid;
    NSString * _procTableName;
    NSString * _realAppName;
    NSString * _requestedAppName;
    struct timeval { 
        long long tv_sec; 
        int tv_usec; 
    }  _startTime;
    unsigned int  _task;
}

+ (id)getProcessIds;
+ (bool)isProcessRunning:(int)arg1;
+ (int)processParentId:(int)arg1;

- (id)_infoFromCommandLine:(int)arg1;
- (id)arguments;
- (long long)compare:(id)arg1;
- (long long)compareByName:(id)arg1;
- (long long)compareByUserAppName:(id)arg1;
- (int)cpuType;
- (void)dealloc;
- (id)description;
- (id)envVars;
- (void)finalize;
- (id)firstArgument;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPid:(int)arg1;
- (id)initWithTask:(unsigned int)arg1;
- (bool)isApp;
- (bool)isCFM;
- (bool)isEqual:(id)arg1;
- (bool)isMachO;
- (bool)isNative;
- (bool)isRunning;
- (id)name;
- (int)pid;
- (int)ppid;
- (id)procTableName;
- (id)realAppName;
- (id)requestedAppName;
- (bool)signal:(int)arg1;
- (struct timeval { long long x1; int x2; })startTime;
- (unsigned int)task;
- (bool)terminate;
- (void)update;
- (id)userAppName;
- (id)valueForEnvVar:(id)arg1;

@end
