//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HCBETCSROrderHeaderView, MASConstraint, NSArray, NSString, UIButton, UILabel, UITableView, UIView;

@interface HCBETCScheduleRouteOrderDetailVC : HCBETCBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_orderId;
    UITableView *_tableView;
    NSArray *_datasource;
    HCBETCSROrderHeaderView *_tableHeaderView;
    UIView *_tableFooterView;
    UIButton *_bottomButton;
    MASConstraint *_bottomButtonHeightCons;
    NSString *_serviceTel;
    UIView *_serviceTelView;
    UIView *_tipsView;
    UILabel *_tipsLabel;
}

@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UIView *serviceTelView; // @synthesize serviceTelView=_serviceTelView;
@property(copy, nonatomic) NSString *serviceTel; // @synthesize serviceTel=_serviceTel;
@property(retain, nonatomic) MASConstraint *bottomButtonHeightCons; // @synthesize bottomButtonHeightCons=_bottomButtonHeightCons;
@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) HCBETCSROrderHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) NSArray *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (id)plateColorString:(long long)arg1;
- (void)layoutTableFooterView;
- (void)configureTipsViewWithText:(id)arg1;
- (void)configureServiceTelView;
- (void)configureBottomButtonWithData:(id)arg1;
- (void)convertTipsFromOriginalData:(id)arg1;
- (void)convertDatasourceFromOriginalData:(id)arg1;
- (void)bottomButtonAction:(id)arg1;
- (void)contactAction;
- (void)fetchServiceTel;
- (void)fetchDetailPageData;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initViews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

