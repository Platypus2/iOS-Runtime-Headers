/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSSetItemsRequest : HSRequest {
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 itemID:(unsigned int)arg2 properties:(id)arg3;

- (id)_bodyDataForItemID:(unsigned int)arg1 properties:(id)arg2;
- (id)_propertyCodeForPropertyName:(id)arg1 valueLength:(unsigned int*)arg2;
- (id)initWithDatabaseID:(unsigned int)arg1 itemID:(unsigned int)arg2 properties:(id)arg3;

@end
