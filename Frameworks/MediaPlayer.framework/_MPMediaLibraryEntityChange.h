/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, MPMediaEntity;

@interface _MPMediaLibraryEntityChange : NSObject {
    NSString *_anchor;
    BOOL _deleted;
    MPMediaEntity *_entity;
}

@property(readonly) NSString * anchor;
@property(getter=isDeleted,readonly) BOOL deleted;
@property(readonly) MPMediaEntity * entity;

- (id)anchor;
- (void)dealloc;
- (id)entity;
- (id)initWithEntity:(id)arg1 anchor:(id)arg2 deleted:(BOOL)arg3;
- (BOOL)isDeleted;

@end
