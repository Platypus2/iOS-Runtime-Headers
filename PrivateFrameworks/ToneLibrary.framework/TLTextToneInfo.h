/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class NSString;

@interface TLTextToneInfo : NSObject {
    unsigned long _actualSound;
    NSString *_filePath;
    unsigned long _previewSound;
}

@property(readonly) unsigned long actualSound;
@property(readonly) NSString * filePath;
@property(readonly) unsigned long previewSound;

- (unsigned long)actualSound;
- (void)dealloc;
- (id)filePath;
- (id)initWithPreviewSound:(unsigned long)arg1 actualSound:(unsigned long)arg2 filePath:(id)arg3;
- (unsigned long)previewSound;

@end
