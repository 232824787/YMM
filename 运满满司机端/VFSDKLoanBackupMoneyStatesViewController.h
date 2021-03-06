//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseViewController.h"

@class NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView, VFSDKLoanBackupMoneyStatesModel;

@interface VFSDKLoanBackupMoneyStatesViewController : VFSDKBaseViewController
{
    VFSDKLoanBackupMoneyStatesModel *_stateModel;
    UIImageView *_iconImageView;
    UILabel *_titleLable;
    UILabel *_subTitleLable;
    UILabel *_contentLable;
    UIView *_bottomDescView;
    UIButton *_bottomButton;
    UILabel *_bottomDescViewContent;
    NSLayoutConstraint *_buttonBottomConstraint;
    NSString *_productid;
}

@property(copy, nonatomic) NSString *productid; // @synthesize productid=_productid;
@property(nonatomic) __weak NSLayoutConstraint *buttonBottomConstraint; // @synthesize buttonBottomConstraint=_buttonBottomConstraint;
@property(nonatomic) __weak UILabel *bottomDescViewContent; // @synthesize bottomDescViewContent=_bottomDescViewContent;
@property(nonatomic) __weak UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(nonatomic) __weak UIView *bottomDescView; // @synthesize bottomDescView=_bottomDescView;
@property(nonatomic) __weak UILabel *contentLable; // @synthesize contentLable=_contentLable;
@property(nonatomic) __weak UILabel *subTitleLable; // @synthesize subTitleLable=_subTitleLable;
@property(nonatomic) __weak UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) VFSDKLoanBackupMoneyStatesModel *stateModel; // @synthesize stateModel=_stateModel;
- (void).cxx_destruct;
- (id)p_getNumberFromStr:(id)arg1;
- (id)p_formatNumberWithString:(id)arg1;
- (void)p_performFaileAction;
- (void)p_performSuccessAction;
- (void)p_performURL;
- (_Bool)p_isFromWallet;
- (void)p_setUpUI;
- (void)p_requestBankUpProducts;
- (void)bottonButtonClick:(id)arg1;
- (void)viewDidLoad;

@end

