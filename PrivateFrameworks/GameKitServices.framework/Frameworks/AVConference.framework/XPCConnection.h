/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface XPCConnection : NSObject {
    struct _xpc_connection_s { } *connection;
    int pid;
}

@property struct _xpc_connection_s { }* connection;
@property int pid;

- (struct _xpc_connection_s { }*)connection;
- (int)pid;
- (void)setConnection:(struct _xpc_connection_s { }*)arg1;
- (void)setPid:(int)arg1;

@end
