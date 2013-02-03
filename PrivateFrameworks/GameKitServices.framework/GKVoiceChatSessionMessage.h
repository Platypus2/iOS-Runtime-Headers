/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSMutableData;

@interface GKVoiceChatSessionMessage : GKOOBMessage {
    unsigned int _conferenceID;
    NSMutableData *_data;
    unsigned int _subtype;
}

- (BOOL)_checkSize:(unsigned long)arg1;
- (BOOL)_checkType:(unsigned short)arg1;
- (unsigned int)conferenceID;
- (id)data;
- (void)dealloc;
- (id)init;
- (id)initWithBytes:(void*)arg1 length:(unsigned long)arg2;
- (id)initWithPayload:(id)arg1 conferenceID:(unsigned int)arg2 subtype:(unsigned int)arg3;
- (id)payload;
- (unsigned int)subtype;

@end
