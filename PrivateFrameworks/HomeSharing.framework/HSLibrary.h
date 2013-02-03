/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class <NSObject>, HSConnection, NSString, SSAccount;

@interface HSLibrary : NSObject {
    SSAccount *_account;
    HSConnection *_connection;
    <NSObject> *_context;
    NSString *_name;
    BOOL _requiresPassword;
    NSString *_uniqueIdentifier;
    unsigned int _version;
}

@property(readonly) HSConnection * connection;
@property(retain) <NSObject> * context;
@property(readonly) NSString * name;
@property(readonly) BOOL requiresPassword;
@property(readonly) NSString * uniqueIdentifier;
@property(readonly) unsigned int version;

- (id)connection;
- (id)context;
- (void)dealloc;
- (id)initWithBaseURL:(id)arg1 forAccount:(id)arg2;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 version:(unsigned int)arg3 baseURL:(id)arg4;
- (id)name;
- (BOOL)requiresPassword;
- (void)setContext:(id)arg1;
- (id)uniqueIdentifier;
- (unsigned int)version;

@end
