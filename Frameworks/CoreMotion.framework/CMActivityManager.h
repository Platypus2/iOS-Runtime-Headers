/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivityManager : NSObject {
    id _internal;
}

@property(getter=isActivityAvailable,readonly) BOOL activityAvailable;
@property(copy) id activityHandler;

- (id)activityHandler;
- (void)dealloc;
- (id)init;
- (BOOL)isActivityAvailable;
- (void)setActivityHandler:(id)arg1;
- (void)startWatchdogCheckins;
- (void)stopWatchdogCheckins;

@end
