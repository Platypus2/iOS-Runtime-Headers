/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAtomBackgroundView : UIView {
    float _scalingFactor;
    BOOL _selected;
    int _style;
}

@property float scalingFactor;
@property BOOL selected;
@property int style;

- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (float)scalingFactor;
- (BOOL)selected;
- (void)setScalingFactor:(float)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (int)style;

@end
