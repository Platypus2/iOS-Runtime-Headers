/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class NSNumber, NSString, NSDictionary;

@interface TLITunesTone : NSObject {
    NSString *_artworkFile;
    unsigned int _duration;
    NSString *_identifier;
    NSString *_name;
    NSString *_path;
    NSNumber *_pid;
    NSDictionary *_playbackProperties;
    BOOL _protected;
    BOOL _purchased;
    BOOL _ringtone;
}

@property(retain) NSString * artworkFile;
@property unsigned int duration;
@property(retain) NSString * identifier;
@property(retain) NSString * name;
@property(retain) NSString * path;
@property(retain) NSNumber * pid;
@property(retain) NSDictionary * playbackProperties;
@property BOOL protected;
@property(getter=isPurchased) BOOL purchased;
@property(getter=isRingtone) BOOL ringtone;

- (id)artworkFile;
- (void)dealloc;
- (unsigned int)duration;
- (id)identifier;
- (BOOL)isPurchased;
- (BOOL)isRingtone;
- (BOOL)loadFromPropertyList:(id)arg1;
- (id)name;
- (id)path;
- (id)pid;
- (id)playbackProperties;
- (BOOL)protected;
- (void)setArtworkFile:(id)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPid:(id)arg1;
- (void)setPlaybackProperties:(id)arg1;
- (void)setProtected:(BOOL)arg1;
- (void)setPurchased:(BOOL)arg1;
- (void)setRingtone:(BOOL)arg1;

@end
