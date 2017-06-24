/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EditScript.framework/EditScript
 */

@interface ESEditScriptDataArray : NSObject <ESEditScriptData> {
    NSString * _cachedStringValue;
    NSArray * _data;
}

@property (nonatomic, retain) NSString *cachedStringValue;
@property (nonatomic, retain) NSArray *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)EditScriptDataWithArray:(id)arg1;
+ (id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2;

- (void).cxx_destruct;
- (id)cachedStringValue;
- (long long)characterIndexForItem:(long long)arg1;
- (id)data;
- (id)description;
- (long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(bool)arg2 fallsOnWordBoundary:(bool*)arg3;
- (id)initWithArray:(id)arg1;
- (id)initWithString:(id)arg1 chunkSize:(long long)arg2;
- (long long)length;
- (long long)lengthOfItem:(long long)arg1;
- (void)setCachedStringValue:(id)arg1;
- (void)setData:(id)arg1;
- (id)stringAtIndex:(long long)arg1;
- (id)stringValue;

@end
