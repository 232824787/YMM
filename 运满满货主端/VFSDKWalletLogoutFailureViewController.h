//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseViewController.h"

@class NSString, UIButton, UIWebView;

@interface VFSDKWalletLogoutFailureViewController : VFSDKBaseViewController
{
    NSString *_contentStr;
    CDUnknownBlockType _closeAction;
    UIWebView *_contentWebView;
    UIButton *_closeButton;
}

@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UIWebView *contentWebView; // @synthesize contentWebView=_contentWebView;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
@property(copy, nonatomic) NSString *contentStr; // @synthesize contentStr=_contentStr;
- (void).cxx_destruct;
- (void)_vf_closePage;
- (void)closeLogout:(id)arg1;
- (void)clickBackButton:(id)arg1;
- (void)viewDidLoad;

@end

