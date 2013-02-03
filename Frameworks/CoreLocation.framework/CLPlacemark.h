/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class CLLocation, NSArray, CLPlacemarkInternal, CLRegion, NSDictionary, NSString;

@interface CLPlacemark : NSObject <NSCopying, NSCoding> {
    CLPlacemarkInternal *_internal;
}

@property(readonly) NSString * ISOcountryCode;
@property(readonly) NSDictionary * addressDictionary;
@property(readonly) NSString * administrativeArea;
@property(readonly) NSArray * areasOfInterest;
@property(readonly) NSString * country;
@property(readonly) NSString * inlandWater;
@property(readonly) NSString * locality;
@property(readonly) CLLocation * location;
@property(readonly) NSString * name;
@property(readonly) NSString * ocean;
@property(readonly) NSString * postalCode;
@property(readonly) CLRegion * region;
@property(readonly) NSString * subAdministrativeArea;
@property(readonly) NSString * subLocality;
@property(readonly) NSString * subThoroughfare;
@property(readonly) NSString * thoroughfare;

- (id)ISOcountryCode;
- (id)addressDictionary;
- (id)administrativeArea;
- (id)areasOfInterest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedAddressLines;
- (id)fullThoroughfare;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4;
- (id)initWithPlacemark:(id)arg1;
- (id)inlandWater;
- (id)locality;
- (id)location;
- (id)name;
- (id)ocean;
- (id)postalCode;
- (id)region;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subThoroughfare;
- (id)thoroughfare;

@end
