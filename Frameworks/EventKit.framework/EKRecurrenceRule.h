/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKRecurrenceEnd, NSString, NSArray;

@interface EKRecurrenceRule : EKObject <NSCopying> {
    EKRecurrenceEnd *_cachedEnd;
}

@property(retain) EKRecurrenceEnd * cachedEnd;
@property(readonly) NSString * calendarIdentifier;
@property(readonly) NSArray * daysOfTheMonth;
@property(readonly) NSArray * daysOfTheWeek;
@property(readonly) NSArray * daysOfTheYear;
@property(readonly) int firstDayOfTheWeek;
@property(readonly) int frequency;
@property(readonly) int interval;
@property(readonly) NSArray * monthsOfTheYear;
@property(copy) EKRecurrenceEnd * recurrenceEnd;
@property(readonly) NSArray * setPositions;
@property(readonly) NSArray * weeksOfTheYear;

+ (id)iCalendarValueFromDate:(id)arg1 isDateOnly:(BOOL)arg2 isFloating:(BOOL)arg3;
+ (id)iCalendarValueFromDayOfTheWeek:(unsigned int)arg1;
+ (id)iCalendarValueFromRecurrenceType:(int)arg1;
+ (id)recurrenceRuleWithType:(int)arg1 interval:(unsigned int)arg2 end:(id)arg3;

- (id)UUID;
- (id)_persistentRule;
- (id)cachedEnd;
- (id)cachedEndDate;
- (id)calendarIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (id)daysOfTheYear;
- (void)dealloc;
- (id)description;
- (BOOL)dirtyStateMayAffectExceptionDates;
- (int)firstDayOfTheWeek;
- (int)frequency;
- (struct { int x1; int x2; int x3; int x4; int x5; double x6; })gregorianUnits;
- (id)init;
- (id)initRecurrenceWithFrequency:(int)arg1 interval:(int)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9;
- (id)initRecurrenceWithFrequency:(int)arg1 interval:(int)arg2 end:(id)arg3;
- (int)interval;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)monthsOfTheYear;
- (id)owner;
- (id)recurrenceEnd;
- (void)reset;
- (void)setCachedEnd:(id)arg1;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (void)setDaysOfTheYear:(id)arg1;
- (void)setFirstDayOfTheWeek:(unsigned int)arg1;
- (void)setFrequency:(int)arg1;
- (void)setInterval:(int)arg1;
- (void)setMonthsOfTheYear:(id)arg1;
- (id)setPositions;
- (void)setRecurrenceEnd:(id)arg1;
- (void)setSetPositions:(id)arg1;
- (void)setWeeksOfTheYear:(id)arg1;
- (BOOL)shouldPinMonthDays;
- (id)stringValueAsDateOnly:(BOOL)arg1 isFloating:(BOOL)arg2;
- (id)weeksOfTheYear;

@end
