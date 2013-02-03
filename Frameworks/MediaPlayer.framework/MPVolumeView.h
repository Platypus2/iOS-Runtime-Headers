/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPVolumeSlider;

@interface MPVolumeView : UIView <NSCoding> {
    void *_internal;
}

@property BOOL hidesRouteLabelWhenNoRouteChoice;
@property(readonly) BOOL isShowingRouteButton;
@property(readonly) BOOL isVisible;
@property BOOL showsRouteButton;
@property BOOL showsVolumeSlider;
@property(readonly) int style;
@property(readonly) MPVolumeSlider * volumeSlider;
@property BOOL volumeSliderShrinksFromBothEnds;

- (void)_createSubviews;
- (void)_displayAudioRoutePicker;
- (void)_initWithStyle:(int)arg1;
- (id)_routeButton;
- (id)_routeButtonImage;
- (void)_setShowsRouteButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setShowsVolumeSlider:(BOOL)arg1;
- (void)_setVolumeAudioCategory:(id)arg1;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)dismissActiveOverlaysAnimated:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hidesRouteLabelWhenNoRouteChoice;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isShowingActiveOverlays;
- (BOOL)isShowingRouteButton;
- (BOOL)isVisible;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setAlpha:(float)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setHidesRouteLabelWhenNoRouteChoice:(BOOL)arg1;
- (void)setShowsRouteButton:(BOOL)arg1;
- (void)setShowsVolumeSlider:(BOOL)arg1;
- (void)setVolumeSliderShrinksFromBothEnds:(BOOL)arg1;
- (BOOL)showsRouteButton;
- (BOOL)showsVolumeSlider;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)style;
- (id)volumeSlider;
- (BOOL)volumeSliderShrinksFromBothEnds;
- (void)willMoveToWindow:(id)arg1;

@end
