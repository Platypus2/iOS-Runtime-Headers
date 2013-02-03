/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CMGyroData, CMMagnetometerData, CMDeviceMotion, CMAccelerometerData;

@interface CMMotionManager : NSObject {
    id _internal;
}

@property(getter=isAccelerometerActive,readonly) BOOL accelerometerActive;
@property(getter=isAccelerometerAvailable,readonly) BOOL accelerometerAvailable;
@property(readonly) CMAccelerometerData * accelerometerData;
@property double accelerometerUpdateInterval;
@property(readonly) int attitudeReferenceFrame;
@property(readonly) CMDeviceMotion * deviceMotion;
@property(getter=isDeviceMotionActive,readonly) BOOL deviceMotionActive;
@property(getter=isDeviceMotionAvailable,readonly) BOOL deviceMotionAvailable;
@property double deviceMotionUpdateInterval;
@property(getter=isGyroActive,readonly) BOOL gyroActive;
@property(getter=isGyroAvailable,readonly) BOOL gyroAvailable;
@property(readonly) CMGyroData * gyroData;
@property double gyroUpdateInterval;
@property(getter=isMagnetometerActive,readonly) BOOL magnetometerActive;
@property(getter=isMagnetometerAvailable,readonly) BOOL magnetometerAvailable;
@property(readonly) CMMagnetometerData * magnetometerData;
@property double magnetometerUpdateInterval;
@property BOOL showsDeviceMovementDisplay;

+ (unsigned int)availableAttitudeReferenceFrames;
+ (void)setAllowInBackground:(BOOL)arg1;

- (id)accelerometerData;
- (double)accelerometerUpdateInterval;
- (int)attitudeReferenceFrame;
- (void)dealloc;
- (void)deallocPrivate;
- (id)deviceMotion;
- (double)deviceMotionUpdateInterval;
- (void)didBecomeActive:(id)arg1;
- (void)didBecomeActivePrivate:(id)arg1;
- (void)dismissDeviceMovementDisplay;
- (void)dummySelector:(id)arg1;
- (id)gyroData;
- (double)gyroUpdateInterval;
- (id)init;
- (id)initPrivate;
- (id)initUsing6AxisSensorFusion:(BOOL)arg1;
- (BOOL)isAccelerometerActive;
- (BOOL)isAccelerometerAvailable;
- (BOOL)isDeviceMotionActive;
- (BOOL)isDeviceMotionAvailable;
- (BOOL)isGyroActive;
- (BOOL)isGyroAvailable;
- (BOOL)isMagnetometerActive;
- (BOOL)isMagnetometerAvailable;
- (id)magnetometerData;
- (double)magnetometerUpdateInterval;
- (void)onAccelerometer:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (void)onDeviceMotion:(const struct Sample { double x1; struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_2_1_3; struct { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_2_1_4; int x_2_1_5; } x2; boolx3; }*)arg1;
- (void)onGeomagneticModel:(const struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; }*)arg1;
- (void)onGyro:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; boolx3; }*)arg1;
- (void)onMagnetometer:(const struct Sample { double x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (void)setAccelerometerDataCallback:(int (*)())arg1 info:(void*)arg2 interval:(double)arg3;
- (void)setAccelerometerUpdateInterval:(double)arg1;
- (void)setAccelerometerUpdateIntervalPrivate:(double)arg1;
- (void)setDeviceMotionCallback:(int (*)())arg1 info:(void*)arg2 interval:(double)arg3 fsync:(BOOL)arg4 bandwidth:(int)arg5 useAccelerometer:(bool)arg6;
- (void)setDeviceMotionCallback:(int (*)())arg1 info:(void*)arg2 interval:(double)arg3 fsync:(BOOL)arg4 bandwidth:(int)arg5;
- (void)setDeviceMotionUpdateInterval:(double)arg1;
- (void)setDeviceMotionUpdateIntervalPrivate:(double)arg1;
- (void)setGyroDataCallback:(int (*)())arg1 info:(void*)arg2 interval:(double)arg3;
- (void)setGyroUpdateInterval:(double)arg1;
- (void)setGyroUpdateIntervalPrivate:(double)arg1;
- (void)setMagnetometerUpdateInterval:(double)arg1;
- (void)setMagnetometerUpdateIntervalPrivate:(double)arg1;
- (void)setShowsDeviceMovementDisplay:(BOOL)arg1;
- (void)setShowsDeviceMovementDisplayPrivate:(BOOL)arg1;
- (void)showDeviceMovementDisplay;
- (BOOL)showsDeviceMovementDisplay;
- (void)startAccelerometerUpdates;
- (void)startAccelerometerUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startAccelerometerUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesPrivateUsingReferenceFrame:(int)arg1 toQueue:(id)arg2 withHandler:(id)arg3;
- (void)startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(int)arg1 toQueue:(id)arg2 withHandler:(id)arg3;
- (void)startDeviceMotionUpdatesUsingReferenceFrame:(int)arg1;
- (void)startGyroUpdates;
- (void)startGyroUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startGyroUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startMagnetometerUpdates;
- (void)startMagnetometerUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)startMagnetometerUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)stopAccelerometerUpdates;
- (void)stopAccelerometerUpdatesPrivate;
- (void)stopDeviceMotionUpdates;
- (void)stopDeviceMotionUpdatesPrivate;
- (void)stopGyroUpdates;
- (void)stopGyroUpdatesPrivate;
- (void)stopMagnetometerUpdates;
- (void)stopMagnetometerUpdatesPrivate;
- (void)willResignActive:(id)arg1;
- (void)willResignActivePrivate:(id)arg1;

@end
