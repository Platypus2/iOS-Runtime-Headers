/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPanGestureRecognizer, UITapGestureRecognizer, <UIPageViewControllerDataSource>, <UIPageViewControllerDelegate>, NSMutableArray, _UIPageCurl, NSArray;

@interface UIPageViewController : UIViewController <UIGestureRecognizerDelegate> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct CGSize { 
        float width; 
        float height; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        unsigned int delegateWantsTransitionCompleted : 1; 
        unsigned int delegateCustomizesSpineLocationForInterfaceOrientation : 1; 
        unsigned int dataSourceSuppliesBeforeViewController : 1; 
        unsigned int dataSourceSuppliesAfterViewController : 1; 
    <UIPageViewControllerDataSource> *_dataSource;
    <UIPageViewControllerDelegate> *_delegate;
    } _delegateFlags;
    BOOL _doubleSided;
    } _effectiveTapRegionBreadths;
    } _effectiveTapRegionInsets;
    int _navigationOrientation;
    _UIPageCurl *_pageCurl;
    UIPanGestureRecognizer *_panGestureRecognizer;
    BOOL _rotatingInterface;
    NSMutableArray *_rotationSnapshotViews;
    int _spineLocation;
    int _spineLocationPriorToInterfaceRotation;
    BOOL _stashingViewControllersForRotation;
    UITapGestureRecognizer *_tapGestureRecognizer;
    } _tapRegionBreadths;
    } _tapRegionInsets;
    struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } *_tapRegions;
    int _transitionStyle;
    NSArray *_viewControllers;
    NSArray *_viewControllersStashedForRotation;
    NSArray *_viewControllersStashedFromDataSource;
}

@property(setter=_setViewControllers:,retain) NSArray * _viewControllers;
@property(setter=_setViewControllersStashedForRotation:,retain) NSArray * _viewControllersStashedForRotation;
@property <UIPageViewControllerDataSource> * dataSource;
@property <UIPageViewControllerDelegate> * delegate;
@property(getter=isDoubleSided) BOOL doubleSided;
@property(readonly) NSArray * gestureRecognizers;
@property(readonly) int navigationOrientation;
@property(readonly) int spineLocation;
@property(readonly) int transitionStyle;
@property(readonly) NSArray * viewControllers;

+ (BOOL)_isNavigationOrientation:(int)arg1 supportedForTransitionStyle:(int)arg2;
+ (BOOL)_isSpineLocation:(int)arg1 supportedForTransitionStyle:(int)arg2;
+ (BOOL)_isSupportedTransitionStyle:(int)arg1;
+ (id)stringForSpineLocation:(int)arg1;

- (BOOL)_canHandleGestures;
- (void)_contentViewFrameDidChange;
- (struct CGSize { float x1; float x2; })_effectiveTapRegionBreadths;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_effectiveTapRegionInsets;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (id)_incomingViewControllersForGestureDrivenCurlInDirection:(int)arg1;
- (void)_invalidateEffectiveTapRegions;
- (void)_invalidateViewControllersStashedFromDataSource;
- (BOOL)_isCurrentViewControllerStateValid;
- (int)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)arg1 suggestedVelocity:(float*)arg2;
- (void)_populateLeftAndRightViewControllersInMap:(id)arg1 withViewControllers:(id)arg2 forCurlInDirection:(int)arg3;
- (void)_setSpineLocation:(int)arg1;
- (void)_setTapRegionBreadths:(struct CGSize { float x1; float x2; })arg1;
- (void)_setTapRegionInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setViewControllers:(id)arg1 withCurlOfType:(int)arg2 fromLocation:(struct CGPoint { float x1; float x2; })arg3 direction:(int)arg4 animated:(BOOL)arg5 completion:(id)arg6;
- (void)_setViewControllers:(id)arg1;
- (void)_setViewControllersStashedForRotation:(id)arg1;
- (BOOL)_shouldBeginNavigationInDirection:(int*)arg1 inResponseToPanGestureRecognizer:(id)arg2;
- (BOOL)_shouldCompleteManualCurlWithSuggestedVelocity:(float*)arg1;
- (BOOL)_shouldNavigateInDirection:(int*)arg1 inResponseToTapGestureRecognizer:(id)arg2;
- (BOOL)_shouldNavigateInDirection:(int*)arg1 inResponseToVelocity:(float*)arg2 ofGestureRecognizedByPanGestureRecognizer:(id)arg3;
- (BOOL)_shouldPersistViewWhenCoding;
- (struct CGSize { float x1; float x2; })_tapRegionBreadths;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_tapRegionInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_tapRegions;
- (id)_validatedViewControllersForCurlWithViewControllers:(id)arg1;
- (id)_viewControllerAfterViewController:(id)arg1;
- (id)_viewControllerBefore:(BOOL)arg1 viewController:(id)arg2;
- (id)_viewControllerBeforeViewController:(id)arg1;
- (id)_viewControllers;
- (id)_viewControllersForCurlWithViewControllers:(id)arg1 direction:(int)arg2;
- (id)_viewControllersForPendingSpineLocation:(int)arg1;
- (id)_viewControllersStashedForRotation;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)gestureRecognizers;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTransitionStyle:(int)arg1 navigationOrientation:(int)arg2 options:(id)arg3;
- (BOOL)isDoubleSided;
- (void)loadView;
- (int)navigationOrientation;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoubleSided:(BOOL)arg1;
- (void)setViewControllers:(id)arg1 direction:(int)arg2 animated:(BOOL)arg3 completion:(id)arg4;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (int)spineLocation;
- (int)transitionStyle;
- (id)viewControllers;
- (void)viewWillUnload;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
