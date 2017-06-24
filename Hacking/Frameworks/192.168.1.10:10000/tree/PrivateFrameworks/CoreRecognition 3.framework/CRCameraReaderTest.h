/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRCameraReaderTest : NSObject

+ (id)findAnnotatedTextDetectObjects:(id)arg1 inImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg2 withProperty:(id)arg3;
+ (id)findNewTextDetectPlistObjects:(id)arg1 inImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg2 andTextImage:(id)arg3 withProperty:(id)arg4;
+ (id)findObjectsInTest:(id)arg1 inImage:(id)arg2 properties:(id)arg3;
+ (id)findTextDetectObjects:(id)arg1 inImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg2 andTextImage:(id)arg3 withProperty:(id)arg4;
+ (void)rotateCIImage:(id*)arg1 byDegree:(float)arg2;
+ (id)targetRectsForImageAnalysis:(id)arg1 cardNumberRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 cardholderRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 expirationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 foundNumberRect:(bool*)arg5 foundNameRect:(bool*)arg6 foundDateRect:(bool*)arg7 textLine:(bool)arg8;
+ (void)targetRectsGivenForImageAnalysis:(id)arg1 cardNumberRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 cardholderRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 expirationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 in:(id)arg5 foundNumberRect:(bool*)arg6 foundNameRect:(bool*)arg7 foundDateRect:(bool*)arg8 textLine:(bool)arg9;

@end
