/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVMediaSelectionOption, NSDictionary, AVAsset;

@interface AVMediaSelectionKeyValueGroup : AVMediaSelectionGroup {
    AVAsset *_asset;
    AVMediaSelectionOption *_defaultOption;
    NSDictionary *_dictionary;
    NSArray *_options;
}

- (id)_defaultOption;
- (id)_groupID;
- (BOOL)_isKeyValueGroup;
- (BOOL)_matchesGroupID:(id)arg1 mediaType:(id)arg2;
- (id)_mediaType;
- (id)_optionWithID:(id)arg1;
- (BOOL)allowsEmptySelection;
- (id)asset;
- (void)dealloc;
- (id)dictionary;
- (unsigned int)hash;
- (id)initWithAsset:(id)arg1 dictionary:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
- (id)options;

@end
