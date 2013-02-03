/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}

+ (struct __CTParagraphStyle { }*)_gkCTParagraphStyleWithLineBreakMode:(unsigned char)arg1 textAlignment:(unsigned char)arg2 lineHeight:(float)arg3 leading:(float)arg4;
+ (struct __CTParagraphStyle { }*)_gkCTParagraphStyleWithLineBreakMode:(unsigned char)arg1;
+ (void)_setAttributedDictionaryClass:(Class)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)attributedStringWithFormatAndAttributes:(id)arg1;

- (unsigned long)_cfTypeID;
- (id)_createAttributedSubstringWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_gkDrawAdjustingFontSizeInContext:(struct CGContext { }*)arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_gkDrawInContext:(struct CGContext { }*)arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_gkInstantiateCoreTextRenderer;
- (id)_gkRenderer;
- (void)_gkSetRenderer:(id)arg1;
- (struct CGSize { float x1; float x2; })_gkSize;
- (struct CGSize { float x1; float x2; })_gkSizeWithConstraints:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })_gkSizeWithMinFontSize:(float)arg1 actualFontSize:(float*)arg2 forWidth:(float)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (BOOL)attribute:(id)arg1 existsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)attributedStringByWeaklyAddingAttributes:(id)arg1;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacingCharactersInRanges:(const struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 numberOfRanges:(int)arg3 withString:(id)arg4;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)attributesAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)attributesAtIndex:(unsigned int)arg1 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAttribute:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 options:(unsigned int)arg3 usingBlock:(id)arg4;
- (void)enumerateAttributesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (BOOL)getRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 ofAttribute:(id)arg2 withValue:(id)arg3;
- (BOOL)getRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 ofAttribute:(id)arg2 withValue:(id)arg3;
- (BOOL)getRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 ofAttribute:(id)arg2;
- (BOOL)getRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 ofAttribute:(id)arg2;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAttributedString:(id)arg1;
- (unsigned int)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)string;
- (id)trimmedString;

@end
