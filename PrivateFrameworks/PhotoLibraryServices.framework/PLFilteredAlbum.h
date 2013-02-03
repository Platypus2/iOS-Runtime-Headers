/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSNumber, NSMutableIndexSet, UIImage, NSURL, NSIndexSet, NSMutableOrderedSet, PLIndexMapper, NSPredicate, NSDictionary, NSOrderedSet, <NSObject><NSCopying>, NSString, PLManagedAsset, NSObject<PLAssetContainer>;

@interface PLFilteredAlbum : NSObject <PLIndexMapperDataSource, PLIndexMappingCache, PLAssetContainer> {
    NSMutableIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    NSMutableOrderedSet *_weak_assets;
    NSObject<PLAssetContainer> *backingAlbum;
    int filter;
    BOOL isObservingContextChanges;
    NSPredicate *predicate;
}

@property NSMutableOrderedSet * _assets;
@property(readonly) NSOrderedSet * assets;
@property(retain) NSObject<PLAssetContainer> * backingAlbum;
@property(readonly) <NSObject><NSCopying> * cachedIndexMapState;
@property(readonly) unsigned int count;
@property int filter;
@property(readonly) NSIndexSet * filteredIndexes;
@property(readonly) NSURL * groupURL;
@property(retain) NSString * importSessionID;
@property(readonly) PLIndexMapper * indexMapper;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isLibrary;
@property BOOL isObservingContextChanges;
@property(readonly) BOOL isPhotoStreamAlbum;
@property(retain) PLManagedAsset * keyAsset;
@property(readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(readonly) NSString * localizedTitle;
@property(readonly) NSMutableOrderedSet * mutableAssets;
@property(readonly) NSString * name;
@property unsigned int pendingItemsCount;
@property unsigned int pendingItemsType;
@property(readonly) unsigned int photosCount;
@property(readonly) UIImage * posterImage;
@property(retain) NSPredicate * predicate;
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(readonly) NSString * title;
@property(readonly) NSString * uuid;
@property(readonly) unsigned int videosCount;

+ (id)_filteredIndexesInManagedAlbum:(id)arg1 predicate:(id)arg2;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2;
+ (struct NSObject { Class x1; }*)filteredAlbum:(struct NSObject { Class x1; }*)arg1 intersectFilter:(int)arg2;
+ (id)filteredIndexesInAlbum:(struct NSObject { Class x1; }*)arg1 predicate:(id)arg2;
+ (id)predicateForAlbumFilter:(int)arg1;
+ (struct NSObject { Class x1; }*)unfilteredAlbum:(struct NSObject { Class x1; }*)arg1;

- (id)_assets;
- (id)assets;
- (struct NSObject { Class x1; }*)backingAlbum;
- (void)backingContextDidChange:(id)arg1;
- (id)cachedIndexMapState;
- (BOOL)canPerformEditOperation:(int)arg1;
- (unsigned int)count;
- (unsigned int)countOfFilteredAssets;
- (void)dealloc;
- (id)displayableIndexesForCount:(unsigned int)arg1;
- (int)filter;
- (id)filteredAssetsAtIndexes:(id)arg1;
- (id)filteredIndexes;
- (void)getFilteredAssets:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)groupURL;
- (id)importSessionID;
- (unsigned int)indexInFilteredAssetsOfObject:(id)arg1;
- (id)indexMapper;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2;
- (void)insertFilteredAssets:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inFilteredAssetsAtIndex:(unsigned int)arg2;
- (BOOL)isCameraAlbum;
- (BOOL)isEmpty;
- (BOOL)isLibrary;
- (BOOL)isObservingContextChanges;
- (BOOL)isPhotoStreamAlbum;
- (id)keyAsset;
- (id)kind;
- (int)kindValue;
- (id)localizedTitle;
- (void)mappedDataSourceChanged:(id)arg1;
- (id)mutableAssets;
- (id)name;
- (id)objectInFilteredAssetsAtIndex:(unsigned int)arg1;
- (unsigned int)pendingItemsCount;
- (unsigned int)pendingItemsType;
- (unsigned int)photosCount;
- (id)posterImage;
- (id)predicate;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (void)removeFilteredAssetsAtIndexes:(id)arg1;
- (void)removeObjectFromFilteredAssetsAtIndex:(unsigned int)arg1;
- (void)replaceFilteredAssetsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;
- (void)replaceObjectInFilteredAssetsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)setBackingAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setFilter:(int)arg1;
- (void)setImportSessionID:(id)arg1;
- (void)setIsObservingContextChanges:(BOOL)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setPendingItemsCount:(unsigned int)arg1;
- (void)setPendingItemsType:(unsigned int)arg1;
- (void)setPredicate:(id)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (void)set_assets:(id)arg1;
- (BOOL)shouldDeleteWhenEmpty;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned int)arg1;
- (id)slideshowSettings;
- (id)title;
- (void)updateStackedImage;
- (id)uuid;
- (unsigned int)videosCount;

@end
