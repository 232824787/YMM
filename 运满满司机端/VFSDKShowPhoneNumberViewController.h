//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseViewController.h"

@class UIButton, UILabel;

@interface VFSDKShowPhoneNumberViewController : VFSDKBaseViewController
{
    UIButton *_changePhoneNumberBtn;
    UILabel *_phoneNumberLabel;
}

@property(nonatomic) __weak UILabel *phoneNumberLabel; // @synthesize phoneNumberLabel=_phoneNumberLabel;
@property(nonatomic) __weak UIButton *changePhoneNumberBtn; // @synthesize changePhoneNumberBtn=_changePhoneNumberBtn;
- (void).cxx_destruct;
- (void)changePhoneNumber:(id)arg1;
- (void)setupEnv;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

