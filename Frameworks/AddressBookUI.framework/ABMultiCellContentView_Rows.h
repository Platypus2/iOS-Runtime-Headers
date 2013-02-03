/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableArray;

@interface ABMultiCellContentView_Rows : ABMultiCellContentView <UITextFieldDelegate> {
    NSMutableArray *_entryFields;
    NSMutableArray *_horizontalDividers;
    BOOL _isAttemptingFirstResponder;
}

+ (struct CGSize { float x1; float x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { float x1; float x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6 includeRows:(BOOL)arg7;
+ (struct CGSize { float x1; float x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { float x1; float x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;
+ (unsigned int)rowsForPropertyGroup:(id)arg1 info:(id)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })zerothHorizontalDividerFrameForValueViewRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundRectForView:(id)arg1;
- (void)dealloc;
- (void)entryFieldBeginAttemptBecomeFirstResponder:(id)arg1;
- (void)entryFieldDidEndEditing:(id)arg1;
- (void)entryFieldEndAttemptBecomeFirstResponder:(id)arg1;
- (id)entryFieldForRow:(unsigned int)arg1;
- (id)hitTestForTouches:(id)arg1 withEvent:(id)arg2;
- (id)keyboardSettingsForKey:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForView:(id)arg1;
- (void)reload;
- (void)reloadFromModel;
- (void)reloadFromModelIncludingRows:(BOOL)arg1;
- (void)reloadIncludingRows:(BOOL)arg1;
- (void)setAbCellStyle:(int)arg1;
- (BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)updateSubviewsForNewStateAnimated:(BOOL)arg1;
- (id)viewForFirstResponder;

@end
