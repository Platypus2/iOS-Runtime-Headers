/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@class SUDownload, SUDescriptor, NSString, NSDate;

@interface SUState : NSObject {
    BOOL _autodownloadNeedsOneTimeRetry;
    SUDownload *_lastDownload;
    NSString *_lastProductBuild;
    NSString *_lastProductType;
    NSString *_lastProductVersion;
    NSString *_lastReleaseType;
    SUDescriptor *_lastScannedDescriptor;
    NSDate *_lastScannedDescriptorTime;
    NSDate *_scheduledAutodownloadPolicyChangeTime;
    NSDate *_scheduledAutodownloadWifiPeriodEndTime;
    NSDate *_scheduledManualDownloadWifiPeriodEndTime;
}

@property BOOL autodownloadNeedsOneTimeRetry;
@property(copy) SUDownload * lastDownload;
@property(retain) NSString * lastProductBuild;
@property(retain) NSString * lastProductType;
@property(retain) NSString * lastProductVersion;
@property(retain) NSString * lastReleaseType;
@property(copy) SUDescriptor * lastScannedDescriptor;
@property(retain) NSDate * lastScannedDescriptorTime;
@property(retain) NSDate * scheduledAutodownloadPolicyChangeTime;
@property(retain) NSDate * scheduledAutodownloadWifiPeriodEndTime;
@property(retain) NSDate * scheduledManualDownloadWifiPeriodEndTime;

+ (id)currentState;
+ (id)statePath;

- (id)_stateAsDictionary;
- (BOOL)autodownloadNeedsOneTimeRetry;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)lastDownload;
- (id)lastProductBuild;
- (id)lastProductType;
- (id)lastProductVersion;
- (id)lastReleaseType;
- (id)lastScannedDescriptor;
- (id)lastScannedDescriptorTime;
- (void)load;
- (void)resetAllHistory;
- (void)resetDownloadAndScanHistory;
- (void)save;
- (id)scheduledAutodownloadPolicyChangeTime;
- (id)scheduledAutodownloadWifiPeriodEndTime;
- (id)scheduledManualDownloadWifiPeriodEndTime;
- (void)setAutodownloadNeedsOneTimeRetry:(BOOL)arg1;
- (void)setLastDownload:(id)arg1;
- (void)setLastProductBuild:(id)arg1;
- (void)setLastProductType:(id)arg1;
- (void)setLastProductVersion:(id)arg1;
- (void)setLastReleaseType:(id)arg1;
- (void)setLastScannedDescriptor:(id)arg1;
- (void)setLastScannedDescriptorTime:(id)arg1;
- (void)setScheduledAutodownloadPolicyChangeTime:(id)arg1;
- (void)setScheduledAutodownloadWifiPeriodEndTime:(id)arg1;
- (void)setScheduledManualDownloadWifiPeriodEndTime:(id)arg1;

@end
