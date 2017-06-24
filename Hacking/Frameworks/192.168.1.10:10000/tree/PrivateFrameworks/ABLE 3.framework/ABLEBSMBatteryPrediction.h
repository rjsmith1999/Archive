/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
 */

@interface ABLEBSMBatteryPrediction : NSObject <NSCoding> {
    double  _batteryLevel;
    double  occurrenceBatteryLevel;
    NSDate * occurrenceDate;
    NSDate * predictionDate;
}

@property double batteryLevel;
@property double occurrenceBatteryLevel;
@property (retain) NSDate *occurrenceDate;
@property (retain) NSDate *predictionDate;

- (void).cxx_destruct;
- (double)batteryLevel;
- (void)encodeWithCoder:(id)arg1;
- (id)initAtDate:(id)arg1 atLevel:(double)arg2 forDate:(id)arg3 forLevel:(double)arg4;
- (id)initAtLevel:(double)arg1 forDate:(id)arg2 forLevel:(double)arg3;
- (void)initImplAtDate:(id)arg1 atLevel:(double)arg2 forDate:(id)arg3 forLevel:(double)arg4;
- (id)initWithCoder:(id)arg1;
- (double)occurrenceBatteryLevel;
- (id)occurrenceDate;
- (id)predictionDate;
- (void)setBatteryLevel:(double)arg1;
- (void)setOccurrenceBatteryLevel:(double)arg1;
- (void)setOccurrenceDate:(id)arg1;
- (void)setPredictionDate:(id)arg1;

@end
