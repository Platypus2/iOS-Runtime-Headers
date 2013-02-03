/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCHacks : NSObject {
}

+ (void)_applyChangesWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 oldEffectiveUserSettings:(id)arg3 newEffectiveUserSettings:(id)arg4;
+ (BOOL)_applyHeuristicsToRestrictions:(id)arg1 forProfile:(id)arg2 outError:(id*)arg3;
+ (void)_applyImpliedSettingsToSettingsDictionary:(id)arg1;
+ (void)_applyServerSideChangesWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 oldEffectiveUserSettings:(id)arg3 newEffectiveUserSettings:(id)arg4;
+ (void)_checkCarrierBundleRelatedSettings;
+ (id)_deviceSpecificDefaultSettings;
+ (id)_permittedAutoLockNumbers;
+ (id)_permittedGracePeriodNumbers;
+ (id)_selectLargestNumberFromSortedArray:(id)arg1 equalToOrLessThanNumber:(id)arg2;
+ (void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)arg1;

@end
