/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class NSArray, UILabel;

@interface AccountSettingsUIAccountCell : PSTableCell {
    UILabel *_dataclassesLabel;
    NSArray *_enabledDataclasses;
    NSArray *_supportedDataclasses;
    BOOL _useCustomDetailsText;
}

+ (float)desiredRowHeight;
+ (void)initialize;

- (id)_dataclassesLabel;
- (void)dealloc;
- (id)enabledDataclassesTextForWidth:(float)arg1;
- (void)layoutSubviews;
- (void)setCellEnabled:(BOOL)arg1;
- (void)setDetailsText:(id)arg1;
- (void)setEnabledDataclasses:(id)arg1 supportedDataclasses:(id)arg2;

@end
