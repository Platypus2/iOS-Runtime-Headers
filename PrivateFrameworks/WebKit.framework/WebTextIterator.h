/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate *_private;
}

+ (id)dd_iteratorForDocument:(id)arg1;

- (struct __DDScanQuery { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryFragment {} *x2; int x3; int x4; int (*x5)(); void *x6; }*)dd_newQueryStopRange:(id*)arg1;
- (void)advance;
- (BOOL)atEnd;
- (id)currentNode;
- (id)currentRange;
- (id)currentText;
- (unsigned int)currentTextLength;
- (const unsigned short*)currentTextPointer;
- (BOOL)dd_checkCurrentRangeAgainstString:(struct __CFString { }*)arg1;
- (id)dd_collectDDRangesForQuery:(struct __DDScanQuery { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryFragment {} *x2; int x3; int x4; int (*x5)(); void *x6; }*)arg1 forResults:(id)arg2;
- (id)dd_doUrlificationForQuery:(struct __DDScanQuery { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryFragment {} *x2; int x3; int x4; int (*x5)(); void *x6; }*)arg1 forResults:(id)arg2 referenceDate:(id)arg3 document:(id)arg4 DOMWasModified:(BOOL*)arg5 URLificationBlock:(id)arg6;
- (void)dealloc;
- (id)initWithRange:(id)arg1;

@end
