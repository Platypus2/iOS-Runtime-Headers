/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptABRecord, NSString, NSArray;

@interface SUScriptABRecord : SUScriptObject {
    void *_record;
}

@property(readonly) NSString * compositeName;
@property(readonly) id hasImageData;
@property(readonly) NSArray * linkedPeople;
@property(readonly) NSArray * members;
@property(readonly) void* record;
@property(readonly) int recordID;
@property(readonly) unsigned int recordType;
@property(readonly) SUScriptABRecord * source;

+ (id)_checkInImagePoolRecord:(id)arg1;
+ (void)_checkOutImagePoolRecord:(id)arg1;
+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)_copyArrayFromMultiValue:(void*)arg1 ofType:(unsigned int)arg2;
- (id)_newSingleValueWithLabel:(id)arg1 value:(id)arg2;
- (id)attributeKeys;
- (id)compositeName;
- (void)dealloc;
- (id)getMembersUsingSortOrdering:(id)arg1;
- (id)hasImageData;
- (id)imagePool;
- (id)imageURLWithFormat:(id)arg1;
- (id)init;
- (id)initWithRecord:(void*)arg1;
- (id)linkedPeople;
- (id)members;
- (unsigned int)propertyTypeForProperty:(int)arg1;
- (void*)record;
- (int)recordID;
- (unsigned int)recordType;
- (id)scriptAttributeKeys;
- (id)source;
- (id)valueForProperty:(int)arg1;

@end
