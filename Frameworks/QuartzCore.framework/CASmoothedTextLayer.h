/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface CASmoothedTextLayer : CATextLayer {
}

@property unsigned int fontSmoothingStyle;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)needsDisplayForKey:(id)arg1;

- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3; unsigned short x4; unsigned short x5; float x6; struct LayerExt {} *x7; struct Handle {} *x8; struct Object {} *x9; struct Vec2<double> { double x_10_1_1; double x_10_1_2; } x10; struct Rect { double x_11_1_1; double x_11_1_2; double x_11_1_3; double x_11_1_4; } x11; struct TypedArray<CA::Render::Layer> {} *x12; struct TypedArray<CA::Render::Animation> {} *x13; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer*,uint32_t*> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct Command {} *x7; struct Deleted {} *x8; struct List<const void*> {} *x9; struct Context {} *x10; struct HashTable<CA::Layer*,CA::Layer*> {} *x11; struct __CFRunLoop {} *x12; struct __CFRunLoopObserver {} *x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (void)_drawLine:(struct __CTLine { }*)arg1 inContext:(struct CGContext { }*)arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (unsigned int)fontSmoothingStyle;
- (void)setFontSmoothingStyle:(unsigned int)arg1;

@end
