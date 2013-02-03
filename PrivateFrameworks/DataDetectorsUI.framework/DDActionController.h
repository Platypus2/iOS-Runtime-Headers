/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@class UIView, UIPopoverController, UIViewController, DDAction, UIWindow;

@interface DDActionController : NSObject <UIAlertViewDelegate, UIPopoverControllerDelegate> {
    UIView *_baseView;
    DDAction *_currentAction;
    UIViewController *_currentBaseViewController;
    UIPopoverController *_currentPopoverController;
    id _interactionDelegate;
    UIWindow *_originalWindow;
    UIViewController *_presentedViewController;
}

@property(retain) UIView * baseView;
@property(retain) DDAction * currentAction;
@property(retain) id interactionDelegate;
@property(retain) UIPopoverController * popoverController;

- (void)_cleanup;
- (void)_dismissCurrentViewControllerOurselves;
- (void)_presentController:(id)arg1;
- (void)_presentCurrentViewControllerOurselves;
- (void)actionDidFinish;
- (id)actionsForURL:(id)arg1 result:(struct __DDResult { }*)arg2 context:(id)arg3;
- (id)baseView;
- (id)currentAction;
- (void)dealloc;
- (id)defaultActionForURL:(id)arg1 result:(struct __DDResult { }*)arg2 context:(id)arg3;
- (void)dismissCurrentController;
- (id)init;
- (id)interactionDelegate;
- (void)performAction:(id)arg1;
- (id)popoverController;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setBaseView:(id)arg1;
- (void)setCurrentAction:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setPopoverController:(id)arg1;

@end
