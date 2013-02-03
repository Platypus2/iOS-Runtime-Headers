/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSDictionary;

@interface GKDataRequest : NSOperation {
    id _completionBlock;
    BOOL _isCancelled;
    BOOL _isExecuting;
    BOOL _isFinished;
    struct dispatch_source_s { } *_replySource;
    int _sequenceNumber;
    double _startTime;
}

@property(readonly) BOOL authenticationRequired;
@property(copy) id completionBlock;
@property(readonly) NSDictionary * header;
@property(readonly) NSString * key;
@property(readonly) NSDictionary * request;
@property(readonly) int sequenceNumber;
@property(readonly) BOOL shouldProcessInBackground;
@property double startTime;

+ (void)_cancelActiveRequestsWithError:(id)arg1 force:(BOOL)arg2;
+ (void)_resetRequestPort;
+ (unsigned int)bootstrapPort;
+ (id)protocolVersion;
+ (unsigned int)requestPort;
+ (id)requestQueue;
+ (struct dispatch_queue_s { }*)responseQueue;
+ (BOOL)useTestProtocol;

- (void)_cancelSources;
- (void)addToQueue;
- (BOOL)authenticationRequired;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (id)completionBlock;
- (void)dealloc;
- (id)demarshalResponseData:(id)arg1;
- (id)description;
- (void)finish;
- (void)handleResponseFromServer:(id)arg1;
- (void)handleUnauthenticatedError;
- (id)header;
- (id)init;
- (BOOL)isCancelled;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)key;
- (void)playerAuthenticationDidChange:(id)arg1;
- (id)request;
- (Class)responseClass;
- (void)send;
- (int)sequenceNumber;
- (void)setCompletionBlock:(id)arg1;
- (void)setStartTime:(double)arg1;
- (BOOL)shouldProcessInBackground;
- (void)start;
- (double)startTime;
- (void)wasCancelledByServer;

@end
