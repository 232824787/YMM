//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSDictionary, NSIndexPath, NSMutableArray, NSString, UIButton, UITableView, UIView, YMMAlertView, YMMPayOrderInfoModel;

@interface YMMPayViewController : YMMBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool isShowAllChannel;
    long long currentIndex;
    long long payChannelType;
    long long payChannelId;
    NSDictionary *_orderInfoDict;
    YMMPayOrderInfoModel *_orderInfo;
    id <YMMPayViewControllerDelegate> _delegate;
    UITableView *_paymentTableView;
    UIView *_footerView;
    UIButton *_paymentButton;
    UIButton *_moreChannelBtn;
    UIView *_moreChannelView;
    NSMutableArray *_paymentListArr;
    NSIndexPath *_currentIndexPath;
    NSString *_YBChannelName;
    YMMAlertView *_tipAlertView;
}

@property(retain, nonatomic) YMMAlertView *tipAlertView; // @synthesize tipAlertView=_tipAlertView;
@property(copy, nonatomic) NSString *YBChannelName; // @synthesize YBChannelName=_YBChannelName;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) NSMutableArray *paymentListArr; // @synthesize paymentListArr=_paymentListArr;
@property(retain, nonatomic) UIView *moreChannelView; // @synthesize moreChannelView=_moreChannelView;
@property(retain, nonatomic) UIButton *moreChannelBtn; // @synthesize moreChannelBtn=_moreChannelBtn;
@property(retain, nonatomic) UIButton *paymentButton; // @synthesize paymentButton=_paymentButton;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *paymentTableView; // @synthesize paymentTableView=_paymentTableView;
@property(nonatomic) __weak id <YMMPayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YMMPayOrderInfoModel *orderInfo; // @synthesize orderInfo=_orderInfo;
@property(retain, nonatomic) NSDictionary *orderInfoDict; // @synthesize orderInfoDict=_orderInfoDict;
- (void).cxx_destruct;
- (id)ymm_pageName;
- (void)ymm_alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)messageTipsAndReTry;
- (id)formatFeeToStingWithNum:(long long)arg1;
- (void)setCellSelImage;
- (void)updatePaymentChannel:(unsigned long long)arg1;
- (void)payChannelListFirstload;
- (void)hideMBProgressHUD;
- (void)showMBProgressHUD;
- (id)currentSelChannelModel:(long long)arg1;
- (unsigned long long)paymentCellCount;
- (unsigned long long)getShowPaymentChannel;
- (void)popPayVC;
- (void)openPayMentCenterJournal;
- (void)payCanceledAndBack:(id)arg1;
- (void)cancelPayBtn:(id)arg1;
- (void)moreButtonAction:(id)arg1;
- (void)prePayMent:(id)arg1;
- (_Bool)isMinRePaySecond:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)payCancelTipsString:(_Bool)arg1;
- (void)payChannelListInit;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)ymm_supportBackGesture;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

