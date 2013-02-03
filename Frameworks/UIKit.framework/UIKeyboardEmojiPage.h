/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, <UIKeyboardEmojiController>, UITouch, NSMutableArray, UIKeyboardEmojiView;

@interface UIKeyboardEmojiPage : UIControl {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    UITouch *_activeTouch;
    <UIKeyboardEmojiController> *_controller;
    NSArray *_emoji;
    } _emojiPadding;
    } _emojiSize;
    NSMutableArray *_emojiViews;
    } _keyActivationRect;
    } _margin;
    BOOL _needsLayout;
    int _numCols;
    int _numPages;
    int _numRows;
    UIKeyboardEmojiView *_onDisplay;
    NSString *_optionalText;
    UIKeyboardEmojiView *_pendingDisplay;
    UIKeyboardEmojiView *_touched;
}

@property(retain) UITouch * activeTouch;
@property <UIKeyboardEmojiController> * controller;
@property(retain) NSArray * emoji;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } keyActivationRect;
@property(retain) UIKeyboardEmojiView * onDisplay;
@property(retain) NSString * optionalText;
@property(retain) UIKeyboardEmojiView * pendingDisplay;
@property(retain) UIKeyboardEmojiView * touched;

+ (struct CGSize { float x1; float x2; })emojiSize:(BOOL)arg1;

- (id)activeTouch;
- (void)cancelPendingPopupChanges;
- (void)checkForStalePopup:(id)arg1;
- (void)clearSubviews;
- (id)closestForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned char)colCount:(BOOL)arg1;
- (id)controller;
- (void)deactivatePopUps;
- (void)dealloc;
- (id)emoji;
- (void)generateSubviews;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })keyActivationRect;
- (struct CGPoint { float x1; float x2; })margin:(BOOL)arg1;
- (id)onDisplay;
- (id)optionalText;
- (struct CGPoint { float x1; float x2; })padding:(BOOL)arg1;
- (id)pendingDisplay;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForRow:(int)arg1 Col:(int)arg2;
- (void)removeDisplayedPopup:(id)arg1;
- (unsigned char)rowCount:(BOOL)arg1;
- (void)setActiveTouch:(id)arg1;
- (void)setController:(id)arg1;
- (void)setEmoji:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setKeyActivationRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOnDisplay:(id)arg1;
- (void)setOptionalText:(id)arg1;
- (void)setPendingDisplay:(id)arg1;
- (void)setTouched:(id)arg1;
- (void)showPendingPopup:(id)arg1;
- (int)takeEmoji:(id)arg1 fromIndex:(int)arg2;
- (void)touchBegan:(id)arg1;
- (void)touchCancelled:(id)arg1;
- (void)touchEnded:(id)arg1;
- (void)touchMoved:(id)arg1;
- (id)touched;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateLayoutConstants;

@end
