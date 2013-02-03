/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIColor, CIVector, NSNumber;

@interface CICheckerboardGenerator : CIFilter {
    CIVector *inputCenter;
    CIColor *inputColor0;
    CIColor *inputColor1;
    NSNumber *inputSharpness;
    NSNumber *inputWidth;
}

@property(retain) CIVector * inputCenter;
@property(retain) CIColor * inputColor0;
@property(retain) CIColor * inputColor1;
@property(retain) NSNumber * inputSharpness;
@property(retain) NSNumber * inputWidth;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputCenter;
- (id)inputColor0;
- (id)inputColor1;
- (id)inputSharpness;
- (id)inputWidth;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputCenter:(id)arg1;
- (void)setInputColor0:(id)arg1;
- (void)setInputColor1:(id)arg1;
- (void)setInputSharpness:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end
