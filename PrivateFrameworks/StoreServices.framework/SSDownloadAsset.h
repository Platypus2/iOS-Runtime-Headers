/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSURLRequest, NSString, SSURLRequestProperties;

@interface SSDownloadAsset : SSEntity {
    int _assetType;
    SSURLRequestProperties *_localProperties;
}

@property(readonly) NSURLRequest * URLRequest;
@property(readonly) SSURLRequestProperties * URLRequestProperties;
@property(readonly) NSString * downloadFileName;
@property(readonly) NSString * downloadPath;
@property(getter=isExternal,readonly) BOOL external;
@property(readonly) long long fileSize;
@property(readonly) NSString * finalizedPath;
@property(readonly) NSArray * sinfs;

+ (long long)_getExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_setValuesMessage;
+ (id)assetWithURL:(id)arg1 type:(int)arg2;

- (id)URLRequest;
- (id)URLRequestProperties;
- (id)_copyURLRequestProperties;
- (id)_initWithDownloadMetadata:(id)arg1 type:(id)arg2;
- (int)_legacyAssetType;
- (void)_resetLocalIVars;
- (int)assetType;
- (long long)bytesDownloaded;
- (void*)copyXPCEncoding;
- (void)dealloc;
- (id)downloadFileName;
- (id)downloadPath;
- (long long)fileSize;
- (id)finalizedPath;
- (id)initWithURLRequest:(id)arg1 type:(int)arg2;
- (id)initWithURLRequest:(id)arg1;
- (BOOL)isExternal;
- (id)sinfs;

@end
