/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSCalendarDate, NSString, CKSubConversation, NSNumber, CKService;

@interface CKMessage : NSObject <NSFastEnumeration> {
    unsigned int _dateLoaded : 1;
    unsigned int _heightAndFlagsLoaded : 1;
    unsigned int _failedSendCountLoaded : 1;
    unsigned int _outgoing : 1;
    unsigned int _outgoingLoaded : 1;
    unsigned int _hasLoadedIsFromDowngrading : 1;
    unsigned int _hasLoadedIsRead : 1;
    unsigned int _isFromDowngrading : 1;
    unsigned int _isRead : 1;
    float _cachedPercentComplete;
    NSCalendarDate *_calendarDate;
    CKSubConversation *_conversation;
    double _date;
    int _failedSendCount;
    unsigned int _flags;
    NSString *_groupID;
    unsigned int _height;
    CKService *_service;
    NSString *_text;
}

@property CKSubConversation * conversation;
@property(retain) NSString * groupID;
@property(readonly) NSString * guid;
@property BOOL isFromDowngrading;
@property(readonly) int rowID;
@property(readonly) NSNumber * sequenceNumber;
@property(readonly) CKService * service;

- (double)_loadDate;
- (void)_loadFailedSendCount;
- (BOOL)_loadIsFromDowngrading;
- (BOOL)_loadIsRead;
- (BOOL)_loadOutgoing;
- (void)_loadText;
- (void)_loadUIFlags;
- (void)_resetData;
- (void)_storeUIFlags:(unsigned long)arg1;
- (id)address;
- (id)alertImageData;
- (id)attachmentText:(BOOL)arg1;
- (void)cancel;
- (int)compare:(id)arg1;
- (BOOL)completelyFailedSend;
- (id)conversation;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)date;
- (void)dealloc;
- (void)deleteMessagePart:(id)arg1;
- (id)error;
- (BOOL)failedSend;
- (int)failedSendCount;
- (BOOL)getCharacterCountNumerator:(unsigned int*)arg1 denominator:(unsigned int*)arg2;
- (void)getUIHeight:(unsigned int*)arg1 flags:(unsigned int*)arg2;
- (id)groupID;
- (id)guid;
- (BOOL)hasAttachments;
- (BOOL)hasBeenSent;
- (unsigned long)height;
- (id)initWithService:(id)arg1;
- (BOOL)isDelivered;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFirstDisplayablePart:(id)arg1;
- (BOOL)isForward;
- (BOOL)isFromDowngrading;
- (BOOL)isFromMe;
- (BOOL)isOnlyDisplayableMessagePart:(id)arg1;
- (BOOL)isOutgoing;
- (BOOL)isPlaceholder;
- (BOOL)isRead;
- (BOOL)isTypingIndicator;
- (BOOL)isWaitingForDelivery;
- (void)loadParts;
- (void)markAsRead;
- (int)messageCount;
- (id)messagePartAtIndex:(unsigned int)arg1;
- (unsigned int)messagePartCount;
- (id)messagePartWithRowID:(int)arg1;
- (BOOL)partiallyFailedSend;
- (id)parts;
- (BOOL)pending;
- (int)pendingCount;
- (float)percentComplete;
- (id)previewText;
- (void)reloadFailedSendCount;
- (void)resetHeightAndFlags;
- (int)rowID;
- (void)send;
- (id)sender;
- (int)sentCount;
- (id)sequenceNumber;
- (id)service;
- (void)setConversation:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setIsFromDowngrading:(BOOL)arg1;
- (void)setUIHeight:(unsigned long)arg1 flags:(unsigned long)arg2;
- (BOOL)smartForwardCapable;
- (BOOL)storesFlagsInDatabase;
- (id)subject;
- (id)text;
- (id)timeDelivered;
- (double)timeIntervalSince1970;
- (id)timeRead;
- (int)totalMessageCount;
- (BOOL)wantsSendStatus;

@end
