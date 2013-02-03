/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class ASEventUID, NSString;

@interface ASMeetingResponseItem : NSObject {
    NSString *_calEventServerId;
    id _context;
    NSString *_emailItemFolderId;
    NSString *_emailItemServerId;
    ASEventUID *_eventUID;
    int _meetingResponse;
    int _status;
}

@property(retain) NSString * calEventServerId;
@property(retain) id context;
@property(readonly) NSString * emailItemFolderId;
@property(readonly) NSString * emailItemServerId;
@property(readonly) ASEventUID * eventUID;
@property(readonly) int meetingResponse;
@property int status;

- (id)calEventServerId;
- (id)context;
- (void)dealloc;
- (id)description;
- (id)emailItemFolderId;
- (id)emailItemServerId;
- (id)eventUID;
- (id)initWithEmailItemFolderId:(id)arg1 emailItemServerId:(id)arg2 meetingResponse:(int)arg3 eventUID:(id)arg4;
- (int)meetingResponse;
- (void)setCalEventServerId:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end
