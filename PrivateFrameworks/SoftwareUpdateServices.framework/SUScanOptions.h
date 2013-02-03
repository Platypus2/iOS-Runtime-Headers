/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@class NSSet, NSString, NSMutableSet;

@interface SUScanOptions : NSObject <NSCoding> {
    BOOL _forced;
    NSString *_identifier;
    NSMutableSet *_types;
}

@property(getter=isForced) BOOL forced;
@property(retain) NSString * identifier;
@property(retain) NSSet * types;

- (void)addType:(int)arg1;
- (void)clearTypes;
- (BOOL)containsType:(int)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)findsAnyUpdate;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isForced;
- (void)removeType:(int)arg1;
- (void)setForced:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTypes:(id)arg1;
- (id)types;

@end
