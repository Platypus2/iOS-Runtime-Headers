/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIActivityIndicatorView, UIColor, UILabel;

@interface SULoadingView : UIView {
    int _activityIndicatorStyle;
    UILabel *_label;
    UIActivityIndicatorView *_progressIndicator;
    unsigned int _style;
    UIColor *_textColor;
    UIColor *_textShadowColor;
}

@property int activityIndicatorStyle;
@property(retain) UIColor * textColor;
@property(retain) UIColor * textShadowColor;

- (void)_setupSubviews;
- (int)activityIndicatorStyle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)newProgressIndicator;
- (id)newTextLabel;
- (void)setActivityIndicatorStyle:(int)arg1;
- (void)setStyle:(unsigned int)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextShadowColor:(id)arg1;
- (void)sizeToFit;
- (id)textColor;
- (id)textShadowColor;

@end
