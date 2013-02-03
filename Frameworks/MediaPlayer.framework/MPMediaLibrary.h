/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSHashTable, CADisplayLink, NSCache, NSString, NSURL, <MPMediaLibraryDataProviderPrivate>, NSDate;

@interface MPMediaLibrary : NSObject <NSCoding> {
    struct MPMediaLibraryInternal { 
        <MPMediaLibraryDataProviderPrivate> *_libraryDataProvider; 
        int _libraryChangeObservers; 
        struct dispatch_queue_s {} *_entityCacheQueue; 
        NSCache *_itemsForCriteriaCache; 
        NSCache *_collectionsForCriteriaCache; 
        NSHashTable *_connectionAssertions; 
        BOOL _disconnectAfterReleasingAssertions; 
        float _connectionProgress; 
        CADisplayLink *_connectionProgressDisplayLink; 
        double _connectionProgressStartTime; 
        int _removalReason; 
        unsigned int _filteringDisabled : 1; 
        unsigned int _determinedHasMedia : 1; 
        unsigned int _hasMedia : 1; 
        unsigned int _determinedHasSongs : 1; 
        unsigned int _hasSongs : 1; 
        unsigned int _determinedHasGeniusMixes : 1; 
        unsigned int _hasGeniusMixes : 1; 
        unsigned int _determinedHasPlaylists : 1; 
        unsigned int _hasPlaylists : 1; 
        unsigned int _determinedHasComposers : 1; 
        unsigned int _hasComposers : 1; 
        unsigned int _determinedHasPodcasts : 1; 
        unsigned int _hasPodcasts : 1; 
        unsigned int _determinedHasAudiobooks : 1; 
        unsigned int _hasAudiobooks : 1; 
        BOOL _hasVideos; 
        BOOL _determinedHasVideos; 
        BOOL _hasMusicVideos; 
        BOOL _determinedHasMusicVideos; 
        BOOL _hasAudibleAudioBooks; 
        BOOL _determinedHasAudibleAudioBooks; 
        BOOL _hasMovies; 
        BOOL _determinedHasMovies; 
        BOOL _hasCompilations; 
        BOOL _determinedHasCompilations; 
        BOOL _hasITunesU; 
        BOOL _determinedHasITunesU; 
        BOOL _hasMovieRentals; 
        BOOL _determinedHasMovieRentals; 
        BOOL _hasTVShows; 
        BOOL _determinedHasTVShows; 
        BOOL _hasVideoPodcasts; 
        BOOL _determinedHasVideoPodcasts; 
    } _internal;
}

@property struct MPMediaLibraryInternal { id x1; int x2; struct dispatch_queue_s {} *x3; id x4; id x5; id x6; BOOL x7; float x8; id x9; double x10; int x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; BOOL x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; } _internal;
@property(readonly) NSString * _syncValidity;
@property(readonly) NSDate * lastModifiedDate;
@property(readonly) NSURL * protectedContentSupportStorageURL;
@property int removalReason;

+ (id)_libraryDataProviders;
+ (id)_libraryForDataProvider:(id)arg1;
+ (id)_mediaLibraries;
+ (void)addLibraryDataProvider:(id)arg1;
+ (void)beginDiscoveringMediaLibraries;
+ (id)defaultMediaLibrary;
+ (id)deviceMediaLibrary;
+ (void)endDiscoveringMediaLibraries;
+ (BOOL)isLibraryServerDisabled;
+ (id)libraryDataProviders;
+ (id)mediaLibraries;
+ (id)mediaLibraryWithUniqueIdentifier:(id)arg1;
+ (void)reloadDisplayValuesForLibraryDataProvider:(id)arg1;
+ (void)reloadDynamicPropertiesForLibraryDataProvider:(id)arg1;
+ (void)reloadLibraryDataProvider:(id)arg1;
+ (void)removeLibraryDataProvider:(id)arg1 removalReason:(int)arg2;
+ (void)setDefaultMediaLibrary:(id)arg1;
+ (void)setLibraryServerDisabled:(BOOL)arg1;
+ (void)setRunLoopForNotifications:(id)arg1;
+ (void)syncGenerationDidChangeForLibraryDataProvider:(id)arg1;

