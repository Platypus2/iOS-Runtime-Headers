/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPMediaQuerySection : NSObject <NSCoding, NSCopying> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    unsigned int _sectionIndexTitleIndex;
    NSString *_title;
}

@property struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property unsigned int sectionIndexTitleIndex;
@property(copy) NSString * title;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (unsigned int)sectionIndexTitleIndex;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSectionIndexTitleIndex:(unsigned int)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
