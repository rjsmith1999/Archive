/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartRep : TSCHChartRep {
    bool  _shouldDisableMultiDataControls;
    bool  mAnimatedLayersNeedUpdate;
    TSCHMultiDataChartRepElementIndex * mCurrentRepElementIndex;
    CALayer * mDataSetNameLayer;
    unsigned long long  mElementLayersMultiDataSetIndex;
    CALayer * mElementsContainerLayer;
    int  mGridDirection;
    NSMutableDictionary * mIndexedElements;
    bool  mIsAnimatingForBuilds;
    NSMutableDictionary * mLayerIdToLayerMap;
    NSMutableDictionary * mPreviousOutsideBodyBounds;
    NSSet * mReferenceLineLabelsSearchSelectionsToRender;
    CALayer * mReferenceLinesContainerLayer;
    NSSet * mReferenceLinesToRender;
    bool  mRenderingBackgroundLayer;
    bool  mRenderingDataSetNameLayer;
    bool  mRenderingElementLabelsLayer;
    bool  mRenderingElementShapeLayer;
    bool  mRenderingReferenceLineLayer;
    CALayer * mRootLayer;
    bool  mShouldAnimateLabelsQuickly;
}

@property (nonatomic, readonly) bool shouldDisableMultiDataControls;

- (void)dealloc;
- (void)didEndZooming;
- (bool)frameInUnscaledCanvasNeedsPaddingForShadows;
- (id)imageFromFill:(id)arg1 forResolutionWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toRepElementTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 skipIntegral:(bool)arg4 returningFillFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)isHorizontalChart;
- (id)layerIdToLayerMap;
- (bool)needsAnimationForAnimationInfo:(id)arg1;
- (id)p_chartModel;
- (id)p_elementLayers;
- (id)previousOutsideBodyBounds;
- (bool)shouldDisableMultiDataControls;
- (bool)shouldUseLegendLayerForLayerBasedRep;
- (void)willBeginZooming;

@end
