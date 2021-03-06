//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseViewController.h"

@class NSString, NSTimer, UIButton, UILabel, UITextField;

@interface VFSDKVerifyPhoneNumberViewController : VFSDKBaseViewController
{
    NSTimer *codeTimer;
    long long timerCount;
    NSString *instCode;
    NSString *finalTicket;
    NSString *_ticket;
    NSString *_phoneNumber;
    long long _type;
    UILabel *_tipLB;
    UITextField *_verifyCodeTF;
    UIButton *_sendCodeBtn;
    UIButton *_nextBtn;
}

@property(nonatomic) __weak UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(nonatomic) __weak UIButton *sendCodeBtn; // @synthesize sendCodeBtn=_sendCodeBtn;
@property(nonatomic) __weak UITextField *verifyCodeTF; // @synthesize verifyCodeTF=_verifyCodeTF;
@property(nonatomic) __weak UILabel *tipLB; // @synthesize tipLB=_tipLB;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(copy, nonatomic) NSString *finalTicket; // @synthesize finalTicket;
@property(copy, nonatomic) NSString *instCode; // @synthesize instCode;
@property(nonatomic) long long timerCount; // @synthesize timerCount;
@property(retain, nonatomic) NSTimer *codeTimer; // @synthesize codeTimer;
- (void).cxx_destruct;
- (void)changeMobileSuccess;
- (void)toResetPassword;
- (void)next:(id)arg1;
- (void)sendCode:(id)arg1;
- (void)smsCodeMessage:(id)arg1;
- (void)changePhoneNumberCheckSmsCode;
- (void)changePhoneNumberSendSmsCode;
- (void)checkSmsCode;
- (void)sendSmsCode;
- (_Bool)checkValue;
- (void)didFireCodeTimer:(id)arg1;
- (void)getCodeTimer;
- (void)startTimer;
- (void)textFieldDidChange:(id)arg1;
- (void)setupTipStr;
- (void)setupStyle;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end

