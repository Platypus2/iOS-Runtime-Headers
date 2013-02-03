/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABSwellTextViewDelegate>, UIColor, NSString, UITextView, UIFont;

@interface ABSwellTextView : UIView <UITextViewDelegate> {
    struct { 
        unsigned int delegateImplementsShouldBeginEditing : 1; 
        unsigned int delegateImplementsShouldEndEditing : 1; 
        unsigned int delegateImplementsDidBeginEditing : 1; 
        unsigned int delegateImplementsDidEndEditing : 1; 
        unsigned int delegateImplementsDidChange : 1; 
    BOOL _allowsEditing;
    <ABSwellTextViewDelegate> *_delegate;
    } _flags;
    float _maxHeight;
    UITextView *_textView;
}

@property BOOL allowsEditing;
@property <ABSwellTextViewDelegate> * delegate;
@property UIFont * font;
@property(getter=isHighlighted) BOOL highlighted;
@property UIColor * highlightedTextColor;
@property float maxHeight;
@property(getter=isScrollEnabled) BOOL scrollEnabled;
@property(retain) UIColor * shadowColor;
@property struct CGSize { float width; float height; } shadowOffset;
@property NSString * text;
@property UIColor * textColor;

+ (float)lineHeightWithFont:(id)arg1;

- (void)_beginPinningInputViews;
- (void)_clearBecomeFirstResponderWhenCapable;
- (void)_endPinningInputViews;
- (void)abUITextView:(id)arg1 contentSizeChanged:(struct CGSize { float x1; float x2; })arg2;
- (float)abUITextView:(id)arg1 heightForContentSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)allowsEditing;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (void)dealloc;
- (id)delegate;
- (id)font;
- (id)highlightedTextColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isFirstResponder;
- (BOOL)isHighlighted;
- (BOOL)isScrollEnabled;
- (float)maxHeight;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection;
- (BOOL)resignFirstResponder;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setKeyboardSettings:(id)arg1;
- (void)setMaxHeight:(float)arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)text;
- (id)textColor;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (void)textViewTextDidChange:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
