//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCargoBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YMMCargoReturnRouteManageAddressEmptyViewDelegate.h"

@class NSString, UIButton, YMMBaseTableView, YMMCargoReturnRouteAddressListModel, YMMCargoReturnRouteAddressModel, YMMCargoReturnRouteManageAddressEmptyView;

@interface YMMCargoReturnRouteManageAddressVC : YMMCargoBaseViewController <UITableViewDelegate, UITableViewDataSource, YMMCargoReturnRouteManageAddressEmptyViewDelegate>
{
    _Bool _showEmptyView;
    YMMCargoReturnRouteAddressModel *_model;
    YMMCargoReturnRouteAddressListModel *_listModel;
    YMMBaseTableView *_tableView;
    YMMCargoReturnRouteManageAddressEmptyView *_emptyView;
    UIButton *_confirmBtn;
}

@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) YMMCargoReturnRouteManageAddressEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) YMMBaseTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool showEmptyView; // @synthesize showEmptyView=_showEmptyView;
@property(retain, nonatomic) YMMCargoReturnRouteAddressListModel *listModel; // @synthesize listModel=_listModel;
@property(retain, nonatomic) YMMCargoReturnRouteAddressModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)pushEditAddressVCWithModel:(id)arg1;
- (void)pushNewAddressVC;
- (void)didClickCreateAddressBtn:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updateUI;
- (void)initViews;
- (void)requestDeleteAddress:(id)arg1;
- (void)requestAddressListAPI;
- (void)initData;
- (void)viewDidLoad;
- (id)initWithListModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

