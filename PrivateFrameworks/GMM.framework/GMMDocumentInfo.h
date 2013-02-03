/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;

@interface GMMDocumentInfo : PBCodable {
    NSString *_attributionUrl;
    NSString *_author;
}

@property(retain) NSString * attributionUrl;
@property(retain) NSString * author;
@property(readonly) BOOL hasAttributionUrl;
@property(readonly) BOOL hasAuthor;

- (id)attributionUrl;
- (id)author;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAttributionUrl;
- (BOOL)hasAuthor;
- (BOOL)readFrom:(id)arg1;
- (void)setAttributionUrl:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)writeTo:(id)arg1;

@end
