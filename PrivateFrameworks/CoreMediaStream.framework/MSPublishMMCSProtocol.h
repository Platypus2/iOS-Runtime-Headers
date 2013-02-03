/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSMutableDictionary, <MSPublishStorageProtocolDelegate>;

@interface MSPublishMMCSProtocol : MSMMCSProtocol <MSPublishStorageProtocol> {
    char **_authTokens;
    <MSPublishStorageProtocolDelegate> *_delegate;
    unsigned int *_itemFlags;
    NSMutableDictionary *_itemIDToAssetDict;
    unsigned long long *_itemIDs;
    int _itemsInFlight;
    const char **_signatures;
}

@property <MSPublishStorageProtocolDelegate> * delegate;

- (void)_closeFDForAsset:(id)arg1;
- (int)_getFileDescriptorFromItem:(unsigned long long)arg1;
- (id)_getUTIFromItem:(unsigned long long)arg1;
- (void)_putItemDone:(unsigned long long)arg1 error:(id)arg2;
- (void)_putItemsFailure;
- (void)_requestCompleted;
- (void)computeHashForAsset:(id)arg1;
- (void)deactivate;
- (void)dealloc;
- (id)delegate;
- (id)initWithPersonID:(id)arg1;
- (void)publishAssets:(id)arg1 URL:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
