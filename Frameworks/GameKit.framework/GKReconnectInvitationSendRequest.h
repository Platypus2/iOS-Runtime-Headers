/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSData, NSString, GKPlayer;

@interface GKReconnectInvitationSendRequest : GKDataRequest {
    NSData *_connectionData;
    NSString *_message;
    GKPlayer *_player;
    NSData *_pushToken;
    NSData *_sessionToken;
}

@property(retain) NSData * connectionData;
@property(retain) NSString * message;
@property(retain) GKPlayer * player;
@property(retain) NSData * pushToken;
@property(retain) NSData * sessionToken;

- (id)connectionData;
- (void)dealloc;
- (id)header;
- (id)key;
- (id)message;
- (id)player;
- (id)pushToken;
- (id)request;
- (id)sessionToken;
- (void)setConnectionData:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setSessionToken:(id)arg1;

@end
