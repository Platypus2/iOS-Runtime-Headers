/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAutosaveService : MFDefaultService {
}

+ (id)autosaveMessage:(id)arg1 withIdentifier:(id)arg2;
+ (id)autosavedMessageWithIdentifier:(id)arg1 error:(id*)arg2;
+ (id)backChannelCommandName;
+ (BOOL)hasAutosavedMessageWithIdentifier:(id)arg1;
+ (void)removeAutosavedMessageWithIdentifier:(id)arg1;

- (void)_notifyClientDidFinishWithError:(id)arg1;

@end
