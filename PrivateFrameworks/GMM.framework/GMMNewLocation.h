/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, GMMGeometry;

@interface GMMNewLocation : PBCodable {
    GMMGeometry *_geocode;
    BOOL _hasIsVia;
    BOOL _hasWaypointType;
    BOOL _isVia;
    NSString *_query;
    NSString *_queryRefinementToken;
    int _waypointType;
}

@property(retain) GMMGeometry * geocode;
@property(readonly) BOOL hasGeocode;
@property BOOL hasIsVia;
@property(readonly) BOOL hasQuery;
@property(readonly) BOOL hasQueryRefinementToken;
@property BOOL hasWaypointType;
@property BOOL isVia;
@property(retain) NSString * query;
@property(retain) NSString * queryRefinementToken;
@property int waypointType;

- (void)dealloc;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geocode;
- (BOOL)hasGeocode;
- (BOOL)hasIsVia;
- (BOOL)hasQuery;
- (BOOL)hasQueryRefinementToken;
- (BOOL)hasWaypointType;
- (id)initWithGEOPlaceSearchRequest:(id)arg1 placeToken:(id)arg2;
- (BOOL)isVia;
- (id)query;
- (id)queryRefinementToken;
- (BOOL)readFrom:(id)arg1;
- (void)setGeocode:(id)arg1;
- (void)setHasIsVia:(BOOL)arg1;
- (void)setHasWaypointType:(BOOL)arg1;
- (void)setIsVia:(BOOL)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryRefinementToken:(id)arg1;
- (void)setWaypointType:(int)arg1;
- (int)waypointType;
- (void)writeTo:(id)arg1;

@end
