/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class ADAdData, <ADJSODelegate>, NSMutableArray, NSTimer, SSItemOffer, NSString, NSMutableDictionary, NSNumber;

@interface ADStoreJSO : ADJavaScriptObject <SSItemLookupRequestDelegate, SSPurchaseRequestDelegate, ABPeoplePickerNavigationControllerDelegate> {
    BOOL _adManagesPurchaseFlow;
    ADAdData *_adResponse;
    NSNumber *_currentPurchaseAdamId;
    SSItemOffer *_currentPurchaseOffer;
    NSNumber *_currentPurchaseRingtoneAssigneeIdentifier;
    BOOL _currentPurchaseShouldIncludeiBooks;
    <ADJSODelegate> *_delegate;
    NSMutableDictionary *_expirationTimers;
    BOOL _hasRegisteredItems;
    NSString *_iBooksBuyParameters;
    BOOL _privilegedClient;
    NSMutableDictionary *_registeredItems;
    NSTimer *_renewalTimer;
    NSMutableArray *_storeRequests;
}

@property BOOL adManagesPurchaseFlow;
@property(retain) ADAdData * adResponse;
@property(copy) NSNumber * currentPurchaseAdamId;
@property(retain) SSItemOffer * currentPurchaseOffer;
@property(copy) NSNumber * currentPurchaseRingtoneAssigneeIdentifier;
@property BOOL currentPurchaseShouldIncludeiBooks;
@property <ADJSODelegate> * delegate;
@property(retain) NSMutableDictionary * expirationTimers;
@property BOOL hasRegisteredItems;
@property(copy) NSString * iBooksBuyParameters;
@property(getter=isPrivilegedClient) BOOL privilegedClient;
@property(retain) NSMutableDictionary * registeredItems;
@property(retain) NSTimer * renewalTimer;
@property(retain) NSMutableArray * storeRequests;

+ (void)initializeInContext:(struct OpaqueJSContext { }*)arg1;
+ (id)scriptSelectors;

- (void)_cancelPurchase;
- (void)_checkForiBooksApp;
- (void)_getRingtoneAssignee;
- (void)_lookupRegisteredItems;
- (void)_purchaseCurrentItem;
- (void)_updateTimersForItem:(id)arg1 validUntil:(double)arg2;
- (void)_validateItemMetadata;
- (BOOL)adManagesPurchaseFlow;
- (id)adResponse;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)currentPurchaseAdamId;
- (id)currentPurchaseOffer;
- (id)currentPurchaseRingtoneAssigneeIdentifier;
- (BOOL)currentPurchaseShouldIncludeiBooks;
- (void)dealloc;
- (id)delegate;
- (void)didPresentAlertView:(id)arg1;
- (id)expirationTimers;
- (void)handleFailedAdamId:(id)arg1;
- (BOOL)hasRegisteredItems;
- (id)iBooksBuyParameters;
- (id)init;
- (void)invalidateMetadataTimers;
- (BOOL)isPrivilegedClient;
- (void)itemLookupRequest:(id)arg1 didFindItems:(id)arg2;
- (void)itemMetadataExpired:(id)arg1;
- (void)lookupItemWithID:(id)arg1 listener:(id)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)purchaseItemWithID:(id)arg1 offerIdentifier:(id)arg2 listener:(id)arg3;
- (void)purchaseRequest:(id)arg1 purchaseDidFail:(id)arg2 withError:(id)arg3;
- (void)purchaseRequest:(id)arg1 purchaseDidSucceed:(id)arg2;
- (void)registerItemsForPurchase:(id)arg1;
- (id)registeredItems;
- (id)renewalTimer;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)setAdManagesPurchaseFlow:(BOOL)arg1;
- (void)setAdResponse:(id)arg1;
- (void)setCurrentPurchaseAdamId:(id)arg1;
- (void)setCurrentPurchaseOffer:(id)arg1;
- (void)setCurrentPurchaseRingtoneAssigneeIdentifier:(id)arg1;
- (void)setCurrentPurchaseShouldIncludeiBooks:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpirationTimers:(id)arg1;
- (void)setHasRegisteredItems:(BOOL)arg1;
- (void)setIBooksBuyParameters:(id)arg1;
- (void)setPrivilegedClient:(BOOL)arg1;
- (void)setRegisteredItems:(id)arg1;
- (void)setRenewalTimer:(id)arg1;
- (void)setStoreRequests:(id)arg1;
- (id)storeRequests;

@end
