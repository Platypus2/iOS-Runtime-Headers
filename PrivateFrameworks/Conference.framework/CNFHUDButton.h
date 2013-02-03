/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class UILabel, CNFHUDButtonContentView, UIImageView;

@interface CNFHUDButton : UIButton {
    CNFHUDButtonContentView *_contentView;
    float _contentViewHeightOffset;
    float _contentViewOriginXOffset;
    float _contentViewWidthOffset;
    BOOL _resizesToFit;
}

@property float contentViewHeightOffset;
@property float contentViewOriginXOffset;
@property float contentViewWidthOffset;
@property(retain,readonly) UIImageView * imageView;
@property BOOL resizesToFit;
@property(retain,readonly) UILabel * titleLabel;

- (float)contentViewHeightOffset;
- (float)contentViewOriginXOffset;
- (float)contentViewWidthOffset;
- (void)dealloc;
- (id)imageView;
- (id)initWithTitle:(id)arg1 image:(id)arg2 tag:(int)arg3;
- (void)layoutSubviews;
- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)resizesToFit;
- (void)setContentViewHeightOffset:(float)arg1;
- (void)setContentViewOriginXOffset:(float)arg1;
- (void)setContentViewWidthOffset:(float)arg1;
- (void)setOrientation:(int)arg1;
- (void)setResizesToFit:(BOOL)arg1;
- (void)setTitle:(id)arg1 image:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)titleLabel;

@end
