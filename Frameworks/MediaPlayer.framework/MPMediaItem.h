/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItemArtwork, NSString, NSArray, NSDate, NSURL;

@interface MPMediaItem : MPMediaEntity {
}

@property(readonly) BOOL _hasDownloadProgress;
@property(readonly) BOOL _isDownloadable;
@property(readonly) NSString * albumArtist;
@property(readonly) NSString * albumTitle;
@property(readonly) NSString * artist;
@property(readonly) MPMediaItemArtwork * artwork;
@property double bookmarkTime;
@property(readonly) NSArray * chapters;
@property(readonly) NSString * composer;
@property(readonly) NSURL * containerLibraryLinkURL;
@property(readonly) NSURL * directStoreURL;
@property(readonly) NSString * effectiveAlbumArtist;
@property(readonly) double effectiveStopTime;
@property(readonly) NSString * genre;
@property BOOL hasBeenPlayed;
@property(readonly) BOOL isITunesU;
@property(readonly) BOOL isRental;
@property(copy) NSDate * lastPlayedDate;
@property(copy) NSDate * lastSkippedDate;
@property(readonly) NSURL * libraryLinkURL;
@property(readonly) int mediaType;
@property(readonly) BOOL mediaTypeCanSeedGenius;
@property unsigned int playCount;
@property unsigned int playCountSinceSync;
@property(readonly) double playbackDuration;
@property(readonly) NSString * podcastTitle;
@property unsigned int rating;
@property(readonly) NSDate * releaseDate;
@property(readonly) BOOL rememberBookmarkTime;
@property unsigned int skipCount;
@property unsigned int skipCountSinceSync;
@property(readonly) double startTime;
@property(readonly) double stopTime;
@property(readonly) NSString * title;
@property(readonly) unsigned int year;

+ (void)_createFilterableDictionary;
+ (BOOL)_hasDownloadProgressForDownloadStatus:(int)arg1 downloadIdentifier:(id)arg2 isTemporaryCloudDownload:(BOOL)arg3 mediaItemPersistentID:(id)arg4;
+ (BOOL)_isDownloadableForRedownloadParameters:(id)arg1 filePath:(id)arg2 downloadStatus:(int)arg3 isTemporaryCloudDownload:(BOOL)arg4;
+ (BOOL)_isValidItemProperty:(id)arg1;
+ (BOOL)canFilterByProperty:(id)arg1;
+ (id)daapKeyForMediaProperty:(id)arg1;
+ (id)daapValueFromMediaValue:(id)arg1 mediaProperty:(id)arg2;
+ (id)dynamicProperties;
+ (id)mediaPropertyForDAAPKey:(id)arg1;
+ (id)mediaValueFromDAAPValue:(id)arg1 mediaProperty:(id)arg2;
+ (id)persistentIDPropertyForGroupingType:(int)arg1;
+ (id)titlePropertyForGroupingType:(int)arg1;

- (id)_bestStoreURL;
- (id)_directStoreURL;
- (BOOL)_hasDownloadProgress;
- (BOOL)_isDownloadable;
- (id)_libraryLinkArtist;
- (id)_libraryLinkArtist;
- (id)_libraryLinkKind;
- (id)_libraryLinkKind;
- (id)_libraryLinkPlaylistName;
- (id)_libraryLinkPlaylistName;
- (id)_libraryLinkURL:(BOOL)arg1;
- (id)_libraryLinkURL;
- (id)albumArtist;
- (id)albumImageRequestWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)albumTitle;
- (id)artist;
- (id)artwork;
- (double)bookmarkTime;
- (id)chapterOfType:(int)arg1 atIndex:(unsigned int)arg2;
- (id)chapterOfType:(int)arg1 atTime:(double)arg2;
- (id)chapters;
- (id)chaptersOfType:(int)arg1;
- (id)composer;
- (id)containerLibraryLinkURL;
- (unsigned int)countOfChaptersOfType:(int)arg1;
- (id)directStoreURL;
- (id)effectiveAlbumArtist;
- (double)effectiveStopTime;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)existsInLibrary;
- (void)gaplessHeuristicInfo:(unsigned int*)arg1 duration:(unsigned int*)arg2 lastPacketsResync:(unsigned int*)arg3 encodingDelay:(unsigned int*)arg4 encodingDrain:(unsigned int*)arg5;
- (id)genre;
- (BOOL)hasBeenPlayed;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isITunesU;
- (BOOL)isRental;
- (id)lastPlayedDate;
- (id)lastSkippedDate;
- (id)libraryLinkURL;
- (int)mediaType;
- (BOOL)mediaTypeCanSeedGenius;
- (unsigned int)playCount;
- (unsigned int)playCountSinceSync;
- (double)playbackDuration;
- (id)podcastTitle;
- (id)predicateForProperty:(id)arg1;
- (unsigned int)rating;
- (id)releaseDate;
- (BOOL)rememberBookmarkTime;
- (id)representativeItem;
- (void)setBookmarkTime:(double)arg1;
- (void)setHasBeenPlayed:(BOOL)arg1;
- (void)setLastPlayedDate:(id)arg1;
- (void)setLastSkippedDate:(id)arg1;
- (void)setPlayCount:(unsigned int)arg1;
- (void)setPlayCountSinceSync:(unsigned int)arg1;
- (void)setRating:(unsigned int)arg1;
- (void)setSkipCount:(unsigned int)arg1;
- (void)setSkipCountSinceSync:(unsigned int)arg1;
- (BOOL)shouldPlayInOppositeApplication;
- (unsigned int)skipCount;
- (unsigned int)skipCountSinceSync;
- (id)snapshotAtPlaybackTime:(double)arg1 startRentalClock:(BOOL)arg2 timeOut:(double)arg3;
- (id)snapshotAtPlaybackTime:(double)arg1 startRentalClock:(BOOL)arg2;
- (double)startTime;
- (double)stopTime;
- (id)title;
- (id)uncroppedAlbumImageCacheRequestWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)uncroppedImageCacheRequestWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)valueForProperty:(id)arg1;
- (unsigned int)year;

@end
