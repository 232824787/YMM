//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKScriptMessageHandler.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSString, UIViewController, UIWebView, WKWebView, WLNavigation;

@interface WLJsApiManager : NSObject <UIWebViewDelegate, WKNavigationDelegate, WKScriptMessageHandler>
{
    _Bool _useWKWebView;
    _Bool _hasInjected;
    _Bool _viewHasAppeared;
    _Bool _viewHasDisappeared;
    _Bool _viewHasLoadFinished;
    _Bool _checkApiDone;
    UIWebView *_webView;
    WKWebView *_wkWebView;
    UIViewController *_viewController;
    NSString *_injectJSSuccessNotifyName;
    id <WLJsApiManagerDelegate> _delegate;
    NSString *_url;
    NSString *_userAgent;
    NSDate *_viewAppearTime;
    double _viewAppearDuringTime;
    CDUnknownBlockType _checkApiDoneBlock;
    NSMutableDictionary *_apiData;
    NSMutableDictionary *_authorizedData;
    NSDictionary *_availableApiDic_thirdParty;
    id <UIWebViewDelegate> _webViewDelegate;
    id <WKNavigationDelegate> _wkNavigationDelegate;
    WLNavigation *_wlNavigation;
}

@property(nonatomic) _Bool checkApiDone; // @synthesize checkApiDone=_checkApiDone;
@property(nonatomic) _Bool viewHasLoadFinished; // @synthesize viewHasLoadFinished=_viewHasLoadFinished;
@property(nonatomic) _Bool viewHasDisappeared; // @synthesize viewHasDisappeared=_viewHasDisappeared;
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(nonatomic) _Bool hasInjected; // @synthesize hasInjected=_hasInjected;
@property(retain, nonatomic) WLNavigation *wlNavigation; // @synthesize wlNavigation=_wlNavigation;
@property(nonatomic) __weak id <WKNavigationDelegate> wkNavigationDelegate; // @synthesize wkNavigationDelegate=_wkNavigationDelegate;
@property(nonatomic) __weak id <UIWebViewDelegate> webViewDelegate; // @synthesize webViewDelegate=_webViewDelegate;
@property(retain, nonatomic) NSDictionary *availableApiDic_thirdParty; // @synthesize availableApiDic_thirdParty=_availableApiDic_thirdParty;
@property(retain, nonatomic) NSMutableDictionary *authorizedData; // @synthesize authorizedData=_authorizedData;
@property(retain, nonatomic) NSMutableDictionary *apiData; // @synthesize apiData=_apiData;
@property(copy, nonatomic) CDUnknownBlockType checkApiDoneBlock; // @synthesize checkApiDoneBlock=_checkApiDoneBlock;
@property(nonatomic) double viewAppearDuringTime; // @synthesize viewAppearDuringTime=_viewAppearDuringTime;
@property(retain, nonatomic) NSDate *viewAppearTime; // @synthesize viewAppearTime=_viewAppearTime;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) __weak id <WLJsApiManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *injectJSSuccessNotifyName; // @synthesize injectJSSuccessNotifyName=_injectJSSuccessNotifyName;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) _Bool useWKWebView; // @synthesize useWKWebView=_useWKWebView;
@property(nonatomic) __weak WKWebView *wkWebView; // @synthesize wkWebView=_wkWebView;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)validApi:(id)arg1 withModule:(id)arg2;
- (id)configuredApiWithModuleList:(id)arg1;
- (void)configApiWithModuleList:(id)arg1;
- (id)getCurrentUrlAuthInfo;
- (id)apisWithAuthType:(unsigned long long)arg1;
- (_Bool)checkIfHostBelongsToThirdParty:(id)arg1;
- (_Bool)checkIfHostBelongsToHCB:(id)arg1;
- (unsigned long long)authorizeWebView:(id)arg1 url:(id)arg2 wkNavigationResponse:(id)arg3;
- (void)updateAuthorizedApiDataWithWebView:(id)arg1 url:(id)arg2 wkNavigationResponse:(id)arg3;
- (id)urlStringWithoutHash:(id)arg1;
- (void)reportWebViewLifeCycleWithState:(unsigned long long)arg1;
- (void)webViewWillDisappear;
- (void)webViewDidAppear;
- (_Bool)shouldWindowGoBackByNative;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (id)findApiWithName:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)creatObjMapScriptWithName:(id)arg1;
- (id)creatNativeScript;
- (void)injectJSObjectForWKWebView;
- (void)injectJSObject:(id)arg1 loadStatus:(unsigned long long)arg2;
- (void)evaluateScript:(id)arg1;
- (id)getCurrentContext;
- (void)removeBridge;
- (_Bool)bridgeWKWebView:(id)arg1 viewController:(id)arg2 webViewDelegate:(id)arg3;
- (_Bool)bridgeWebView:(id)arg1 viewController:(id)arg2 webViewDelegate:(id)arg3;
- (id)apisForModule:(id)arg1;
- (id)registerModule;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

