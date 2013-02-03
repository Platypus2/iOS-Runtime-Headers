/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, AVAssetWriterInputConfigurationState, AVWeakReference, AVOutputSettings, NSDictionary;

@interface AVAssetWriterInputHelper : NSObject {
    AVAssetWriterInputConfigurationState *_configurationState;
    AVWeakReference *_weakReferenceToAssetWriterInput;
}

@property(readonly) AVAssetWriterInputConfigurationState * configurationState;
@property BOOL expectsMediaDataInRealTime;
@property int mediaTimeScale;
@property(readonly) NSString * mediaType;
@property(copy) NSArray * metadata;
@property(readonly) AVOutputSettings * outputSettings;
@property(readonly) struct __CVPixelBufferPool { }* pixelBufferPool;
@property(getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData;
@property(retain) struct opaqueCMFormatDescription { }* sampleBufferFormatHint;
@property(copy) NSDictionary * sourcePixelBufferAttributes;
@property(readonly) int status;
@property struct CGAffineTransform { float a; float b; float c; float d; float tx; float ty; } transform;
@property(retain) AVWeakReference * weakReferenceToAssetWriterInput;

- (BOOL)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)configurationState;
- (void)dealloc;
- (BOOL)expectsMediaDataInRealTime;
- (id)initWithConfigurationState:(id)arg1;
- (BOOL)isReadyForMoreMediaData;
- (void)markAsFinished;
- (int)mediaTimeScale;
- (id)mediaType;
- (id)metadata;
- (id)outputSettings;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (void)prepareToEndSession;
- (BOOL)prepareToFinishWritingReturningError:(id*)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(struct dispatch_queue_s { }*)arg1 usingBlock:(id)arg2;
- (struct opaqueCMFormatDescription { }*)sampleBufferFormatHint;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSampleBufferFormatHint:(struct opaqueCMFormatDescription { }*)arg1;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setWeakReferenceToAssetWriterInput:(id)arg1;
- (id)sourcePixelBufferAttributes;
- (int)status;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)arg1;
- (void)transitionToTerminalStatus:(int)arg1;
- (id)weakReferenceToAssetWriterInput;

@end
