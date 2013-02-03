/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class ML3MusicLibrary, NSArray, NSString, NSSet;

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate> {
    unsigned int _backgroundTask;
    unsigned int _backgroundTaskCount;
    struct dispatch_queue_s { } *_backgroundTaskQueue;
    ML3MusicLibrary *_library;
}

@property(readonly) BOOL isGeniusEnabled;
@property(retain) ML3MusicLibrary * library;
@property(readonly) NSString * name;
@property(readonly) NSArray * preferredAudioLanguages;
@property(readonly) NSArray * preferredSubtitleLanguages;
@property(readonly) NSSet * propertiesToCache;
@property(readonly) BOOL requiresAuthentication;
@property(readonly) NSString * syncValidity;
@property(readonly) NSString * uniqueIdentifier;

+ (id)_unadjustedValueForMPProperty:(id)arg1 withDefaultValue:(id)arg2;

- (void)_displayValuesDidChange:(id)arg1;
- (void)_dynamicPropertiesDidChange:(id)arg1;
- (void)_libraryContentsDidChange:(id)arg1;
- (void)_loadEntitiesUsingFetchRequest:(id)arg1 entityQuery:(id)arg2 writeBlock:(id)arg3;
- (void)_loadProperties:(id)arg1 ofEntityWithIdentifier:(long long)arg2 ML3EntityClass:(Class)arg3 completionBlock:(id)arg4;
- (void)_loadValueForAggregateFunction:(id)arg1 entityClass:(Class)arg2 property:(id)arg3 query:(id)arg4 completionBlock:(id)arg5;
- (BOOL)_removeEntitiesWithIdentifiers:(long long*)arg1 count:(unsigned int)arg2 entityClass:(Class)arg3;
- (void)_syncGenerationDidChange:(id)arg1;
- (void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)addItemsWithIdentifiers:(long long*)arg1 count:(unsigned int)arg2 toPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (long long)addPlaylistWithValuesForProperties:(id)arg1;
- (id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3;
- (void)dealloc;
- (void)downloadItemWithIdentifier:(long long)arg1 completionHandler:(id)arg2;
- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)arg1 cancelBlock:(id)arg2 usingBlock:(id)arg3;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 itemBlock:(id)arg2 collectionBlock:(id)arg3;
- (void)enumerateItemIdentifiersForQueryCriteria:(id)arg1 cancelBlock:(id)arg2 usingBlock:(id)arg3;
- (BOOL)hasGeniusMixes;
- (BOOL)hasMediaOfType:(int)arg1;
- (id)initWithLibrary:(id)arg1;
- (BOOL)itemExistsWithPersistentID:(unsigned long long)arg1;
- (id)lastModifiedDate;
- (id)library;
- (void)loadBestArtworkImageDataForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadBestTimedArtworkImageDataForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 atPlaybackTime:(double)arg3 completionBlock:(id)arg4;
- (void)loadCollectionsUsingFetchRequest:(id)arg1;
- (void)loadItemsUsingFetchRequest:(id)arg1;
- (void)loadProperties:(id)arg1 ofCollectionWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadProperties:(id)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(id)arg2;
- (void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(id)arg2;
- (void)loadValueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(id)arg4;
- (void)loadValueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(id)arg4;
- (void)moveItemFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (id)name;
- (void)performBackgroundTaskWithBlock:(id)arg1;
- (BOOL)performTransactionWithBlock:(id)arg1;
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (id)preferredAudioLanguages;
- (id)preferredSubtitleLanguages;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
- (void)removeItemsWithIdentifiers:(long long*)arg1 atFilteredIndexes:(id)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (BOOL)removeItemsWithIdentifiers:(long long*)arg1 count:(unsigned int)arg2;
- (BOOL)removePlaylistWithIdentifier:(long long)arg1;
- (void)setLibrary:(id)arg1;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3;
- (unsigned long long)syncGenerationID;
- (id)syncValidity;
- (double)timestampForAppliedUbiquitousBookmarkKey:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateUbiquitousBookmarksWithKey:(id)arg1 bookmarkMediaValue:(id)arg2 timestamp:(double)arg3;
- (BOOL)writable;

@end
