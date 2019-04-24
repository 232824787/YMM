//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YMMWebViewDelegate.h"

@class NSMutableDictionary, NSString, YMMWebView;

@interface YMMJSBridge : NSObject <YMMWebViewDelegate>
{
    long long _uniqueId;
    int _numRequestsLoading;
    id <YMMWebViewDelegate> _webViewDelegate;
    YMMWebView *_webView;
    NSMutableDictionary *_responseCallbacks;
    NSMutableDictionary *_messageHandlers;
    NSMutableDictionary *_apiDic;
}

+ (id)bridgeForWebView:(id)arg1 webViewDelegate:(id)arg2;
+ (id)bridgeForWebView:(id)arg1;
+ (void)enableLogging;
@property(retain, nonatomic) NSMutableDictionary *apiDic; // @synthesize apiDic=_apiDic;
@property(retain, nonatomic) NSMutableDictionary *messageHandlers; // @synthesize messageHandlers=_messageHandlers;
@property(retain, nonatomic) NSMutableDictionary *responseCallbacks; // @synthesize responseCallbacks=_responseCallbacks;
@property(nonatomic) __weak YMMWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <YMMWebViewDelegate> webViewDelegate; // @synthesize webViewDelegate=_webViewDelegate;
- (void).cxx_destruct;
- (void)addJournalForNativeCallH5:(id)arg1 params:(id)arg2;
- (void)addJournalForH5CallNative:(id)arg1 params:(id)arg2 callback:(id)arg3 data:(id)arg4;
- (void)dealloc;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)injectJavascriptFile;
- (void)_log:(id)arg1 json:(id)arg2;
- (id)responseDictWithData:(id)arg1;
- (void)_dispatchMessage:(id)arg1 data:(id)arg2;
- (_Bool)_handleMessage:(id)arg1;
- (void)callMethodWithMethodName:(id)arg1 paramsStr:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)_platformSpecificSetup:(id)arg1 webViewDelegate:(id)arg2;
- (void)_receivedCallback:(id)arg1;
- (void)_registerHandler:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_isMethodSupported:(id)arg1;
- (void)callHandler:(id)arg1 data:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)callHandler:(id)arg1 data:(id)arg2;
- (void)callHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

