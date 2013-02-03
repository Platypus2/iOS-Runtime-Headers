/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSArray;

@interface SSSoftwareUpdatesContext : NSObject <SSCoding, NSCopying, NSMutableCopying> {
    NSString *_clientIdentifierHeader;
    BOOL _forced;
    NSArray *_softwareTypes;
}

@property(readonly) NSString * clientIdentifierHeader;
@property(getter=isForced,readonly) BOOL forced;
@property(readonly) NSArray * softwareTypes;

- (id)clientIdentifierHeader;
- (id)copyPropertyListEncoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)copyXPCEncoding;
- (void)dealloc;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)initWithXPCEncoding:(void*)arg1;
- (BOOL)isForced;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)softwareTypes;

@end
