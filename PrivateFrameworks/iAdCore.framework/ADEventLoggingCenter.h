/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSMapTable, NSMutableArray;

@interface ADEventLoggingCenter : NSObject <PBRequesterDelegate> {
    NSMutableArray *_failedRequests;
    NSMapTable *_inflightRequests;
    int _throttleCount;
}

@property(retain) NSMutableArray * failedRequests;
@property(retain) NSMapTable * inflightRequests;
@property int throttleCount;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedCenter;

- (id)_URLForRequest:(id)arg1 baseURL:(id)arg2;
- (id)_assertionForRequest:(id)arg1;
- (id)_failedRequestURL;
- (void)_handleRetransmitFailureForRecord:(id)arg1 requester:(id)arg2;
- (void)_persistFailedRequests;
- (void)_retransmitRecord:(id)arg1 originalRequester:(id)arg2;
- (void)_retryStoredRequests;
- (id)_sendRequests:(id)arg1 toURL:(id)arg2 additionalHeaders:(id)arg3;
- (void)_storeFailedRequests:(id)arg1;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)failedRequests;
- (id)inflightRequests;
- (id)init;
- (void)logEvent:(id)arg1 baseURL:(id)arg2;
- (oneway void)release;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;
- (void)requesterDidFinish:(id)arg1;
- (id)retain;
- (unsigned int)retainCount;
- (void)setFailedRequests:(id)arg1;
- (void)setInflightRequests:(id)arg1;
- (void)setThrottleCount:(int)arg1;
- (int)throttleCount;

@end
