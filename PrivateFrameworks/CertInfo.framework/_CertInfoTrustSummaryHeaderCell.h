/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class UILabel, UIImage, NSString, _CertInfoActionButton, _CertInfoGradientLabel;

@interface _CertInfoTrustSummaryHeaderCell : UITableViewCell {
    _CertInfoActionButton *_actionButton;
    UIImage *_certificateImage;
    UIImage *_notTrustedGradient;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    BOOL _trusted;
    _CertInfoGradientLabel *_trustedLabel;
}

@property(readonly) _CertInfoActionButton * actionButton;
@property(readonly) float rowHeight;
@property(copy) NSString * trustSubtitle;
@property(copy) NSString * trustTitle;
@property(getter=isTrusted) BOOL trusted;

- (void)_layoutSubviewsWithActionButtonSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_subtitleLabel;
- (id)_titleLabel;
- (id)_trustedLabel;
- (id)actionButton;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isTrusted;
- (void)layoutSubviews;
- (float)rowHeight;
- (void)setActionButtonTitle:(id)arg1 destructive:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setExpired:(BOOL)arg1;
- (void)setTrustSubtitle:(id)arg1;
- (void)setTrustTitle:(id)arg1;
- (void)setTrusted:(BOOL)arg1;
- (id)trustSubtitle;
- (id)trustTitle;

@end
