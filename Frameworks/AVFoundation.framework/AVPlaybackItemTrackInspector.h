/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {
    unsigned int _mediaType;
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    int _trackID;
    AVWeakReference *_weakReferenceToAsset;
}

- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (id)asset;
- (void)dealloc;
- (float)estimatedDataRate;
- (id)extendedLanguageTag;
- (void)finalize;
- (id)formatDescriptions;
- (unsigned int)hash;
- (BOOL)isEnabled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSelfContained;
- (id)languageCode;
- (id)mediaType;
- (struct CGSize { float x1; float x2; })naturalSize;
- (int)naturalTimeScale;
- (float)nominalFrameRate;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (float)preferredVolume;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })samplePresentationTimeForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (long long)totalSampleDataLength;
- (int)trackID;

@end
