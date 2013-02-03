/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class CAKeyframeAnimation, NSArray;

@interface PLCameraFocusView : UIView {
    double _animationStartTime;
    CAKeyframeAnimation *_boundsAnimation;
    CAKeyframeAnimation *_contentsAnimation;
    BOOL _fadingOut;
    NSArray *_images;
}

- (id)_createBoundsAnimation;
- (id)_createContentsAnimation;
- (void)_fadeOut;
- (void)_fadeOutDidFinish;
- (void)dealloc;
- (void)focusDidEnd;
- (id)init;
- (id)nameForDarkImage;
- (id)nameForLightImage;
- (void)scaleFrame:(float)arg1 reposition:(BOOL)arg2;
- (void)startAnimating;
- (void)stopAnimating;

@end
