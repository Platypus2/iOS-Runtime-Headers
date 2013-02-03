/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
    NSOperationQueue *_queue;
}

+ (BOOL)isActive;
+ (id)mainQueue;

- (void)addOperation:(id)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void)cancelAllOperations;
- (void)dealloc;
- (id)init;
- (int)maxConcurrentOperationCount;
- (id)operations;
- (void)setMaxConcurrentOperationCount:(int)arg1;
- (void)setSuspended:(BOOL)arg1;

@end
