/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIPopoverController, UIImageView, NSMutableArray, UIButton, ABSearchOperation, GKComposeSuggestedContactsController, GKUITheme, UIScrollView, GKComposeRecipientView, NSArray;

@interface GKRecipientSelectionView : UIView <GKComposeRecipientViewDelegate, ABSearchOperationDelegate, GKComposeSuggestedContactsControllerDelegate> {
    const void *_ABAddressBook;
    NSArray *_abProperties;
    UIButton *_addContactButton;
    UIImageView *_backgroundView;
    UIPopoverController *_composePopoverController;
    id _delegate;
    BOOL _duringRotation;
    BOOL _peoplePickerVisible;
    ABSearchOperation *_searchOperation;
    NSMutableArray *_searchResultItems;
    UIImageView *_separatorView;
    BOOL _showingSearchResults;
    GKComposeSuggestedContactsController *_suggestedContactsController;
    GKUITheme *_theme;
    GKComposeRecipientView *_toField;
    UIScrollView *_toFieldScrollingView;
}

@property(readonly) void* ABAddressBook;
@property(readonly) UIButton * addContactButton;
@property(retain) UIPopoverController * composePopoverController;
@property id delegate;
@property BOOL duringRotation;
@property BOOL peoplePickerVisible;
@property(getter=isShowingSearchResults,readonly) BOOL showingSearchResults;
@property(retain) GKComposeSuggestedContactsController * suggestedContactsController;
@property(retain) GKUITheme * theme;

- (void*)ABAddressBook;
- (void)_hideSearchResults:(BOOL)arg1;
- (void)_searchWithText:(id)arg1;
- (void)_showSearchResults:(BOOL)arg1;
- (void)_updateContentSize;
- (void)_updateShowingSearch;
- (void)addButtonClicked:(id)arg1;
- (id)addContactButton;
- (id)composePopoverController;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (void)composeRecipientView:(id)arg1 requestDeleteRecipientAtIndex:(int)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewBeganEditing:(id)arg1;
- (void)composeRecipientViewDidFinishEnteringRecipient:(id)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewEndedEditing:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)duringRotation;
- (BOOL)hasText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 ABProperties:(id)arg2 theme:(id)arg3;
- (BOOL)isShowingSearchResults;
- (void)layoutSubviews;
- (BOOL)peoplePickerVisible;
- (void)reallyResignFirstResponder;
- (id)recipients;
- (void)reflow;
- (void)reset;
- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3;
- (void)searchResultsController:(id)arg1 didSelectRecipient:(id)arg2;
- (void)setComposePopoverController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuringRotation:(BOOL)arg1;
- (void)setPeoplePickerVisible:(BOOL)arg1;
- (void)setSuggestedContactsController:(id)arg1;
- (void)setTheme:(id)arg1;
- (id)suggestedContactsController;
- (id)theme;
- (id)toField;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