- (BOOL)_checkHasContent:(BOOL*)arg1 determined:(BOOL*)arg2 mediaType:(int)arg3 queryIsEmptyBlock:(id)arg4;
- (BOOL)_checkHasContent:(BOOL*)arg1 determined:(BOOL*)arg2 queryIsEmptyBlock:(id)arg3;
- (void)_clearCachedContentData;
- (void)_clearCachedEntities;
- (void)_clearPendingDisconnection;
- (id)_collectionsForQueryCriteria:(id)arg1;
- (void)_connectionProgressDisplayLinkCallback:(id)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_displayValuesDidChangeNotification:(id)arg1;
- (id)_initWithLibraryDataProvider:(id)arg1;
- (struct MPMediaLibraryInternal { id x1; int x2; struct dispatch_queue_s {} *x3; id x4; id x5; id x6; BOOL x7; float x8; id x9; double x10; int x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; BOOL x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; })_internal;
- (id)_itemsForQueryCriteria:(id)arg1;
- (unsigned long long)_persistentIDForAssetURL:(id)arg1;
- (void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)arg1;
- (void)_removeConnectionAssertion:(id)arg1;
- (void)_stopConnectionProgressDisplayLink;
- (id)_syncValidity;
- (id)addPlaylistWithName:(id)arg1 activeGeniusPlaylist:(BOOL)arg2;
- (id)addPlaylistWithName:(id)arg1;
- (void)beginGeneratingLibraryChangeNotifications;
- (int)compareMediaLibrary:(id)arg1;
- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(id)arg2;
- (void)connectWithCompletionHandler:(id)arg1;
- (id)connectionAssertionWithIdentifier:(id)arg1;
- (float)connectionProgress;
- (void)dealloc;
- (id)description;
- (void)disconnect;
- (void)downloadItem:(id)arg1 completionHandler:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)endGeneratingLibraryChangeNotifications;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 usingBlock:(id)arg2;
- (id)errorResolverForMediaItem:(id)arg1;
- (BOOL)hasAlbums;
- (BOOL)hasArtists;
- (BOOL)hasAudibleAudioBooks;
- (BOOL)hasAudiobooks;
- (BOOL)hasCompilations;
- (BOOL)hasComposers;
- (BOOL)hasGeniusMixes;
- (BOOL)hasGenres;
- (BOOL)hasITunesUContent;
- (BOOL)hasMedia;
- (BOOL)hasMediaOfType:(int)arg1;
- (BOOL)hasMovieRentals;
- (BOOL)hasMovies;
- (BOOL)hasMusicVideos;
- (BOOL)hasPlaylists;
- (BOOL)hasPodcasts;
- (BOOL)hasSongs;
- (BOOL)hasTVShows;
- (BOOL)hasVideoPodcasts;
- (BOOL)hasVideos;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isArtworkIdenticalForItem:(id)arg1 otherItem:(id)arg2 compareRepresentativeItemArtwork:(BOOL)arg3 missingAlwaysComparesEqual:(BOOL)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFilteringDisabled;
- (BOOL)isGeniusEnabled;
- (BOOL)isValidAssetURL:(id)arg1;
- (BOOL)itemExistsWithPersistentID:(unsigned long long)arg1;
- (id)itemWithPersistentID:(unsigned long long)arg1 verifyExistence:(BOOL)arg2;
- (id)itemWithPersistentID:(unsigned long long)arg1;
- (id)lastModifiedDate;
- (id)libraryDataProvider;
- (BOOL)libraryHasBeenModifiedWithToken:(id)arg1;
- (id)modificationToken;
- (id)name;
- (id)newPlaylistWithPersistentID:(unsigned long long)arg1;
- (id)pathForAssetURL:(id)arg1;
- (BOOL)performTransactionWithBlock:(id)arg1;
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (id)playlistWithPersistentID:(unsigned long long)arg1;
- (id)preferredAudioLanguages;
- (id)preferredSubtitleLanguages;
- (id)protectedContentSupportStorageURL;
- (int)removalReason;
- (BOOL)removeItems:(id)arg1;
- (BOOL)removePlaylist:(id)arg1;
- (BOOL)requiresAuthentication;
- (void)setFilteringDisabled:(BOOL)arg1;
- (void)setRemovalReason:(int)arg1;
- (void)set_internal:(struct MPMediaLibraryInternal { id x1; int x2; struct dispatch_queue_s {} *x3; id x4; id x5; id x6; BOOL x7; float x8; id x9; double x10; int x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; BOOL x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; })arg1;
- (int)status;
- (unsigned long long)syncGenerationID;
- (id)syncValidity;
- (double)timestampForAppliedUbiquitousBookmarkKey:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateUbiquitousBookmarksWithKey:(id)arg1 bookmarkMediaValue:(id)arg2 timestamp:(double)arg3;
- (BOOL)writable;

@end
