//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseViewController.h"

@class NSLayoutConstraint, NSString, NSTimer, UIButton, UILabel, UITableView, UITextField;

@interface VFSDKRecoverPasswordVerifyMobileViewController : VFSDKBaseViewController
{
    NSTimer *codeTimer;
    long long timerCount;
    NSString *instCode;
    NSString *finalTicket;
    NSString *_mobile;
    NSString *_ticket;
    UIButton *_nextBtn;
    UITableView *_tableView;
    UILabel *_titleLB;
    UIButton *_sendCodeBtn;
    UITextField *_verifyCodeTF;
    NSLayoutConstraint *_bottomBarHeight;
}

@property(nonatomic) __weak NSLayoutConstraint *bottomBarHeight; // @synthesize bottomBarHeight=_bottomBarHeight;
@property(nonatomic) __weak UITextField *verifyCodeTF; // @synthesize verifyCodeTF=_verifyCodeTF;
@property(nonatomic) __weak UIButton *sendCodeBtn; // @synthesize sendCodeBtn=_sendCodeBtn;
@property(nonatomic) __weak UILabel *titleLB; // @synthesize titleLB=_titleLB;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(copy, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *finalTicket; // @synthesize finalTicket;
@property(copy, nonatomic) NSString *instCode; // @synthesize instCode;
@property(nonatomic) long long timerCount; // @synthesize timerCount;
@property(retain, nonatomic) NSTimer *codeTimer; // @synthesize codeTimer;
- (void).cxx_destruct;
- (void)toResetPassword;
- (void)sendCode:(id)arg1;
- (void)next:(id)arg1;
- (void)smsCodeMessage:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)checkSmsCode;
- (void)sendSmsCode;
- (_Bool)checkValue;
- (void)didFireCodeTimer:(id)arg1;
- (void)getCodeTimer;
- (void)startTimer;
- (void)textFieldDidChange:(id)arg1;
- (void)setupTipStr;
- (void)setupTableView;
- (void)setupStyle;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end

