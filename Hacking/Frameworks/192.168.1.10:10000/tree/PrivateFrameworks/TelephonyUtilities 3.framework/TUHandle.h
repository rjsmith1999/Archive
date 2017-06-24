/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUHandle : NSObject <NSCopying, NSSecureCoding> {
    long long  _type;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *value;

+ (id)handleWithDestinationID:(id)arg1;
+ (id)handleWithDictionaryRepresentation:(id)arg1;
+ (id)stringForType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)canonicalHandleForISOCountryCode:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationID:(id)arg1;
- (id)initWithType:(long long)arg1 value:(id)arg2;
- (bool)isCanonicallyEqualToHandle:(id)arg1 isoCountryCode:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHandle:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setValue:(id)arg1;
- (long long)type;
- (id)value;

@end
