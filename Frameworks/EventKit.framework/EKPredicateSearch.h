/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSPredicate, EKEventStore;

@interface EKPredicateSearch : NSObject {
    id _callback;
    Class _entityClass;
    BOOL _finished;
    NSPredicate *_predicate;
    unsigned int _previous;
    EKEventStore *_store;
}

+ (id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 callback:(id)arg4;

- (BOOL)_receivedData:(struct { struct { int x_1_1_1; int x_1_1_2; } x1; double x2; }[50])arg1 count:(int)arg2;
- (void)dealloc;
- (id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3 callback:(id)arg4;
- (void)run;
- (id)startWithCompletion:(id)arg1;
- (void)terminate;

@end
