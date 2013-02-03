/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class GKVoiceChatServiceFocus, GKRWLock, NSMutableArray, GKSessionInternal, VoiceChatSessionRoster, GKWifiListener, NSString, <GKVoiceChatSessionDelegate>, NSMutableDictionary, NSArray;

@interface GKVoiceChatSessionInternal : NSObject <GKSessionVoiceChatDelegate, GKVoiceChatClient, VideoConferenceSpeakingDelegate, WifiListenerDelegate> {
    unsigned long _audioInputAvailable;
    unsigned int _conferenceID;
    NSMutableArray *_connectedFocusPeers;
    NSMutableArray *_connectedPeers;
    NSMutableArray *_connectedVoicePeers;
    BOOL _currentWifiState;
    NSMutableArray *_focusPausedPeers;
    GKSessionInternal *_gkSession;
    NSMutableArray *_mutedPeers;
    NSMutableArray *_myPausedList;
    NSMutableDictionary *_peerChannelQuality;
    NSString *_peerID;
    id _publicWrapper;
    VoiceChatSessionRoster *_roster;
    GKRWLock *_rwLock;
    struct dispatch_queue_s { } *_sendQueue;
    NSString *_sessionName;
    unsigned int _sessionState;
    GKVoiceChatServiceFocus *_vcService;
    GKWifiListener *_wifiListener;
    BOOL activeSession;
    unsigned int congestionState;
    <GKVoiceChatSessionDelegate> *delegate;
    BOOL focusCallbacks;
    int goodChannels;
    BOOL isUsingSuppression;
    BOOL needsRecalculateGoodChannels;
    float sessionVolume;
    unsigned int talkingPeersLimit;
}

@property(getter=isActiveSession) BOOL activeSession;
@property(readonly) unsigned int conferenceID;
@property <GKVoiceChatSessionDelegate> * delegate;
@property BOOL isUsingSuppression;
@property(readonly) NSArray * peerList;
@property(readonly) NSString * sessionName;
@property float sessionVolume;
@property unsigned int talkingPeersLimit;

+ (void)brokenHash:(id)arg1 response:(char *)arg2;

- (void)addPeerToFocusPausedList:(id)arg1;
- (void)audioInputDidChange:(unsigned long)arg1;
- (int)calculateChannelQualities;
- (void)calculateConferenceID;
- (void)cleanup;
- (void)cleanupProc:(id)arg1;
- (unsigned int)conferenceID;
- (void)dealloc;
- (id)decodePeerID:(id)arg1;
- (id)delegate;
- (id)delegate;
- (void)didStartSpeaking:(id)arg1;
- (void)didStopSpeaking:(id)arg1;
- (id)encodePeerID:(id)arg1;
- (int)goodChannels;
- (void)informClientVoiceChatDidStart:(id)arg1;
- (void)informClientVoiceChatDidStop:(id)arg1;
- (void)informClientVoiceChatFocusChange:(id)arg1;
- (void)informClientVoiceChatSilent:(id)arg1;
- (void)informClientVoiceChatSpeaking:(id)arg1;
- (id)initWithGKSession:(id)arg1 publicWrapper:(id)arg2 sessionName:(id)arg3;
- (BOOL)isActiveSession;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUsingSuppression;
- (void)lossRate:(float)arg1 forParticipantID:(id)arg2;
- (void)parseConnectedPeers:(id)arg1;
- (void)parseMutedPeers:(id)arg1 forPeer:(id)arg2;
- (id)participantID;
- (void)pauseAll;
- (unsigned int)peerCount;
- (id)peerList;
- (void)pruneBadLinks;
- (void)removeFromFocusPausedList:(id)arg1;
- (void)sendConnectedPeers;
- (void)sendMutedPeers;
- (void)session:(id)arg1 didReceiveAudioPacket:(id)arg2 fromPeerID:(id)arg3;
- (void)session:(id)arg1 didReceiveOOBAudioPacket:(id)arg2 fromPeerID:(id)arg3;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
- (id)sessionName;
- (float)sessionVolume;
- (void)setActiveSession:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsUsingSuppression:(BOOL)arg1;
- (void)setMute:(BOOL)arg1 forPeer:(id)arg2;
- (void)setSessionVolume:(float)arg1;
- (void)setTalkingPeersLimit:(unsigned int)arg1;
- (void)startSession;
- (void)startSessionInternal;
- (void)stopSession;
- (void)stopSessionInternal;
- (unsigned int)talkingPeersLimit;
- (void)unPauseAll;
- (void)updatedConnectedPeers:(id)arg1;
- (void)updatedFocusID:(unsigned int)arg1;
- (void)updatedFocusPeers:(id)arg1;
- (void)updatedMutedPeers:(id)arg1 forPeer:(id)arg2;
- (void)updatedSubscribedBeaconList:(id)arg1;
- (void)voiceChatService:(id)arg1 didNotStartWithParticipantID:(id)arg2 error:(id)arg3;
- (void)voiceChatService:(id)arg1 didReceiveInvitationFromParticipantID:(id)arg2 callID:(int)arg3;
- (void)voiceChatService:(id)arg1 didStartWithParticipantID:(id)arg2;
- (void)voiceChatService:(id)arg1 didStopWithParticipantID:(id)arg2 error:(id)arg3;
- (void)voiceChatService:(id)arg1 sendData:(id)arg2 toParticipantID:(id)arg3;
- (void)wifiStateDidChange:(BOOL)arg1;

@end
