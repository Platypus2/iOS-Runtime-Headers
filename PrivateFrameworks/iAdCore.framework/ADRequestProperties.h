/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSMutableArray, NSString, ADContentRestrictions;

@interface ADRequestProperties : PBCodable {
    NSString *_appID;
    NSString *_carrierMCC;
    NSString *_carrierMNC;
    unsigned long long _clientClockTime;
    int _connectionType;
    ADContentRestrictions *_contentRestrictions;
    NSString *_currentCarrierMCC;
    NSString *_currentCarrierMNC;
    NSString *_deviceID;
    NSString *_deviceModel;
    BOOL _hasClientClockTime;
    BOOL _hasConnectionType;
    BOOL _hasHorizontalAccuracy;
    BOOL _hasIsOnInternationalDataRoaming;
    BOOL _hasLatitude;
    BOOL _hasLocalBandwidth;
    BOOL _hasLocalBandwidthBytes;
    BOOL _hasLocalBandwidthStddev;
    BOOL _hasLocalLatency;
    BOOL _hasLocalLatencyCount;
    BOOL _hasLocalLatencyStddev;
    BOOL _hasLongitude;
    BOOL _hasRunState;
    BOOL _hasTimezone;
    float _horizontalAccuracy;
    NSMutableArray *_iTunesStorefronts;
    BOOL _isOnInternationalDataRoaming;
    float _latitude;
    float _localBandwidth;
    float _localBandwidthBytes;
    float _localBandwidthStddev;
    float _localLatency;
    int _localLatencyCount;
    float _localLatencyStddev;
    float _longitude;
    int _runState;
    int _screenDPI;
    int _screenHeight;
    int _screenWidth;
    float _timezone;
    NSMutableArray *_userKeyboards;
}

@property(retain) NSString * appID;
@property(retain) NSString * carrierMCC;
@property(retain) NSString * carrierMNC;
@property unsigned long long clientClockTime;
@property int connectionType;
@property(retain) ADContentRestrictions * contentRestrictions;
@property(retain) NSString * currentCarrierMCC;
@property(retain) NSString * currentCarrierMNC;
@property(retain) NSString * deviceID;
@property(retain) NSString * deviceModel;
@property(readonly) BOOL hasAppID;
@property(readonly) BOOL hasCarrierMCC;
@property(readonly) BOOL hasCarrierMNC;
@property BOOL hasClientClockTime;
@property BOOL hasConnectionType;
@property(readonly) BOOL hasContentRestrictions;
@property(readonly) BOOL hasCurrentCarrierMCC;
@property(readonly) BOOL hasCurrentCarrierMNC;
@property(readonly) BOOL hasDeviceID;
@property(readonly) BOOL hasDeviceModel;
@property BOOL hasHorizontalAccuracy;
@property BOOL hasIsOnInternationalDataRoaming;
@property BOOL hasLatitude;
@property BOOL hasLocalBandwidth;
@property BOOL hasLocalBandwidthBytes;
@property BOOL hasLocalBandwidthStddev;
@property BOOL hasLocalLatency;
@property BOOL hasLocalLatencyCount;
@property BOOL hasLocalLatencyStddev;
@property BOOL hasLongitude;
@property BOOL hasRunState;
@property BOOL hasTimezone;
@property float horizontalAccuracy;
@property(retain) NSMutableArray * iTunesStorefronts;
@property BOOL isOnInternationalDataRoaming;
@property float latitude;
@property float localBandwidth;
@property float localBandwidthBytes;
@property float localBandwidthStddev;
@property float localLatency;
@property int localLatencyCount;
@property float localLatencyStddev;
@property float longitude;
@property int runState;
@property int screenDPI;
@property int screenHeight;
@property int screenWidth;
@property float timezone;
@property(retain) NSMutableArray * userKeyboards;

