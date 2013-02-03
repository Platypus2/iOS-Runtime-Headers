/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Twitter.framework/Twitter
 */

@class NSMutableDictionary, NSDictionary, OACredential, ACAccount, NSMutableArray, NSURL;

@interface TWRequest : NSObject {
    ACAccount *_account;
    int _callingPID;
    OACredential *_credential;
    NSMutableArray *_multiParts;
    NSMutableDictionary *_parameters;
    int _requestMethod;
    NSURL *_url;
}

@property(readonly) NSURL * URL;
@property(retain) ACAccount * account;
@property(readonly) NSDictionary * parameters;
@property(readonly) int requestMethod;

+ (BOOL)shouldRetryAfterCount:(int)arg1 delay:(float*)arg2;

- (id)URL;
- (id)_parameterString;
- (id)_urlEncodedString:(id)arg1;
- (id)account;
- (void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3;
- (int)callingPID;
- (id)commandName;
- (id)credential;
- (void)dealloc;
- (id)initWithCredential:(id)arg1 URL:(id)arg2;
- (id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(int)arg3;
- (id)initWithURL:(id)arg1;
- (id)multiPartBodyData;
- (id)parameters;
- (void)performJSONRequestWithHandler:(id)arg1 retryCount:(int)arg2;
- (void)performJSONRequestWithHandler:(id)arg1;
- (void)performRequestWithHandler:(id)arg1;
- (int)requestMethod;
- (BOOL)requiresAuthorization;
- (void)setAccount:(id)arg1;
- (void)setCallingPID:(int)arg1;
- (void)setCredential:(id)arg1;
- (void)setParameter:(id)arg1 forKey:(id)arg2;
- (void)setRequestMethod:(int)arg1;
- (void)sharedPrivateInit;
- (id)signedURLRequest;

@end
