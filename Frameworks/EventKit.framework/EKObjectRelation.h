/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKObject, NSString;

@interface EKObjectRelation : NSObject {
    BOOL _dirty;
    NSString *_inverseName;
    BOOL _loaded;
    EKObject *_owner;
    NSString *_relationName;
}

@property(readonly) NSString * inverseName;
@property(readonly) EKObject * owner;
@property(readonly) NSString * relationName;

- (void)_addRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3;
- (void)_removeRelatedObject:(id)arg1 setInverse:(BOOL)arg2 dirty:(BOOL)arg3;
- (id)committedValue;
- (void)dealloc;
- (void)didCommit;
- (id)initWithOwner:(id)arg1 relationName:(id)arg2 inverseRelationName:(id)arg3;
- (id)inverseName;
- (BOOL)isDirty;
- (BOOL)isWeak;
- (id)owner;
- (void)refresh;
- (void)relatedObjectDidChange;
- (id)relationName;
- (void)reset;
- (void)rollback;
- (void)updatePersistentObject;
- (BOOL)validate:(id*)arg1;

@end
