/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIView, NSMutableArray, NSArray;

@interface MKOrientationContext : NSObject {
    NSMutableArray *orientViews;
    UIView *projectionView;
    struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } *relativeViewFrames;
    NSArray *relativeViews;
}

- (void)_computeRelativeViewFrame:(id)arg1;
- (void)_computeRelativeViewFrames;
- (void)dealloc;
- (id)initWithViewsToOrient:(id)arg1 relativeViews:(id)arg2 projectionView:(id)arg3;
- (void)invalidateView:(id)arg1;

@end
