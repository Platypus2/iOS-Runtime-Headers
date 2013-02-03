/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSString;

@interface ASPolicy : ASItem {
    NSString *_key;
    NSString *_status;
    NSString *_type;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;

- (void)_setKey:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setType:(id)arg1;
- (id)asParseRules;
- (void)dealloc;
- (id)description;
- (id)key;
- (id)perDomainDictsForPolicy;
- (int)status;
- (id)type;

@end
