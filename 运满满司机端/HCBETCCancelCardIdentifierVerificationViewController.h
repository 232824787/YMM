//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCBaseViewController.h"

@class NSString, UITextField;

@interface HCBETCCancelCardIdentifierVerificationViewController : HCBETCBaseViewController
{
    NSString *_cardNo;
    CDUnknownBlockType _verificationSuccessBlock;
    UITextField *_nameTF;
    UITextField *_identiferTF;
}

@property(nonatomic) UITextField *identiferTF; // @synthesize identiferTF=_identiferTF;
@property(nonatomic) UITextField *nameTF; // @synthesize nameTF=_nameTF;
@property(copy, nonatomic) CDUnknownBlockType verificationSuccessBlock; // @synthesize verificationSuccessBlock=_verificationSuccessBlock;
@property(retain, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
- (void).cxx_destruct;
- (void)clickDoneBtn:(id)arg1;
- (void)viewDidLoad;
- (id)init;

@end

