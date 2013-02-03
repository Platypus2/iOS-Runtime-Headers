/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIColor, UIWebPaginationInfo, UITextView, UIFont;

@interface UISimpleTextPrintFormatter : UIPrintFormatter {
    UIWebPaginationInfo *_paginationInfo;
    UITextView *_textView;
}

@property(retain) UIColor * color;
@property(retain) UIFont * font;
@property(copy) NSString * text;
@property int textAlignment;

- (int)_recalcPageCount;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forPageAtIndex:(int)arg2;
- (id)font;
- (id)initWithText:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForPageAtIndex:(int)arg1;
- (void)removeFromPrintPageRenderer;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (id)text;
- (int)textAlignment;

@end
