/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVCallbackHandler, NSString;

@interface AVFileValidator : NSObject {
    struct AVFileValidatorPrivate { id x1; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x2; inout unsigned short x3; void*x4; void*x5; unsigned long x6; void*x7; id x8; void*x9; inout unsigned short x10; void*x11; int x12; BOOL x13; void*x14; int x15; out in void*x16; const void*x17; void*x18; struct FigOpaqueMediaValidator {} *x19; struct FigMediaValidatorDataLocation { 
            unsigned long long offset; 
            unsigned long long size; 
        } x20; struct OpaqueCMByteStream {} *x21; BOOL x22; BOOL x23; AVCallbackHandler *x24; } *_priv;
    NSString *_validationRules;
}

@property(retain) NSString * validationRules;

- (void)cancel;
- (void)dealloc;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1;
- (BOOL)isCompleted;
- (BOOL)isStreaming;
- (id)notificationForFileCheckResult:(id)arg1;
- (void)postNotificationForCallback:(id)arg1;
- (float)progress;
- (void)setValidationRules:(id)arg1;
- (id)url;
- (void)validate;
- (id)validateBlocking:(BOOL)arg1;
- (void)validateForCameraRoll;
- (BOOL)validateSyncWithError:(id*)arg1;
- (id)validationRules;

@end
