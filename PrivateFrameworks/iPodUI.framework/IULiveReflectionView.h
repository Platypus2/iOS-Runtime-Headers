/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIView, IUReplicatorView, CALayer, CAGradientLayer;

@interface IULiveReflectionView : UIView {
    UIView *_containerView;
    CAGradientLayer *_gradientLayer;
    float _reflectionDistance;
    IUReplicatorView *_replicatorView;
}

@property(readonly) CALayer * containerLayer;
@property struct CGColor { }* endColor;
@property(readonly) CAGradientLayer * gradientLayer;
@property float reflectionDistance;
@property(getter=isReflectionEnabled) BOOL reflectionEnabled;
@property(retain) IUReplicatorView * replicatorView;
@property struct CGColor { }* startColor;

+ (float)_containerHeightForReflectionDistance:(float)arg1 boundsHeight:(float)arg2;
+ (id)_gradientLocationsForReflectionDistance:(float)arg1;
+ (id)gradientAnimationToReflectionDistance:(float)arg1;

- (id)containerAnimationToReflectionDistance:(float)arg1;
- (id)containerLayer;
- (void)dealloc;
- (struct CGColor { }*)endColor;
- (id)gradientLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isReflectionEnabled;
- (void)layoutSubviews;
- (float)reflectionDistance;
- (id)replicatorView;
- (void)setEndColor:(struct CGColor { }*)arg1;
- (void)setReflectionDistance:(float)arg1;
- (void)setReflectionEnabled:(BOOL)arg1;
- (void)setReplicatorView:(id)arg1;
- (void)setStartColor:(struct CGColor { }*)arg1;
- (struct CGColor { }*)startColor;

@end
