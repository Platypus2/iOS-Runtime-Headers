/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableSet, NSString, NSObject<PLAssetContainer>, UIViewController, NSSet, NSMutableDictionary;

@interface PLPhotosPickerSession : NSObject {
    NSMutableSet *_allSelectedAssets;
    id _bannerButtonAction;
    int _bannerButtonType;
    NSString *_currentPrompt;
    struct NSObject { Class x1; } *_destinationAlbum;
    UIViewController *_rootViewController;
    NSMutableDictionary *_selectedAssetsByAlbumID;
    id _sessionDidEndHandler;
}

@property(readonly) NSSet * allSelectedAssets;
@property(copy) id bannerButtonAction;
@property int bannerButtonType;
@property(copy) NSString * currentPrompt;
@property(retain) NSObject<PLAssetContainer> * destinationAlbum;
@property(retain) NSMutableDictionary * selectedAssetsByAlbumID;

- (void)_dismissSessionAnimated:(BOOL)arg1;
- (void)_updatePromptText;
- (id)allSelectedAssets;
- (id)bannerButtonAction;
- (int)bannerButtonType;
- (void)beginSessionWithModalViewController:(id)arg1 overViewController:(id)arg2 completionHandler:(id)arg3;
- (void)cancelSessionAnimated:(BOOL)arg1;
- (id)currentPrompt;
- (void)dealloc;
- (struct NSObject { Class x1; }*)destinationAlbum;
- (void)handleDoneButton:(id)arg1;
- (id)init;
- (id)selectedAssetsByAlbumID;
- (void)setBannerButtonAction:(id)arg1;
- (void)setBannerButtonType:(int)arg1;
- (void)setCurrentPrompt:(id)arg1;
- (void)setDestinationAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setSelectedAssets:(id)arg1 forAlbumWithID:(id)arg2 added:(id)arg3 removed:(id)arg4;
- (void)setSelectedAssetsByAlbumID:(id)arg1;

@end
