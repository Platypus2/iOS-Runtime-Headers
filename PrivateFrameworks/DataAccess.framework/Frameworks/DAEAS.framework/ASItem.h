/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSMutableDictionary, ASItem, NSInvocation, NSObject<ASParsing>;

@interface ASItem : NSObject <ASParsing> {
    int _codePage;
    NSInvocation *_currentStreamInvocation;
    int _currentlyParsingCPTNumber;
    NSObject<ASParsing> *_currentlyParsingSubItem;
    ASItem *_parent;
    NSMutableDictionary *_parseRuleUsageNumbers;
    int _parsingState;
    ASItem *_root;
    int _token;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)expectsContent;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;

- (int)_dataclass;
- (BOOL)_haveEnoughDataToKeepParsingWithContext:(id)arg1 curToken:(unsigned char)arg2;
- (BOOL)_itemPathMatches:(id)arg1;
- (BOOL)_itemPathWithDCCPTMatches:(id)arg1 dccpt:(int)arg2;
- (BOOL)_parseNextValueWithDataclass:(int)arg1 context:(id)arg2 root:(id)arg3 parent:(id)arg4 callbackDict:(id)arg5 streamCallbackDict:(id)arg6 parseRules:(id)arg7 account:(id)arg8;
- (id)_replacementObjectWithCallbackDict:(id)arg1;
- (void)_setCurrentlyParsingSubItem:(id)arg1;
- (BOOL)_setupFirstParseWithContext:(id)arg1 root:(id)arg2 parent:(id)arg3;
- (BOOL)_streamIfNecessaryFromContext:(id)arg1;
- (int)_streamYourLittleHeartOutWithContext:(id)arg1;
- (id)_streamingInvocationForStreamingCallbackDict:(id)arg1 dccpt:(int)arg2;
- (id)asParseRules;
- (id)currentStreamInvocation;
- (void)dealloc;
- (void)ignoreThisContent:(id)arg1;
- (id)init;
- (BOOL)nextParsedObjectWithContext:(id)arg1 root:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 dataclass:(int)arg5 outParsedObject:(id*)arg6 outCPTNumber:(int*)arg7 account:(id)arg8;
- (id)parent;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (int)parsingState;
- (void)setCurrentStreamInvocation:(id)arg1;

@end
