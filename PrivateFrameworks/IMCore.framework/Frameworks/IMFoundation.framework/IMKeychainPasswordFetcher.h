/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSString;

@interface IMKeychainPasswordFetcher : IMThreadedWorkUnit {
    NSString *_password;
    NSString *_service;
    NSString *_username;
}

@property(retain) NSString * _password;
@property(retain) NSString * _service;
@property(retain) NSString * _username;

- (id)_password;
- (id)_service;
- (id)_username;
- (void)_workerThread;
- (void)_workerThreadFinished;
- (void)dealloc;
- (id)initWithUsername:(id)arg1 service:(id)arg2;
- (void)set_password:(id)arg1;
- (void)set_service:(id)arg1;
- (void)set_username:(id)arg1;

@end
