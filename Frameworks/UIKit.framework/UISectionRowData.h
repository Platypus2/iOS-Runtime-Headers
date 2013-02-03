/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISectionRowData : NSObject <NSCopying> {
    int _arrayLength;
    int _footerAlignment;
    float _footerHeight;
    float _footerOffset;
    int _headerAlignment;
    float _headerHeight;
    float _headerOffset;
    float _maxFooterTitleWidth;
    float _maxHeaderTitleWidth;
    int _numRows;
    float *_rowHeights;
    float *_rowOffsets;
    float _sectionHeight;
    float _sectionOffset;
    BOOL _sectionOffsetValid;
    int _sectionRowOffset;
    BOOL _valid;
}

- (float)_defaultSectionFooterHeightForSection:(int)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (float)_defaultSectionHeaderHeightForSection:(int)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (float)_headerOrFooterSizeForTable:(id)arg1 title:(id)arg2 detailText:(id)arg3 isHeader:(BOOL)arg4;
- (int)_rowForPoint:(struct CGPoint { float x1; float x2; })arg1 beginningWithRow:(int)arg2 numberOfRows:(int)arg3;
- (void)addOffset:(float)arg1 fromRow:(int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)deleteRowAtIndex:(int)arg1;
- (void)insertRowAtIndex:(int)arg1 inSection:(int)arg2 rowHeight:(float)arg3 tableViewRowData:(id)arg4;
- (void)invalidate;
- (void)invalidateSectionOffset;
- (void)refreshWithSection:(int)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3;
- (int)rowForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (int)sectionLocationForReorderedRow:(int)arg1;
- (int)sectionLocationForRow:(int)arg1;
- (void)setHeight:(float)arg1 forRow:(int)arg2;

@end
