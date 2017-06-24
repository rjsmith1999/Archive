/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISortDescriptorViewElement : SKUIViewElement {
    bool  _ascending;
    NSString * _property;
}

@property (getter=isAscending, nonatomic, readonly) bool ascending;
@property (nonatomic, readonly, copy) NSString *property;

+ (bool)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isAscending;
- (id)property;

@end
