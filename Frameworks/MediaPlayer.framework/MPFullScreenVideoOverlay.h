/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPVideoOverlayDelegate>, MPCenteringNavigationBar, UINavigationButton, MPAVItem, UILabel, MPAVController, MPTransportControls, UIView, MPNowPlayingItemQueueInfoButton, MPVideoViewController, UINavigationBar, MPDetailSlider, UIImageView, UINavigationItem;

@interface MPFullScreenVideoOverlay : MPSwipableView <MPDetailSliderDelegate, MPNowPlayingItemQueueInfoButtonDelegate, MPVideoOverlay> {
    unsigned int _tvOutEnabled : 1;
    unsigned int _wantsTick : 1;
    unsigned int _allowsDetailScrubbing : 1;
    unsigned int _detailScrubbing : 1;
    <MPVideoOverlayDelegate> *_delegate;
    unsigned int _desiredParts;
    unsigned int _disabledParts;
    int _interfaceOrientation;
    MPAVItem *_item;
    MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;
    MPCenteringNavigationBar *_navigationBar;
    UIImageView *_navigationBarBackground;
    UIImageView *_navigationBarShadow;
    UINavigationItem *_navigationItem;
    MPAVController *_player;
    UINavigationButton *_scaleModeButton;
    MPDetailSlider *_scrubControl;
    UILabel *_scrubInstructionsLabel;
    UILabel *_scrubSpeedLabel;
    UIView *_streamingLoadingTitleView;
    UIView *_titleViewContainer;
    MPTransportControls *_transportControls;
    MPVideoViewController *_videoViewController;
    unsigned int _visibleParts;
}

@property BOOL TVOutEnabled;
@property BOOL allowsDetailScrubbing;
@property BOOL allowsWirelessPlayback;
@property <MPVideoOverlayDelegate> * delegate;
@property unsigned int desiredParts;
@property unsigned int disabledParts;
@property int interfaceOrientation;
@property(retain) MPAVItem * item;
@property(readonly) UINavigationBar * navigationBar;
@property(retain) MPAVController * player;
@property(readonly) MPTransportControls * transportControls;
@property MPVideoViewController * videoViewController;
@property unsigned int visibleParts;

- (BOOL)TVOutEnabled;
- (void)_backButtonAction:(id)arg1;
- (void)_bufferingStateDidChange:(id)arg1;
- (void)_configureLinkButtonForCurrentItemTime;
- (unsigned int)_desiredPartsForTransportControlsWithParts:(unsigned int)arg1;
- (void)_hideScrubInstructions;
- (void)_initNavigationBar;
- (void)_initNavigationBarBackground;
- (id)_newLoadingMovieTitleViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_newStreamingTitleViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_newTitleViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 text:(id)arg2 showSpinner:(BOOL)arg3;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_reloadNavigationBarWithAnimation:(BOOL)arg1;
- (void)_reloadTransportControls:(BOOL)arg1;
- (void)_scaleButtonAction:(id)arg1;
- (void)_scaleModeDidChangeNotification:(id)arg1;
- (id)_scrubControlWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_shouldShowLoadingTitleView;
- (void)_showScrubInstructions;
- (void)_statusBarHeightChanged:(id)arg1;
- (void)_tickNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (BOOL)_updateTitleViewItemVisibility;
- (void)_updateTitleViewItemVisibilityWithAnimation:(BOOL)arg1;
- (void)_validityChangedNotification:(id)arg1;
- (unsigned int)_visiblePartsForTransportControlsWithParts:(unsigned int)arg1;
- (BOOL)allowsDetailScrubbing;
- (BOOL)allowsWirelessPlayback;
- (void)crossedURLTimeMarker:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (unsigned int)desiredParts;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(int)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (unsigned int)disabledParts;
- (void)hideAlternateTracks;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 interfaceOrientation:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)interfaceOrientation;
- (id)item;
- (void)layoutSubviews;
- (id)navigationBar;
- (int)nowPlayingItemQueueInfoButton:(id)arg1 willDisplayInfoType:(int)arg2;
- (id)player;
- (void)restoreSanity;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setAlpha:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredParts:(unsigned int)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned int)arg1;
- (void)setDisabledParts:(unsigned int)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setItem:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setTVOutEnabled:(BOOL)arg1;
- (void)setVideoViewController:(id)arg1;
- (void)setVisibleParts:(unsigned int)arg1 animate:(BOOL)arg2;
- (void)setVisibleParts:(unsigned int)arg1;
- (void)showAlternateTracks;
- (void)startTicking;
- (void)stopTicking;
- (id)transportControls;
- (BOOL)updateTimeBasedValues;
- (id)videoViewController;
- (id)viewsToFadeOutWhenShowingBackside;
- (unsigned int)visibleParts;

@end
