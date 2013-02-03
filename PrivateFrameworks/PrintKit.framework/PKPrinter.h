/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableSet, NSString, NSDictionary, NSNumber, NSMutableDictionary;

@interface PKPrinter : NSObject {
    struct _http_s { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; struct sockaddr_in { 
            unsigned char sin_len; 
            unsigned char sin_family; 
            unsigned short sin_port; 
            struct in_addr { 
                unsigned int s_addr; 
            } sin_addr; 
            BOOL sin_zero[8]; 
        } x9; BOOL x10[256]; BOOL x11[27][256]; char *x12; int x13; int x14; int x15; BOOL x16[2048]; int x17; struct _cups_md5_state_s { 
            unsigned int count[2]; 
            unsigned int abcd[4]; 
            unsigned char buf[64]; 
        } x18; BOOL x19[256]; int x20; struct SSLContext {} *x21; int x22; struct fd_set {} *x23; int x24; char *x25; BOOL x26[256]; BOOL x27[256]; int x28; long long x29; union { /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_30_1_1; void*x_30_1_2; void*x_30_1_3; void*x_30_1_4; void*x_30_1_5; void*x_30_1_6; void*x_30_1_7; double x_30_1_8; double x_30_1_9; const void*x_30_1_10; void*x_30_1_11; } *x30; struct http_addrlist_s {} *x31; BOOL x32[2048]; int x33; char *x34; char *x35; struct __CFArray {} *x36; int (*x37)(); void *x38; struct timeval { 
            int tv_sec; 
            int tv_usec; 
    int accessState;
    BOOL hasIdentifyPrinterOp;
    BOOL isLocal;
        } x39; } *job_http;
    int kind;
    int maxCopies;
    int maxJPEGKBytes;
    int maxPDFKBytes;
    NSMutableSet *mediaReady;
    NSString *name;
    int preferred_landscape;
    NSDictionary *printInfoSupported;
    NSMutableDictionary *privateData;
    int type;
}

@property(retain) NSDictionary * TXTRecord;
@property int accessState;
@property(readonly) int accessState;
@property(readonly) BOOL hasIdentifyPrinterOp;
@property(readonly) BOOL hasPrintInfoSupported;
@property(retain) NSString * hostname;
@property(readonly) BOOL isAdobeRGBSupported;
@property(readonly) BOOL isIPPS;
@property BOOL isLocal;
@property(readonly) int kind;
@property(readonly) NSString * name;
@property(retain) NSNumber * port;
@property(readonly) NSDictionary * printInfoSupported;
@property(retain,readonly) NSString * scheme;
@property(readonly) int type;
@property(readonly) NSString * uuid;

+ (BOOL)printerLookupWithName:(id)arg1 andTimeout:(double)arg2;
+ (id)printerWithName:(id)arg1;

- (id)TXTRecord;
- (int)abortJob;
- (int)accessState;
- (void)cancelUnlock;
- (void)checkOperations:(struct ipp_s { int x1; union ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct ipp_attribute_s {} *x3; struct ipp_attribute_s {} *x4; struct ipp_attribute_s {} *x5; int x6; struct ipp_attribute_s {} *x7; int x8; }*)arg1;
- (struct ipp_s { int x1; union ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct ipp_attribute_s {} *x3; struct ipp_attribute_s {} *x4; struct ipp_attribute_s {} *x5; int x6; struct ipp_attribute_s {} *x7; int x8; }*)createRequest:(id)arg1 ofType:(id)arg2 url:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (int)finalizeJob:(int)arg1;
- (int)finishJob;
- (struct ipp_s { int x1; union ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct ipp_attribute_s {} *x3; struct ipp_attribute_s {} *x4; struct ipp_attribute_s {} *x5; int x6; struct ipp_attribute_s {} *x7; int x8; }*)getPrinterAttributes;
- (BOOL)hasIdentifyPrinterOp;
- (BOOL)hasPrintInfoSupported;
- (id)hostname;
- (void)identifySelf;
- (id)initWithName:(id)arg1 TXT:(id)arg2;
- (id)initWithName:(id)arg1 TXTRecord:(id)arg2;
- (BOOL)isAdobeRGBSupported;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isIPPS;
- (BOOL)isLocal;
- (BOOL)isPaperReady:(id)arg1;
- (int)kind;
- (BOOL)knowsReadyPaperList;
- (id)localName;
- (id)location;
- (id)matchedPaper:(id)arg1 preferBorderless:(BOOL)arg2 withDuplexMode:(id)arg3 didMatch:(BOOL*)arg4;
- (id)name;
- (struct ipp_s { int x1; union ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct ipp_attribute_s {} *x3; struct ipp_attribute_s {} *x4; struct ipp_attribute_s {} *x5; int x6; struct ipp_attribute_s {} *x7; int x8; }*)newMediaColFromPaper:(id)arg1 Source:(id)arg2 Type:(id)arg3 DoMargins:(BOOL)arg4;
- (id)paperListForDuplexMode:(id)arg1;
- (id)port;
- (id)printInfoSupported;
- (int)printURL:(id)arg1 ofType:(id)arg2 printSettings:(id)arg3;
- (id)privateObjectForKey:(id)arg1;
- (void)reconfirmWithForce:(BOOL)arg1;
- (void)resolve;
- (BOOL)resolveWithTimeout:(int)arg1;
- (id)scheme;
- (int)sendData:(const char *)arg1 ofLength:(int)arg2;
- (void)setAccessState:(int)arg1;
- (void)setAccessStateFromTXT:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setIsLocal:(BOOL)arg1;
- (void)setPort:(id)arg1;
- (void)setPrivateObject:(id)arg1 forKey:(id)arg2;
- (void)setTXTRecord:(id)arg1;
- (int)startJob:(id)arg1 ofType:(id)arg2;
- (int)type;
- (void)unlockWithCompletionHandler:(id)arg1;
- (void)updateType;
- (id)uuid;

@end
