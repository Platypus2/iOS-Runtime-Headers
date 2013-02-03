/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPageControl, UIView, <UIPageControllerDelegate>, UIScrollView, UIViewController, NSMutableArray;

@interface UIPageController : UIViewController {
    struct { 
        unsigned int delegateViewControllerAtIndex : 1; 
        unsigned int delegateWillBeginPaging : 1; 
        unsigned int delegateDidEndPaging : 1; 
        unsigned int displaysPageControl : 1; 
        unsigned int wraps : 1; 
    <UIPageControllerDelegate> *_delegate;
    int _notificationState[3];
    UIPageControl *_pageControl;
    } _pageControllerFlags;
    int _pageCount;
    int _pageSpacing;
    UIScrollView *_scrollView;
    NSMutableArray *_viewControllers;
    int _visibleIndex;
    UIView *_wrapperViews[3];
}

@property <UIPageControllerDelegate> * delegate;
@property BOOL displaysPageControl;
@property int pageCount;
@property float pageSpacing;
@property int visibleIndex;
@property(readonly) UIViewController * visibleViewController;
@property BOOL wraps;

- (void)_adjustScrollViewContentInsets;
- (BOOL)_allowsAutorotation;
- (void)_createPageControl;
- (BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(int)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (BOOL)_hasNextViewController;
- (BOOL)_hasPreviousViewController;
- (BOOL)_hasVisibleViewController;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (BOOL)_isViewControllerBeingUnloaded:(id)arg1 atIndex:(int)arg2;
- (id)_loadNextViewController;
- (id)_loadPreviousViewController;
- (id)_loadVisibleViewControllerAndNotify:(BOOL)arg1;
- (BOOL)_needToLoadNext;
- (BOOL)_needToLoadPrevious;
- (BOOL)_needToLoadVisible;
- (id)_nextViewController;
- (int)_nextViewControllerNotificationState;
- (void)_notifyNextViewController:(int)arg1 animated:(BOOL)arg2;
- (void)_notifyPreviousViewController:(int)arg1 animated:(BOOL)arg2;
- (void)_notifyViewController:(id)arg1 ofState:(int)arg2 previousState:(int)arg3 animated:(BOOL)arg4;
- (void)_notifyVisibleViewController:(int)arg1 animated:(BOOL)arg2;
- (void)_pageChanged:(id)arg1;
- (id)_pageControllerScrollView;
- (id)_previousViewController;
- (int)_previousViewControllerNotificationState;
- (void)_replaceViewControllerAtIndex:(int)arg1 withViewController:(id)arg2;
- (void)_scrollView:(id)arg1 boundsDidChangeToSize:(struct CGSize { float x1; float x2; })arg2;
- (id)_scrollView;
- (void)_scrollViewDidEndPaging;
- (void)_scrollViewDidScroll:(id)arg1 forceUpdate:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_scrollViewFrame;
- (void)_scrollViewWillBeginPaging;
- (void)_setNextViewController:(id)arg1;
- (void)_setNextViewControllerNotificationState:(int)arg1;
- (void)_setPreviousViewController:(id)arg1;
- (void)_setPreviousViewControllerNotificationState:(int)arg1;
- (void)_setVisibleViewController:(id)arg1;
- (void)_setVisibleViewControllerNotificationState:(int)arg1;
- (BOOL)_shouldUseOnePartRotation;
- (id)_visibleViewController;
- (int)_visibleViewControllerNotificationState;
- (void)dealloc;
- (id)delegate;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)displaysPageControl;
- (int)indexOfViewController:(id)arg1;
- (void)loadView;
- (int)pageCount;
- (float)pageSpacing;
- (void)reloadViewControllerAtIndex:(int)arg1;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (void)setDelegate:(id)arg1;
- (void)setDisplaysPageControl:(BOOL)arg1;
- (void)setPageCount:(int)arg1;
- (void)setPageSpacing:(float)arg1;
- (void)setVisibleIndex:(int)arg1 animated:(BOOL)arg2;
- (void)setVisibleIndex:(int)arg1 preservingLoadedViewControllers:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setVisibleIndex:(int)arg1;
- (void)setWraps:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (int)visibleIndex;
- (id)visibleViewController;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)wraps;

@end