- (void)addITunesStorefront:(id)arg1;
- (void)addUserKeyboard:(id)arg1;
- (id)appID;
- (id)carrierMCC;
- (id)carrierMNC;
- (unsigned long long)clientClockTime;
- (int)connectionType;
- (id)contentRestrictions;
- (id)currentCarrierMCC;
- (id)currentCarrierMNC;
- (void)dealloc;
- (id)description;
- (id)deviceID;
- (id)deviceModel;
- (id)dictionaryRepresentation;
- (BOOL)hasAppID;
- (BOOL)hasCarrierMCC;
- (BOOL)hasCarrierMNC;
- (BOOL)hasClientClockTime;
- (BOOL)hasConnectionType;
- (BOOL)hasContentRestrictions;
- (BOOL)hasCurrentCarrierMCC;
- (BOOL)hasCurrentCarrierMNC;
- (BOOL)hasDeviceID;
- (BOOL)hasDeviceModel;
- (BOOL)hasHorizontalAccuracy;
- (BOOL)hasIsOnInternationalDataRoaming;
- (BOOL)hasLatitude;
- (BOOL)hasLocalBandwidth;
- (BOOL)hasLocalBandwidthBytes;
- (BOOL)hasLocalBandwidthStddev;
- (BOOL)hasLocalLatency;
- (BOOL)hasLocalLatencyCount;
- (BOOL)hasLocalLatencyStddev;
- (BOOL)hasLongitude;
- (BOOL)hasRunState;
- (BOOL)hasTimezone;
- (float)horizontalAccuracy;
- (id)iTunesStorefrontAtIndex:(unsigned int)arg1;
- (id)iTunesStorefronts;
- (unsigned int)iTunesStorefrontsCount;
- (BOOL)isOnInternationalDataRoaming;
- (float)latitude;
- (float)localBandwidth;
- (float)localBandwidthBytes;
- (float)localBandwidthStddev;
- (float)localLatency;
- (int)localLatencyCount;
- (float)localLatencyStddev;
- (float)longitude;
- (BOOL)readFrom:(id)arg1;
- (int)runState;
- (int)screenDPI;
- (int)screenHeight;
- (int)screenWidth;
- (void)setAppID:(id)arg1;
- (void)setCarrierMCC:(id)arg1;
- (void)setCarrierMNC:(id)arg1;
- (void)setClientClockTime:(unsigned long long)arg1;
- (void)setConnectionType:(int)arg1;
- (void)setContentRestrictions:(id)arg1;
- (void)setCurrentCarrierMCC:(id)arg1;
- (void)setCurrentCarrierMNC:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setHasClientClockTime:(BOOL)arg1;
- (void)setHasConnectionType:(BOOL)arg1;
- (void)setHasHorizontalAccuracy:(BOOL)arg1;
- (void)setHasIsOnInternationalDataRoaming:(BOOL)arg1;
- (void)setHasLatitude:(BOOL)arg1;
- (void)setHasLocalBandwidth:(BOOL)arg1;
- (void)setHasLocalBandwidthBytes:(BOOL)arg1;
- (void)setHasLocalBandwidthStddev:(BOOL)arg1;
- (void)setHasLocalLatency:(BOOL)arg1;
- (void)setHasLocalLatencyCount:(BOOL)arg1;
- (void)setHasLocalLatencyStddev:(BOOL)arg1;
- (void)setHasLongitude:(BOOL)arg1;
- (void)setHasRunState:(BOOL)arg1;
- (void)setHasTimezone:(BOOL)arg1;
- (void)setHorizontalAccuracy:(float)arg1;
- (void)setITunesStorefronts:(id)arg1;
- (void)setIsOnInternationalDataRoaming:(BOOL)arg1;
- (void)setLatitude:(float)arg1;
- (void)setLocalBandwidth:(float)arg1;
- (void)setLocalBandwidthBytes:(float)arg1;
- (void)setLocalBandwidthStddev:(float)arg1;
- (void)setLocalLatency:(float)arg1;
- (void)setLocalLatencyCount:(int)arg1;
- (void)setLocalLatencyStddev:(float)arg1;
- (void)setLongitude:(float)arg1;
- (void)setRunState:(int)arg1;
- (void)setScreenDPI:(int)arg1;
- (void)setScreenHeight:(int)arg1;
- (void)setScreenWidth:(int)arg1;
- (void)setTimezone:(float)arg1;
- (void)setUserKeyboards:(id)arg1;
- (float)timezone;
- (id)userKeyboardAtIndex:(unsigned int)arg1;
- (id)userKeyboards;
- (unsigned int)userKeyboardsCount;
- (void)writeTo:(id)arg1;

@end
