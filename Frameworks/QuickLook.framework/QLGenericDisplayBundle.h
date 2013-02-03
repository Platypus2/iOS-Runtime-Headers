/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class UIImageView, UILabel, UIView, NSError, UITextView;

@interface QLGenericDisplayBundle : QLDisplayBundle {
    UIView *_containerView;
    NSError *_error;
    UIImageView *_iconView;
    UITextView *_subtitleLabel;
    UILabel *_titleLabel;
}

@property(retain) NSError * error;

- (void)_loadPreviewItemInfos;
- (void)_relayout;
- (void)_showLoadingProgress:(BOOL)arg1;
- (id)error;
- (void)loadView;
- (void)loadWithHints:(id)arg1;
- (void)prepareForSlidingIn:(id)arg1;
- (void)setError:(id)arg1;

@end
