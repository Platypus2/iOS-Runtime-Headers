/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMCopyright;

@interface GMMMapTileInfo : PBCodable {
    GMMCopyright *_copyright;
}

@property(retain) GMMCopyright * copyright;
@property(readonly) BOOL hasCopyright;

- (id)copyright;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCopyright;
- (BOOL)readFrom:(id)arg1;
- (void)setCopyright:(id)arg1;
- (void)writeTo:(id)arg1;

@end
