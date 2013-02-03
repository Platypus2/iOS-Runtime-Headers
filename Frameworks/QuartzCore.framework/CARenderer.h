/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CALayer, CAContext;

@interface CARenderer : NSObject {
    struct CARendererPriv { id x1; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x2; unsigned char x3; void*x4; unsigned char x5; out in void*x6; void*x7; void*x8; void*x9; void*x10; struct Weak<objc_object*> { 
            id _value; 
        } x11; id x12; void*x13; void*x14; void*x15; void*x16; unsigned long x17; unsigned char x18; out in void*x19; void*x20; void*x21; void*x22; void*x23; struct Context {} *x24; struct Renderer {} *x25; struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } x26; struct Update {} *x27; unsigned int x28; unsigned int x29[2]; unsigned int x30[2]; unsigned int x31; unsigned int x32 : 8; unsigned int x33; BOOL x34[0]; } *_priv;
}

@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } bounds;
@property(retain) CAContext * context;
@property id delegate;
@property(retain) CALayer * layer;

+ (id)rendererWithEAGLContext:(id)arg1 options:(id)arg2;

- (id)_initWithEAGLContext:(id)arg1 options:(id)arg2;
- (id)_initWithOptions:(id)arg1;
- (void)addUpdateRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)beginFrameAtTime:(double)arg1 timeStamp:(struct { unsigned int x1; int x2; long long x3; unsigned long long x4; double x5; long long x6; struct CVSMPTETime { short x_7_1_1; short x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; short x_7_1_6; short x_7_1_7; short x_7_1_8; short x_7_1_9; } x7; unsigned long long x8; unsigned long long x9; }*)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (void)endFrame;
- (BOOL)hasMissingContent;
- (id)layer;
- (double)nextFrameTime;
- (void)render;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayer:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })updateBounds;

@end
