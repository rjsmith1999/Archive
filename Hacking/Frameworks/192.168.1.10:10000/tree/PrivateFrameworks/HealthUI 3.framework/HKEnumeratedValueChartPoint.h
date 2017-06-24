/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKEnumeratedValueChartPoint : NSObject <HKChartPoint> {
    NSArray * _indices;
    id  _userInfo;
    NSDate * _xValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *indices;
@property (readonly) Class superclass;
@property (nonatomic, retain) id userInfo;
@property (nonatomic) NSDate *xValue;

- (void).cxx_destruct;
- (id)allYValues;
- (id)indices;
- (id)maxXValue;
- (id)maxYValue;
- (id)minXValue;
- (id)minYValue;
- (void)setIndices:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setXValue:(id)arg1;
- (id)userInfo;
- (id)xValue;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
