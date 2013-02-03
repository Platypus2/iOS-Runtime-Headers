/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityImportContext, PFUbiquityTransactionLog, NSManagedObjectContext, NSDictionary, NSString, NSMutableSet, NSPersistentStoreCoordinator, NSMutableDictionary;

@interface _PFUbiquityRecordImportOperation : NSOperation <NSManagedObjectContextFaultingDelegate> {
    id _delegate;
    NSMutableSet *_deletedObjectIDs;
    PFUbiquityImportContext *_importContext;
    int _inMemorySequenceNumber;
    NSDictionary *_initialStoreKnowledgeVector;
    NSMutableSet *_insertedObjectIDs;
    NSString *_localPeerID;
    BOOL _lockedExistingCoord;
    NSDictionary *_logScore;
    NSManagedObjectContext *_moc;
    NSDictionary *_newUbiquityKnowledgeVector;
    NSPersistentStoreCoordinator *_psc;
    NSMutableDictionary *_resolvedConflicts;
    BOOL _transactionDidRollback;
    PFUbiquityTransactionLog *_transactionLog;
    NSMutableSet *_updatedObjectIDs;
}

@property id delegate;
@property(readonly) NSMutableSet * deletedObjectIDs;
@property(readonly) PFUbiquityImportContext * importContext;
@property(readonly) NSDictionary * initialStoreKnowledgeVector;
@property(readonly) NSMutableSet * insertedObjectIDs;
@property(readonly) NSString * localPeerID;
@property BOOL lockedExistingCoord;
@property(retain) NSDictionary * logScore;
@property(readonly) NSManagedObjectContext * moc;
@property(readonly) NSDictionary * newUbiquityKnowledgeVector;
@property(readonly) NSPersistentStoreCoordinator * psc;
@property(readonly) NSMutableDictionary * resolvedConflicts;
@property(readonly) BOOL transactionDidRollBack;
@property(readonly) PFUbiquityTransactionLog * transactionLog;
@property(readonly) NSMutableSet * updatedObjectIDs;

- (void)addManagedObject:(id)arg1 missingObjectWithID:(id)arg2 atKey:(id)arg3 toMissingObjects:(id)arg4;
- (void)applyChangesFromStoreSaveSnapshot:(id)arg1 withImportContext:(id)arg2 withError:(id*)arg3;
- (id)checkPSCForStoreIdentifiedByImportContext:(id)arg1;
- (int)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (id)copy;
- (void)dealloc;
- (id)delegate;
- (id)deletedObjectIDs;
- (id)description;
- (void)fillManagedObject:(id)arg1 fromUbiquityDictionary:(id)arg2 missingObjects:(id)arg3 withStoreSaveSnapshot:(id)arg4 andGlobalObjectIDToLocalIDURIMap:(id)arg5;
- (id)importContext;
- (id)initWithTransactionLog:(id)arg1 withLocalPeerID:(id)arg2;
- (id)initWithTransactionLog:(id)arg1;
- (id)initialStoreKnowledgeVector;
- (void)initializePersistentStoreCoordinatorForImportContext:(id)arg1;
- (id)insertedObjectIDs;
- (id)localPeerID;
- (BOOL)lockedExistingCoord;
- (id)logScore;
- (void)main;
- (id)moc;
- (id)newPersistentStoreCoordinatorForImportContext:(id)arg1;
- (id)newUbiquityKnowledgeVector;
- (void)notifyDelegateOfError:(id)arg1;
- (void)processObjects:(id)arg1 withState:(int)arg2 withGlobalIDIndexesToLocalURIMap:(id)arg3 andImportContext:(id)arg4 outError:(id*)arg5;
- (id)psc;
- (id)resolvedConflicts;
- (void)respondToStoreTransactionStateChangeNotification:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLockedExistingCoord:(BOOL)arg1;
- (void)setLogScore:(id)arg1;
- (BOOL)transactionDidRollBack;
- (id)transactionLog;
- (id)updatedObjectIDs;

@end
