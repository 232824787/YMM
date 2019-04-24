//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, NSTimer, TCLoginViewKit, TCWebViewKit, UIViewController, UIWindow;

@interface TCUiKit : NSObject
{
    NSString *_appId;
    UIViewController *_headImageViewController;
    TCWebViewKit *_webViewKit;
    TCLoginViewKit *_loginViewKit;
    UIWindow *_window;
    UIWindow *_keywindow;
    NSTimer *_timer;
    NSMutableArray *_windowsArray;
}

@property(retain, nonatomic) NSMutableArray *windowsArray; // @synthesize windowsArray=_windowsArray;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIWindow *keywindow; // @synthesize keywindow=_keywindow;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) TCLoginViewKit *loginViewKit; // @synthesize loginViewKit=_loginViewKit;
@property(retain, nonatomic) TCWebViewKit *webViewKit; // @synthesize webViewKit=_webViewKit;
@property(retain, nonatomic) UIViewController *headImageViewController; // @synthesize headImageViewController=_headImageViewController;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)dealloc;
- (void)closeWindow;
- (void)animationFinished:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;
- (void)MoveOhterWindowIntoFrame;
- (void)MoveOtherWindowOutOfFrame;
- (void)doClose;
- (_Bool)setViewControllerResponse:(id)arg1;
- (_Bool)setViewControllerData:(id)arg1;
- (_Bool)popLoginWnd:(id)arg1 permissions:(id)arg2 serial:(id)arg3 extraParams:(id)arg4 newloginDelegate:(id)arg5 loginDelegate:(id)arg6;
- (id)getLoginViewController:(id)arg1 permissions:(id)arg2 serial:(id)arg3 extraParams:(id)arg4 newloginDelegate:(id)arg5 loginDelegate:(id)arg6;
- (void)onTimerSetPic;
- (id)getWebViewController:(id)arg1 webTitle:(id)arg2 delegate:(id)arg3;
- (_Bool)popWebViewWnd:(id)arg1 webTitle:(id)arg2 delegate:(id)arg3;
- (_Bool)popSetHeadImageViewWnd:(id)arg1 image:(id)arg2 fileName:(id)arg3 userNick:(id)arg4;
- (id)getHeadImageViewController:(id)arg1 image:(id)arg2 fileName:(id)arg3 userNick:(id)arg4;
- (id)initWithAppId:(id)arg1;

@end

