/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, NSMutableArray;

@interface UIMovieClosedCaptionData : NSObject {
    NSMutableArray *_data;
    NSString *_language;
}

@property(retain) NSString * language;

- (void)addCaptionText:(id)arg1 startTime:(double)arg2 endTime:(double)arg3;
- (void)dealloc;
- (id)description;
- (id)language;
- (void)setLanguage:(id)arg1;
- (id)timeMarkers;

@end
