/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, NSSet, NSMutableSet;

@interface MPMediaQueryCriteria : NSObject <NSCopying> {
    NSSet *_collectionPropertiesToFetch;
    int _entityOrder;
    NSMutableSet *_filterPredicates;
    int _groupingType;
    NSSet *_itemPropertiesToFetch;
    NSArray *_orderingProperties;
}

@property(copy) NSSet * collectionPropertiesToFetch;
@property(readonly) BOOL excludesEntitiesWithBlankNames;
@property(copy) NSSet * filterPredicates;
@property int groupingType;
@property(copy) NSSet * itemPropertiesToFetch;
@property(copy) NSArray * orderingProperties;
@property(readonly) BOOL specifiesPlaylistItems;

- (id)ML3CollectionsQueryInLibrary:(id)arg1;
- (id)ML3ItemsQueryInLibrary:(id)arg1 orderingProperties:(id)arg2 nameBlankProperty:(id)arg3;
- (id)ML3ItemsQueryInLibrary:(id)arg1;
- (id)ML3OrderingPropertiesForGroupingType:(int)arg1;
- (id)ML3OrderingPropertiesForMPOrderingProperties:(id)arg1;
- (void)addFilterPredicate:(id)arg1;
- (id)collectionPropertiesToFetch;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)excludesEntitiesWithBlankNames;
- (id)filterPredicates;
- (int)groupingType;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)itemPropertiesToFetch;
- (id)orderingProperties;
- (id)predicateForProperty:(id)arg1;
- (void)removeFilterPredicate:(id)arg1;
- (void)removePredicatesForProperty:(id)arg1;
- (id)sanitizedQueryCriteria;
- (void)setCollectionPropertiesToFetch:(id)arg1;
- (void)setFilterPredicates:(id)arg1;
- (void)setGroupingType:(int)arg1;
- (void)setItemPropertiesToFetch:(id)arg1;
- (void)setOrderingProperties:(id)arg1;
- (BOOL)specifiesPlaylistItems;

@end
