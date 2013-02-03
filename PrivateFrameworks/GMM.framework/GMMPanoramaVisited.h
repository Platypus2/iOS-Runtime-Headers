/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, GMMMapPoint;

@interface GMMPanoramaVisited : PBCodable {
    GMMMapPoint *_latLon;
    NSString *_panoId;
}

@property(retain) GMMMapPoint * latLon;
@property(retain) NSString * panoId;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)latLon;
- (id)panoId;
- (BOOL)readFrom:(id)arg1;
- (void)setLatLon:(id)arg1;
- (void)setPanoId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
