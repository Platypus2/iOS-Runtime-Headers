/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSURL, NSSet, NSMutableSet;

@interface CoreDAVValidatePrincipalsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
    BOOL _authError;
    NSMutableSet *_principalURLs;
    NSURL *_urlBeingExamined;
    NSMutableSet *_urlsToExamine;
}

@property(readonly) BOOL didReceiveAuthenticationError;
@property(retain) NSMutableSet * principalURLs;
@property(readonly) NSSet * resultPrincipalURLs;
@property(retain) NSURL * urlBeingExamined;
@property(retain) NSMutableSet * urlsToExamine;

- (void)_fetchNextURL;
- (void)_finishWithError:(id)arg1;
- (void)cancelTaskGroup;
- (void)dealloc;
- (BOOL)didReceiveAuthenticationError;
- (id)initWithAccountInfoProvider:(id)arg1 urls:(id)arg2 taskManager:(id)arg3;
- (id)principalURLs;
- (id)resultPrincipalURLs;
- (void)setPrincipalURLs:(id)arg1;
- (void)setUrlBeingExamined:(id)arg1;
- (void)setUrlsToExamine:(id)arg1;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)urlBeingExamined;
- (id)urlsToExamine;

@end
