/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@class <AccountRefreshProtocol>, <AccountFullAccountProtocol>, NSDictionary, BasicAccount, NSMutableDictionary;

@interface BasicAccount : NSObject <AccountFullAccountProtocol> {
    <AccountFullAccountProtocol> *_fullAccount;
    NSDictionary *_originalProperties;
    BasicAccount *_parentAccount;
    NSMutableDictionary *_properties;
    <AccountRefreshProtocol> *_syncAccount;
}

@property(retain) NSDictionary * originalProperties;

+ (id)_accountCreationMap;
+ (id)_creatorsInfo;
+ (id)_dataclassesProperties;
+ (BOOL)_isValidAccountType:(id)arg1;
+ (id)accountWithProperties:(id)arg1;
+ (id)accountWithType:(id)arg1 class:(id)arg2;
+ (id)allSupportedDataclasses;
+ (id)createNewAccountUID;
+ (id)deleteAccountActionsForAccountType:(id)arg1;
+ (BOOL)displayToggleForDataclass:(id)arg1;
+ (void)initialize;
+ (BOOL)isMultitaskingEnabled;
+ (BOOL)multipleStoresSupportedByDataclass:(id)arg1;
+ (id)removeActionsIncompatibleWithSingleStoreDataclass:(id)arg1;
+ (BOOL)showRemindersSeparatelyForAccountType:(id)arg1;
+ (id)supportedDataclassesForAccountType:(id)arg1;
+ (id)userActionsToDisableDataclass:(id)arg1 forAccountType:(id)arg2;
+ (id)userActionsToEnableDataclass:(id)arg1 forAccountType:(id)arg2;
+ (BOOL)userConfirmationIsRequiredByDataclass:(id)arg1;

- (id)_cachedSyncAccount;
- (id)_creatorClassNameForAccountType:(id)arg1 creatorType:(id)arg2 loader:(id)arg3;
- (void)_forcedSetAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)_forcedSetEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (id)_initWithType:(id)arg1 class:(id)arg2;
- (id)_orderedDataclasses:(id)arg1;
- (id)_profileRestrictedDataclasses;
- (id)accountClass;
- (BOOL)accountClassStringIsIMAPSubclass;
- (BOOL)accountPropertiesHaveBookmarkDAVEnabled:(id)arg1;
- (BOOL)accountPropertiesHaveCalDAVEnabled:(id)arg1;
- (BOOL)accountPropertiesHaveCardDAVEnabled:(id)arg1;
- (id)accountPropertyForKey:(id)arg1;
- (BOOL)accountTypeStringCanOwnBookmarkDAVAccounts;
- (BOOL)accountTypeStringCanOwnCalDAVAccounts;
- (BOOL)accountTypeStringCanOwnCardDAVAccounts;
- (BOOL)accountTypeStringIsIMAPSubclass;
- (BOOL)accountTypeStringOwnsIMAPChild;
- (id)childAccountPropertiesArrayBySettingChildProperties:(id)arg1 forChildAccountType:(id)arg2;
- (id)childPropertiesForAccountType:(id)arg1 defaultProperties:(id)arg2 outParentNeedsSave:(BOOL*)arg3;
- (void)dealloc;
- (id)defaultContainerIdentifierForDataclass:(id)arg1;
- (id)displayName;
- (id)enabledDataclasses;
- (id)fullAccountCreatorClassNameForAccountType:(id)arg1 loader:(id)arg2;
- (id)fullAccountUsingLoader:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithProperties:(id)arg1;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (BOOL)isMailAccount;
- (BOOL)isMobileMeAccount;
- (BOOL)isValidBookmarkDAVChildAccount;
- (BOOL)isValidCalDAVChildAccount;
- (BOOL)isValidCardDAVChildAccount;
- (BOOL)isValidDAMMeAccount;
- (BOOL)isValidIMAPNotesAccount;
- (id)originalProperties;
- (id)parentAccount;
- (id)parentAccountIdentifier;
- (id)properties;
- (id)propertiesToSave;
- (id)provisionedDataclasses;
- (BOOL)refreshContainerListForDataclass:(id)arg1 isUserRequested:(BOOL)arg2;
- (BOOL)refreshContainerListForDataclass:(id)arg1;
- (BOOL)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2 isUserRequested:(BOOL)arg3;
- (BOOL)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2;
- (BOOL)refreshContainersForDataclass:(id)arg1 isUserRequested:(BOOL)arg2;
- (BOOL)refreshContainersForDataclass:(id)arg1;
- (void)removeAccountPropertyForKey:(id)arg1;
- (void)renewAccountCredentialsWithHandler:(id)arg1;
- (void)setAccountClass:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setDisplayName:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (void)setEnabledForDataclasses:(id)arg1;
- (void)setFullAccount:(id)arg1;
- (void)setOriginalProperties:(id)arg1;
- (void)setParentAccount:(id)arg1;
- (id)shortTypeString;
- (id)subscribedCalendarRecords;
- (id)supportedDataclasses;
- (id)syncAccountCreatorClassNameForAccountType:(id)arg1;
- (id)syncStoreIdentifier;
- (id)type;
- (id)typeString;

@end
