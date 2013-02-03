/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSTimer, MailboxUid, MailAccount, NSMutableArray, ActivityMonitor;

@interface MailMessageStore : MessageStore {
    struct { 
        unsigned int isReadOnly : 1; 
        unsigned int hasUnsavedChangesToMessageData : 1; 
        unsigned int haveOpenLockFile : 1; 
        unsigned int compacting : 1; 
        unsigned int cancelInvalidation : 1; 
        unsigned int forceInvalidation : 1; 
        unsigned int isWritingChangesToDisk : 1; 
        unsigned int isTryingToClose : 1; 
        unsigned int compactOnClose : 1; 
        unsigned int reserved : 22; 
    MailAccount *_account;
    NSMutableArray *_allMessages;
    unsigned int _deletedMessageCount;
    unsigned int _deletedMessagesSize;
    } _flags;
    unsigned int _generationNumber;
    unsigned int _lastFetchCount;
    MailboxUid *_mailboxUid;
    ActivityMonitor *_openMonitor;
    int _state;
    NSTimer *_timer;
    unsigned int _unreadMessageCount;
    double timeOfLastAutosaveOperation;
}

+ (void)_autosaveMessageStore:(void*)arg1;
+ (Class)classForMimePart;
+ (int)copyMessages:(id)arg1 toMailbox:(id)arg2 markAsRead:(BOOL)arg3 deleteOriginals:(BOOL)arg4 isDeletion:(BOOL)arg5 unsuccessfulOnes:(id)arg6;
+ (BOOL)createEmptyStoreForPath:(id)arg1;
+ (BOOL)createEmptyStoreIfNeededForPath:(id)arg1;
+ (Class)headersClass;
+ (BOOL)storeAtPathIsWritable:(id)arg1;

- (void)_cancelAutosave;
- (id)_defaultRouterDestination;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (void)_flushAllMessageData;
- (void)_rebuildTableOfContentsSynchronously;
- (void)_setFlagsForMessages:(id)arg1 mask:(unsigned long long)arg2;
- (void)_setFlagsForMessages:(id)arg1;
- (void)_setNeedsAutosave;
- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(BOOL)arg3;
- (BOOL)_shouldChangeComponentMessageFlags;
- (BOOL)_shouldChangeComponentMessageFlagsForMessage:(id)arg1;
- (BOOL)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(BOOL)arg3;
- (id)account;
- (BOOL)allowsAppend;
- (int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4;
- (int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3;
- (int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2;
- (int)archiveDestination;
- (BOOL)canCompact;
- (BOOL)canDeleteMessage:(id)arg1;
- (BOOL)canFetchMessageIDs;
- (BOOL)canFetchSearchResults;
- (BOOL)canRebuild;
- (void)cancelOpen;
- (void)close;
- (id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingText:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingText:(id)arg1;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2;
- (id)copyOfAllMessages;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg1 limit:(unsigned int)arg2;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (id)copyOfMessagesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)dealloc;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2;
- (void)deletedCount:(unsigned int*)arg1 andSize:(unsigned int*)arg2;
- (id)description;
- (void)didOpen;
- (id)displayName;
- (void)doCompact;
- (int)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (int)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (int)fetchMobileSynchronously:(unsigned int)arg1 preservingUID:(id)arg2 compact:(BOOL)arg3;
- (int)fetchMobileSynchronously:(unsigned int)arg1;
- (int)fetchNumMessages:(unsigned int)arg1 preservingUID:(id)arg2 fetchType:(int)arg3 synchronize:(BOOL)arg4 compact:(BOOL)arg5;
- (id)finishRoutingMessages:(id)arg1 routed:(id)arg2;
- (BOOL)hasCachedDataForMimePart:(id)arg1;
- (BOOL)hasMessageForAccount:(id)arg1;
- (BOOL)hasMoreMessages:(unsigned int)arg1;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (unsigned int)indexOfMessage:(id)arg1;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (BOOL)isDrafts;
- (BOOL)isOpened;
- (BOOL)isReadOnly;
- (id)lastViewedMessageDate;
- (id)lastViewedMessageWithOptions:(unsigned int)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)mailboxUid;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (id)messageForMessageID:(id)arg1 options:(unsigned int)arg2;
- (id)messageForRemoteID:(id)arg1;
- (id)messageWithValue:(id)arg1 forHeader:(id)arg2 options:(unsigned int)arg3;
- (void)messagesWereAdded:(id)arg1 forIncrementalLoading:(BOOL)arg2 earliestReceivedDate:(id)arg3;
- (void)messagesWereAdded:(id)arg1;
- (void)messagesWereCompacted:(id)arg1;
- (void)messagesWereDeleted:(id)arg1;
- (id)mutableCopyOfAllMessages;
- (unsigned int)nonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2;
- (void)openAsynchronously;
- (void)openSynchronously;
- (void)purgeMessagesBeyondLimit:(unsigned int)arg1 keepingMessage:(id)arg2;
- (void)rebuildTableOfContentsAsynchronously;
- (id)remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (unsigned int)serverMessageCount;
- (unsigned int)serverUnreadCount;
- (unsigned int)serverUnreadOnlyOnServerCount;
- (void)setData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3;
- (void)setFlag:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setLibrary:(id)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (BOOL)setPreferredEncoding:(unsigned long)arg1 forMessage:(id)arg2;
- (BOOL)shouldArchive;
- (BOOL)shouldDeleteInPlace;
- (BOOL)shouldDownloadBodyDataForMessage:(id)arg1;
- (BOOL)shouldSetSummaryForMessage:(id)arg1;
- (id)status;
- (id)storePathRelativeToAccount;
- (void)structureDidChange;
- (unsigned int)totalCount;
- (void)undeleteMessages:(id)arg1;
- (unsigned int)unreadCount;
- (void)updateBodyFlagsForMessage:(id)arg1 body:(id)arg2;
- (void)updateMessages:(id)arg1 updateNumberOfAttachments:(BOOL)arg2;
- (void)updateUserInfoToLatestValues;
- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)writeUpdatedMessageDataToDisk;

@end
