/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGameDetailHeaderView, GKGame;

@interface GKGameDetailHeaderSection : GKTableSectionHeaderBackgroundButton {
    GKGame *_game;
    GKGameDetailHeaderView *_headerView;
}

@property(retain) GKGame * game;
@property(retain) GKGameDetailHeaderView * headerView;

- (BOOL)allowsSelection;
- (Class)contentViewClass;
- (void)dealloc;
- (id)game;
- (id)headerView;
- (float)sectionFooterHeightInTableView:(id)arg1;
- (float)sectionHeaderHeightInTableView:(id)arg1;
- (id)sectionHeaderViewInTableView:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (id)tableView:(id)arg1 willSelectIndexPath:(id)arg2;

@end
