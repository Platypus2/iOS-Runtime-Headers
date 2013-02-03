/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CNFRegController, NSTimer, NSDictionary, FTCConnectionHandler, IMAccount;

@interface FTRegAccountServiceDelegate : NSObject <AASetupAssistantDelegateService> {
    IMAccount *_account;
    id _completionHandler;
    FTCConnectionHandler *_connectionHandler;
    CNFRegController *_regController;
    NSDictionary *_responseDictionary;
    BOOL _setupFailed;
    BOOL _timedOut;
    NSTimer *_timeoutTimer;
}

@property(retain) IMAccount * account;
@property(copy) id completionHandler;
@property(retain) CNFRegController * regController;
@property(copy) NSDictionary * responseDictionary;
@property(retain) NSTimer * timeoutTimer;

- (id)__responseAppleID;
- (id)__responseAuthToken;
- (BOOL)__responseDictionaryIsValid;
- (id)__responseProfileID;
- (void)_beginAccountCreation;
- (void)_beginEmailValidation;
- (void)_beginProfileValidation;
- (void)_cleanup;
- (id)_defaultSetupRequestParameters;
- (void)_handleFailureWithError:(id)arg1;
- (void)_handleFailureWithErrorCode:(int)arg1;
- (void)_handleSuccess;
- (void)_handleTimeout:(id)arg1;
- (BOOL)_hasAccount;
- (BOOL)_hasOperationalAccount;
- (id)_logName;
- (void)_startListeningForAccountNotifications;
- (void)_startTimeout;
- (void)_startTimeoutWithDuration:(double)arg1;
- (void)_stopListeningForAccountNotifications;
- (void)_stopTimeout;
- (id)account;
- (id)accountSetupRequestParameters;
- (void)completeSetupWithResponseParameters:(id)arg1 handler:(id)arg2;
- (id)completionHandler;
- (void)dealloc;
- (id)delegateServiceIdentifier;
- (id)displayName;
- (id)init;
- (id)initWithRegController:(id)arg1;
- (id)regController;
- (id)responseDictionary;
- (BOOL)serviceIsAvailable;
- (int)serviceType;
- (void)setAccount:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setRegController:(id)arg1;
- (void)setResponseDictionary:(id)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (void)setupOperationFailed;
- (double)timeoutDuration;
- (id)timeoutTimer;

@end
