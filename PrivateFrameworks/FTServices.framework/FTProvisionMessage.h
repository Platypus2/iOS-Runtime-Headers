/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSArray, NSString, NSData, NSDictionary;

@interface FTProvisionMessage : FTMessage <NSCopying> {
    NSArray *_URIs;
    NSDictionary *_authenticationInfo;
    NSData *_csr;
    NSString *_protocolVersion;
    NSString *_realm;
    NSArray *_responseBindings;
    NSData *_responseCertificate;
    NSString *_service;
    NSString *_userID;
}

@property(copy) NSArray * URIs;
@property(copy) NSDictionary * authenticationInfo;
@property(copy) NSData * csr;
@property(copy) NSString * protocolVersion;
@property(copy) NSString * realm;
@property(copy) NSArray * responseBindings;
@property(copy) NSData * responseCertificate;
@property(copy) NSString * service;
@property(copy) NSString * userID;

- (id)URIs;
- (id)additionalMessageHeaders;
- (id)authenticationInfo;
- (id)bagKey;
- (int)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)csr;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (id)init;
- (id)messageBody;
- (id)protocolVersion;
- (id)realm;
- (id)requiredKeys;
- (id)responseBindings;
- (id)responseCertificate;
- (int)responseCommand;
- (id)service;
- (void)setAuthenticationInfo:(id)arg1;
- (void)setCsr:(id)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setRealm:(id)arg1;
- (void)setResponseBindings:(id)arg1;
- (void)setResponseCertificate:(id)arg1;
- (void)setService:(id)arg1;
- (void)setURIs:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)userID;
- (BOOL)wantsBagKey;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsHTTPHeaders;

@end
