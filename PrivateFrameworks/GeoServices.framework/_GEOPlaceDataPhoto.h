/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceDataPhoto : NSObject <GEOMapItemPhoto> {
    GEOPhoto *_geoPhoto;
    GEOPDPhoto *_photo;
}

@property (nonatomic, readonly) NSString *author;
@property (nonatomic, readonly) NSString *caption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL displayFullPhotoInline;
@property (nonatomic, readonly) GEOPhoto *geoPhoto;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *licenseDescription;
@property (nonatomic, readonly) NSURL *licenseURL;
@property (readonly) Class superclass;

- (id)author;
- (id)caption;
- (void)dealloc;
- (BOOL)displayFullPhotoInline;
- (id)geoPhoto;
- (id)initWithPhoto:(id)arg1;
- (id)licenseDescription;
- (id)licenseURL;

@end
