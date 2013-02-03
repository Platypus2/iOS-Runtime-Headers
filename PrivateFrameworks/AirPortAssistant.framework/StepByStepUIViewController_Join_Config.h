/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class UILabel, NSString, UIView;

@interface StepByStepUIViewController_Join_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {
    UIView *justTextContainerView;
    UILabel *justTextLabel;
    NSString *personalizedBaseName;
    UIView *tableHeaderContainerView;
}

@property(retain) UIView * justTextContainerView;
@property(retain) UILabel * justTextLabel;
@property(retain) NSString * personalizedBaseName;
@property(retain) UIView * tableHeaderContainerView;

- (id)devicePickerLabel;
- (id)deviceTableLabel;
- (id)justTextContainerView;
- (id)justTextLabel;
- (id)personalizedBaseName;
- (void)prepareParams;
- (void)primaryActionSelected:(BOOL)arg1;
- (void)selectedDeviceUpdated;
- (void)setJustTextContainerView:(id)arg1;
- (void)setJustTextLabel:(id)arg1;
- (void)setPersonalizedBaseName:(id)arg1;
- (void)setTableHeaderContainerView:(id)arg1;
- (void)setupDevices;
- (void)setupEditableBaseStationName;
- (void)setupHeaderAndFooter;
- (void)setupTable;
- (BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned int)arg3 toString:(id)arg4;
- (void)syncTopoUIForTarget:(id)arg1 andSource:(id)arg2 andNetwork:(id)arg3 connectionType:(id)arg4;
- (id)tableHeaderContainerView;
- (void)textFieldDidChangeAtIndexPath:(id)arg1;
- (void)updateNavigationButtons;
- (void)validateAndUpdateNextButton;
- (void)viewDidLoad;

@end
