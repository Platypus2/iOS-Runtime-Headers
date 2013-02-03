/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class UILabel, NSString, UIView;

@interface StepByStepUIViewController_ReplaceBaseStation_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {
    UIView *justTextContainerView2;
    UIView *justTextContainerView;
    UILabel *justTextLabel2;
    UILabel *justTextLabel;
    NSString *personalizedBaseName;
    UIView *tableHeaderContainerView;
}

@property(retain) UIView * justTextContainerView2;
@property(retain) UIView * justTextContainerView;
@property(retain) UILabel * justTextLabel2;
@property(retain) UILabel * justTextLabel;
@property(retain) NSString * personalizedBaseName;
@property(retain) UIView * tableHeaderContainerView;

- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (id)justTextContainerView2;
- (id)justTextContainerView;
- (id)justTextLabel2;
- (id)justTextLabel;
- (id)personalizedBaseName;
- (void)prepareParams;
- (void)primaryActionSelected:(BOOL)arg1;
- (void)selectedDeviceUpdated;
- (void)setJustTextContainerView2:(id)arg1;
- (void)setJustTextContainerView:(id)arg1;
- (void)setJustTextLabel2:(id)arg1;
- (void)setJustTextLabel:(id)arg1;
- (void)setPersonalizedBaseName:(id)arg1;
- (void)setTableHeaderContainerView:(id)arg1;
- (void)setupDevices;
- (void)setupEditableBaseStationName;
- (void)setupHeaderAndFooter;
- (BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned int)arg3 toString:(id)arg4;
- (id)tableHeaderContainerView;
- (void)updateNavigationButtons;
- (void)validateAndUpdateNextButton;
- (void)viewWillAppear:(BOOL)arg1;

@end
