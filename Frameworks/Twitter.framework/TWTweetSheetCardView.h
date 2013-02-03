/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Twitter.framework/Twitter
 */

@class UIImageView, UIView;

@interface TWTweetSheetCardView : UIView {
    UIImageView *_bottomGradient;
    UIImageView *_chrome;
    UIView *_contentView;
    BOOL _hidesBottom;
    UIView *_paperBG;
    UIView *_paperTexture;
    UIImageView *_topGradient;
}

@property(readonly) UIView * contentView;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cardRectForOrientation:(int)arg1 options:(int)arg2 parentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 keyboardFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;

- (void)awakeFromNib;
- (id)contentView;
- (void)dealloc;
- (id)imageWithName:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })keyboardFrameForInterfaceOrientation:(int)arg1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })paperBounds;
- (void)setHidesBottom:(BOOL)arg1;
- (void)setupSubviews;
- (void)updateCardRectForOrientation:(int)arg1 options:(int)arg2;

@end
