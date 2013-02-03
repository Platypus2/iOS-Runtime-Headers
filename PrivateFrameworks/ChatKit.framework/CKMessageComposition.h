/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString, NSArray;

@interface CKMessageComposition : NSObject {
}

@property(readonly) BOOL hasContent;
@property BOOL isTextOnly;
@property(copy) NSString * markupString;
@property(retain) NSArray * resources;
@property(copy) NSString * subject;
@property(copy) NSString * textString;

+ (void)deleteFileWithPrefix:(id)arg1 path:(id)arg2;
+ (id)messageCompositionFromFileWithPrefix:(id)arg1 path:(id)arg2;
+ (id)newComposition;
+ (id)newCompositionForMessage:(id)arg1;
+ (id)newCompositionForText:(id)arg1;

- (BOOL)hasContent;
- (BOOL)isTextOnly;
- (id)markupString;
- (id)messageParts;
- (id)resources;
- (void)setIsTextOnly:(BOOL)arg1;
- (void)setMarkupString:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTextString:(id)arg1;
- (id)subject;
- (id)textString;
- (void)writeToFileWithPrefix:(id)arg1 path:(id)arg2;

@end
