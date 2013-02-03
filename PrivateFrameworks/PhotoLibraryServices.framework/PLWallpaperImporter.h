/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoLibrary, NSArray, NSData, PLManagedObjectContext;

@interface PLWallpaperImporter : NSObject {
    NSArray *_allWallpaperURLs;
    NSData *_wallpaperFileHash;
    PLPhotoLibrary *photoLibrary;
}

@property(readonly) NSArray * allWallpaperURLs;
@property(readonly) PLManagedObjectContext * managedObjectContext;
@property(retain) PLPhotoLibrary * photoLibrary;

+ (void)importWallpaperAssetsIntoPhotoLibrary:(id)arg1;
+ (id)posterImageURL;

- (void)addWallpaperURLsForModel:(id)arg1 toURLs:(id)arg2;
- (id)allExistingWallpaperAssets;
- (id)allWallpaperURLs;
- (void)dealloc;
- (void)deleteAll;
- (void)importAll;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)managedObjectContext;
- (id)photoLibrary;
- (void)setPhotoLibrary:(id)arg1;
- (void)updateAsNeeded;
- (id)wallpaperFileHash;

@end
