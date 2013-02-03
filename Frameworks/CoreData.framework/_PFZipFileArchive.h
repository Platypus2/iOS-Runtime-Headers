/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, NSString, NSData, NSDictionary, NSMutableDictionary;

@interface _PFZipFileArchive : NSObject {
    struct __zFlags { 
        unsigned int providerSuppliesContents : 1; 
        unsigned int providerSuppliesStreams : 1; 
        unsigned int providerSuppliesProperties : 1; 
        unsigned int noContentsCaching : 1; 
        unsigned int fileOpen : 1; 
        unsigned int reserved : 27; 
    NSMutableDictionary *_cachedContents;
    NSDictionary *_contents;
    NSData *_data;
    int _desc;
    NSArray *_names;
    NSString *_path;
    NSDictionary *_properties;
    id _provider;
    void *_reserved2[5];
    void *_reserved;
    } _zFlags;
}

- (id)archiveData;
- (id)archiveStream;
- (id)contentsForEntryName:(id)arg1;
- (void)dealloc;
- (id)entryNames;
- (void)finalize;
- (id)initWithData:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithEntryNames:(id)arg1 contents:(id)arg2 properties:(id)arg3 options:(unsigned int)arg4;
- (id)initWithEntryNames:(id)arg1 dataProvider:(id)arg2 options:(unsigned int)arg3;
- (id)initWithPath:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (void)invalidate;
- (BOOL)isValid;
- (id)propertiesForEntryName:(id)arg1;
- (id)streamForEntryName:(id)arg1;
- (BOOL)writeContentsForEntryName:(id)arg1 toFile:(id)arg2 options:(unsigned int)arg3 error:(id*)arg4;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;

@end
