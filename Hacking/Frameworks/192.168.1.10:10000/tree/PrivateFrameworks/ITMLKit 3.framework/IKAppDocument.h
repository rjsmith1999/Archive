/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppDocument : NSObject <IKJSDOMDocumentAppBridge, IKStyleMediaQueryEvaluator> {
    IKAppContext * _appContext;
    <IKAppDocumentDelegate> * _delegate;
    NSError * _error;
    IKHeadElement * _headElement;
    NSString * _identifier;
    double  _impressionThreshold;
    NSMutableDictionary * _impressions;
    IKDOMDocument * _jsDocument;
    IKViewElement * _navigationBarElement;
    IKJSObject * _owner;
    NSHashTable * _styleChangeObservers;
    IKViewElementStyleFactory * _styleFactory;
    bool  _subtreeUpdated;
    IKViewElement * _templateElement;
    IKViewElement * _toolbarElement;
    bool  _updated;
}

@property (readonly) IKAppContext *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IKAppDocumentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (retain) IKHeadElement *headElement;
@property (retain) NSString *identifier;
@property (nonatomic) double impressionThreshold;
@property (nonatomic, retain) NSMutableDictionary *impressions;
@property (nonatomic, readonly) IKDOMDocument *jsDocument;
@property (retain) IKViewElement *navigationBarElement;
@property (nonatomic, readonly) IKJSNavigationDocument *navigationDocument;
@property (nonatomic, readonly) IKJSObject *owner;
@property (nonatomic, retain) NSHashTable *styleChangeObservers;
@property (nonatomic, retain) IKViewElementStyleFactory *styleFactory;
@property (getter=isSubtreeUpdated) bool subtreeUpdated;
@property (readonly) Class superclass;
@property (retain) IKViewElement *templateElement;
@property (retain) IKViewElement *toolbarElement;
@property (getter=isUpdated, nonatomic) bool updated;

- (void).cxx_destruct;
- (void)_addStyleChangeObserver:(id)arg1;
- (bool)_clearUpdatesForElement:(id)arg1;
- (void)_removeStyleChangeObserver:(id)arg1;
- (void)_setViewElementStylesDirty;
- (void)_updateWithXML:(id)arg1;
- (id)appContext;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)error;
- (bool)evaluateStyleMediaQueryList:(id)arg1;
- (id)headElement;
- (id)identifier;
- (double)impressionThreshold;
- (id)impressions;
- (id)impressionsMatching:(id)arg1 reset:(bool)arg2;
- (id)initWithAppContext:(id)arg1 document:(id)arg2 owner:(id)arg3;
- (bool)isSubtreeUpdated;
- (bool)isUpdated;
- (id)jsDocument;
- (id)navigationBarElement;
- (id)navigationDocument;
- (void)onAppear;
- (void)onDisappear;
- (void)onImpressionsChange:(id)arg1;
- (void)onLoad;
- (void)onNeedsUpdateWithCompletion:(id /* block */)arg1;
- (void)onUnload;
- (void)onUpdate;
- (void)onViewAttributesChangeWithArguments:(id)arg1 completion:(id /* block */)arg2;
- (id)owner;
- (void)recordImpressionsForViewElements:(id)arg1;
- (id)recordedImpressions;
- (id)recordedImpressions:(bool)arg1;
- (id)retrieveJSElementForViewElement:(id)arg1 jsContext:(id)arg2;
- (void)runTestWithName:(id)arg1 options:(id)arg2;
- (void)scrollToTop;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHeadElement:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImpressionThreshold:(double)arg1;
- (void)setImpressions:(id)arg1;
- (void)setNavigationBarElement:(id)arg1;
- (void)setNeedsUpdateForDocument:(id)arg1;
- (void)setStyleChangeObservers:(id)arg1;
- (void)setStyleFactory:(id)arg1;
- (void)setSubtreeUpdated:(bool)arg1;
- (void)setTemplateElement:(id)arg1;
- (void)setToolbarElement:(id)arg1;
- (void)setUpdated:(bool)arg1;
- (void)setViewElementStylesDirty;
- (id)snapshotImpressions;
- (id)styleChangeObservers;
- (id)styleFactory;
- (id)templateElement;
- (id)toolbarElement;
- (void)updateForDocument:(id)arg1;

@end