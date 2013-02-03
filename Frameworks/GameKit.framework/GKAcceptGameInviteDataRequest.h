/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDictionary, NSData, GKInvite;

@interface GKAcceptGameInviteDataRequest : GKDataRequest {
    NSDictionary *_acceptGameInviteResponse;
    NSData *_connectionData;
    GKInvite *_invite;
    unsigned char _inviteVersion;
}

@property(retain) NSDictionary * acceptGameInviteResponse;
@property(retain) NSData * connectionData;
@property(retain) GKInvite * invite;
@property unsigned char inviteVersion;

- (id)acceptGameInviteResponse;
- (id)connectionData;
- (void)dealloc;
- (void)handleResponseFromServer:(id)arg1;
- (id)header;
- (id)invite;
- (unsigned char)inviteVersion;
- (id)key;
- (id)request;
- (void)setAcceptGameInviteResponse:(id)arg1;
- (void)setConnectionData:(id)arg1;
- (void)setInvite:(id)arg1;
- (void)setInviteVersion:(unsigned char)arg1;

@end
