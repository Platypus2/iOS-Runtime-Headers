/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMutableDictionary, UIImage, NSString, MKMapSnapshotCreator, GEOTileKeyList;

@interface MKMapSnapshotRequest : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
    NSString *_attributionString;
    id _context;
    } _coordinate;
    MKMapSnapshotCreator *_delegate;
    id _foregroundObserver;
    UIImage *_image;
    unsigned int _maxX;
    unsigned int _maxY;
    unsigned int _minX;
    unsigned int _minY;
    NSMutableDictionary *_objects;
    BOOL _paused;
    } _renderOffset;
    id _requester;
    } _size;
    GEOTileKeyList *_tileKeyList;
    unsigned int _zoomAdd;
    unsigned int _zoomLevel;
}

@property(retain) NSString * attributionString;
@property(retain) id context;
@property struct { double x1; double x2; } coordinate;
@property MKMapSnapshotCreator * delegate;
@property(readonly) UIImage * image;
@property(retain) id requester;
@property struct CGSize { float x1; float x2; } size;
@property unsigned int zoomLevel;

- (id)attributionString;
- (id)context;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)image;
- (id)init;
- (id)requester;
- (void)setAttributionString:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequester:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setZoomLevel:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)startLoading;
- (void)stopLoading;
- (void)tileRequesterCompleted;
- (void)tileRequesterFailedWithError:(id)arg1;
- (unsigned int)zoomLevel;

@end
