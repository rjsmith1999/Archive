/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBubbleView : UIView {
    bool  _animating;
    double  _animationAngle;
    double  _animationRadiansPerSecond;
    bool  _animationReversed;
    double  _animationScale;
    long long  _bubbleType;
    UIImageView * _highlightView;
    UIImageView * _imageView;
    double  _moveAnimationAngle;
    double  _moveAnimationRadiansPerSecond;
    double  _moveAnimationScale;
    long long  _numFaces;
    long long  _numVertices;
    double  _touchAnimationAngle;
    bool  _touchAnimationCanEnd;
    double  _touchAnimationElapsed;
    bool  _touchAnimationRunning;
}

@property (nonatomic) bool animating;
@property (nonatomic) double animationAngle;
@property (nonatomic) double animationRadiansPerSecond;
@property (nonatomic) long long bubbleType;
@property (nonatomic, retain) UIImageView *highlightView;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) double moveAnimationAngle;
@property (nonatomic) double moveAnimationRadiansPerSecond;
@property (nonatomic) double moveAnimationScale;
@property (nonatomic) long long numFaces;
@property (nonatomic) long long numVertices;
@property (nonatomic) double touchAnimationAngle;
@property (nonatomic) bool touchAnimationCanEnd;
@property (nonatomic) double touchAnimationElapsed;
@property (nonatomic) bool touchAnimationRunning;

- (bool)animating;
- (double)animationAngle;
- (double)animationRadiansPerSecond;
- (double)animationScaleForCurrentZ;
- (void)applyAnimationToVertices:(struct CAMeshVertex { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CAPoint3D { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; }*)arg1;
- (long long)bubbleType;
- (void)chooseMoveAnimation;
- (void)choosePointAnimations;
- (void)dealloc;
- (id)highlightView;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)moveAnimationAngle;
- (double)moveAnimationRadiansPerSecond;
- (double)moveAnimationScale;
- (long long)numFaces;
- (long long)numVertices;
- (struct CGPoint { double x1; double x2; })offsetForVertexAtIndex:(long long)arg1;
- (bool)randomBOOL;
- (float)randomFloatBetweenMin:(float)arg1 andMax:(float)arg2;
- (void)setAnimating:(bool)arg1;
- (void)setAnimationAngle:(double)arg1;
- (void)setAnimationRadiansPerSecond:(double)arg1;
- (void)setAnimationStateBasedOnBubble:(id)arg1;
- (void)setBubbleType:(long long)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setMoveAnimationAngle:(double)arg1;
- (void)setMoveAnimationRadiansPerSecond:(double)arg1;
- (void)setMoveAnimationScale:(double)arg1;
- (void)setNumFaces:(long long)arg1;
- (void)setNumVertices:(long long)arg1;
- (void)setTouchAnimationAngle:(double)arg1;
- (void)setTouchAnimationCanEnd:(bool)arg1;
- (void)setTouchAnimationElapsed:(double)arg1;
- (void)setTouchAnimationRunning:(bool)arg1;
- (void)setupVerticesAndFacesAnimated:(bool)arg1;
- (double)touchAnimationAngle;
- (bool)touchAnimationCanEnd;
- (double)touchAnimationElapsed;
- (bool)touchAnimationRunning;
- (void)touchBegan;
- (void)touchEnded;
- (void)update:(double)arg1;

@end
