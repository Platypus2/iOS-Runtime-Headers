/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGame, GKPlayer, GKSparseLeaderboard, GKSectionHeader, NSString, NSObject<GKLeaderboardDelegate>, NSMutableDictionary, NSArray;

@interface GKLeaderboardSection : GKInterleavedListTableSection {
    BOOL _allowsFriendSelection;
    NSString *_categoryID;
    GKSparseLeaderboard *_friendLeaderboard;
    GKGame *_game;
    GKSparseLeaderboard *_globalLeaderboard;
    NSObject<GKLeaderboardDelegate> *_leaderboardDelegate;
    NSArray *_leaderboards;
    GKPlayer *_player;
    NSMutableDictionary *_playerInfo;
    int _playerScope;
    NSArray *_searchPlayers;
    GKSectionHeader *_statusView;
    int _timeScope;
    BOOL _usesUppercaseTitles;
}

@property BOOL allowsFriendSelection;
@property(retain) NSString * categoryID;
@property(retain) GKSparseLeaderboard * friendLeaderboard;
@property(retain) GKGame * game;
@property(retain) GKSparseLeaderboard * globalLeaderboard;
@property NSObject<GKLeaderboardDelegate> * leaderboardDelegate;
@property(retain) NSArray * leaderboards;
@property(retain) GKPlayer * player;
@property(retain) NSMutableDictionary * playerInfo;
@property int playerScope;
@property(retain) NSArray * searchPlayers;
@property(retain) GKSectionHeader * statusView;
@property int timeScope;
@property BOOL usesUppercaseTitles;

- (BOOL)_shouldApplyExpensiveContentsFromLeaderboard:(id)arg1 toTableView:(id)arg2;
- (BOOL)allowsFriendSelection;
- (void)cachePlayer:(id)arg1;
- (BOOL)canSelectPlayer:(id)arg1;
- (id)categoryID;
- (id)currentSectionHeaderTitleInTableView:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)filterWithSearchText:(id)arg1;
- (void)forwardHandlePressGesture:(id)arg1 forTableView:(id)arg2;
- (id)friendLeaderboard;
- (id)game;
- (id)globalLeaderboard;
- (id)init;
- (id)initWithGame:(id)arg1;
- (BOOL)isPlayerCached:(id)arg1;
- (Class)leaderboardCellClass;
- (Class)leaderboardCellContentsClass;
- (Class)leaderboardClass;
- (id)leaderboardDelegate;
- (id)leaderboardForCategoryID:(id)arg1 timeScope:(int)arg2 playerScope:(int)arg3;
- (id)leaderboards;
- (void)loadPlayersForScores:(id)arg1 forLeaderboard:(id)arg2 withCompletionHandler:(id)arg3;
- (void)loadScoresForLeaderboard:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 withCompletionHandler:(id)arg3;
- (int)numberOfContentColumnsInTableView:(id)arg1;
- (id)player;
- (id)playerDisplayNameForPlayerID:(id)arg1;
- (id)playerForPlayerID:(id)arg1;
- (id)playerForScore:(id)arg1;
- (id)playerInfo;
- (id)playerInfoForPlayerID:(id)arg1;
- (int)playerScope;
- (void)prepareLeaderboards;
- (void)purgeCachedData;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (id)searchPlayers;
- (id)searchableLeaderboard;
- (int)sectionContentRowCountInTableView:(id)arg1 column:(int)arg2;
- (int)sectionFooterRowCountInTableView:(id)arg1 column:(int)arg2;
- (float)sectionHeaderHeightInTableView:(id)arg1;
- (int)sectionHeaderRowCountInTableView:(id)arg1 column:(int)arg2;
- (int)sectionItemCountInTableView:(id)arg1 column:(int)arg2;
- (int)sectionItemCountInTableView:(id)arg1;
- (id)sectionReuseIdentifierInTableView:(id)arg1;
- (int)sectionScoreCountInTableView:(id)arg1 column:(int)arg2;
- (int)sectionShowcasedScoreCountInTableView:(id)arg1 column:(int)arg2;
- (void)setAllowsFriendSelection:(BOOL)arg1;
- (void)setCategoryID:(id)arg1;
- (void)setFriendLeaderboard:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setGlobalLeaderboard:(id)arg1;
- (void)setLeaderboardDelegate:(id)arg1;
- (void)setLeaderboards:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerInfo:(id)arg1;
- (void)setPlayerScope:(int)arg1;
- (void)setSearchPlayers:(id)arg1;
- (void)setStatusView:(id)arg1;
- (void)setTimeScope:(int)arg1;
- (void)setUsesUppercaseTitles:(BOOL)arg1;
- (BOOL)showPortraitForScoreAtRow:(int)arg1;
- (id)statusView;
- (float)tableView:(id)arg1 baseHeightForScoreRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectItem:(id)arg2;
- (id)tableView:(id)arg1 headerCellWithIdentifier:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 headerTextForLeaderboard:(id)arg2 uppercase:(BOOL)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 indexOfItemForPlayerID:(id)arg2;
- (id)tableView:(id)arg1 indexPathsForLeaderboardRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inSection:(unsigned int)arg3;
- (BOOL)tableView:(id)arg1 isShowcasedScoreRow:(int)arg2;
- (id)tableView:(id)arg1 itemAtIndex:(int)arg2 column:(int)arg3;
- (id)tableView:(id)arg1 itemAtIndex:(int)arg2;
- (int)tableView:(id)arg1 itemIndexForIndexPath:(id)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3 column:(int)arg4;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3;
- (void)tableView:(id)arg1 prepareExpensiveContentAtIndexPaths:(id)arg2 withCompletionHandler:(id)arg3;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2 column:(int)arg3;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (id)tableView:(id)arg1 reuseIdentifiersForRow:(int)arg2;
- (id)tableView:(id)arg1 scoreCellWithIdentifiers:(id)arg2 atIndexPath:(id)arg3;
- (void)tableView:(id)arg1 showMoreInSection:(int)arg2;
- (id)tableView:(id)arg1 statusCellWithIdentifier:(id)arg2 atIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDrawCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectIndexPath:(id)arg2;
- (int)timeScope;
- (void)updateStatusViewInTableView:(id)arg1;
- (BOOL)usesUppercaseTitles;

@end
