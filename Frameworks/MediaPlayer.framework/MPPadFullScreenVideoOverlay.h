/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UINavigationBar, UIActivityIndicatorView, UIImageView, UINavigationItem, UILabel, MPNowPlayingItemQueueInfoButton, NSString, UINavigationButton, UIPopoverController, MPPadFullScreenTransportControls;

@interface MPPadFullScreenVideoOverlay : MPVideoOverlay <UIPopoverControllerDelegate, MPNowPlayingItemQueueInfoButtonDelegate> {
    unsigned int _layoutSubviewsActive : 1;
    UIImageView *_hudImageView;
    MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;
    UIActivityIndicatorView *_loadingMovieIndicator;
    UILabel *_loadingMovieLabel;
    UINavigationBar *_navigationBar;
    UIImageView *_navigationBarBackgroundShort;
    UIImageView *_navigationBarBackgroundTall;
    UIImageView *_navigationBarShadow;
    UINavigationItem *_navigationItem;
    UIPopoverController *_popoverController;
    UINavigationButton *_scaleModeButton;
    UILabel *_scrubInstructionsLabel;
    UILabel *_scrubSpeedLabel;
    NSString *_title;
    MPPadFullScreenTransportControls *_transportControls;
}

@property(copy) NSString * title;

- (void)_configureLinkButtonForCurrentItemTime;
- (unsigned int)_convertedPartsMask:(unsigned int)arg1;
- (void)_doneButton:(id)arg1;
- (void)_hideScrubInstructions;
- (void)_initSubviews;
- (void)_itemDurationAvailableNotification:(id)arg1;
- (id)_navBarBackgroundImageForProgressControl:(BOOL)arg1 tallStyle:(BOOL)arg2;
- (void)_reconfigureNavigationBarAnimated:(BOOL)arg1;
- (void)_scaleButton:(id)arg1;
- (void)_scheduleHidePopoverTimer;
- (void)_showScrubInstructions;
- (void)_videoViewScaleModeDidChangeNotification:(id)arg1;
- (BOOL)allowsWirelessPlayback;
- (void)crossedURLTimeMarker:(id)arg1;
- (void)dealloc;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(int)arg2;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (unsigned int)disabledParts;
- (void)hideAlternateTracks;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)navigationBar;
- (int)nowPlayingItemQueueInfoButton:(id)arg1 willDisplayInfoType:(int)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setAlpha:(float)arg1;
- (void)setDesiredParts:(unsigned int)arg1 animate:(BOOL)arg2;
- (void)setDisabledParts:(unsigned int)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setItem:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVideoViewController:(id)arg1;
- (void)setVisibleParts:(unsigned int)arg1 animate:(BOOL)arg2;
- (void)showAlternateTracks;
- (id)title;

@end
