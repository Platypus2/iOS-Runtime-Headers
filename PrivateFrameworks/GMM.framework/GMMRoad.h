/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface GMMRoad : NSObject {
    unsigned long numPoints;
    struct Point { int x1; int x2; } *points;
}

- (void)dealloc;
- (void)getPoints:(struct Point {}**)arg1 count:(unsigned int*)arg2;
- (id)initWithPoints:(struct Point { int x1; int x2; }*)arg1 count:(unsigned long)arg2;

@end
