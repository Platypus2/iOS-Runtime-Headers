/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class TableViewManager, NSMutableDictionary, NSIndexPath;

@interface ManagedTableViewCell : UITableViewCell {
    NSMutableDictionary *_cellDict;
    float _cellXEdgeInset;
    float _computedRightmostEditTextInset;
    NSIndexPath *_currentIndexPath;
    float _forcedRightmostEditTextInset;
    float _neededContentHeight;
    TableViewManager *_parentTableManager;
}

@property(retain) NSMutableDictionary * cellDict;
@property(readonly) float computedRightmostEditTextInset;
@property(retain) NSIndexPath * currentIndexPath;
@property float forcedRightmostEditTextInset;
@property(readonly) float neededContentHeight;
@property TableViewManager * parentTableManager;

- (id)accessibilityValue;
- (float)calculateFrameSizeForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned int)arg3 withRemainingContentWidth:(float)arg4;
- (void)calculatePositionForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned int)arg3;
- (id)cellDict;
- (float)computedRightmostEditTextInset;
- (id)currentIndexPath;
- (void)dealloc;
- (float)forcedRightmostEditTextInset;
- (float)horizontalSpacingForView:(id)arg1 withItem:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (float)neededContentHeight;
- (id)parentTableManager;
- (void)prepareForReuse;
- (void)setCellDict:(id)arg1;
- (void)setCurrentIndexPath:(id)arg1;
- (void)setForcedRightmostEditTextInset:(float)arg1;
- (void)setParentTableManager:(id)arg1;

@end
