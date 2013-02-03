/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableArray, NSArray;

@interface IMPeople : NSObject {
    int _coalesceCount;
    BOOL _hidePeople;
    NSMutableArray *_people;
}

@property(readonly) BOOL coalescingChanges;
@property(readonly) unsigned int count;
@property(readonly) NSArray * groups;
@property(setter=setShouldHidePeople:) BOOL hidePeople;
@property(readonly) NSArray * people;

- (void)_addedPeople:(id)arg1;
- (BOOL)addIMHandle:(id)arg1;
- (void)addNotificationObserver:(id)arg1 selector:(SEL)arg2;
- (BOOL)addPeopleFromArray:(id)arg1 skipMe:(BOOL)arg2;
- (BOOL)addPeopleFromArray:(id)arg1;
- (void)addedIMHandle:(id)arg1;
- (void)beginCoalescedChanges;
- (BOOL)coalescingChanges;
- (BOOL)containsIMHandle:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (void)endCoalescedChanges;
- (id)groups;
- (BOOL)hidePeople;
- (void)imHandle:(id)arg1 buddyStatusChanged:(BOOL)arg2;
- (id)people;
- (BOOL)removeIMHandle:(id)arg1;
- (void)removeNotificationObserver:(id)arg1;
- (BOOL)removePeopleFromArray:(id)arg1;
- (void)removedIMHandle:(id)arg1;
- (void)setShouldHidePeople:(BOOL)arg1;

@end
