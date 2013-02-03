/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVPlayerItemErrorLogEvent, NSDate, NSString;

@interface MPMovieErrorLogEvent : NSObject <NSCopying> {
    struct MPMovieErrorLogEventInternal { 
        AVPlayerItemErrorLogEvent *event; 
    } _internal;
}

@property(readonly) NSString * URI;
@property struct MPMovieErrorLogEventInternal { id x1; } _internal;
@property(readonly) NSDate * date;
@property(readonly) NSString * errorComment;
@property(readonly) NSString * errorDomain;
@property(readonly) int errorStatusCode;
@property(readonly) NSString * playbackSessionID;
@property(readonly) NSString * serverAddress;

- (id)URI;
- (id)_initWithAVItemErrorLogEvent:(id)arg1;
- (struct MPMovieErrorLogEventInternal { id x1; })_internal;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)errorComment;
- (id)errorDomain;
- (int)errorStatusCode;
- (id)playbackSessionID;
- (id)serverAddress;
- (void)set_internal:(struct MPMovieErrorLogEventInternal { id x1; })arg1;

@end
