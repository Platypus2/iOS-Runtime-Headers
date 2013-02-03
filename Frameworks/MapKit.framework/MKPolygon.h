/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, NSArray;

@interface MKPolygon : MKMultiPoint <MKOverlay> {
    struct { 
        double latitude; 
        double longitude; 
    } _centroid;
    NSArray *_interiorPolygons;
    BOOL _isDefinitelyConvex;
}

@property BOOL _isDefinitelyConvex;
@property(readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingMapRect;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) NSArray * interiorPolygons;
@property(readonly) NSString * subtitle;
@property(readonly) NSString * title;

+ (id)polygonEnclosingMapPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned int)arg2;
+ (id)polygonWithCoordinates:(struct { double x1; double x2; }*)arg1 count:(unsigned int)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithCoordinates:(struct { double x1; double x2; }*)arg1 count:(unsigned int)arg2;
+ (id)polygonWithPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned int)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned int)arg2;

- (BOOL)_isDefinitelyConvex;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)interiorPolygons;
- (BOOL)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_isDefinitelyConvex:(BOOL)arg1;

@end
