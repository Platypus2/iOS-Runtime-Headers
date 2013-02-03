/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSNumber, <ISStoreURLOperationDelegate>;

@interface ISStoreURLOperation : ISURLOperation {
    NSNumber *_authenticatedDSID;
    BOOL _canSendGUIDParameter;
    BOOL _needsAuthentication;
    BOOL _needsURLBag;
    BOOL _urlKnownToBeTrusted;
    BOOL _useUserSpecificURLBag;
}

@property(retain) NSNumber * authenticatedDSID;
@property BOOL canSendGUIDParameter;
@property <ISStoreURLOperationDelegate> * delegate;
@property BOOL needsAuthentication;
@property BOOL needsURLBag;
@property BOOL urlKnownToBeTrusted;
@property BOOL useUserSpecificURLBag;

+ (void)_addITunesStoreHeadersToRequest:(id)arg1 withBagContext:(id)arg2;
+ (id)_restrictionsHeaderValue;
+ (void)addITunesStoreHeadersToRequest:(id)arg1;
+ (void)handleITunesStoreResponseHeaders:(id)arg1;
+ (id)itemPingOperationWithIdentifier:(unsigned long long)arg1 urlBagKey:(id)arg2;
+ (id)pingOperationWithUrl:(id)arg1;
+ (id)propertyListOperationWithURLBagKey:(id)arg1;

- (id)_account;
- (void)_addStandardQueryParametersForURL:(id)arg1;
- (BOOL)_authenticateReturningError:(id*)arg1;
- (BOOL)_canSendTokenToURL:(id)arg1;
- (id)_copyAuthenticationContext;
- (id)_copyURLBagContext;
- (void)_runURLOperation;
- (id)_storeFrontIdentifier;
- (id)_urlFromURLBagForRequestProperties:(id)arg1 inBagContext:(id)arg2;
- (id)authenticatedAccountDSID;
- (id)authenticatedDSID;
- (BOOL)canSendGUIDParameter;
- (void)dealloc;
- (BOOL)handleRedirectFromDataProvider:(id)arg1;
- (void)handleResponse:(id)arg1;
- (id)init;
- (BOOL)needsAuthentication;
- (BOOL)needsURLBag;
- (id)newRequestWithURL:(id)arg1;
- (void)run;
- (void)setAuthenticatedDSID:(id)arg1;
- (void)setCanSendGUIDParameter:(BOOL)arg1;
- (void)setNeedsAuthentication:(BOOL)arg1;
- (void)setNeedsURLBag:(BOOL)arg1;
- (void)setUrlKnownToBeTrusted:(BOOL)arg1;
- (void)setUseUserSpecificURLBag:(BOOL)arg1;
- (BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2;
- (BOOL)urlKnownToBeTrusted;
- (BOOL)useUserSpecificURLBag;

@end
