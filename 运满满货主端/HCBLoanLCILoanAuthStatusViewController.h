//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBLoanBaseViewController.h"

@class NSArray, NSLayoutConstraint, NSString, UIButton, UILabel;

@interface HCBLoanLCILoanAuthStatusViewController : HCBLoanBaseViewController
{
    _Bool _showPhoneNum;
    CDUnknownBlockType _clickNextHanlder;
    UILabel *_statusLabel;
    UILabel *_tipsLabel;
    UIButton *_phoneNumBtn;
    NSLayoutConstraint *_phoneNumBtnTopCons;
    NSLayoutConstraint *_phoneNumBtnHeightCons;
    UIButton *_nextBtn;
    NSArray *_allUIs;
    NSString *_pageTitle;
    NSString *_status;
    NSString *_content;
    NSString *_phoneNum;
    NSString *_buttonTitle;
}

@property(nonatomic) _Bool showPhoneNum; // @synthesize showPhoneNum=_showPhoneNum;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(retain, nonatomic) NSArray *allUIs; // @synthesize allUIs=_allUIs;
@property(nonatomic) __weak UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(nonatomic) __weak NSLayoutConstraint *phoneNumBtnHeightCons; // @synthesize phoneNumBtnHeightCons=_phoneNumBtnHeightCons;
@property(nonatomic) __weak NSLayoutConstraint *phoneNumBtnTopCons; // @synthesize phoneNumBtnTopCons=_phoneNumBtnTopCons;
@property(nonatomic) __weak UIButton *phoneNumBtn; // @synthesize phoneNumBtn=_phoneNumBtn;
@property(nonatomic) __weak UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(copy, nonatomic) CDUnknownBlockType clickNextHanlder; // @synthesize clickNextHanlder=_clickNextHanlder;
- (void).cxx_destruct;
- (void)_queryAuthStatus;
- (void)callPhoneAction:(id)arg1;
- (void)nextAction:(id)arg1;
- (void)_configUIWithData:(id)arg1;
- (void)_showAllUIs:(_Bool)arg1;
- (void)_setupUI;
- (void)_backActionWithForceToLoanMainPage:(_Bool)arg1;
- (void)clickBackButton:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

