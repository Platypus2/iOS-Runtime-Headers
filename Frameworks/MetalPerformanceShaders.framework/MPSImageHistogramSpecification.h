/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSImageHistogramSpecification : MPSUnaryImageKernel {
    bool encodeTransform;
    bool histogramAlpha;
    unsigned int histogramEntries;
    voidmaxPixelValue;
    voidminPixelValue;
    bool optimized256BinsUseCase;
    <MTLBuffer> *specificationBuffer;
}

@property (nonatomic, readonly) struct { unsigned int x1; BOOL x2; } histogramInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeTransformToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 sourceHistogram:(id)arg3 sourceHistogramOffset:(unsigned int)arg4 desiredHistogram:(id)arg5 desiredHistogramOffset:(unsigned int)arg6;
- (long)encodeWithComputeEncoder:(id)arg1 commandBuffer:(id)arg2 sourceTexture:(id)arg3 destinationTexture:(id)arg4 callInfo:(const struct { struct MIPixelInfo {} *x1; struct MIPixelInfo {} *x2; struct { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_3_1_2; } x3; }*)arg5;
- (struct { unsigned int x1; BOOL x2; })histogramInfo;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 histogramInfo:(const struct { unsigned int x1; BOOL x2; }*)arg2;

@end
