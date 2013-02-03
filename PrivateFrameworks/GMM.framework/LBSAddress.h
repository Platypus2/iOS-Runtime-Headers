/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, NSMutableArray;

@interface LBSAddress : PBCodable {
    NSMutableArray *_components;
    NSMutableArray *_crossStreets;
    BOOL _hasIsMailing;
    BOOL _hasIsPhysical;
    BOOL _isMailing;
    BOOL _isPhysical;
    NSString *_rawText;
}

@property(retain) NSMutableArray * components;
@property(retain) NSMutableArray * crossStreets;
@property BOOL hasIsMailing;
@property BOOL hasIsPhysical;
@property(readonly) BOOL hasRawText;
@property BOOL isMailing;
@property BOOL isPhysical;
@property(retain) NSString * rawText;

- (void)addComponent:(id)arg1;
- (void)addCrossStreet:(id)arg1;
- (id)componentAtIndex:(unsigned int)arg1;
- (id)components;
- (unsigned int)componentsCount;
- (id)crossStreetAtIndex:(unsigned int)arg1;
- (id)crossStreets;
- (unsigned int)crossStreetsCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIsMailing;
- (BOOL)hasIsPhysical;
- (BOOL)hasRawText;
- (BOOL)isMailing;
- (BOOL)isPhysical;
- (id)rawText;
- (BOOL)readFrom:(id)arg1;
- (void)setComponents:(id)arg1;
- (void)setCrossStreets:(id)arg1;
- (void)setHasIsMailing:(BOOL)arg1;
- (void)setHasIsPhysical:(BOOL)arg1;
- (void)setIsMailing:(BOOL)arg1;
- (void)setIsPhysical:(BOOL)arg1;
- (void)setRawText:(id)arg1;
- (void)writeTo:(id)arg1;

@end
