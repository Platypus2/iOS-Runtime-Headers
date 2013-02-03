/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSData, CKMediaObject, NSArray;

@interface CKMediaObjectMessagePart : CKMessagePart {
    NSData *_composeData;
    NSArray *_composeImages;
    NSData *_dataForHighlight;
    CKMediaObject *_mediaObject;
    NSData *_previewData;
}

@property(copy) NSArray * composeImages;
@property(readonly) CKMediaObject * mediaObject;

- (int)_orientation;
- (id)composeData;
- (id)composeImages;
- (void)copyToPasteboard;
- (void)dealloc;
- (id)detachedCopy;
- (id)highlightData;
- (id)initWithMediaObject:(id)arg1;
- (BOOL)isDisplayable;
- (id)mediaObject;
- (id)previewData;
- (void)setComposeData:(id)arg1;
- (void)setComposeImages:(id)arg1;
- (void)setPreviewData:(id)arg1;
- (int)type;
- (BOOL)usesColoredBalloon;

@end
