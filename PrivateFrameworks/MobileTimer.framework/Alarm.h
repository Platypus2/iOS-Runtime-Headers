/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class NSMutableDictionary, UILocalNotification, NSString, NSDate, <AlarmDelegate>, NSURL;

@interface Alarm : NSObject {
    BOOL _allowsSnooze;
    unsigned int _daySetting;
    <AlarmDelegate> *_delegate;
    BOOL _hasSnapshot;
    unsigned int _hour;
    NSString *_id;
    NSURL *_idUrl;
    NSDate *_lastModified;
    unsigned int _minute;
    UILocalNotification *_notification;
    unsigned int _revision;
    NSMutableDictionary *_settings;
    unsigned char _snapshotAllowsSnooze;
    unsigned int _snapshotDaySetting;
    unsigned int _snapshotHour;
    unsigned int _snapshotMinute;
    NSString *_snapshotSound;
    NSString *_snapshotTitle;
    UILocalNotification *_snoozedNotification;
    NSString *_sound;
    NSString *_title;
    UILocalNotification *_weeklyNotifications[7];
}

+ (id)_newSettingsFromNotification:(id)arg1;
+ (BOOL)_verifyNotificationSettings:(id)arg1 againstAlarmSettings:(id)arg2;
+ (BOOL)_verifyNotificationSettings:(id)arg1 againstUserInfo:(id)arg2;
+ (BOOL)verifyDaySetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyHourSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyIdSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyMinuteSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifySettings:(id)arg1;

- (id)_newBaseDateComponentsForDay:(int)arg1;
- (id)_newNotification:(int)arg1;
- (unsigned int)_notificationsCount;
- (id)alarmId;
- (id)alarmIdUrl;
- (BOOL)allowsSnooze;
- (void)cancelNotifications;
- (int)compareTime:(id)arg1;
- (unsigned int)daySetting;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (void)dropNotifications;
- (void)handleAlarmFired:(id)arg1;
- (void)handleNotificationSnoozed:(id)arg1;
- (unsigned int)hour;
- (id)init;
- (id)initWithDefaultValues;
- (id)initWithNotification:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (BOOL)isActive;
- (BOOL)isEqual:(id)arg1;
- (void)markModified;
- (unsigned int)minute;
- (id)nowDateForOffsetCalculation;
- (void)prepareNotifications;
- (id)rawTitle;
- (void)refreshActiveState;
- (BOOL)repeats;
- (void)revertToSnapshot;
- (void)scheduleNotifications;
- (void)setAllowsSnooze:(BOOL)arg1;
- (void)setDaySetting:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHour:(unsigned int)arg1;
- (void)setMinute:(unsigned int)arg1;
- (void)setSound:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)settings;
- (id)sound;
- (void)takeSnapshot;
- (id)timeZoneForOffsetCalculation;
- (BOOL)tryAddNotification:(id)arg1;
- (id)uiTitle;

@end
