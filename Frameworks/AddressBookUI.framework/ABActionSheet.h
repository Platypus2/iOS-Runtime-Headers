/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABActionSheet : UIActionSheet {
    void *_ab_context;
    struct __CFArray { } *_tag2s;
    struct __CFArray { } *_tag3s;
    struct __CFArray { } *_tag4s;
    struct __CFArray { } *_tags;
}

@property void* ab_context;

- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2;
- (int)_addButtonWithTitle:(id)arg1;
- (id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(int)arg3 tag2:(int)arg4 tag3:(const void*)arg5 tag4:(const void*)arg6;
- (id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(int)arg3 tag2:(int)arg4 tag3:(const void*)arg5;
- (id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(int)arg3 tag2:(int)arg4;
- (id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(int)arg3;
- (int)ab_addButtonWithTitle:(id)arg1 tag:(int)arg2 tag2:(int)arg3;
- (int)ab_addButtonWithTitle:(id)arg1 tag:(int)arg2;
- (void*)ab_context;
- (int)ab_tag2AtIndex:(int)arg1;
- (const void*)ab_tag3AtIndex:(int)arg1;
- (const void*)ab_tag4AtIndex:(int)arg1;
- (int)ab_tagAtIndex:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (void)setAb_context:(void*)arg1;

@end
