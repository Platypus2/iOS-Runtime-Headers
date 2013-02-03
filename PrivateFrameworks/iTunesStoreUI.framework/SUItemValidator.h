/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, NSArray;

@interface SUItemValidator : NSObject {
    NSMutableArray *_collectionTests;
    NSMutableArray *_itemTests;
}

@property(readonly) NSArray * validationTests;

+ (id)purchaseValidator;

- (void)addCollectionValidationTests:(id)arg1;
- (void)addItemValidationTests:(id)arg1;
- (void)dealloc;
- (void)removeValidationTest:(id)arg1;
- (BOOL)validateItems:(id)arg1 error:(id*)arg2;
- (BOOL)validateItems:(id)arg1 offers:(id)arg2 error:(id*)arg3;
- (id)validationTests;

@end
