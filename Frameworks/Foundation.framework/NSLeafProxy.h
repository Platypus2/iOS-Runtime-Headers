/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSDocInfo;

@interface NSLeafProxy <NSCopying> {
     /* Encoded args for previous method:  */
    NSString *dir;
    NSDocInfo *docInfo;
    NSString *file;
    Class isa;
    id realObject;
    int refCount;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)forwardInvocation:(id)arg1;
+ (/* Warning: Unrecognized filer type: '' using 'void*' */ void*)initialize;

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)autorelease;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initDir:(id)arg1 file:(id)arg2 docInfo:(id)arg3;
- (BOOL)isProxy;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)reallyDealloc;
- (void)release;
- (id)retain;
- (unsigned int)retainCount;

@end
