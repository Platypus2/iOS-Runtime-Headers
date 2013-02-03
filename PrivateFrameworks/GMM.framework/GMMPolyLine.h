/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSData;

@interface GMMPolyLine : PBCodable {
    BOOL _hasLineColor;
    BOOL _hasLineWidth;
    NSData *_line;
    int _lineColor;
    int _lineWidth;
}

@property(readonly) BOOL hasLine;
@property BOOL hasLineColor;
@property BOOL hasLineWidth;
@property(retain) NSData * line;
@property int lineColor;
@property int lineWidth;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLine;
- (BOOL)hasLineColor;
- (BOOL)hasLineWidth;
- (id)line;
- (int)lineColor;
- (int)lineWidth;
- (BOOL)readFrom:(id)arg1;
- (void)setHasLineColor:(BOOL)arg1;
- (void)setHasLineWidth:(BOOL)arg1;
- (void)setLine:(id)arg1;
- (void)setLineColor:(int)arg1;
- (void)setLineWidth:(int)arg1;
- (void)writeTo:(id)arg1;

@end
