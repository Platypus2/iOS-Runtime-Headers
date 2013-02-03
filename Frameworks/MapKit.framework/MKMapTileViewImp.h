/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKTrafficHighlightView, MKMapTileNormalizerView, <MKMapTileViewDelegate>, MKMapTileView, NSLock, GEOTileKeyList, MKTiledLayer, NSMutableSet, NSTimer;

@interface MKMapTileViewImp : NSObject {
    struct { 
        unsigned int canDrawOnMainThread : 1; 
        unsigned int canDisplayTraffic : 1; 
        unsigned int drawing : 1; 
        unsigned int levelCrossFade : 1; 
        unsigned int loadingEnabled : 1; 
        unsigned int shouldDisplayBaseTiles : 1; 
        unsigned int shouldDisplayTraffic : 1; 
        unsigned int shouldDisplayEffects : 1; 
        unsigned int shouldReloadSynchronously : 1; 
        unsigned int delegateDidStartRendering : 1; 
        unsigned int delegateDidFinishRendering : 1; 
        unsigned int delegateDidStartLoading : 1; 
        unsigned int delegateDidFinishLoading : 1; 
        unsigned int delegateDidFailLoading : 1; 
        unsigned int delegateDidChangeZoomScale : 1; 
    <MKMapTileViewDelegate> *delegate;
    NSTimer *drawingExpirationTimer;
    } flags;
    MKTiledLayer *layer;
    NSLock *loadingEnabledLock;
    unsigned int loadingTileCount;
    unsigned int mapType;
    MKMapTileNormalizerView *normalizerView;
    unsigned short provider;
    GEOTileKeyList *requestTiles;
    NSLock *requestTilesLock;
    NSMutableSet *requesters;
    NSLock *requestersLock;
    float screenScale;
    NSTimer *tileExpirationTimer;
    NSTimer *tileRequestTimer;
    NSLock *tileRequestTimerLock;
    MKTrafficHighlightView *trafficHighlightView;
    MKMapTileView *view;
}

- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (BOOL)tiledLayer:(id)arg1 canDrawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 levelOfDetail:(int)arg3;

@end
