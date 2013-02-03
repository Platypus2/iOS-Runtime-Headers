/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSArray, NSString, MSAsset, NSData;

@interface MSAssetCollection : NSObject <NSCoding> {
    NSString *_assetCollectionID;
    NSArray *_derivedAssets;
    NSString *_fileName;
    MSAsset *_masterAsset;
}

@property(retain) NSString * assetCollectionID;
@property(retain) NSArray * derivedAssets;
@property(retain) NSString * fileName;
@property(retain) MSAsset * masterAsset;
@property(readonly) NSData * masterAssetHash;

+ (id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3;
+ (id)collectionWithMasterAsset:(id)arg1 fileName:(id)arg2;

- (id)assetCollectionID;
- (void)dealloc;
- (id)derivedAssets;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;
- (id)initWithCoder:(id)arg1;
- (id)initWithMasterAsset:(id)arg1 fileName:(id)arg2 derivedAssets:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)masterAsset;
- (id)masterAssetHash;
- (void)setAssetCollectionID:(id)arg1;
- (void)setDerivedAssets:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setMasterAsset:(id)arg1;

@end
