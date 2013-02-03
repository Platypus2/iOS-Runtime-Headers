/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSString;

@interface ADParameter : PBCodable {
    NSString *_key;
    NSString *_value;
}

@property(retain) NSString * key;
@property(retain) NSString * value;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)key;
- (BOOL)readFrom:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
