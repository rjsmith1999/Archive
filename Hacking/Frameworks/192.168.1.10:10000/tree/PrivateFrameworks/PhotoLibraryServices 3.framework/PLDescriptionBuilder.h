/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDescriptionBuilder : NSObject {
    NSMutableString * _description;
    NSObject * _object;
    NSString * _separator;
    _PLDescriptionStyle * _style;
}

@property (nonatomic, copy) NSString *separator;

+ (id)descriptionBuilderWithObject:(id)arg1;
+ (id)plainDescriptionBuilder;
+ (id)plainMultiLineDescriptionBuilder;

- (void)appendName:(id)arg1 boolValue:(bool)arg2;
- (void)appendName:(id)arg1 integerValue:(long long)arg2;
- (void)appendName:(id)arg1 object:(id)arg2;
- (id)build;
- (void)dealloc;
- (id)initWithObject:(id)arg1 style:(long long)arg2;
- (id)separator;
- (void)setSeparator:(id)arg1;

@end
