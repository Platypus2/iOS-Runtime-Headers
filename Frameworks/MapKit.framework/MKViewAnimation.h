/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMutableArray, MKViewAnimationState;

@interface MKViewAnimation : NSObject {
    MKViewAnimationState *_currentState;
    NSMutableArray *_stack;
}

+ (id)sharedInstance;

- (BOOL)areAnimationsEnabled;
- (void)dealloc;
- (void)disableAnimation;
- (void)enableAnimation;
- (id)init;
- (BOOL)isInAnimationBlock;
- (void)popAnimationState;
- (void)pushAnimationState:(id)arg1 withContext:(void*)arg2;
- (void)setAnimationAttributes:(id)arg1;
- (void)setAnimationDelegate:(id)arg1;
- (void)setAnimationDidStopSelector:(SEL)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationStartTime:(double)arg1;
- (void)setAnimationsEnabled:(BOOL)arg1;

@end
