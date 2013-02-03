/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, GKPlayer, GKGameRecordInternal, GKGame, NSDate, GKScore;

@interface GKGameRecord : NSObject {
    GKGame *_game;
    GKGameRecordInternal *_internal;
    GKPlayer *_player;
}

@property(readonly) unsigned int achievementPoints;
@property(readonly) unsigned int achievements;
@property(readonly) NSString * categoryID;
@property(readonly) unsigned int friendRank;
@property(retain) GKGame * game;
@property(retain) GKGameRecordInternal * internal;
@property(readonly) NSDate * lastPlayedDate;
@property(readonly) unsigned int maxAchievementPoints;
@property(readonly) unsigned int maxAchievements;
@property(readonly) unsigned int maxFriendRank;
@property(readonly) unsigned int maxRank;
@property(readonly) unsigned int numberOfCategories;
@property(readonly) BOOL played;
@property(retain) GKPlayer * player;
@property(readonly) NSDate * purchaseDate;
@property(readonly) unsigned int rank;
@property float rating;
@property(readonly) GKScore * score;
@property(readonly) BOOL supportsAchievements;
@property(readonly) BOOL supportsLeaderboards;

+ (id)cacheKeyForPlayer:(id)arg1 game:(id)arg2;
+ (id)cacheKeyForPlayer:(id)arg1 internal:(id)arg2;
+ (id)gameRecordForPlayer:(id)arg1 game:(id)arg2;
+ (id)internalRepresentationCache;
+ (id)internalRepresentationForPlayer:(id)arg1 game:(id)arg2;
+ (void)loadGameRecordForPlayer:(id)arg1 game:(id)arg2 withCompletionHandler:(id)arg3;
+ (void)loadGameRecordsForPlayer:(id)arg1 games:(id)arg2 withCompletionHandler:(id)arg3;
+ (void)updateGameRecords:(id)arg1 withCompletionHandlerAndError:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)game;
- (unsigned int)hash;
- (id)initWithInternalRepresentation:(id)arg1 player:(id)arg2 game:(id)arg3;
- (id)internal;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)maxAchievementPoints;
- (unsigned int)maxAchievements;
- (unsigned int)numberOfCategories;
- (BOOL)played;
- (id)player;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)score;
- (void)setGame:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)submitRating:(float)arg1 withCompletionHandler:(id)arg2;
- (BOOL)supportsAchievements;
- (BOOL)supportsLeaderboards;
- (id)valueForUndefinedKey:(id)arg1;

@end
