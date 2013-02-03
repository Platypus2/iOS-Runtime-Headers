/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVLeafItem, CoreDAVItem;

@interface CalDAVCalendarServerNotificationItem : CoreDAVItem {
    CoreDAVItem *_content;
    CoreDAVLeafItem *_dtstamp;
}

@property(retain) CoreDAVItem * content;
@property(retain) CoreDAVLeafItem * dtstamp;

- (id)content;
- (id)copyParseRules;
- (void)dealloc;
- (id)description;
- (id)dtstamp;
- (id)init;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)setContent:(id)arg1;
- (void)setDtstamp:(id)arg1;

@end
