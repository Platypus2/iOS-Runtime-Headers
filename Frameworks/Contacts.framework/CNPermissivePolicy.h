/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPermissivePolicy : CNPolicy

+ (id)sharedPermissivePolicy;

- (BOOL)isContactPropertySupported:(id)arg1;
- (BOOL)isReadonly;
- (unsigned int)maximumCountOfValuesForContactProperty:(id)arg1;
- (unsigned int)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;
- (BOOL)shouldAddContact:(id)arg1;
- (BOOL)shouldRemoveContact:(id)arg1;
- (BOOL)shouldSetValue:(id)arg1 ofProperty:(id)arg2 onContact:(id)arg3 replacementValue:(id*)arg4;
- (id)supportedLabelsForContactProperty:(id)arg1;
- (id)unsupportedAttributesForLableledContactProperty:(id)arg1;
- (id)unsupportedKeyPathsForContactProperty:(id)arg1;

@end
