/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFBufferedDataConsumer, LibraryMessage, NSString, MFMailMessageLibrary;

@interface _MFDataCollector : NSObject <MFCollectingDataConsumer> {
    MFBufferedDataConsumer *_consumer;
    BOOL _incomplete;
    MFMailMessageLibrary *_library;
    LibraryMessage *_message;
    NSString *_part;
    BOOL _partial;
}

- (int)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)initWithLibrary:(id)arg1 message:(id)arg2 part:(id)arg3 partial:(BOOL)arg4 incomplete:(BOOL)arg5;
- (id)pathForStorage;

@end
