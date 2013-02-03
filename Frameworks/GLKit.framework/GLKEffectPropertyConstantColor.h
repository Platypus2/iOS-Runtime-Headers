/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKEffectPropertyConstantColor : GLKEffectProperty {
    union _GLKVector4 { 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
            float q; 
        } ; 
        float v[4]; 
    } _color;
    unsigned char _enabled;
}

@property union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } color;
@property unsigned char enabled;

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

- (void)bind;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })color;
- (void)dealloc;
- (id)description;
- (void)dirtyAllUniforms;
- (unsigned char)enabled;
- (unsigned int)fshMaskCt;
- (char **)fshMaskStr;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)fshMasks;
- (id)init;
- (void)setColor:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (void)setEnabled:(unsigned char)arg1;
- (void)setShaderBindings;
- (unsigned int)vshMaskCt;
- (char **)vshMaskStr;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)vshMasks;

@end
