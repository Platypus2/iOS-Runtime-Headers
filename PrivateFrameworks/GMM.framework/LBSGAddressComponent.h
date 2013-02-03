/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;

@interface LBSGAddressComponent : PBCodable {
    int _featureType;
    NSString *_locale;
    NSString *_name;
}

@property int featureType;
@property(readonly) BOOL hasLocale;
@property(retain) NSString * locale;
@property(retain) NSString * name;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)featureType;
- (BOOL)hasLocale;
- (id)locale;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setFeatureType:(int)arg1;
- (void)setLocale:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
