/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, SSRequest, NSSet, NSMutableArray;

@interface SSDevice : NSObject <SSRequestDelegate> {
    struct dispatch_queue_s { } *_dispatchQueue;
    NSMutableArray *_loadStoreFrontHandlers;
    SSRequest *_loadStoreFrontRequest;
    NSString *_localStoreFrontIdentifier;
    BOOL _localStoreFrontIsTransient;
    id _mediaLibraryIdentifier;
    NSMutableArray *_simpleRequests;
    id _softwareLibraryIdentifier;
    NSString *_synchedStoreFrontIdentifier;
}

@property(readonly) NSSet * automaticDownloadKinds;
@property(copy) NSString * mediaLibraryIdentifier;
@property(copy) NSString * softwareLibraryIdentifier;
@property(readonly) NSString * storeFrontIdentifier;
@property(getter=isStoreFrontIdentifierTransient,readonly) BOOL storeFrontIdentifierTransient;
@property(readonly) NSString * synchedStoreFrontIdentifier;

+ (id)copyCachedAvailableItemKinds;
+ (id)currentDevice;
+ (BOOL)promptNeedsDisplay:(id)arg1;
+ (BOOL)setCachedAvailableItemKinds:(id)arg1;
+ (void)setLastPromptAttemptDate:(id)arg1 forPromptWithIdentifier:(id)arg2;
+ (void)setPromptWithIdentifier:(id)arg1 needsDisplay:(BOOL)arg2;

- (void)_cleanupSimpleRequest:(id)arg1;
- (void)_finishRequestWithError:(id)arg1;
- (void)_invalidateSoftwareCUID;
- (void)_postStoreFrontDidChangeNotification;
- (void)_reloadAfterStoreFrontChange;
- (void)_reloadStoreFrontIdentifier;
- (void)_setLocalStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2;
- (BOOL)_setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2;
- (void)_trackSimpleRequest:(id)arg1;
- (void)_updateAutomaticDownloadKinds:(id)arg1 withValue:(id)arg2 completionBlock:(id)arg3;
- (id)automaticDownloadKinds;
- (id)copyStoreFrontRequestHeaders;
- (void)dealloc;
- (void)getAvailableItemKindsWithBlock:(id)arg1;
- (id)init;
- (BOOL)isStoreFrontIdentifierTransient;
- (void)loadStoreFrontWithCompletionHandler:(id)arg1;
- (id)mediaLibraryIdentifier;
- (void)minusAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(id)arg2;
- (void)reloadStoreFrontIdentifier;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)resetStoreFrontForSignOut;
- (void)setAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(id)arg2;
- (void)setMediaLibraryIdentifier:(id)arg1;
- (void)setSoftwareLibraryIdentifier:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2;
- (void)setStoreFrontIdentifierWithInfo:(id)arg1;
- (void)setStoreFrontWithResponseHeaders:(id)arg1;
- (void)showPromptWithIdentifier:(id)arg1 completionHandler:(id)arg2;
- (id)softwareLibraryIdentifier;
- (id)storeFrontIdentifier;
- (id)synchedStoreFrontIdentifier;
- (void)synchronizeAutomaticDownloadKinds;
- (void)unionAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(id)arg2;

@end
