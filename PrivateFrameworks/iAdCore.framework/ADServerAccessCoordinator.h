/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSString, NSTimer;

@interface ADServerAccessCoordinator : NSObject {
    BOOL _allowsRequests;
    double _currentBackoffIntervalExponent;
    double _lastReachabilityUpdateTime;
    BOOL _networkAvailable;
    const struct __SCNetworkReachability { } *_reachability;
    NSTimer *_retryTimer;
    NSString *_serverHost;
    BOOL _serverReachable;
}

@property BOOL allowsRequests;
@property(readonly) double currentBackoffIntervalExponent;
@property double lastReachabilityUpdateTime;
@property(readonly) BOOL networkAvailable;
@property(readonly) double nextBackoffInterval;
@property(readonly) struct __SCNetworkReachability { }* reachability;
@property(retain) NSTimer * retryTimer;
@property(copy) NSString * serverHost;
@property(readonly) BOOL serverReachable;

+ (id)serverAccessCoordinatorForURL:(id)arg1;

- (void)_recalculate;
- (BOOL)allowsRequests;
- (void)connectionDidSucceed;
- (double)currentBackoffIntervalExponent;
- (void)dealloc;
- (void)errorDidOccur:(int)arg1;
- (id)init;
- (double)lastReachabilityUpdateTime;
- (BOOL)networkAvailable;
- (double)nextBackoffInterval;
- (struct __SCNetworkReachability { }*)reachability;
- (void)reset;
- (id)retryTimer;
- (void)retryTimerDidFire:(id)arg1;
- (id)serverError;
- (id)serverHost;
- (BOOL)serverReachable;
- (void)setAllowsRequests:(BOOL)arg1;
- (void)setLastReachabilityUpdateTime:(double)arg1;
- (void)setRetryTimer:(id)arg1;
- (void)setServerHost:(id)arg1;
- (void)setServerReachable:(BOOL)arg1;
- (void)startReachability;
- (void)stopReachability;

@end
