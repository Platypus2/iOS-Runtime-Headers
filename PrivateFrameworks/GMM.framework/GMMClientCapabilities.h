/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface GMMClientCapabilities : PBCodable {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    int _availableImageMemory;
    BOOL _embedImages;
    BOOL _hasAvailableImageMemory;
    BOOL _hasEmbedImages;
    BOOL _hasHtmlBodyOnly;
    BOOL _hasMaxImageHeight;
    BOOL _hasMaxImageWidth;
    BOOL _htmlBodyOnly;
    int _maxImageHeight;
    int _maxImageWidth;
    } _preferredImageFormats;
}

@property int availableImageMemory;
@property BOOL embedImages;
@property BOOL hasAvailableImageMemory;
@property BOOL hasEmbedImages;
@property BOOL hasHtmlBodyOnly;
@property BOOL hasMaxImageHeight;
@property BOOL hasMaxImageWidth;
@property BOOL htmlBodyOnly;
@property int maxImageHeight;
@property int maxImageWidth;
@property(readonly) int* preferredImageFormats;
@property(readonly) unsigned int preferredImageFormatsCount;

- (void)addPreferredImageFormat:(int)arg1;
- (int)availableImageMemory;
- (void)clearPreferredImageFormats;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)embedImages;
- (BOOL)hasAvailableImageMemory;
- (BOOL)hasEmbedImages;
- (BOOL)hasHtmlBodyOnly;
- (BOOL)hasMaxImageHeight;
- (BOOL)hasMaxImageWidth;
- (BOOL)htmlBodyOnly;
- (int)maxImageHeight;
- (int)maxImageWidth;
- (int)preferredImageFormatAtIndex:(unsigned int)arg1;
- (int*)preferredImageFormats;
- (unsigned int)preferredImageFormatsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setAvailableImageMemory:(int)arg1;
- (void)setEmbedImages:(BOOL)arg1;
- (void)setHasAvailableImageMemory:(BOOL)arg1;
- (void)setHasEmbedImages:(BOOL)arg1;
- (void)setHasHtmlBodyOnly:(BOOL)arg1;
- (void)setHasMaxImageHeight:(BOOL)arg1;
- (void)setHasMaxImageWidth:(BOOL)arg1;
- (void)setHtmlBodyOnly:(BOOL)arg1;
- (void)setMaxImageHeight:(int)arg1;
- (void)setMaxImageWidth:(int)arg1;
- (void)setPreferredImageFormats:(int*)arg1 count:(unsigned int)arg2;
- (void)writeTo:(id)arg1;

@end
