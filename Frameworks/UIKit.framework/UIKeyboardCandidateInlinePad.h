/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardCandidateInlineFloatingView;

@interface UIKeyboardCandidateInlinePad : UIKeyboardCandidateInline {
    UIKeyboardCandidateInlineFloatingView *_inlineView;
}

@property(retain) UIKeyboardCandidateInlineFloatingView * inlineView;

- (void)dealloc;
- (BOOL)handleNumberKey:(unsigned int)arg1;
- (BOOL)handleTabKeyWithShift:(BOOL)arg1;
- (void)hideInlineView;
- (void)inlineShowCandidateAtIndex:(unsigned int)arg1;
- (void)inlineShowNextCandidate;
- (void)inlineShowPreviousCandidate;
- (id)inlineView;
- (void)setInlineView:(id)arg1;
- (void)showInlineView;

@end
