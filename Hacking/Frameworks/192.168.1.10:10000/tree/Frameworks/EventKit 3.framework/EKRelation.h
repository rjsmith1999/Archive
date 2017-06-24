/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRelation : NSObject {
    NSString * _entityName;
    id /* block */  _inversePropertyIsApplicable;
    NSSet * _inversePropertyNames;
    bool  _ownsRelated;
    bool  _toMany;
}

@property (nonatomic, copy) id /* block */ inversePropertyIsApplicable;
@property (nonatomic, readonly) NSSet *inversePropertyNames;
@property (nonatomic, readonly) bool ownsRelatedObject;
@property (nonatomic, readonly) bool toMany;

+ (id)relationWithEntityName:(id)arg1 toMany:(bool)arg2 inversePropertyNames:(id)arg3;
+ (id)relationWithEntityName:(id)arg1 toMany:(bool)arg2 inversePropertyNames:(id)arg3 ownsRelated:(bool)arg4;

- (void).cxx_destruct;
- (id)description;
- (id)initWithEntityName:(id)arg1 toMany:(bool)arg2 inversePropertyNames:(id)arg3 ownsRelated:(bool)arg4;
- (id /* block */)inversePropertyIsApplicable;
- (id)inversePropertyNames;
- (bool)ownsRelatedObject;
- (void)setInversePropertyIsApplicable:(id /* block */)arg1;
- (bool)shouldSetInverseProperty:(id)arg1 onObject:(id)arg2 forObject:(id)arg3;
- (bool)toMany;

@end
