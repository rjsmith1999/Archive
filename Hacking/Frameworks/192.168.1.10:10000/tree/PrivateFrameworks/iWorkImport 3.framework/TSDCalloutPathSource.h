/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCalloutPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource> {
    double  mCornerRadius;
    bool  mIsTailAtCenter;
    struct CGSize { 
        double width; 
        double height; 
    }  mNaturalSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  mTailPosition;
    double  mTailSize;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) bool isTailAtCenter;
@property (nonatomic, readonly) double maxCornerRadius;
@property (nonatomic, readonly) double maxTailSize;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } tailCenter;
@property (nonatomic) struct CGPoint { double x1; double x2; } tailKnobPosition;
@property (nonatomic) double tailSize;
@property (nonatomic) struct CGPoint { double x1; double x2; } tailSizeKnobPosition;

+ (id)calloutWithCornerRadius:(double)arg1 tailPosition:(struct CGPoint { double x1; double x2; })arg2 tailSize:(double)arg3 naturalSize:(struct CGSize { double x1; double x2; })arg4;
+ (id)quoteBubbleWithTailPosition:(struct CGPoint { double x1; double x2; })arg1 tailSize:(double)arg2 naturalSize:(struct CGSize { double x1; double x2; })arg3;

- (id)bezierPathWithoutFlips;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (id)description;
- (struct CGPoint { double x1; double x2; })getControlKnobPosition:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1;
- (id)initWithCornerRadius:(double)arg1 tailPosition:(struct CGPoint { double x1; double x2; })arg2 tailSize:(double)arg3 naturalSize:(struct CGSize { double x1; double x2; })arg4 tailAtCenter:(bool)arg5;
- (id)interiorWrapPath;
- (bool)isCircular;
- (bool)isEqual:(id)arg1;
- (bool)isOval;
- (bool)isRectangular;
- (bool)isTailAtCenter;
- (double)maxCornerRadius;
- (double)maxTailSize;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (struct CGSize { double x1; double x2; })naturalSize;
- (unsigned long long)numberOfControlKnobs;
- (struct CGPoint { double x1; double x2; })p_adjustedCenterForPath:(id)arg1;
- (id)p_basePath;
- (id)p_buildPath;
- (struct CGPoint { double x1; double x2; })p_getControlKnobPointForRoundedRect;
- (void)p_getTailPath:(id)arg1 center:(struct CGPoint { double x1; double x2; }*)arg2 tailSize:(double*)arg3 intersections:(struct CGPoint { double x1; double x2; })arg4;
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint { double x1; double x2; })arg1;
- (void)p_setCornerRadius:(double)arg1;
- (void)p_setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)p_setTailAtCenter:(bool)arg1;
- (void)p_setTailPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)p_setTailSize:(double)arg1;
- (struct CGPoint { double x1; double x2; })p_tailPosition;
- (void)saveToArchive:(struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct PointPathSourceArchive {} *x5; struct ScalarPathSourceArchive {} *x6; struct BezierPathSourceArchive {} *x7; struct CalloutPathSourceArchive {} *x8; struct ConnectionLinePathSourceArchive {} *x9; struct EditableBezierPathSourceArchive {} *x10; bool x11; bool x12; }*)arg1;
- (void)scaleToNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTailKnobPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTailSize:(double)arg1;
- (void)setTailSizeKnobPosition:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })tailCenter;
- (struct CGPoint { double x1; double x2; })tailKnobPosition;
- (double)tailSize;
- (struct CGPoint { double x1; double x2; })tailSizeKnobPosition;
- (id)valueForSetSelector:(SEL)arg1;

@end
