/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelNavRoadLabel : NSObject {
    unsigned char  _alignment;
    float  _desiredOffsetDistance;
    NSString * _displayGroup;
    unsigned int  _displayID;
    struct shared_ptr<md::NavLabel> { 
        struct NavLabel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _label;
    <VKLabelNavFeature> * _navFeature;
    int  _navLabelType;
}

@property (nonatomic) unsigned char alignment;
@property (nonatomic) float desiredOffsetDistance;
@property (nonatomic) unsigned int displayID;
@property (nonatomic, readonly) bool isJunctionLabel;
@property (nonatomic, readonly) bool isManeuverLabel;
@property (nonatomic, readonly) bool isRoadLabel;
@property (nonatomic, readonly) bool isShieldLabel;
@property (nonatomic, readonly) const struct shared_ptr<md::NavLabel> { struct NavLabel {} *x1; struct __shared_weak_count {} *x2; }*label;
@property (nonatomic) <VKLabelNavFeature> *navFeature;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned char)alignment;
- (void)dealloc;
- (id)description;
- (float)desiredOffsetDistance;
- (id)displayGroup;
- (unsigned int)displayID;
- (id)initWithNavFeature:(id)arg1 label:(const struct shared_ptr<md::NavLabel> { struct NavLabel {} *x1; struct __shared_weak_count {} *x2; }*)arg2 navLabelType:(int)arg3;
- (bool)isJunctionLabel;
- (bool)isManeuverLabel;
- (bool)isRoadLabel;
- (bool)isShieldLabel;
- (const struct shared_ptr<md::NavLabel> { struct NavLabel {} *x1; struct __shared_weak_count {} *x2; }*)label;
- (void)layoutWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg1;
- (id)navFeature;
- (void)setAlignment:(unsigned char)arg1;
- (void)setDesiredOffsetDistance:(float)arg1;
- (void)setDisplayID:(unsigned int)arg1;
- (void)setNavFeature:(id)arg1;

@end
