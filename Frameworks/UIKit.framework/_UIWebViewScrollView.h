/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebBrowserView, _UIWebViewScrollViewDelegateForwarder;

@interface _UIWebViewScrollView : UIWebScrollView {
    BOOL _bouncesSetExplicitly;
    UIWebBrowserView *_browserView;
    _UIWebViewScrollViewDelegateForwarder *_forwarder;
}

- (void)_setWebView:(id)arg1;
- (void)_weaklySetBouncesHorizontally:(BOOL)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounces:(BOOL)arg1;
- (void)setBouncesHorizontally:(BOOL)arg1;
- (void)setBouncesVertically:(BOOL)arg1;
- (void)setDelegate:(id)arg1;

@end
