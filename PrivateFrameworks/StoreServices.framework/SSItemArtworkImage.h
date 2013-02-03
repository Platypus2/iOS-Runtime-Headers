/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSURL, NSMutableDictionary, NSString;

@interface SSItemArtworkImage : NSObject <SSCoding, NSCopying> {
    NSMutableDictionary *_dictionary;
    NSString *_imageKind;
}

@property(retain) NSURL * URL;
@property(readonly) int height;
@property(copy) NSString * imageKind;
@property(readonly) int imageOrientation;
@property(readonly) float imageScale;
@property(readonly) struct CGSize { float x1; float x2; } imageSize;
@property(getter=isPrerendered,readonly) BOOL prerendered;
@property(readonly) int width;

- (id)URL;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (id)copyPropertyListEncoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (int)height;
- (id)imageKind;
- (int)imageOrientation;
- (float)imageScale;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)initWithArtworkDictionary:(id)arg1;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)initWithXPCEncoding:(void*)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPrerendered;
- (void)setImageKind:(id)arg1;
- (void)setImageKindWithTypeName:(id)arg1 variantName:(id)arg2;
- (void)setURL:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (int)width;

@end
