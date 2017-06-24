/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFamilyCircle : NSObject <NSSecureCoding> {
    NSDictionary * __serverResponse;
    FAFamilyCloudKitProperties * _cloudKitProperties;
    NSArray * _members;
}

@property (readonly) NSDictionary *_serverResponse;
@property (readonly) FAFamilyCloudKitProperties *cloudKitProperties;
@property (readonly) NSArray *members;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_serverResponse;
- (id)cloudKitProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerResponse:(id)arg1;
- (id)members;

@end
