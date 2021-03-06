//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBLoanBaseViewController.h"

@class NSString, UIButton, UIWebView;

@interface HCBLoanApplyUserAgreementViewController : HCBLoanBaseViewController
{
    id <HCBLoanApplyUserAgreementViewControllerDelegate> delegate;
    UIWebView *_webView;
    UIButton *_agreeBtn;
    NSString *_loanUserAgreementURL;
}

@property(copy, nonatomic) NSString *loanUserAgreementURL; // @synthesize loanUserAgreementURL=_loanUserAgreementURL;
@property(nonatomic) __weak UIButton *agreeBtn; // @synthesize agreeBtn=_agreeBtn;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <HCBLoanApplyUserAgreementViewControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)agree:(id)arg1;
- (void)setupWebView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

