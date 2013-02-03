/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Twitter.framework/Twitter
 */

@class NSURL, NSString;

@interface TWUserRecord : NSObject {
    NSString *_id_str;
    NSString *_name;
    NSURL *_objectID;
    NSString *_profile_image_url;
    NSString *_screen_name;
}

@property(copy) NSString * id_str;
@property(copy) NSString * name;
@property(copy) NSString * profile_image_url;
@property(copy) NSString * screen_name;

+ (id)userRecordWithDictionaryRepresentation:(id)arg1;
+ (id)userRecordWithScreenName:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)id_str;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)objectID;
- (id)profile_image_url;
- (id)screen_name;
- (void)setId_str:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setProfile_image_url:(id)arg1;
- (void)setScreen_name:(id)arg1;
- (void)setValuesWithUserRecordRep:(id)arg1;

@end
