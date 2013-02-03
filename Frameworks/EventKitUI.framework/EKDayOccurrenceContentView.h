/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSIndexSet, NSString, UIColor;

@interface EKDayOccurrenceContentView : UIView {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    BOOL _borderless;
    BOOL _cancelled;
    UIColor *_color;
    BOOL _dimmed;
    BOOL _dragging;
    } _fullTextRect;
    BOOL _isBirthday;
    NSString *_location;
    NSIndexSet *_locationMetrics;
    } _locationRect;
    BOOL _tentative;
    UIColor *_textColor;
    float _textEndY;
    NSString *_title;
    } _titleEndPoint;
    NSIndexSet *_titleMetrics;
    } _titleRect;
    BOOL _usesSmallText;
    float _visibleHeight;
}

@property(getter=isBirthday) BOOL birthday;
@property(getter=isBorderless) BOOL borderless;
@property(getter=isCancelled) BOOL cancelled;
@property(retain) UIColor * color;
@property(getter=isDimmed) BOOL dimmed;
@property BOOL dragging;
@property(copy) NSString * location;
@property(getter=isTentative) BOOL tentative;
@property(copy) NSString * title;
@property BOOL usesSmallText;

- (void)_getTitleMetrics:(id*)arg1 endPoint:(struct CGPoint { float x1; float x2; }*)arg2 forSize:(struct CGSize { float x1; float x2; })arg3;
- (void)_invalidateMetrics;
- (id)_locationFont;
- (id)_locationMetricsForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_tentativeOutline;
- (id)_textColor;
- (id)_titleFont;
- (id)color;
- (void)dealloc;
- (BOOL)dragging;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isBirthday;
- (BOOL)isBorderless;
- (BOOL)isCancelled;
- (BOOL)isDimmed;
- (BOOL)isTentative;
- (id)location;
- (void)setBirthday:(BOOL)arg1;
- (void)setBorderless:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setColor:(id)arg1;
- (void)setDimmed:(BOOL)arg1;
- (void)setDragging:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLocation:(id)arg1;
- (void)setTentative:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsesSmallText:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)title;
- (BOOL)usesSmallText;

@end
