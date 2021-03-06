//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMTradeBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UILabel, UITableView, YMMCollectorViewModel;

@interface YMMCollectorListVC : YMMTradeBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSString *_referPageName;
    NSString *_pageName;
    UITableView *_orderTable;
    UILabel *_tipLabel;
    YMMCollectorViewModel *_viewModel;
}

@property(retain, nonatomic) YMMCollectorViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UITableView *orderTable; // @synthesize orderTable=_orderTable;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *referPageName; // @synthesize referPageName=_referPageName;
- (void).cxx_destruct;
- (id)ymm_pageName;
- (void)journalElementId:(id)arg1 elementType:(id)arg2;
- (void)setEmptyView:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)statusType:(id)arg1;
- (void)showRefreshHeader;
- (void)showLoadMoreFooter;
- (void)loadMore;
- (void)refresh;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

