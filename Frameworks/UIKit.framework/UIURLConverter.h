/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, NSArray;

@interface UIURLConverter : NSObject {
    NSArray *_hostPatterns;
    NSArray *_hostSuffixWhiteList;
    NSArray *_pathPatterns;
    NSDictionary *_schemeMapping;
}

- (BOOL)_URLMatchesHostSuffixWhiteList:(id)arg1;
- (BOOL)_URLMatchesPatterns:(id)arg1;
- (BOOL)_string:(id)arg1 matchesPatterns:(id)arg2;
- (id)convertedURLForURL:(id)arg1;
- (void)dealloc;
- (id)initWithURLConverterDictionary:(id)arg1;
- (void)setHostPatternStrings:(id)arg1;
- (void)setHostSuffixWhiteList:(id)arg1;
- (void)setPathPatternStrings:(id)arg1;
- (void)setSchemeMapping:(id)arg1;

@end
