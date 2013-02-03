/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, UIView;

@interface UIDropShadowView : UIView {
    UIView *_backgroundImage;
    UIView *_contentView;
    float _cornerRadius;
    NSDictionary *_preservedLayerValues;
}

@property UIView * contentView;
@property float cornerRadius;

- (BOOL)_wantsCornerSnapshotsForScrolling;
- (id)contentView;
- (float)cornerRadius;
- (void)dealloc;
- (void)didFinishRotation;
- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setCornerRadius:(float)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)updateShadowPath;
- (void)willBeginRotationWithOriginalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 newBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;

@end
