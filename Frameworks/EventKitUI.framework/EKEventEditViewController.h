/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEvent, NSString, EKEventEditor, <EKEventEditViewDelegate>, EKEventStore;

@interface EKEventEditViewController : UINavigationController {
    <EKEventEditViewDelegate> *_editViewDelegate;
    EKEventEditor *_editor;
    EKEvent *_event;
    NSString *_eventId;
    BOOL _showsTimeZone;
    EKEventStore *_store;
}

@property <EKEventEditViewDelegate> * editViewDelegate;
@property(retain) EKEventEditor * editor;
@property(retain) EKEvent * event;
@property(retain) EKEventStore * eventStore;
@property BOOL showsTimeZone;

+ (void)setDefaultDatesForEvent:(id)arg1;

- (void)_storeChanged:(id)arg1;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (id)editViewDelegate;
- (id)editor;
- (id)event;
- (void)eventEditor:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)eventEditor:(id)arg1 prepareCalendarItemForEdit:(id)arg2;
- (id)eventStore;
- (void)handleTapOutside;
- (id)initWithEvent:(id)arg1 store:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)refreshStartAndEndDates;
- (BOOL)saveWithSpan:(int)arg1 animated:(BOOL)arg2;
- (BOOL)scrollToNotes;
- (void)setEditViewDelegate:(id)arg1;
- (void)setEditor:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setScrollToNotes:(BOOL)arg1;
- (void)setShowAttachments:(BOOL)arg1;
- (void)setShowsTimeZone:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)showAttachments;
- (BOOL)showsTimeZone;

@end
