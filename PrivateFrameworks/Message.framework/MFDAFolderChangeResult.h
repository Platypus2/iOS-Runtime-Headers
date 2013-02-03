/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSError, NSString;

@interface MFDAFolderChangeResult : NSObject {
    NSError *_error;
    NSString *_folderID;
    NSString *_folderName;
    int _statusCode;
}

@property(readonly) NSError * error;
@property(readonly) NSString * folderID;
@property(readonly) NSString * folderName;
@property(readonly) int statusCode;

- (void)dealloc;
- (id)error;
- (id)folderID;
- (id)folderName;
- (id)initWithStatusCode:(int)arg1 error:(id)arg2 folderID:(id)arg3 folderName:(id)arg4;
- (int)statusCode;
- (BOOL)wasSuccessful;

@end
