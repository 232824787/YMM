//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBLoanBaseViewController.h"

#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

@interface HCBLoanSignContractViewController : HCBLoanBaseViewController <UIWebViewDelegate>
{
    _Bool _fromCashLoan;
    NSString *_contractUrl;
    NSString *_phone;
    UIWebView *_webView;
    NSString *_returnUrl;
}

@property(copy, nonatomic) NSString *returnUrl; // @synthesize returnUrl=_returnUrl;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) _Bool fromCashLoan; // @synthesize fromCashLoan=_fromCashLoan;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *contractUrl; // @synthesize contractUrl=_contractUrl;
- (void).cxx_destruct;
- (void)toReplenishPage;
- (void)toApplyLoan;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)signContract;
- (void)fetchProtocolContent;
- (void)configNavigationBar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

