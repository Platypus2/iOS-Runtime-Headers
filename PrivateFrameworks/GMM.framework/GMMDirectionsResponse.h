/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, NSString, GMMDateTime, GMMDirectionsIconResponse;

@interface GMMDirectionsResponse : PBCodable {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    NSMutableArray *_agencys;
    NSMutableArray *_alerts;
    NSMutableArray *_alternateModes;
    BOOL _hasRecommendedDistanceUnits;
    BOOL _hasRequestedTimeType;
    GMMDirectionsIconResponse *_icons;
    } _modes;
    NSString *_notice;
    NSMutableArray *_optionsUseds;
    int _recommendedDistanceUnits;
    GMMDateTime *_requestedDateTime;
    int _requestedTimeType;
    int _status;
    NSMutableArray *_trips;
    NSMutableArray *_waypointFeedbacks;
}

@property(retain) NSMutableArray * agencys;
@property(retain) NSMutableArray * alerts;
@property(retain) NSMutableArray * alternateModes;
@property(readonly) BOOL hasIcons;
@property(readonly) BOOL hasNotice;
@property BOOL hasRecommendedDistanceUnits;
@property(readonly) BOOL hasRequestedDateTime;
@property BOOL hasRequestedTimeType;
@property(retain) GMMDirectionsIconResponse * icons;
@property(readonly) int* modes;
@property(readonly) unsigned int modesCount;
@property(retain) NSString * notice;
@property(retain) NSMutableArray * optionsUseds;
@property int recommendedDistanceUnits;
@property(retain) GMMDateTime * requestedDateTime;
@property int requestedTimeType;
@property int status;
@property(retain) NSMutableArray * trips;
@property(retain) NSMutableArray * waypointFeedbacks;

- (void)addAgency:(id)arg1;
- (void)addAlert:(id)arg1;
- (void)addAlternateMode:(id)arg1;
- (void)addMode:(int)arg1;
- (void)addOptionsUsed:(id)arg1;
- (void)addTrip:(id)arg1;
- (void)addWaypointFeedback:(id)arg1;
- (id)agencyAtIndex:(unsigned int)arg1;
- (id)agencys;
- (unsigned int)agencysCount;
- (id)alertAtIndex:(unsigned int)arg1;
- (id)alerts;
- (unsigned int)alertsCount;
- (id)alternateModeAtIndex:(unsigned int)arg1;
- (id)alternateModes;
- (unsigned int)alternateModesCount;
- (void)clearModes;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIcons;
- (BOOL)hasNotice;
- (BOOL)hasRecommendedDistanceUnits;
- (BOOL)hasRequestedDateTime;
- (BOOL)hasRequestedTimeType;
- (id)icons;
- (int)modeAtIndex:(unsigned int)arg1;
- (int*)modes;
- (unsigned int)modesCount;
- (id)notice;
- (id)optionsUsedAtIndex:(unsigned int)arg1;
- (id)optionsUseds;
- (unsigned int)optionsUsedsCount;
- (BOOL)readFrom:(id)arg1;
- (int)recommendedDistanceUnits;
- (id)requestedDateTime;
- (int)requestedTimeType;
- (void)setAgencys:(id)arg1;
- (void)setAlerts:(id)arg1;
- (void)setAlternateModes:(id)arg1;
- (void)setHasRecommendedDistanceUnits:(BOOL)arg1;
- (void)setHasRequestedTimeType:(BOOL)arg1;
- (void)setIcons:(id)arg1;
- (void)setModes:(int*)arg1 count:(unsigned int)arg2;
- (void)setNotice:(id)arg1;
- (void)setOptionsUseds:(id)arg1;
- (void)setRecommendedDistanceUnits:(int)arg1;
- (void)setRequestedDateTime:(id)arg1;
- (void)setRequestedTimeType:(int)arg1;
- (void)setStatus:(int)arg1;
- (void)setTrips:(id)arg1;
- (void)setWaypointFeedbacks:(id)arg1;
- (int)status;
- (id)tripAtIndex:(unsigned int)arg1;
- (id)trips;
- (unsigned int)tripsCount;
- (id)waypointFeedbackAtIndex:(unsigned int)arg1;
- (id)waypointFeedbacks;
- (unsigned int)waypointFeedbacksCount;
- (void)writeTo:(id)arg1;

@end
