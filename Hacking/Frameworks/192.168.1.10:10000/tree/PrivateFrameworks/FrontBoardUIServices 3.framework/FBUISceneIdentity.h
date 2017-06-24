/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
 */

@interface FBUISceneIdentity : NSObject <FBUISceneIdentity, NSCopying> {
    FBSDisplay * _display;
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) FBSDisplay *display;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *sceneIdentifier;
@property (readonly) Class superclass;

+ (id)identityWithIdentifier:(id)arg1 display:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)display;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 display:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIdentity:(id)arg1;
- (bool)isValid;
- (id)sceneIdentifier;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
