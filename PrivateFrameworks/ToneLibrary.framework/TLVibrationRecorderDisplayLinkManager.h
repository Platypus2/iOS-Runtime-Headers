/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class NSMutableSet, CADisplayLink;

@interface TLVibrationRecorderDisplayLinkManager : NSObject {
    NSMutableSet *_activeTargetActions;
    NSMutableSet *_addedTargetActions;
    CADisplayLink *_displayLink;
    BOOL _isHandlingDisplayRefresh;
    NSMutableSet *_removedTargetActions;
    BOOL _shouldInvalidate;
    BOOL _shouldInvalidateAutomatically;
    BOOL shouldInvalidateAutomatically;
}

@property(setter=_setDisplayLink:,retain) CADisplayLink * _displayLink;
@property(readonly) double duration;
@property(readonly) int frameInterval;
@property(getter=isPaused,readonly) BOOL paused;
@property BOOL shouldInvalidateAutomatically;
@property(readonly) double timestamp;

+ (id)currentDisplayLinkManager;
+ (void)releaseCurrentDisplayLinkManager;

- (void)_displayDidRefresh:(id)arg1;
- (id)_displayLink;
- (void)_setDisplayLink:(id)arg1;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 frameInterval:(int)arg3;
- (void)addTarget:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (double)duration;
- (int)frameInterval;
- (id)init;
- (void)invalidate;
- (BOOL)isPaused;
- (void)removeTarget:(id)arg1 selector:(SEL)arg2;
- (void)setShouldInvalidateAutomatically:(BOOL)arg1;
- (BOOL)shouldInvalidateAutomatically;
- (double)timestamp;

@end
