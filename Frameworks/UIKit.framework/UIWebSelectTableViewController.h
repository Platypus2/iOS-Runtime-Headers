/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebSelectPopover, DOMHTMLSelectElement, NSArray;

@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput> {
    BOOL _allowsMultipleSelection;
    NSArray *_cachedItems;
    float _fontSize;
    float _maximumTextWidth;
    UIWebSelectPopover *_popover;
    DOMHTMLSelectElement *_selectionNode;
    unsigned int _singleSelectionIndex;
    int _textAlignment;
}

@property(retain) NSArray * _cachedItems;
@property UIWebSelectPopover * _popover;
@property(retain) DOMHTMLSelectElement * _selectionNode;
@property unsigned int _singleSelectionIndex;
@property int autocapitalizationType;
@property int autocorrectionType;
@property BOOL enablesReturnKeyAutomatically;
@property int keyboardAppearance;
@property int keyboardType;
@property int returnKeyType;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property int spellCheckingType;

- (id)_cachedItems;
- (BOOL)_hasItems;
- (id)_popover;
- (id)_selectionNode;
- (unsigned int)_singleSelectionIndex;
- (void)dealloc;
- (void)deleteBackward;
- (BOOL)hasText;
- (float)heightForItems;
- (id)initWithDOMHTMLSelectNode:(id)arg1 cachedItems:(id)arg2 singleSelectionIndex:(unsigned int)arg3 multipleSelection:(BOOL)arg4;
- (void)insertText:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)set_cachedItems:(id)arg1;
- (void)set_popover:(id)arg1;
- (void)set_selectionNode:(id)arg1;
- (void)set_singleSelectionIndex:(unsigned int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end
