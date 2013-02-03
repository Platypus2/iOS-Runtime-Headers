/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSString, ADXPCConnection;

@interface ADRemoteInvocationProxy : NSObject {
    ADXPCConnection *_connection;
    id _connectionDelegate;
    NSString *_identifier;
    NSString *_messageName;
}

@property(readonly) BOOL available;
@property(retain) ADXPCConnection * connection;
@property id connectionDelegate;
@property(copy) NSString * identifier;
@property(copy) NSString * messageName;

- (BOOL)available;
- (id)connection;
- (id)connectionDelegate;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)identifier;
- (id)messageName;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)sendMessage:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessageName:(id)arg1;

@end
