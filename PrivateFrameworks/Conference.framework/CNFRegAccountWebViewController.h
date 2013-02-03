/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class NSTimer;

@interface CNFRegAccountWebViewController : CNFRegServerWebViewController <UIAlertViewDelegate> {
    NSTimer *_bagLoadTimer;
    BOOL _failedBagLoad;
    BOOL _listeningForBagLoad;
}

@property BOOL failedBagLoad;

- (void)_bagLoadTimeout:(id)arg1;
- (void)_handleFTServerBagFinishedLoading;
- (BOOL)_loadURLFromBag;
- (id)_nonModalParentController;
- (void)_reload;
- (void)_reloadDelayed;
- (void)_showGenericErrorWithHandler:(id)arg1;
- (void)_showURLDidNotLoadAlert;
- (void)_startBagLoadTimer;
- (void)_startListeningForBagLoad;
- (void)_stopBagLoadTimer;
- (void)_stopCurrentReload;
- (void)_stopListeningForBagLoad;
- (id)_viewPortForFormSheetPresentation;
- (id)_viewPortForNormalPresentation;
- (id)_viewPortStringForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)authIdHeaderValue;
- (id)authTokenHeaderValue;
- (id)bagKey;
- (void)cancelTapped;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)dealloc;
- (void)doHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (BOOL)failedBagLoad;
- (void)handleLeftButtonError:(id)arg1;
- (void)handleRightButtonError:(id)arg1;
- (id)initWithRegController:(id)arg1;
- (void)loadView;
- (id)logName;
- (void)parseHandoffUrl:(id)arg1;
- (id)securityHeaderValue;
- (id)serviceHeaderValue;
- (void)setFailedBagLoad:(BOOL)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (void)setupUrlHandlers;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldSetHeadersForRequest:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)viewPortHeaderValue;
- (void)viewWillDisappear:(BOOL)arg1;

@end
