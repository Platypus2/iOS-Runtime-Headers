/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, SFUCryptoKey;

@interface SFUFileDataRepresentation : SFUDataRepresentation {
    SFUCryptoKey *mCryptoKey;
    BOOL mDeleteFileWhenDone;
    long long mFileLength;
    unsigned int mFileType;
    BOOL mHasFileAttributes;
    NSString *mPath;
    long long mPlaintextDataLength;
    int mSharedFd;
}

- (long long)dataLength;
- (void)dealloc;
- (void)deleteFileWhenDone;
- (id)description;
- (long long)encodedLength;
- (unsigned long)fileType;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2 cryptoKey:(id)arg3;
- (id)initWithCopyOfData:(id)arg1 path:(id)arg2;
- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 dataLength:(long long)arg3;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2 cryptoKey:(id)arg3 dataLength:(long long)arg4;
- (id)initWithPath:(id)arg1 sharedFileDescriptor:(int)arg2;
- (id)initWithPath:(id)arg1;
- (id)inputStream;
- (BOOL)isCryptoKeyIdenticalToKey:(id)arg1;
- (BOOL)isEncrypted;
- (BOOL)isReadable;
- (id)path;
- (void)readFileAttributes;
- (void)setFileType:(unsigned long)arg1;

@end
