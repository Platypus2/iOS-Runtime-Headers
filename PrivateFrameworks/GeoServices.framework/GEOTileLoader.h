/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, GEOTileCache, <GEOTileServerProxy>, GEOExpiringTileCache, NSLock, NSMapTable;

@interface GEOTileLoader : NSObject {
    int _diskHits;
    GEOExpiringTileCache *_expTiles;
    int _memoryHits;
    int _networkHits;
    NSMapTable *_pendingLoads;
    NSLock *_pendingLoadsLock;
    NSMapTable *_pendingNetworkLoads;
    NSLock *_pendingNetworkLoadsLock;
    <GEOTileServerProxy> *_serverConnection;
    NSMutableArray *_tileDecoders;
    GEOTileCache *_tiles;
}

@property(readonly) int diskHits;
@property(readonly) int memoryHits;
@property(readonly) int networkHits;

+ (id)diskCacheLocation;
+ (void)setDiskCacheLocation:(id)arg1;
+ (id)sharedLoader;
+ (void)useLocalLoader;
+ (void)useRemoteLoader;

- (void)_asyncDecodeTile:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 completion:(id)arg3;
- (id)_decodeTile:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (void)_loadTilesFromServer:(id)arg1 checkDisk:(BOOL)arg2 allowNetworking:(BOOL)arg3;
- (void)_tileEditionChanged:(id)arg1;
- (void)cancelAllRequests;
- (void)cancelRequest:(id)arg1;
- (void)clearAllCaches;
- (void)closeDatabase;
- (void)dealloc;
- (int)diskHits;
- (id)expireTilesWithType:(unsigned char)arg1 provider:(unsigned short)arg2 olderThan:(double)arg3;
- (id)hostnameForProviderID:(unsigned short)arg1;
- (id)init;
- (void)loadTiles:(id)arg1 progress:(id)arg2 finished:(id)arg3 error:(id)arg4;
- (void)loadTilesFromCache:(id)arg1 progress:(id)arg2 finished:(id)arg3 error:(id)arg4;
- (void)loadTilesFromCacheAndNetwork:(id)arg1 progress:(id)arg2 finished:(id)arg3 error:(id)arg4 skipNetwork:(BOOL)arg5;
- (void)loadTilesFromCacheAndNetwork:(id)arg1 progress:(id)arg2 finished:(id)arg3 error:(id)arg4;
- (int)memoryHits;
- (int)networkHits;
- (void)openDatabase;
- (void)registerTileDecoder:(id)arg1;
- (void)registerTileLoader:(Class)arg1;
- (id)renderDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 asyncHandler:(id)arg2;
- (id)renderDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)tileServerProxy:(id)arg1 receivedData:(id)arg2 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg3 forRequest:(id)arg4 fromDisk:(BOOL)arg5;
- (void)tileServerProxy:(id)arg1 receivedError:(id)arg2 forRequest:(id)arg3;
- (void)tileServerProxy:(id)arg1 requestFinished:(id)arg2;
- (void)tileServerProxy:(id)arg1 requestMovedToNetwork:(id)arg2;

@end
