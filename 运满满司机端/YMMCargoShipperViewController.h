//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCargoBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSNumber, NSString, UIButton, UILabel, UITableView, UIView, YMMCargoShipperModel, YMMCargoShipperViewModel, YMMShipperCreditModel;

@interface YMMCargoShipperViewController : YMMCargoBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isBiddingCargo;
    _Bool _isVisualContactCargo;
    NSNumber *_shipperUserId;
    YMMCargoShipperViewModel *_viewModel;
    YMMCargoShipperModel *_shipperModel;
    YMMShipperCreditModel *_credibilityModel;
    NSArray *_todayCargoArray;
    UILabel *_sectionHeadTitleLb;
    UIView *_sectionHeadView;
    UITableView *_tableView;
    UIButton *_contactBt;
    NSMutableArray *_titlesModelMutableArray;
    NSArray *_sectionKeysArray;
}

@property(copy, nonatomic) NSArray *sectionKeysArray; // @synthesize sectionKeysArray=_sectionKeysArray;
@property(retain, nonatomic) NSMutableArray *titlesModelMutableArray; // @synthesize titlesModelMutableArray=_titlesModelMutableArray;
@property(retain, nonatomic) UIButton *contactBt; // @synthesize contactBt=_contactBt;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *sectionHeadView; // @synthesize sectionHeadView=_sectionHeadView;
@property(retain, nonatomic) UILabel *sectionHeadTitleLb; // @synthesize sectionHeadTitleLb=_sectionHeadTitleLb;
@property(copy, nonatomic) NSArray *todayCargoArray; // @synthesize todayCargoArray=_todayCargoArray;
@property(retain, nonatomic) YMMShipperCreditModel *credibilityModel; // @synthesize credibilityModel=_credibilityModel;
@property(retain, nonatomic) YMMCargoShipperModel *shipperModel; // @synthesize shipperModel=_shipperModel;
@property(retain, nonatomic) YMMCargoShipperViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool isVisualContactCargo; // @synthesize isVisualContactCargo=_isVisualContactCargo;
@property(nonatomic) _Bool isBiddingCargo; // @synthesize isBiddingCargo=_isBiddingCargo;
@property(retain, nonatomic) NSNumber *shipperUserId; // @synthesize shipperUserId=_shipperUserId;
- (void).cxx_destruct;
- (void)addJournalForCargoView:(id)arg1 index:(long long)arg2;
- (void)addJournalForCallShipper;
- (void)addJournalForPageView;
- (id)ymm_pageName;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestShipperGoods;
- (void)requestGetCredibility;
- (void)requestShipperInfo;
- (void)requestShipperVCInfo;
- (_Bool)shouldStackViewUse;
- (void)schemeForUrl:(id)arg1 Params:(id)arg2;
- (void)contactShipper;
- (void)setupConstraints;
- (void)setupViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

