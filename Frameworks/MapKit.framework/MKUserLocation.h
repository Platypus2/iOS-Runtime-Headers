/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CLLocation, CLHeading, NSString, MKUserLocationInternal;

@interface MKUserLocation : NSObject <MKAnnotation> {
    MKUserLocationInternal *_internal;
}

@property struct { double x1; double x2; } coordinate;
@property(retain) CLLocation * fixedLocation;
@property(retain) CLHeading * heading;
@property(retain) CLLocation * location;
@property(retain) CLLocation * predictedLocation;
@property(readonly) NSString * shortDescription;
@property int source;
@property(copy) NSString * subtitle;
@property double timestamp;
@property(copy) NSString * title;
@property(getter=isUpdating) BOOL updating;

+ (void)_setAnnotationClass:(Class)arg1;

- (void)_updateCoordinate;
- (id)annotation;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)fixedLocation;
- (id)heading;
- (id)init;
- (BOOL)isEqualToLocation:(id)arg1;
- (BOOL)isUpdating;
- (id)location;
- (id)predictedLocation;
- (void)reset;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setFixedLocation:(id)arg1;
- (void)setHeading:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPredictedLocation:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpdating:(BOOL)arg1;
- (id)shortDescription;
- (int)source;
- (id)subtitle;
- (double)timestamp;
- (id)title;

@end
