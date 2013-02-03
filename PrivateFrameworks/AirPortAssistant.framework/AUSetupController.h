/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class NSMutableSet, NSString, NSDictionary, <SetupConnectionDelegate>;

@interface AUSetupController : AssistantCallbackController <SetupUIDelegateResult, AutoGuessSetup, BaseStationSetup> {
    NSString *_autoGuessSetupRecommendation;
    BOOL _autoJoinState;
    struct BSConfigurationContext { } *_configContext;
    id _connectionDelegate;
    id _context;
    NSDictionary *_lastInstrumentation;
    NSMutableSet *_setupDelegates;
}

@property(retain) NSString * autoGuessSetupRecommendation;
@property(retain) NSDictionary * bonjourRecord;
@property <SetupConnectionDelegate> * connectionDelegate;
@property id context;
@property(retain) NSDictionary * lastInstrumentation;
@property(retain) NSDictionary * restoreRecommendation;
@property(readonly) NSMutableSet * setupDelegates;

+ (id)setupController;

- (id)autoGuessSetupRecommendation;
- (id)bonjourRecord;
- (struct _BaseStation { }*)bsRef;
- (long)cancelSetup;
- (id)connectionDelegate;
- (id)context;
- (void)dealloc;
- (BOOL)dirty;
- (long)getValue:(id*)arg1 forBSSetting:(int)arg2;
- (long)getValue:(id*)arg1 forSettingPath:(id)arg2;
- (void)handleSetupComplete;
- (BOOL)hasACPFeature:(unsigned int)arg1;
- (id)init;
- (BOOL)isMonitoring;
- (id)lastInstrumentation;
- (long)readAllPropertiesFromBaseAsync;
- (long)readPropertyListFromBaseAsync:(id)arg1;
- (long)removeKeychainBasePassword;
- (long)rpcDisconnectAllDiskUsersWithMessageAsync:(id)arg1;
- (long)rpcRefreshBSSettingAsync:(int)arg1;
- (long)rpcRenewDHCPLeaseAsync;
- (long)rpcSystemInterfacesAsync;
- (long)rpcWPSAllowClientAsync:(id)arg1;
- (long)rpcWPSStartAsync:(BOOL)arg1 dayPass:(BOOL)arg2;
- (long)rpcWPSStopAsync;
- (void)setAutoGuessSetupRecommendation:(id)arg1;
- (void)setBonjourRecord:(id)arg1;
- (void)setConnectionDelegate:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setLastInstrumentation:(id)arg1;
- (long)setMonitorForChanges:(BOOL)arg1;
- (long)setValue:(id)arg1 forBSSetting:(int)arg2;
- (long)setValue:(id)arg1 forSettingPath:(id)arg2;
- (void)setupConnectionStatusUpdatedResult:(long)arg1 withOptions:(id)arg2;
- (id)setupDelegates;
- (long)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2;
- (long)setupWithTargetBaseStation:(id)arg1 andSettings:(id)arg2;
- (int)stateForProblem:(unsigned int)arg1;
- (long)subclassAssistantCallback:(struct AssistantCallbackContext { struct AssistantContext {} *x1; int x2; struct __CFDictionary {} *x3; int x4; struct dispatch_semaphore_s {} *x5; struct dispatch_source_s {} *x6; void *x7; }*)arg1;
- (id)targetBaseInfoDict;
- (long)taskArchiveDiskAsync:(id)arg1;
- (long)taskEraseDiskAsync:(id)arg1;
- (long)taskRestartAsync;
- (long)taskRestoreDefaultsAsync:(BOOL)arg1;
- (int)taskState;
- (long)taskUploadFirmwareAsync:(id)arg1;
- (long)unignoredProblemCount;
- (long)updateKeychainWithPasswords;
- (long)updateSettingsAsync;
- (id)validateAndGetErrors;

@end
