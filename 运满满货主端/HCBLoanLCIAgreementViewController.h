//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBLoanBaseViewController.h"

@class HCBLoanButtonBarView, HCBLoanLCIAgreementViewModel, HCBWKWebView;

@interface HCBLoanLCIAgreementViewController : HCBLoanBaseViewController
{
    HCBWKWebView *_webView;
    HCBLoanButtonBarView *_barView;
    HCBLoanLCIAgreementViewModel *_viewModel;
}

+ (_Bool)baseLoadFromNib;
@property(retain, nonatomic) HCBLoanLCIAgreementViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) HCBLoanButtonBarView *barView; // @synthesize barView=_barView;
@property(retain, nonatomic) HCBWKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)p_confirmAgreement;
- (void)p_startFetchData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_showAgreementWithViewModel:(id)arg1;
- (void)p_setupSubViewsLayout;
- (void)clickBackButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillFirstAppear;
- (void)viewDidLoad;
- (void)dealloc;

@end

