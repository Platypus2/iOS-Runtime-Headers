/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURL;

@interface NSFileCoordinator : NSObject {
    id _accessArbiter;
    id _accessClaimIDOrIDs;
    id _fileReactor;
    BOOL _isCancelled;
    id _purposeID;
    NSURL *_recentFilePresenterURL;
    id _reserved;
}

+ (void)__itemAtURL:(id)arg1 didGainVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4;
+ (void)__itemAtURL:(id)arg1 didLoseVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4;
+ (void)__itemAtURL:(id)arg1 didMoveToURL:(id)arg2 purposeID:(id)arg3;
+ (void)__itemAtURL:(id)arg1 didResolveConflictVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4;
+ (void)_addFileProvider:(id)arg1;
+ (id)_canonicalURLForURL:(id)arg1;
+ (id)_fileProviders;
+ (void)_removeFileProvider:(id)arg1;
+ (BOOL)_skipCoordinationWork;
+ (void)addFilePresenter:(id)arg1;
+ (id)filePresenters;
+ (void)removeFilePresenter:(id)arg1;

- (void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned int)arg2 purposeID:(id)arg3 byAccessor:(id)arg4;
- (void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned int)arg2 writingItemAtURL:(id)arg3 options:(unsigned int)arg4 purposeID:(id)arg5 byAccessor:(id)arg6;
- (void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned int)arg2 purposeID:(id)arg3 byAccessor:(id)arg4;
- (void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned int)arg2 writingItemAtURL:(id)arg3 options:(unsigned int)arg4 purposeID:(id)arg5 byAccessor:(id)arg6;
- (void)__prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned int)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned int)arg4 byAccessor:(id)arg5;
- (void)_blockOnAccessClaim:(id)arg1;
- (void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3 byAccessor:(id)arg4;
- (void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned int)arg2 writingItemAtURL:(id)arg3 options:(unsigned int)arg4 error:(id*)arg5 byAccessor:(id)arg6;
- (void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3 byAccessor:(id)arg4;
- (void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned int)arg2 writingItemAtURL:(id)arg3 options:(unsigned int)arg4 error:(id*)arg5 byAccessor:(id)arg6;
- (void)_forgetAccessClaimForID:(id)arg1;
- (void)_invokeAccessor:(id)arg1 orDont:(BOOL)arg2 thenRelinquishAccessClaimForID:(id)arg3;
- (void)_itemAtURL:(id)arg1 didMoveToURL:(id)arg2;
- (void)_requestAccessClaim:(id)arg1 withProcedure:(id)arg2;
- (void)_setFileProvider:(id)arg1;
- (void)cancel;
- (void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3 byAccessor:(id)arg4;
- (void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned int)arg2 writingItemAtURL:(id)arg3 options:(unsigned int)arg4 error:(id*)arg5 byAccessor:(id)arg6;
- (void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3 byAccessor:(id)arg4;
- (void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned int)arg2 writingItemAtURL:(id)arg3 options:(unsigned int)arg4 error:(id*)arg5 byAccessor:(id)arg6;
- (void)dealloc;
- (id)init;
- (id)initWithFilePresenter:(id)arg1;
- (void)itemAtURL:(id)arg1 didMoveToURL:(id)arg2;
- (void)prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned int)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned int)arg4 error:(id*)arg5 byAccessor:(id)arg6;
- (id)purposeIdentifier;
- (void)setPurposeIdentifier:(id)arg1;

@end
