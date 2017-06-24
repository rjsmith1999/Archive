/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITouchObservation : NSObject {
    unsigned long long  _observedTouchCount;
    unsigned long long  _observedTouchOffset;
    UITouch * _observedTouches;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateTouchesWithBlock:(id /* block */)arg1;
- (void)observeTouch:(id)arg1;
- (void)reset;
- (unsigned long long)touchCount;

@end
