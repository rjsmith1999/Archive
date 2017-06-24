/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHElementBuilder : NSObject

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRectForElementsDrawnByRenderState:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })elementsRectForElementsDrawnByRenderState:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_chartLayoutSpaceClipRectUnionForElementsDrawnByRenderState:(id)arg1 returningItemCount:(unsigned long long*)arg2;
+ (double)referenceLineLabelRightAxisPadding;
+ (double)referenceLineLabelTopAxisPadding;

- (unsigned long long)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(struct CGRect {}**)arg4 outNewClipRects:(struct CGRect {}**)arg5 outNewElementPaths:(const struct CGPath {}***)arg6 outSelectionKnobLocations:(id*)arg7;
- (unsigned long long)countOfErrorBarsInSeries:(id)arg1 forGroups:(id)arg2 forAxisID:(id)arg3 forBodyLayout:(id)arg4 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 outNewErrorBarDescriptors:(struct { /* ? */ }**)arg6;
- (unsigned long long)countOfGridLinesInBody:(id)arg1 forAxis:(id)arg2 minor:(bool)arg3 outNewLineDescriptors:(struct { /* ? */ }**)arg4;
- (unsigned long long)countOfHitCheckRegionsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementPaths:(const struct CGPath {}***)arg4 outSelectionKnobLocations:(id*)arg5;
- (unsigned long long)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(struct CGAffineTransform {}**)arg4 outNewElementSizes:(struct CGSize {}**)arg5 outNewClipRect:(struct CGRect {}**)arg6 outNewStrings:(id*)arg7;
- (unsigned long long)countOfReferenceLineLabelsForAxisID:(id)arg1 model:(id)arg2 forRefLineLabelsLayout:(id)arg3 outNewTransforms:(struct CGAffineTransform {}**)arg4 outNewElementSizes:(struct CGSize {}**)arg5 outNewClipRects:(struct CGRect {}**)arg6 outNewParagraphStyles:(id*)arg7 outNewStrings:(id*)arg8 outNewLabelTypes:(unsigned long long**)arg9 outReferenceLines:(id*)arg10 includeOutsideChartBodyBounds:(bool)arg11 outOutsideChartBodyBounds:(bool**)arg12;
- (unsigned long long)countOfReferenceLineLabelsForReferenceLine:(id)arg1 forRefLineLabelsLayout:(id)arg2 outNewTransforms:(struct CGAffineTransform {}**)arg3 outNewElementSizes:(struct CGSize {}**)arg4 outNewClipRects:(struct CGRect {}**)arg5 outNewParagraphStyles:(id*)arg6 outNewStrings:(id*)arg7 outNewLabelTypes:(unsigned long long**)arg8 includeOutsideChartBodyBounds:(bool)arg9 outOutsideChartBodyBounds:(bool**)arg10;
- (unsigned long long)countOfReferenceLinesForAxisID:(id)arg1 model:(id)arg2 forBodyLayout:(id)arg3 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 outNewClipRects:(struct CGRect {}**)arg5 outNewLineDescriptors:(struct { /* ? */ }**)arg6 outReferenceLines:(id*)arg7 includeOutsideChartBodyBounds:(bool)arg8 outOutsideChartBodyBounds:(bool**)arg9;
- (bool)hasAxisLineInBody:(id)arg1 forAxis:(id)arg2 outTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg3 outLine:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (long long)hitCheckPoint:(struct CGPoint { double x1; double x2; })arg1 inSeries:(id)arg2 withBodyLayout:(id)arg3;
- (struct CGPoint { double x1; double x2; })labelPointForPosition:(unsigned int)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 stringSize:(struct CGSize { double x1; double x2; })arg3;
- (unsigned long long)p_countOfReferenceLineLabelsForReferenceLine:(id)arg1 forRefLineLabelsLayout:(id)arg2 substringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 outNewTransforms:(struct CGAffineTransform {}**)arg4 outNewElementSizes:(struct CGSize {}**)arg5 outNewClipRects:(struct CGRect {}**)arg6 outNewParagraphStyles:(id*)arg7 outNewStrings:(id*)arg8 outNewLabelTypes:(unsigned long long**)arg9 includeOutsideChartBodyBounds:(bool)arg10 outOutsideChartBodyBounds:(bool**)arg11;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })p_transformForRenderingTrendlineTextNotR2:(bool)arg1 forSeries:(id)arg2 forAreaLayout:(id)arg3 outElementSize:(struct CGSize { double x1; double x2; }*)arg4 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 outParagraphStyle:(id*)arg6 outString:(const struct __CFAttributedString {}**)arg7;
- (void)p_trendlineInfoForSeries:(id)arg1 forBodyLayout:(id)arg2 outVertical:(bool*)arg3 outOffsetInBody:(double*)arg4;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingLabelForReferenceLine:(id)arg1 ofType:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 inLayoutItem:(id)arg4 outElementSize:(struct CGSize { double x1; double x2; }*)arg5 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg6;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingLabelInBody:(id)arg1 forSeries:(unsigned long long)arg2 forGroup:(unsigned long long)arg3 outElementSize:(struct CGSize { double x1; double x2; }*)arg4 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingR2TextForSeries:(id)arg1 forAreaLayout:(id)arg2 outElementSize:(struct CGSize { double x1; double x2; }*)arg3 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 outParagraphStyle:(id*)arg5 outString:(id*)arg6;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingTrendlineTextForSeries:(id)arg1 forAreaLayout:(id)arg2 outElementSize:(struct CGSize { double x1; double x2; }*)arg3 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 outParagraphStyle:(id*)arg5 outNewString:(const struct __CFAttributedString {}**)arg6;
- (void)trendlineElementForSeries:(id)arg1 forBodyLayout:(id)arg2 outElementBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 outElementClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 outElementPath:(id*)arg5;

@end
