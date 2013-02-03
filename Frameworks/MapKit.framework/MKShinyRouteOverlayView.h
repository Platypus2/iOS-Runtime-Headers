/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKShinyRouteOverlayView : MKPolylineView {
    id _activeStep;
}

+ (BOOL)_useMiniTiledLayer;

- (void)_displayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2;
- (void)_drawRouteAtIndex:(unsigned int)arg1 mapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(float)arg3 inContext:(struct CGContext { }*)arg4;
- (void)_forceRedisplay;
- (BOOL)canDrawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2 inContext:(struct CGContext { }*)arg3;
- (id)initWithRouteGroup:(id)arg1;
- (void)set_levelCrossFade:(BOOL)arg1;

@end
