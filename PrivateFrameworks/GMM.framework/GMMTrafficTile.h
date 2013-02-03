/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;

@interface GMMTrafficTile : NSObject {
    BOOL empty;
    double expirationTime;
    NSMutableArray *roadsAtSpeed[4];
}

@property(getter=isEmpty,readonly) BOOL empty;
@property(readonly) double expirationTime;

+ (double)defaultExpirationTime;

- (void)dealloc;
- (double)expirationTime;
- (id)getRoadsAtSpeed:(int)arg1;
- (id)init;
- (void)invalidate;
- (BOOL)isEmpty;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; unsigned int x2; unsigned int x3; boolx4; boolx5; }*)arg1 tilePath:(const struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; }*)arg2;

@end
