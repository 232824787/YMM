//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSNumber, NSString, UIBarButtonItem, UIButton, UIImageView, UILabel, UITableView, UIView, YMMCouponListModel;

@interface YMMAvailableCopuponListViewController : YMMBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    int _freightAmount;
    id <YMMSelectedCouponInfoDelegate> _delegate;
    NSNumber *_selCouponId;
    NSMutableArray *_tradeSettleList;
    NSNumber *_cargoId;
    long long _bizType;
    unsigned long long _enCouponShowScene;
    UITableView *_tableView;
    UIButton *_selectBtn;
    UIView *_tableHeaderView;
    UIView *_useableHeaderView;
    UIView *_unUseableHeaderView;
    UILabel *_sectionHeaderLab;
    UIView *_hintView;
    long long _couponSwitch;
    NSString *_couponInfo;
    YMMCouponListModel *_currCouponListModel;
    NSMutableArray *_useableCouponList;
    NSMutableArray *_unUseableCouponList;
    UIBarButtonItem *_backItem;
    UIImageView *_selImageView;
    NSString *_orderId;
}

@property(nonatomic) int freightAmount; // @synthesize freightAmount=_freightAmount;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) UIImageView *selImageView; // @synthesize selImageView=_selImageView;
@property(retain, nonatomic) UIBarButtonItem *backItem; // @synthesize backItem=_backItem;
@property(retain, nonatomic) NSMutableArray *unUseableCouponList; // @synthesize unUseableCouponList=_unUseableCouponList;
@property(retain, nonatomic) NSMutableArray *useableCouponList; // @synthesize useableCouponList=_useableCouponList;
@property(retain, nonatomic) YMMCouponListModel *currCouponListModel; // @synthesize currCouponListModel=_currCouponListModel;
@property(copy, nonatomic) NSString *couponInfo; // @synthesize couponInfo=_couponInfo;
@property(nonatomic) long long couponSwitch; // @synthesize couponSwitch=_couponSwitch;
@property(retain, nonatomic) UIView *hintView; // @synthesize hintView=_hintView;
@property(retain, nonatomic) UILabel *sectionHeaderLab; // @synthesize sectionHeaderLab=_sectionHeaderLab;
@property(retain, nonatomic) UIView *unUseableHeaderView; // @synthesize unUseableHeaderView=_unUseableHeaderView;
@property(retain, nonatomic) UIView *useableHeaderView; // @synthesize useableHeaderView=_useableHeaderView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) UIButton *selectBtn; // @synthesize selectBtn=_selectBtn;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long enCouponShowScene; // @synthesize enCouponShowScene=_enCouponShowScene;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSNumber *cargoId; // @synthesize cargoId=_cargoId;
@property(retain, nonatomic) NSMutableArray *tradeSettleList; // @synthesize tradeSettleList=_tradeSettleList;
@property(retain, nonatomic) NSNumber *selCouponId; // @synthesize selCouponId=_selCouponId;
@property(nonatomic) __weak id <YMMSelectedCouponInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addJournalForCouponPage;
- (id)ymm_bundleImageWithName:(id)arg1;
- (void)relaodCellWithIndexPath:(id)arg1;
- (unsigned long long)orderableCouponCount;
- (void)updateSectionHeaderTitle;
- (void)headerBtnAction:(id)arg1;
- (void)reflashHintViewForCouponSwitch;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)requestUsableCouponListTask;
- (void)requestUsableCouponListInFreightScene;
- (void)sortCouponDataList:(id)arg1;
- (void)updateLoadMore:(id)arg1;
- (void)initUI;
- (void)dismiss;
- (void)showFeightSceneCouponsWithOrderId:(id)arg1 withFreightAmount:(int)arg2;
- (void)showOfflineCouponsOnly:(id)arg1;
- (id)ymm_pageName;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

