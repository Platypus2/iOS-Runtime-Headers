/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView<UIKeyboardRivenTransitionView>, UISwipeGestureRecognizer, UIDelayedAction, UIKBBackgroundView, NSMutableSet, UIView, UIKBKeyplaneView, UIKBTree, CADisplayLink, NSString, NSMutableDictionary, NSTimer;

@interface UIKeyboardLayoutStar : UIKeyboardLayout {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    NSMutableSet *_accentInfo;
    UIKBTree *_activeKey;
    NSMutableSet *_allKeyplaneKeycaps;
    NSMutableDictionary *_allKeyplaneViews;
    int _appearance;
    float _autoSplitElapsedTime;
    double _autoSplitLastUpdate;
    BOOL _autoshift;
    UIKBBackgroundView *_backgroundView;
    NSMutableDictionary *_compositeImages;
    UIDelayedAction *_delayedCentroidUpdate;
    NSMutableDictionary *_delegatesForKeyplaneKeys;
    SEL _deleteAction;
    SEL _deleteLongAction;
    id _deleteTarget;
    BOOL _didLongPress;
    UIView *_dimKeyboardImageView;
    CADisplayLink *_displayLink;
    BOOL _dragChangedKey;
    BOOL _dragDismissStarted;
    } _dragPrevPoint;
    float _dragValues[4];
    float _dragVelocity;
    BOOL _dragged;
    struct __CFDictionary { } *_extendedTouchInfoMap;
    float _finalSplitProgress;
    UIView *_flickPopupView;
    NSTimer *_flickPopuptimer;
    BOOL _ghostKeysEnabled;
    NSMutableSet *_hasAccents;
    } _initialDragPoint;
    float _initialPinchSeparation;
    float _initialSplitProgress;
    BOOL _isOutOfBounds;
    } _keyPeripheralInset;
    UIKBTree *_keyboard;
    BOOL _keyboardImageViewIsDim;
    NSString *_keyboardName;
    int _keyboardType;
    NSMutableDictionary *_keyboards;
    UIKBTree *_keyplane;
    NSString *_keyplaneName;
    UIKBKeyplaneView *_keyplaneView;
    int _lastFlickDirection;
    UISwipeGestureRecognizer *_leftSwipeRecognizer;
    NSString *_localizedInputKey;
    BOOL _pinchDetected;
    float _pinchSeparationValues[4];
    BOOL _popupViewIsShown;
    NSString *_preRotateKeyplaneName;
    BOOL _preRotateShift;
    int _preferredTrackingChangeCount;
    double _prevTouchDownTime;
    double _prevTouchUpTime;
    int _prevUpActions;
    BOOL _previousTouchInMore;
    SEL _returnAction;
    SEL _returnLongAction;
    id _returnTarget;
    UISwipeGestureRecognizer *_rightSwipeRecognizer;
    BOOL _secureTextEntry;
    BOOL _settingShift;
    BOOL _shift;
    double _shiftLockFirstTapTime;
    BOOL _shiftLockReady;
    int _shiftTrackingChangeCount;
    BOOL _showForwardDeleteKey;
    BOOL _showIntlKey;
    SEL _spaceAction;
    SEL _spaceLongAction;
    id _spaceTarget;
    BOOL _swipeDetected;
    BOOL _touchDownInMoreKey;
    BOOL _touchDownInShiftKey;
    id _touchInfo;
    UIView<UIKeyboardRivenTransitionView> *_transitionView;
    UISwipeGestureRecognizer *_upSwipeRecognizer;
    NSMutableSet *_validInputStrings;
    BOOL _wasShifted;
}

@property(retain) UIKBTree * activeKey;
@property BOOL autoShift;
@property BOOL didLongPress;
@property(readonly) UIKBTree * keyboard;
@property(copy) NSString * keyboardName;
@property(readonly) UIKBTree * keyplane;
@property(copy) NSString * keyplaneName;
@property(copy) NSString * localizedInputKey;
@property(readonly) NSString * localizedInputMode;
@property(getter=isRotating,readonly) BOOL rotating;
@property BOOL shift;
@property(readonly) BOOL showForwardDeleteKey;
@property BOOL showIntlKey;

