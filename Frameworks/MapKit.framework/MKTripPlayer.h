/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CLLocation, NSArray, NSString, NSTimer, NSDate, MKTripPoint;

@interface MKTripPlayer : CLLocationManager {
    NSString *_filePath;
    double _heading;
    double _headingAccuracy;
    NSTimer *_headingTimer;
    unsigned int _index;
    BOOL _isPlaying;
    double _lastTimeCL;
    CLLocation *_prevLocation;
    NSDate *_startDate;
    NSTimer *_timer;
    MKTripPoint *_tripPoint;
    NSArray *_tripPoints;
    float _version;
}

@property(readonly) double bestAccuracy;
@property(retain) NSString * filePath;
@property(readonly) BOOL hasSpeed;
@property(retain) NSTimer * headingTimer;
@property BOOL isPlaying;
@property(retain) CLLocation * prevLocation;
@property(retain) NSDate * startDate;
@property(retain) NSTimer * timer;
@property(retain) MKTripPoint * tripPoint;
@property(retain) NSArray * tripPoints;

- (BOOL)_readVersion:(id*)arg1;
- (double)bestAccuracy;
- (void)dealloc;
- (id)filePath;
- (BOOL)hasHeading;
- (BOOL)hasSpeed;
- (id)headingTimer;
- (id)initWithFilePath:(id)arg1;
- (BOOL)isPlaying;
- (BOOL)locationServicesApproved;
- (BOOL)parseCLString:(id)arg1 tripPoint:(id*)arg2 timeElapsed:(double*)arg3;
- (BOOL)parseMKString:(id)arg1 tripPoint:(id*)arg2 timeElapsed:(double*)arg3;
- (void)playNextHeading;
- (void)playNextTripPoint;
- (id)prevLocation;
- (void)reset;
- (BOOL)scanNextTripPoint:(id*)arg1;
- (void)setFilePath:(id)arg1;
- (void)setHeadingFilter:(double)arg1;
- (void)setHeadingTimer:(id)arg1;
- (void)setIsPlaying:(BOOL)arg1;
- (void)setPrevLocation:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setSupportInfo:(BOOL)arg1;
- (void)setTimer:(id)arg1;
- (void)setTripPoint:(id)arg1;
- (void)setTripPoints:(id)arg1;
- (void)start;
- (id)startDate;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)stop;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (id)timer;
- (id)tripPoint;
- (id)tripPoints;

@end
