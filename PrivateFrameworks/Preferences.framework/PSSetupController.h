/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSRootController, UIViewController<PSController>, NSDictionary;

@interface PSSetupController : PSRootController {
    UIViewController<PSController> *_parentController;
    PSRootController *_parentRootController;
    NSDictionary *_rootInfo;
}

- (id)controller;
- (void)dealloc;
- (void)dismiss;
- (void)dismissAnimated:(BOOL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)handleURL:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)parentController;
- (void)popControllerOnParent;
- (BOOL)popupStyleIsModal;
- (void)pushController:(id)arg1;
- (void)pushControllerOnParentWithSpecifier:(id)arg1;
- (void)setParentController:(id)arg1;
- (void)setupController;
- (void)statusBarWillChangeHeight:(id)arg1;
- (BOOL)usePopupStyle;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
