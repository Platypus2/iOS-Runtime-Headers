/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, AVWeakReference, AVAssetCache, NSURL;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
    AVWeakReference *_weakReference;
}

@property(readonly) NSURL * URL;
@property(readonly) AVAssetCache * assetCache;
@property(readonly) NSArray * chapterGroupInfo;
@property(getter=isCompatibleWithSavedPhotosAlbum,readonly) BOOL compatibleWithSavedPhotosAlbum;
@property(getter=isComposable,readonly) BOOL composable;
@property(readonly) NSURL * downloadDestinationURL;
@property(readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property(getter=isExportable,readonly) BOOL exportable;
@property(getter=_figAsset,readonly) struct OpaqueFigAsset { }* figAsset;
@property(getter=_formatReader,readonly) struct OpaqueFigFormatReader { }* formatReader;
@property(readonly) BOOL hasProtectedContent;
@property(readonly) NSString * lyrics;
@property(getter=isPlayable,readonly) BOOL playable;
@property(getter=_playbackItem,readonly) struct OpaqueFigPlaybackItem { }* playbackItem;
@property(getter=isReadable,readonly) BOOL readable;
@property(readonly) unsigned int referenceRestrictions;
@property(readonly) NSURL * resolvedURL;
@property(readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly;
@property(readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;
@property(getter=_isStreaming,readonly) BOOL streaming;
@property(getter=_weakReference,readonly) AVWeakReference * weakReference;

+ (void)initialize;

- (id)URL;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (struct OpaqueFigAsset { }*)_figAsset;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (BOOL)_isStreaming;
- (id)_mapFigErrorCodeToNSError:(long)arg1;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)_serverHasDied;
- (id)_weakReference;
- (id)assetCache;
- (id)assetInspector;
- (void)cancelLoading;
- (id)chapterGroupInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)downloadDestinationURL;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (BOOL)hasProtectedContent;
- (id)init;
- (id)initWithURL:(id)arg1;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (BOOL)isReadable;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id)arg3;
- (id)lyrics;
- (unsigned int)referenceRestrictions;
- (id)resolvedURL;
- (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
- (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
- (int)statusOfValueForKey:(id)arg1 error:(id*)arg2;

@end
