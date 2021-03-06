/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPAsset : PBCodable <NSCopying> {
    NSString *_contentBaseURL;
    NSData *_data;
    NSString *_derivedContentType;
    NSString *_downloadBaseURL;
    NSData *_downloadRequest;
    NSString *_downloadToken;
    long long _downloadTokenExpiration;
    long long _downloadURLExpiration;
    struct { 
        unsigned int downloadTokenExpiration : 1; 
        unsigned int downloadURLExpiration : 1; 
        unsigned int size : 1; 
    } _has;
    NSData *_header;
    NSString *_owner;
    CKDPProtectionInfo *_protectionInfo;
    CKDPRecordIdentifier *_recordId;
    NSData *_referenceSignature;
    NSString *_requestor;
    NSData *_signature;
    long long _size;
    NSString *_uploadReceipt;
}

@property (nonatomic, retain) NSString *contentBaseURL;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *derivedContentType;
@property (nonatomic, retain) NSString *downloadBaseURL;
@property (nonatomic, retain) NSData *downloadRequest;
@property (nonatomic, retain) NSString *downloadToken;
@property (nonatomic) long long downloadTokenExpiration;
@property (nonatomic) long long downloadURLExpiration;
@property (nonatomic, readonly) BOOL hasContentBaseURL;
@property (nonatomic, readonly) BOOL hasData;
@property (nonatomic, readonly) BOOL hasDerivedContentType;
@property (nonatomic, readonly) BOOL hasDownloadBaseURL;
@property (nonatomic, readonly) BOOL hasDownloadRequest;
@property (nonatomic, readonly) BOOL hasDownloadToken;
@property (nonatomic) BOOL hasDownloadTokenExpiration;
@property (nonatomic) BOOL hasDownloadURLExpiration;
@property (nonatomic, readonly) BOOL hasHeader;
@property (nonatomic, readonly) BOOL hasOwner;
@property (nonatomic, readonly) BOOL hasProtectionInfo;
@property (nonatomic, readonly) BOOL hasRecordId;
@property (nonatomic, readonly) BOOL hasReferenceSignature;
@property (nonatomic, readonly) BOOL hasRequestor;
@property (nonatomic, readonly) BOOL hasSignature;
@property (nonatomic) BOOL hasSize;
@property (nonatomic, readonly) BOOL hasUploadReceipt;
@property (nonatomic, retain) NSData *header;
@property (nonatomic, retain) NSString *owner;
@property (nonatomic, retain) CKDPProtectionInfo *protectionInfo;
@property (nonatomic, retain) CKDPRecordIdentifier *recordId;
@property (nonatomic, retain) NSData *referenceSignature;
@property (nonatomic, retain) NSString *requestor;
@property (nonatomic, retain) NSData *signature;
@property (nonatomic) long long size;
@property (nonatomic, retain) NSString *uploadReceipt;

- (void).cxx_destruct;
- (id)contentBaseURL;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)derivedContentType;
- (id)description;
- (id)dictionaryRepresentation;
- (id)downloadBaseURL;
- (id)downloadRequest;
- (id)downloadToken;
- (long long)downloadTokenExpiration;
- (long long)downloadURLExpiration;
- (BOOL)hasContentBaseURL;
- (BOOL)hasData;
- (BOOL)hasDerivedContentType;
- (BOOL)hasDownloadBaseURL;
- (BOOL)hasDownloadRequest;
- (BOOL)hasDownloadToken;
- (BOOL)hasDownloadTokenExpiration;
- (BOOL)hasDownloadURLExpiration;
- (BOOL)hasHeader;
- (BOOL)hasOwner;
- (BOOL)hasProtectionInfo;
- (BOOL)hasRecordId;
- (BOOL)hasReferenceSignature;
- (BOOL)hasRequestor;
- (BOOL)hasSignature;
- (BOOL)hasSize;
- (BOOL)hasUploadReceipt;
- (unsigned int)hash;
- (id)header;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)owner;
- (id)protectionInfo;
- (BOOL)readFrom:(id)arg1;
- (id)recordId;
- (id)referenceSignature;
- (id)requestor;
- (void)setContentBaseURL:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDerivedContentType:(id)arg1;
- (void)setDownloadBaseURL:(id)arg1;
- (void)setDownloadRequest:(id)arg1;
- (void)setDownloadToken:(id)arg1;
- (void)setDownloadTokenExpiration:(long long)arg1;
- (void)setDownloadURLExpiration:(long long)arg1;
- (void)setHasDownloadTokenExpiration:(BOOL)arg1;
- (void)setHasDownloadURLExpiration:(BOOL)arg1;
- (void)setHasSize:(BOOL)arg1;
- (void)setHeader:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setProtectionInfo:(id)arg1;
- (void)setRecordId:(id)arg1;
- (void)setReferenceSignature:(id)arg1;
- (void)setRequestor:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setSize:(long long)arg1;
- (void)setUploadReceipt:(id)arg1;
- (id)signature;
- (long long)size;
- (id)uploadReceipt;
- (void)writeTo:(id)arg1;

@end
