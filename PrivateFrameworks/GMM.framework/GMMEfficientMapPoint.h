/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface GMMEfficientMapPoint : PBCodable {
    int _latitude;
    int _longitude;
}

@property int latitude;
@property int longitude;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)latitude;
- (int)longitude;
- (BOOL)readFrom:(id)arg1;
- (void)setLatitude:(int)arg1;
- (void)setLongitude:(int)arg1;
- (void)writeTo:(id)arg1;

@end
