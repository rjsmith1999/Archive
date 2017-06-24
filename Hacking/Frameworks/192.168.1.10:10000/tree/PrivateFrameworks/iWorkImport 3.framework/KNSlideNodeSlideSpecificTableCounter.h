/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideNodeSlideSpecificTableCounter : NSObject {
    unsigned long long  _linkCount;
    NSUUID * _tableInfoUUID;
}

@property (nonatomic, readonly) unsigned long long linkCount;
@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic, retain) NSUUID *tableInfoUUID;

- (void)dealloc;
- (void)decrement;
- (id)description;
- (void)increment;
- (id)initWithTableInfoUUID:(id)arg1 andLinkCount:(unsigned long long)arg2;
- (unsigned long long)linkCount;
- (void)setTableInfoUUID:(id)arg1;
- (id)stringValue;
- (id)tableInfoUUID;

@end
