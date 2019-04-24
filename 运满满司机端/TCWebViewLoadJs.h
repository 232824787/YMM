//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

@interface TCWebViewLoadJs : NSObject <UIWebViewDelegate>
{
    NSString *_key;
    NSString *_openId;
    NSString *_appId;
    UIWebView *_webView;
}

+ (void)clear;
+ (id)getInstance;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)loadJS:(id)arg1 openId:(id)arg2 andKey:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

