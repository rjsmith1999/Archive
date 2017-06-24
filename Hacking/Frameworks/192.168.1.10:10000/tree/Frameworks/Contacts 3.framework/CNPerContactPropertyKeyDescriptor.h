/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPerContactPropertyKeyDescriptor : NSObject <CNKeyDescriptor, CNKeyDescriptor_Private> {
    NSMutableDictionary * _propertiesByIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *propertiesByIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)arg1;
- (id)_cn_requiredKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)propertiesByIdentifier;
- (void)setKeysToFetch:(id)arg1 forContactIdentifier:(id)arg2;
- (void)setPropertiesByIdentifier:(id)arg1;

@end
