/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray;

@interface _PFGarbageManager : NSObject {
    NSMutableArray *_urlsToCleanUp;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)defaultInstance;
+ (void)initialize;

- (id)_init__;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)autorelease;
- (void)doCleanupForURL:(id)arg1;
- (void)registerURLForCleanup:(id)arg1;
- (void)release;
- (void)removeDirectory:(id)arg1;
- (id)retain;
- (unsigned int)retainCount;
- (id)temporaryLinksDirectoryForStore:(id)arg1;

@end
