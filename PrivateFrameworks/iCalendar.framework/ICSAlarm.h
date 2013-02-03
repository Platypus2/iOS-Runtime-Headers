/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class NSArray, ICSTrigger, NSString, ICSStructuredLocation;

@interface ICSAlarm : ICSComponent {
}

@property int action;
@property(retain) NSArray * attach;
@property(retain) NSArray * attendee;
@property(retain) NSString * description;
@property(retain) NSString * summary;
@property(retain) ICSTrigger * trigger;
@property(retain) NSString * x_apple_proximity;
@property(retain) ICSStructuredLocation * x_apple_structured_location;
@property(retain) NSString * x_wr_alarmuid;

+ (id)ICSStringFromAction:(int)arg1;
+ (int)actionFromICSString:(id)arg1;
+ (id)name;

- (int)action;
- (void)fixAlarm;
- (void)setAction:(int)arg1;
- (void)setX_apple_proximity:(id)arg1;
- (void)setX_wr_alarmuid:(id)arg1;
- (id)x_apple_proximity;
- (id)x_wr_alarmuid;

@end
