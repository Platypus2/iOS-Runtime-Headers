/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIExposureAdjust : CIFilter {
    NSNumber *inputEV;
    CIImage *inputImage;
}

@property(copy) NSNumber * inputEV;
@property(retain) CIImage * inputImage;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)inputEV;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputEV:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
