/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityKnowledgeVector, NSString, _PFUbiquityStack, PFUbiquityStoreMetadata;

@interface PFUbiquityImportContext : NSObject {
    PFUbiquityKnowledgeVector *_currentKnowledgeVector;
    NSString *_exportingPeerID;
    PFUbiquityKnowledgeVector *_kv;
    _PFUbiquityStack *_stack;
    PFUbiquityStoreMetadata *_storeMetadata;
}

@property(retain) PFUbiquityKnowledgeVector * currentKnowledgeVector;
@property(retain) NSString * exportingPeerID;
@property(retain) PFUbiquityKnowledgeVector * knowledgeVector;
@property(readonly) _PFUbiquityStack * stack;
@property(readonly) PFUbiquityStoreMetadata * storeMetadata;

- (id)currentKnowledgeVector;
- (void)dealloc;
- (id)exportingPeerID;
- (id)initWithStack:(id)arg1 andStoreMetadata:(id)arg2;
- (id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 withLocalPeerID:(id)arg3;
- (id)knowledgeVector;
- (void)setCurrentKnowledgeVector:(id)arg1;
- (void)setExportingPeerID:(id)arg1;
- (void)setKnowledgeVector:(id)arg1;
- (id)stack;
- (id)storeMetadata;

@end
