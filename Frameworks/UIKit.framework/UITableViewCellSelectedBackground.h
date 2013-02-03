/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface UITableViewCellSelectedBackground : UIView {
    BOOL _multiselect;
    UIColor *_multiselectBackgroundColor;
    int _selectionStyle;
    UIColor *_selectionTintColor;
}

@property(getter=isMultiselect) BOOL multiselect;
@property(retain) UIColor * multiselectBackgroundColor;
@property int selectionStyle;
@property(retain) UIColor * selectionTintColor;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isMultiselect;
- (id)multiselectBackgroundColor;
- (int)selectionStyle;
- (id)selectionTintColor;
- (void)setMultiselect:(BOOL)arg1;
- (void)setMultiselectBackgroundColor:(id)arg1;
- (void)setSelectionStyle:(int)arg1;
- (void)setSelectionTintColor:(id)arg1;

@end
