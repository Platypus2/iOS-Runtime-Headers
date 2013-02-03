/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLMoviePlayerControllerDelegate>, NSMutableArray;

@interface PLMoviePlayerController : UIMoviePlayerController {
    NSMutableArray *_delegateStack;
    <PLMoviePlayerControllerDelegate> *_playerDelegate;
}

+ (BOOL)movieWillBecomeReady;
+ (void)reset;
+ (void)setMovieWillBecomeReady:(BOOL)arg1;
+ (void)setVideoIsRemaking:(BOOL)arg1;
+ (id)sharedMoviePlayerController;

- (void)_updateCurrentDelegate;
- (void)addNextDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithPlayerSize:(struct CGSize { float x1; float x2; })arg1 options:(unsigned int)arg2;
- (void)removeNextDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMovieWithPath:(id)arg1;

@end
