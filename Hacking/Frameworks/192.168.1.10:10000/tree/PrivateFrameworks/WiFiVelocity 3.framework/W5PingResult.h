/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5PingResult : NSObject <NSCopying, NSSecureCoding> {
    NSString * _address;
    double  _avg;
    long long  _count;
    NSString * _interfaceName;
    double  _max;
    double  _min;
    double  _packetLoss;
    double  _stddev;
    double  _timestamp;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic) double avg;
@property (nonatomic) long long count;
@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic) double max;
@property (nonatomic) double min;
@property (nonatomic) double packetLoss;
@property (nonatomic) double stddev;
@property (nonatomic) double timestamp;

+ (bool)supportsSecureCoding;

- (id)address;
- (double)avg;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)interfaceName;
- (double)max;
- (double)min;
- (double)packetLoss;
- (void)setAddress:(id)arg1;
- (void)setAvg:(double)arg1;
- (void)setCount:(long long)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setMax:(double)arg1;
- (void)setMin:(double)arg1;
- (void)setPacketLoss:(double)arg1;
- (void)setStddev:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (double)stddev;
- (double)timestamp;

@end
