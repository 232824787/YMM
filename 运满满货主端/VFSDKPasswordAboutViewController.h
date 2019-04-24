//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UILabel, UITextField, UIView, VFSDKEncryptResult, VFSDKPassWordView, VFSDKSecurityKeyborad;

@interface VFSDKPasswordAboutViewController : VFSDKBaseViewController <UITextFieldDelegate>
{
    _Bool _fromLLVerify;
    VFSDKSecurityKeyborad *keyborad;
    NSString *password;
    VFSDKPassWordView *passwordView;
    NSString *verifyPassword;
    VFSDKEncryptResult *encryptPassWord;
    NSString *checkTicket;
    long long status;
    NSString *_pageTitle;
    long long _type;
    NSString *_ticket;
    UILabel *_tipLabel;
    UIView *_passwordBgView;
    UIButton *_nextBtn;
    UITextField *_passwordTF;
    UIButton *_findPasswordBtn;
}

@property(nonatomic) __weak UIButton *findPasswordBtn; // @synthesize findPasswordBtn=_findPasswordBtn;
@property(nonatomic) __weak UITextField *passwordTF; // @synthesize passwordTF=_passwordTF;
@property(nonatomic) __weak UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(nonatomic) __weak UIView *passwordBgView; // @synthesize passwordBgView=_passwordBgView;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) _Bool fromLLVerify; // @synthesize fromLLVerify=_fromLLVerify;
@property(copy, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(nonatomic) long long status; // @synthesize status;
@property(copy, nonatomic) NSString *checkTicket; // @synthesize checkTicket;
@property(retain, nonatomic) VFSDKEncryptResult *encryptPassWord; // @synthesize encryptPassWord;
@property(copy, nonatomic) NSString *verifyPassword; // @synthesize verifyPassword;
@property(retain, nonatomic) VFSDKPassWordView *passwordView; // @synthesize passwordView;
@property(copy, nonatomic) NSString *password; // @synthesize password;
@property(retain, nonatomic) VFSDKSecurityKeyborad *keyborad; // @synthesize keyborad;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)findPassword:(id)arg1;
- (void)checkPasswordDone;
- (void)findPasswordDone;
- (void)next:(id)arg1;
- (void)resetData;
- (void)handlePassword;
- (void)showPasswordKeyBorad;
- (void)checkPwd;
- (void)changePwd;
- (void)setupEnv;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

