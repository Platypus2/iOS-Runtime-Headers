/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem {
    AVChapterMetadataItemInternal *_privChapter;
}

- (void)_addFigAssetNotifications;
- (long)_chapterGroupIndex;
- (long)_chapterIndex;
- (void)_ensureValueLoadedSync;
- (id)_initWithAsset:(id)arg1 chapterGroupIndex:(long)arg2 chapterIndex:(long)arg3 chapterType:(id)arg4 locale:(id)arg5 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7;
- (void)_removeFigAssetNotifications;
- (void)_setValueStatus:(int)arg1 figErrorCode:(long)arg2;
- (void)_takeValueFrom:(id)arg1;
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)arg1;
- (int)_valueStatus;
- (void)cancelLoading;
- (id)commonKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)extraAttributes;
- (void)finalize;
- (id)init;
- (id)key;
- (id)keySpace;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (id)locale;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)value;

@end