- (void)_autoSplit:(id)arg1;
- (void)activateCompositeKey:(id)arg1 direction:(int)arg2 flickString:(id)arg3 popupInfo:(id)arg4;
- (id)activationIndicatorView;
- (id)activeKey;
- (id)activeTouchForKey:(id)arg1;
- (struct CGPoint { float x1; float x2; })applyError:(struct CGPoint { float x1; float x2; })arg1 toKey:(id)arg2;
- (BOOL)autoShift;
- (BOOL)backgroundNeedsRedraw;
- (id)baseKeyForString:(id)arg1;
- (id)cacheIdentifierForKeyplaneNamed:(id)arg1 withVisualStyle:(int)arg2;
- (id)cachedKeyplaneNameForKeyplane:(id)arg1;
- (BOOL)canProduceString:(id)arg1;
- (BOOL)canReuseKeyplaneView;
- (void)cancelTouchIfNecessaryForInfo:(id)arg1;
- (id)candidateList;
- (void)changeToKeyplane:(id)arg1;
- (void)clearAllKeyDelegates;
- (void)clearAllTouchInfo;
- (void)clearHandwritingStrokesIfNeeded;
- (void)clearInfoForTouch:(id)arg1;
- (void)clearUnusedObjects;
- (id)compositeImageForKey:(id)arg1;
- (void)confirmAction;
- (void)deactivateActiveKeys;
- (void)deactivateAllInActivatedSet;
- (void)dealloc;
- (id)defaultNameForKeyplaneName:(id)arg1;
- (void)deleteAction;
- (void)didClearInput;
- (BOOL)didLongPress;
- (void)didRotate;
- (int)displayTypeHintForMoreKey;
- (int)displayTypeHintForShiftKey;
- (BOOL)doesKeyCharging;
- (unsigned int)downActionFlagsForKey:(id)arg1;
- (void)downActionShiftWithKey:(id)arg1;
- (id)findLeftMoreKey;
- (void)finishSplit;
- (void)finishSplitTransition;
- (void)finishSplitTransitionWithProgress:(float)arg1;
- (void)flushKeyCache:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForKeyWithRepresentedString:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1 onKeyplaneName:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForKeylayoutName:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLastKeyWithRepresentedString:(id)arg1;
- (id)generateInfoForTouch:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)getFlickCompositeImageForKey:(id)arg1 direction:(int)arg2 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)getPopupBackgroundImageForKey:(id)arg1 direction:(int)arg2 popupInfo:(id)arg3 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)handleDismissFlickView:(id)arg1;
- (void)handleFlick:(id)arg1;
- (void)handlePopupView:(id)arg1;
- (SEL)handlerForNotification:(id)arg1;
- (BOOL)handwritingPlane;
- (BOOL)hasCandidateKeys;
- (float)hitBuffer;
- (BOOL)ignoresShiftState;
- (id)infoForTouch:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)installGestureRecognizers;
- (float)interpretPinchSeparationValues;
- (void)interpretTouchesForSplit;
- (BOOL)isLongPressedKey:(id)arg1;
- (BOOL)isRotating;
- (BOOL)isShiftKeyBeingHeld;
- (BOOL)isShiftKeyPlaneChooser;
- (BOOL)keyHasAccentedVariants:(id)arg1;
- (id)keyHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)keyHitTestClosestToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)keyHitTestContainingPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)keyHitTestContainingPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)keyHitTestForTouchInfo:(id)arg1 touchStage:(int)arg2;
- (id)keyHitTestWithoutCharging:(struct CGPoint { float x1; float x2; })arg1;
- (id)keyWithRepresentedString:(id)arg1;
- (id)keyboard;
- (id)keyboardName;
- (id)keyboardWithName:(id)arg1;
- (int)keycodeForKey:(id)arg1;
- (id)keyplane;
- (id)keyplaneForKey:(id)arg1;
- (id)keyplaneName;
- (id)keyplaneNamed:(id)arg1;
- (double)lastTouchUpTimestamp;
- (id)localizedInputKey;
- (id)localizedInputMode;
- (void)longPressAction;
- (id)mergableKeyplaneSwitchKeyForRendering:(int)arg1;
- (void)nextCandidatesAction;
- (id)overlayCharacterImageForKey:(id)arg1 direction:(int)arg2 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 flickString:(id)arg4 popupInfo:(id)arg5;
- (BOOL)performReturnAction;
- (BOOL)pinchDetected;
- (BOOL)pinchSplitGestureEnabled;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)popupKeyViews;
- (void)prepareForSplitTransition;
- (void)rebuildSplitTransitionView;
- (void)rebuildSplitTransitionViewFromKeyplane:(id)arg1 toKeyplane:(id)arg2;
- (void)refreshForAvailablityDidChange;
- (void)refreshForRivenPreferences;
- (void)refreshGhostKeyState;
- (void)removeFromSuperview;
- (struct CGImage { }*)renderedImageWithStateFallbacksForToken:(id)arg1;
- (struct CGImage { }*)renderedImageWithToken:(id)arg1;
- (struct CGImage { }*)renderedKeyplaneWithName:(id)arg1 split:(BOOL)arg2;
- (void)resizeForKeyplaneSize:(struct CGSize { float x1; float x2; })arg1;
- (void)restoreDefaultsForAllKeys;
- (void)restoreDefaultsForKey:(id)arg1;
- (id)scriptingInfoWithChildren;
- (void)sendStringAction:(id)arg1 forKey:(id)arg2 isPopupVariant:(BOOL)arg3;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setActiveKey:(id)arg1;
- (void)setAutoShift:(BOOL)arg1;
- (void)setAutoshift:(BOOL)arg1;
- (void)setCompositeImage:(id)arg1 forKey:(id)arg2;
- (void)setCurrencyKeysForCurrentLocaleOnKeyplane:(id)arg1;
- (void)setDelegate:(id)arg1 forKey:(id)arg2;
- (void)setDidLongPress:(BOOL)arg1;
- (void)setKeyForTouchInfo:(id)arg1 key:(id)arg2;
- (void)setKeyboardAppearance:(int)arg1;
- (void)setKeyboardDim:(BOOL)arg1;
- (void)setKeyboardName:(id)arg1 appearance:(int)arg2;
- (void)setKeyboardName:(id)arg1;
- (void)setKeyplaneName:(id)arg1;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)setLocalizedInputKey:(id)arg1;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3;
- (void)setShift:(BOOL)arg1;
- (void)setShowIntlKey:(BOOL)arg1;
- (void)setSplit:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSplitProgress:(float)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (id)shapesForControlKeyShapes:(id)arg1 split:(BOOL)arg2 alternateCJMerge:(BOOL)arg3;
- (id)shapesForControlKeyShapes:(id)arg1 split:(BOOL)arg2;
- (BOOL)shift;
- (BOOL)shouldHitTestKey:(id)arg1;
- (BOOL)shouldPreventInputManagerHitTestingForKey:(id)arg1;
- (BOOL)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2;
- (BOOL)shouldShowForwardDeleteKey;
- (BOOL)shouldShowIndicator;
- (void)showFlickView:(int)arg1 withKey:(id)arg2 flickString:(id)arg3;
- (BOOL)showForwardDeleteKey;
- (BOOL)showIntlKey;
- (void)showKeyboardType:(int)arg1 appearance:(int)arg2 orientation:(id)arg3 withShift:(BOOL)arg4;
- (void)showPopupVariantsForKey:(id)arg1;
- (void)showPopupView:(int)arg1 withKey:(id)arg2 popupInfo:(id)arg3 force:(BOOL)arg4;
- (void)showSplitTransitionView:(BOOL)arg1;
- (id)simulateTouch:(struct CGPoint { float x1; float x2; })arg1;
- (id)simulateTouchForCharacter:(id)arg1 errorVector:(struct CGPoint { float x1; float x2; })arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4;
- (id)spaceKey;
- (id)splitNameForKeyplane:(id)arg1;
- (id)splitNameForKeyplaneName:(id)arg1;
- (int)stateForKey:(id)arg1;
- (int)stateForKeyplaneSwitchKey:(id)arg1;
- (int)stateForShiftKey:(id)arg1;
- (void)swipeDetected:(id)arg1;
- (void)touchCancelled:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)touchDownWithKey:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)touchDragged:(id)arg1;
- (id)touchForKey:(id)arg1;
- (void)touchUp:(id)arg1;
- (void)uninstallGestureRecognizers;
- (unsigned int)upActionFlagsForKey:(id)arg1;
- (void)upActionShift;
- (void)updateBackgroundIfNeeded;
- (void)updateForwardDeleteKeyOnNumberPads;
- (void)updateKeyCentroids;
- (void)updateKeyboardForKeyplane:(id)arg1;
- (void)updateKeyplaneViewMask;
- (BOOL)updateKeysWithDelegates;
- (void)updateLocalizedKeys:(BOOL)arg1;
- (void)updateLocalizedKeysOnKeyplane:(id)arg1;
- (void)updateMoreAndInternationalKeys;
- (void)updateShiftKeyState;
- (void)updateTransitionWithFlags:(int)arg1;
- (BOOL)usesAutoShift;
- (int)visualStyleForKeyboardIfSplit:(BOOL)arg1;
- (void)willRotate;

@end
