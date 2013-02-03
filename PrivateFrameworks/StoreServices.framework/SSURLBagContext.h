/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSDictionary, NSNumber, NSMutableDictionary;

@interface SSURLBagContext : NSObject <SSCoding, SSXPCCoding, NSCopying> {
    int _bagType;
    NSMutableDictionary *_httpHeaders;
    NSNumber *_userIdentifier;
}

@property(copy) NSDictionary * allHTTPHeaders;
@property int bagType;
@property(readonly) NSString * cacheKey;
@property(retain) NSNumber * userIdentifier;

+ (id)contextWithBagType:(int)arg1;

- (id)allHTTPHeaders;
- (int)bagType;
- (id)cacheKey;
- (id)copyPropertyListEncoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)initWithXPCEncoding:(void*)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setAllHTTPHeaders:(id)arg1;
- (void)setBagType:(int)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)userIdentifier;
- (id)valueForHTTPHeaderField:(id)arg1;

@end
