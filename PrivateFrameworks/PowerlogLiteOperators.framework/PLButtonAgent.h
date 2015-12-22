/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLButtonAgent : PLAgent {
    PLHIDEventOperatorComposition *_menuButton;
    PLHIDEventOperatorComposition *_powerButton;
}

@property (retain) PLHIDEventOperatorComposition *menuButton;
@property (retain) PLHIDEventOperatorComposition *powerButton;

+ (id)defaults;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (id)init;
- (void)initOperatorDependancies;
- (void)log;
- (void)logEventPointButtonWithEntry:(id)arg1;
- (id)menuButton;
- (id)powerButton;
- (void)setMenuButton:(id)arg1;
- (void)setPowerButton:(id)arg1;

@end