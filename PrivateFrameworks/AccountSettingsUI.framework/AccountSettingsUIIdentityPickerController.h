/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class NSArray, NSString, <AccountSettingsUIIdentityPickerControllerDelegate>;

@interface AccountSettingsUIIdentityPickerController : PSListController {
    BOOL _allowEditing;
    <AccountSettingsUIIdentityPickerControllerDelegate> *_delegate;
    NSArray *_emailAddresses;
    NSArray *_identities;
    NSString *_property;
}

@property(readonly) NSString * property;

- (BOOL)_allowIdentitySelection;
- (struct __SecIdentity { }*)_autoselectIdentityWithEnabled:(BOOL)arg1;
- (void)_finishedFetchingIdentities:(id)arg1;
- (id)_identitySpecifiers;
- (BOOL)_isPropertyEnabled;
- (struct __SecIdentity { }*)_selectedIdentity;
- (void)_setPropertyEnabled:(BOOL)arg1 identity:(struct __SecIdentity { }*)arg2;
- (void)_setValue:(id)arg1 forSwitchSpecifier:(id)arg2;
- (id)_specifiersForIdentities:(id)arg1;
- (void)_updateCell:(id)arg1 selected:(BOOL)arg2;
- (id)_valueForSwitchSpecifier:(id)arg1;
- (void)dealloc;
- (id)property;
- (id)specifiers;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
