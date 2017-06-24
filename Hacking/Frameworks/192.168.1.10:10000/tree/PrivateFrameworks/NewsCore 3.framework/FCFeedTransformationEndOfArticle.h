/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedTransformationEndOfArticle : NSObject <FCFeedTransforming> {
    unsigned long long  _maxiumInaccessibleHeadlineCount;
    unsigned long long  _minimumResultHeadlineCount;
    double  _paidHeadlineRatio;
    FCPurchaseController * _purchaseController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxiumInaccessibleHeadlineCount;
@property (nonatomic) unsigned long long minimumResultHeadlineCount;
@property (nonatomic) double paidHeadlineRatio;
@property (nonatomic, retain) FCPurchaseController *purchaseController;
@property (readonly) Class superclass;

+ (id)transformationWithContext:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)maxiumInaccessibleHeadlineCount;
- (unsigned long long)minimumResultHeadlineCount;
- (double)paidHeadlineRatio;
- (id)purchaseController;
- (void)setMaxiumInaccessibleHeadlineCount:(unsigned long long)arg1;
- (void)setMinimumResultHeadlineCount:(unsigned long long)arg1;
- (void)setPaidHeadlineRatio:(double)arg1;
- (void)setPurchaseController:(id)arg1;
- (id)transformFeedItems:(id)arg1;
- (id)transformHeadlines:(id)arg1;

@end
