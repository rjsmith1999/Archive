/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPStockComplicationData : SPComplicationData <NSSecureCoding> {
    unsigned long long  _changeDirection;
    NSString * _changeInPercentText;
    NSString * _changeInPointsText;
    NSString * _changeText;
    NSString * _marketCapText;
    NSString * _priceText;
    NSString * _tickerSymbolText;
}

@property (nonatomic) unsigned long long changeDirection;
@property (nonatomic, retain) NSString *changeInPercentText;
@property (nonatomic, retain) NSString *changeInPointsText;
@property (nonatomic, retain) NSString *changeText;
@property (nonatomic, retain) NSString *marketCapText;
@property (nonatomic, retain) NSString *priceText;
@property (nonatomic, retain) NSString *tickerSymbolText;

// Image: /System/Library/Frameworks/WatchKit.framework/WatchKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)changeDirection;
- (id)changeInPercentText;
- (id)changeInPointsText;
- (id)changeText;
- (id)initWithCoder:(id)arg1;
- (id)marketCapText;
- (id)priceText;
- (void)setChangeDirection:(unsigned long long)arg1;
- (void)setChangeInPercentText:(id)arg1;
- (void)setChangeInPointsText:(id)arg1;
- (void)setChangeText:(id)arg1;
- (void)setMarketCapText:(id)arg1;
- (void)setPriceText:(id)arg1;
- (void)setTickerSymbolText:(id)arg1;
- (id)tickerSymbolText;

// Image: /System/Library/AccessibilityBundles/WatchKit.axbundle/WatchKit

+ (Class)safeCategoryBaseClass;

- (void)encodeWithCoder:(id)arg1;

@end
