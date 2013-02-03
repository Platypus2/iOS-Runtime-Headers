/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOTileKeyList;

@interface GEOTileRemoteRequest : NSObject {
    GEOTileKeyList *_list;
    BOOL _movedToNetwork;
    struct __CFRunLoop { } *_queue;
}

@property(readonly) GEOTileKeyList * list;
@property BOOL movedToNetwork;
@property(readonly) struct __CFRunLoop { }* queue;

- (void)dealloc;
- (id)initWithList:(id)arg1 queue:(struct __CFRunLoop { }*)arg2;
- (id)list;
- (BOOL)movedToNetwork;
- (struct __CFRunLoop { }*)queue;
- (void)setMovedToNetwork:(BOOL)arg1;

@end
