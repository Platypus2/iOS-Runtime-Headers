/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSNumber, NSMutableOrderedSet, PLManagedAsset, NSOrderedSet, NSDictionary, NSString, UIImage, NSURL, NSArray;

@interface PLItemAlbum : NSObject <PLAssetContainer> {
    NSMutableOrderedSet *_assets;
    NSArray *_items;
    NSDictionary *_slideshowSettings;
    NSString *_title;
    NSString *_uuid;
}

@property(readonly) NSOrderedSet * assets;
@property(readonly) unsigned int count;
@property(readonly) NSURL * groupURL;
@property(retain) NSString * importSessionID;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isLibrary;
@property(readonly) BOOL isPhotoStreamAlbum;
@property(retain) NSArray * items;
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
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(readonly) NSString * title;
@property(readonly) NSString * uuid;
@property(readonly) unsigned int videosCount;

- (id)assets;
- (BOOL)canPerformEditOperation:(int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)displayableIndexesForCount:(unsigned int)arg1;
- (id)groupURL;
- (id)importSessionID;
- (id)initWithItems:(id)arg1;
- (BOOL)isCameraAlbum;
- (BOOL)isEmpty;
- (BOOL)isLibrary;
- (BOOL)isPhotoStreamAlbum;
- (id)items;
- (id)keyAsset;
- (id)kind;
- (int)kindValue;
- (id)localizedTitle;
- (id)mutableAssets;
- (id)name;
- (unsigned int)pendingItemsCount;
- (unsigned int)pendingItemsType;
- (unsigned int)photosCount;
- (id)posterImage;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (void)setAssets:(id)arg1;
- (void)setImportSessionID:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setPendingItemsCount:(unsigned int)arg1;
- (void)setPendingItemsType:(unsigned int)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (BOOL)shouldDeleteWhenEmpty;
- (id)slideshowSettings;
- (id)title;
- (void)updateStackedImage;
- (id)uuid;
- (unsigned int)videosCount;

@end
