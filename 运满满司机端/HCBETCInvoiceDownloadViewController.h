//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCInvoiceBaseViewController.h"

@class UIButton, UILabel, UITextField;

@interface HCBETCInvoiceDownloadViewController : HCBETCInvoiceBaseViewController
{
    UILabel *_tipsLabel;
    UITextField *_emailTF;
    UIButton *_sendBtn;
}

@property(nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UITextField *emailTF; // @synthesize emailTF=_emailTF;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void).cxx_destruct;
- (void)clickSendBtn:(id)arg1;
- (void)initView;
- (void)viewDidLoad;
- (id)init;

@end

