/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIImageView, UIButton, UIView, EKStrikethroughLabel, UIView<CalendarLabelTextMetrics>, CalendarCustomTimeView;

@interface EKEventInfoHeaderView : UIView {
    CalendarCustomTimeView *_customTimeView;
    UIImageView *_dotView;
    UIButton *_editButton;
    UIView *_editButtonClippingView;
    BOOL _isBirthday;
    float _lastLayoutWidth;
    float _lastMaxY;
    UIView<CalendarLabelTextMetrics> *_locationView;
    int _style;
    UIView *_timeClippingView;
    EKStrikethroughLabel *_titleView;
    unsigned int _visibleHeaderItems;
}

- (id)_customTimeView;
- (id)_editButton;
- (id)_locationView;
- (id)_titleView;
- (void)dealloc;
- (id)editButton;
- (id)initWithEvent:(id)arg1 color:(id)arg2 style:(int)arg3 opaque:(BOOL)arg4;
- (id)initWithEvent:(id)arg1 color:(id)arg2 style:(int)arg3;
- (void)layoutForWidth:(float)arg1;
- (float)layoutHeaderForWidth:(float)arg1;
- (void)setEditButtonVisibility:(BOOL)arg1;
- (BOOL)setEvent:(id)arg1 color:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)textColorForCalendarColor:(id)arg1;

@end
