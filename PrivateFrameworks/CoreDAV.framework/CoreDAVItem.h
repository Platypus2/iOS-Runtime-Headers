/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet, NSString, NSData, NSMutableArray;

@interface CoreDAVItem : NSObject <CoreDAVItem> {
    NSMutableSet *_attributes;
    NSMutableArray *_extraChildItems;
    NSString *_name;
    NSString *_nameSpace;
    NSData *_payload;
}

@property(retain) NSMutableSet * attributes;
@property(retain) NSMutableArray * extraChildItems;
@property(retain) NSString * name;
@property(retain) NSString * nameSpace;
@property(retain) NSData * payload;

- (id)attributes;
- (id)childrenToWrite;
- (id)copyParseRules;
- (void)dealloc;
- (id)description;
- (id)extraChildItems;
- (id)generateXMLString;
- (id)hashString;
- (id)init;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)name;
- (id)nameSpace;
- (void)parserFoundAttributes:(id)arg1;
- (void)parserFoundPayload:(id)arg1;
- (void)parserFoundUnrecognizedElement:(id)arg1;
- (void)parserSuggestsBaseURL:(id)arg1;
- (id)payload;
- (id)payloadAsString;
- (void)setAttributes:(id)arg1;
- (void)setExtraChildItems:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameSpace:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setPayloadAsString:(id)arg1;
- (BOOL)validate;
- (void)write:(id)arg1;

@end
