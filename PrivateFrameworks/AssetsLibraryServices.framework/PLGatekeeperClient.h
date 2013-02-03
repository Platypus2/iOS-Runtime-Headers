/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLGatekeeperClient : NSObject {
    struct _xpc_connection_s { } *connection;
}

@property struct _xpc_connection_s { }* connection;
@property(readonly) struct dispatch_queue_s { }* replyQueue;

+ (id)sharedInstance;

- (void)addAssetWithURL:(id)arg1 toAlbumWithUUID:(id)arg2 handler:(id)arg3;
- (void)addGroupWithName:(id)arg1 handler:(id)arg2;
- (void)cleanupModelAfteriTunesRestore;
- (void)clearChangeStore;
- (struct _xpc_connection_s { }*)connection;
- (void)createPhotoLibraryDatabase;
- (void)dataMigrationWillFinish;
- (int)fileDescriptorForAssetURL:(id)arg1;
- (id)fileURLForAssetURL:(id)arg1;
- (id)fileURLForNewAssetWithType:(unsigned int)arg1 extension:(id)arg2;
- (void)finalizeOTARestoreRecreatingAlbums:(BOOL)arg1;
- (void)getNextThumbnailIndexWithHandler:(id)arg1;
- (void)getPhotosAndVideosCountWithHandler:(id)arg1;
- (void)getUnusedThumbnailIndexesWithCount:(unsigned int)arg1 handler:(id)arg2;
- (id)imageDataFromAssetURL:(id)arg1 format:(int)arg2;
- (void)importFileSystemAssetsWaitingForReply:(BOOL)arg1;
- (id)init;
- (void)launchAssetsd;
- (id)messagesImageDataFromAssetURL:(id)arg1 format:(int)arg2;
- (void)notifyAboutTerminationDueToUncaughtException:(id)arg1;
- (void)recalculateCachedAlbumCounts;
- (void)recycleUnusedThumbnailIndexes:(id)arg1;
- (struct dispatch_queue_s { }*)replyQueue;
- (void)requestAccessWithHandler:(id)arg1;
- (void)requestImageFromAssetURL:(id)arg1 format:(int)arg2 handler:(id)arg3;
- (void)saveAssetWithData:(id)arg1 handler:(id)arg2 imageSurface:(struct __IOSurface { }*)arg3 previewImageSurface:(struct __IOSurface { }*)arg4;
- (unsigned int)secondsNeededToCleanupModelAfteriTunesRestore;
- (struct dispatch_queue_s { }*)sendQueue;
- (void)setConnection:(struct _xpc_connection_s { }*)arg1;
- (void)updateCameraPreviewWellImage:(id)arg1;
- (void)updateModelAfterOTARestore;
- (void)updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2;
- (void)updateStackedImageCacheForAlbum:(id)arg1;
- (void)updateThumbnailsForPhoto:(id)arg1 generatePreviewImage:(BOOL)arg2 waitForReply:(BOOL)arg3;
- (void)writeDataInBackground:(id)arg1 toFileURL:(id)arg2;

@end
