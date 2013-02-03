/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Twitter.framework/Twitter
 */

@class NSString, UIImageView, UILabel;

@interface TWAccountPickerView : UIView {
    UIImageView *_checkmark;
    UILabel *_label;
}

@property BOOL selected;
@property(retain) NSString * title;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })checkmarkFrame;
- (id)init;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })labelFrame;
- (void)layoutSubviews;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
