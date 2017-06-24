/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface NLArcMaskLayer : CAShapeLayer {
    double  _arcStart;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    double  _radius;
}

@property (nonatomic) double arcStart;
@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic) double radius;

+ (bool)needsDisplayForKey:(id)arg1;

- (void)_regeneratePath;
- (id)actionForKey:(id)arg1;
- (void)animatePathCenter:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 lineWidth:(double)arg3 duration:(double)arg4;
- (double)arcStart;
- (struct CGPoint { double x1; double x2; })center;
- (id)init;
- (double)radius;
- (void)setArcStart:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRadius:(double)arg1;

@end