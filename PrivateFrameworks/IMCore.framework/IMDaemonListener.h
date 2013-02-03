/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSDate, NSArray, NSProtocolChecker, NSMutableArray, NSDictionary, NSString, NSMutableDictionary, NSData;

@interface IMDaemonListener : NSObject {
    NSMutableDictionary *_contexts;
    NSMutableArray *_deferredChatMessages;
    NSMutableArray *_handlers;
    BOOL _hasPendingProcessChange;
    BOOL _hidingDisconnect;
    BOOL _holdingChatMessages;
    NSDate *_myIdleSince;
    NSString *_myNowPlayingString;
    NSData *_myPicture;
    unsigned int _myStatus;
    NSString *_myStatusMessage;
    NSMutableDictionary *_persistentProperties;
    BOOL _postedSetupComplete;
    NSMutableDictionary *_properties;
    NSProtocolChecker *_protocol;
    NSMutableDictionary *_services;
    BOOL _setupComplete;
    unsigned long long _vcCapabilities;
}

@property(readonly) NSMutableDictionary * _contexts;
@property(setter=_setHidingDisconnect:) BOOL _hidingDisconnect;
@property(readonly) NSArray * allServices;
@property(readonly) NSArray * handlers;
@property(readonly) BOOL hasPostedSetupComplete;
@property(readonly) BOOL isHoldingChatMessages;
@property(readonly) BOOL isSetupComplete;
@property(readonly) unsigned long myIdleTime;
@property(readonly) unsigned int myStatus;
@property(readonly) NSString * myStatusMessage;
@property(readonly) NSDictionary * persistentProperties;
@property(readonly) NSDictionary * properties;
@property(readonly) BOOL shouldHoldChatMessages;
@property(readonly) unsigned long long vcCapabilities;

- (void)_cacheValue:(id)arg1 forPersistentProperty:(id)arg2;
- (void)_cacheValue:(id)arg1 forProperty:(id)arg2;
- (id)_contexts;
- (void)_deferNotification:(id)arg1;
- (void)_deferredSetup:(id)arg1;
- (BOOL)_hidingDisconnect;
- (void)_noteDisconnected;
- (void)_processDeferredInvitationDictionary:(id)arg1;
- (void)_processMyStatusChanged;
- (void)_reallyProcessMyStatusChanged;
- (void)_setHidingDisconnect:(BOOL)arg1;
- (void)_setStamp:(id)arg1 forContext:(id)arg2;
- (id)_stampForContext:(id)arg1;
- (void)account:(id)arg1 allowListChanged:(id)arg2;
- (void)account:(id)arg1 blockIdleStatusChanged:(BOOL)arg2;
- (void)account:(id)arg1 blockListChanged:(id)arg2;
- (void)account:(id)arg1 blockingModeChanged:(unsigned int)arg2;
- (void)account:(id)arg1 buddyInfo:(id)arg2 commandDelivered:(id)arg3 properties:(id)arg4;
- (void)account:(id)arg1 buddyInfo:(id)arg2 commandReceived:(id)arg3 properties:(id)arg4;
- (void)account:(id)arg1 buddyInfo:(id)arg2 dataReceived:(id)arg3;
- (void)account:(id)arg1 buddyPictureChanged:(id)arg2 imageData:(id)arg3 imageHash:(id)arg4;
- (void)account:(id)arg1 buddyProperties:(id)arg2 buddyPictures:(id)arg3;
- (void)account:(id)arg1 buddyPropertiesChanged:(id)arg2;
- (void)account:(id)arg1 capabilitiesChanged:(unsigned long long)arg2;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 invitationReceived:(id)arg5;
- (void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageReceived:(id)arg5;
- (void)account:(id)arg1 defaults:(id)arg2 blockList:(id)arg3 allowList:(id)arg4 blockingMode:(unsigned int)arg5 blockIdleStatus:(BOOL)arg6 status:(id)arg7 capabilities:(unsigned long long)arg8 serviceLoginStatus:(unsigned int)arg9 loginStatusMessage:(id)arg10;
- (void)account:(id)arg1 defaultsChanged:(id)arg2;
- (void)account:(id)arg1 groupsChanged:(id)arg2 error:(id)arg3;
- (void)account:(id)arg1 handleSubscriptionRequestFrom:(id)arg2 withMessage:(id)arg3;
- (void)account:(id)arg1 loginStatusChanged:(unsigned int)arg2 message:(id)arg3 reason:(unsigned int)arg4 properties:(id)arg5;
- (void)account:(id)arg1 postedError:(id)arg2;
- (void)account:(id)arg1 status:(id)arg2 capabilities:(unsigned long long)arg3 serviceLoginStatus:(unsigned int)arg4 loginStatusMessage:(id)arg5;
- (void)account:(id)arg1 statusChanged:(id)arg2;
- (void)accountAdded:(id)arg1 defaults:(id)arg2 service:(id)arg3;
- (void)accountRemoved:(id)arg1;
- (void)activeAccountsChanged:(id)arg1 forService:(id)arg2;
- (void)addHandler:(id)arg1;
- (id)allServices;
- (void)databaseUpdated:(id)arg1;
- (void)dealloc;
- (void)defaultsChanged:(id)arg1 forService:(id)arg2;
- (void)fileTransfer:(id)arg1 createdWithProperties:(id)arg2;
- (void)fileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;
- (void)fileTransfer:(id)arg1 updatedWithProperties:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)handlers;
- (BOOL)hasPostedSetupComplete;
- (void)holdChatMessages;
- (id)init;
- (BOOL)isHoldingChatMessages;
- (BOOL)isSetupComplete;
- (id)methodSignatureForSelector:(SEL)arg1;
- (unsigned long)myIdleTime;
- (unsigned int)myStatus;
- (id)myStatusMessage;
- (id)persistentProperties;
- (void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (id)properties;
- (void)property:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)releaseHeldChatMessages;
- (void)removeHandler:(id)arg1;
- (void)service:(id)arg1 properties:(id)arg2 defaults:(id)arg3 defaultAccountSettings:(id)arg4 allAccounts:(id)arg5 activeAccounts:(id)arg6;
- (id)serviceWithName:(id)arg1;
- (void)services:(id)arg1 properties:(id)arg2 persistentProperties:(id)arg3;
- (void)setupComplete:(BOOL)arg1 info:(id)arg2;
- (BOOL)shouldHoldChatMessages;
- (void)standaloneFileTransferRegistered:(id)arg1;
- (id)valueOfPersistentProperty:(id)arg1;
- (id)valueOfProperty:(id)arg1;
- (unsigned long long)vcCapabilities;
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;

@end
