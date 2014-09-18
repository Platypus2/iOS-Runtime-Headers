/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMapTable, NSMutableArray, UIImageView, UIPanGestureRecognizer, UIResponder, UIScrollView, UIWindow;

@interface _UIResponderSelectionCursor : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    UIScrollView *_activeFirstResponderScrollView;
    } _activeFirstResponderScrollViewOffset;
    double _consecutiveWithinRowAccumulator;
    UIResponder *_mostLikelyToBeSelectedItem;
    UIPanGestureRecognizer *_panResponderSelectionRecognizer;
    NSArray *_remoteGestures;
    } _responderSelectionStartLocation;
    UIImageView *_responderSelectionView;
    } _scrollingOffset;
    UIScrollView *_scrollingScrollView;
    NSMutableArray *_selectableItems;
    UIResponder *_selectedItemOnTouchDown;
    NSMapTable *_selectionAccumulationDictionary;
    NSMapTable *_selectionThresholdDictionary;
    UIWindow *_targetWindow;
    double _timeOnTouchDown;
    bool_dirtyGeometry;
    bool_isFlick;
    bool_isKeepingCompetitiveFarDiagonalResiduals;
}

@property(retain) UIScrollView * activeFirstResponderScrollView;
@property(retain) UIResponder * mostLikelyToBeSelectedItem;
@property UIWindow * targetWindow;

+ (void)initialize;

- (void)_responderGeometryDidChange;
- (void)accumulateWithDelta:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (id)activeFirstResponderScrollView;
- (struct CGPoint { double x1; double x2; })centerForResponder:(id)arg1;
- (void)dealloc;
- (id)directionalGestureRecognizers;
- (double)horizontalSpacingFromItem:(id)arg1;
- (bool)inSelectedRow:(id)arg1;
- (id)itemsInDirectionOfVector:(struct CGPoint { double x1; double x2; })arg1 withConeOfDegrees:(double)arg2 fromItem:(id)arg3;
- (void)keepSecondaryResidualsCompetitiveTo:(id)arg1;
- (void)loadFirstResponderScrollViewContentInDirection:(struct CGSize { double x1; double x2; })arg1;
- (void)longFlick;
- (id)mostLikelyToBeSelectedItem;
- (void)moveResponderSelectionInDirection:(struct CGSize { double x1; double x2; })arg1;
- (void)moveSelection:(id)arg1;
- (void)panResponderSelection:(id)arg1;
- (void)panTouchDown;
- (void)panTouchUp;
- (id)possibleResponders;
- (void)reset;
- (void)resetIfNecessary;
- (id)responderForPoint:(struct CGPoint { double x1; double x2; })arg1 possibleResponders:(id)arg2;
- (id)respondersInDirection:(struct CGSize { double x1; double x2; })arg1 inView:(id)arg2;
- (void)scrollingToFirstResponderDidFinish:(id)arg1;
- (double)selectionAccumulationForResponder:(id)arg1;
- (double)selectionThresholdForResponder:(id)arg1;
- (void)setActiveFirstResponderScrollView:(id)arg1;
- (void)setMostLikelyToBeSelectedItem:(id)arg1;
- (void)setSelectedItem:(id)arg1;
- (void)setSelectionAccumulation:(double)arg1 forResponder:(id)arg2;
- (void)setSelectionThreshold:(double)arg1 forResponder:(id)arg2;
- (void)setTargetWindow:(id)arg1;
- (id)targetWindow;
- (void)updateFirstResponder:(id)arg1;
- (void)updateResponderSelectionRect;
- (void)updateResponderSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1 possibleResponders:(id)arg2;
- (double)verticalSpacingFromItem:(id)arg1;

@end