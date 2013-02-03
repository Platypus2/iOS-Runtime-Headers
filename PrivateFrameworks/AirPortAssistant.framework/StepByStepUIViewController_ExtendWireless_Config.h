/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class UILabel, NSString, UIView;

@interface StepByStepUIViewController_ExtendWireless_Config : StepByStepUIViewController_DevicePicker <StepByStepUIDevicePicker> {
    NSString *connectionType;
    BOOL isReallyJoin;
    UIView *justTextContainerView;
    UILabel *justTextLabel;
    NSString *personalizedBaseName;
    UIView *tableHeaderContainerView;
    NSString *unlocalizedStatusString;
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
- (void)primaryActionSelected:(BOOL)arg1;
- (void)selectedDeviceUpdated;
- (void)setJustTextContainerView:(id)arg1;
- (void)setJustTextLabel:(id)arg1;
- (void)setPersonalizedBaseName:(id)arg1;
- (void)setTableHeaderContainerView:(id)arg1;
- (void)setupAndShowEditableBaseStationName;
- (void)setupDevices;
- (void)setupHeaderAndFooter;
- (BOOL)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned int)arg3 toString:(id)arg4;
- (id)tableHeaderContainerView;
- (void)updateNavigationButtons;
- (void)validateAndUpdateNextButton;
- (void)viewDidLoad;

@end
