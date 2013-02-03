/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKLabel, GKGame, UIImageView, UIView, GKRatingHeaderControl, GKGameRecord, NSURL;

@interface GKGameDetailHeaderView : UIView <GKTableViewCellContents> {
    UIView *_dividerView;
    NSURL *_fontURL;
    GKGame *_game;
    GKGameRecord *_gameRecord;
    UIImageView *_iconView;
    GKRatingHeaderControl *_ratingControl;
    GKLabel *_subtitleView;
    GKLabel *_titleView;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } confirmationButtonRect;
@property(retain) UIView * dividerView;
@property(retain) NSURL * fontURL;
@property(retain) GKGame * game;
@property(retain) GKGameRecord * gameRecord;
@property(retain) UIImageView * iconView;
@property(retain) GKRatingHeaderControl * ratingControl;
@property(retain) GKLabel * subtitleView;
@property(retain) GKLabel * titleView;

+ (float)defaultRowHeight;

- (void)applyRating:(id)arg1;
- (void)dealloc;
- (id)dividerView;
- (id)fontURL;
- (id)game;
- (id)gameRecord;
- (id)iconView;
- (id)init;
- (void)layoutSubviews;
- (float)preferredHeightForOrientation:(int)arg1;
- (void)prepareForReuse;
- (id)ratingControl;
- (void)readRating;
- (void)setDividerView:(id)arg1;
- (void)setFontURL:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setGameRecord:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setRatingControl:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setSubtitleView:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setTitleView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)subtitleView;
- (id)theme;
- (id)titleView;

@end
