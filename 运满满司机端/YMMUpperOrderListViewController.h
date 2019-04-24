//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YMMTopbarContentViewControllerProtocol.h"

@class NSMutableArray, NSString, UITableView, YMMPerformanceLog, YMMUpperOrderListViewModel;

@interface YMMUpperOrderListViewController : YMMBaseViewController <UITableViewDelegate, UITableViewDataSource, YMMTopbarContentViewControllerProtocol>
{
    _Bool _imEnable;
    id <YMMUpperOrderListViewDelegate> _delegate;
    UITableView *_tableView;
    NSMutableArray *_dataArray;
    long long _type;
    YMMUpperOrderListViewModel *_viewModel;
    YMMPerformanceLog *_performanceUtil;
}

@property(retain, nonatomic) YMMPerformanceLog *performanceUtil; // @synthesize performanceUtil=_performanceUtil;
@property(nonatomic) _Bool imEnable; // @synthesize imEnable=_imEnable;
@property(retain, nonatomic) YMMUpperOrderListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) id <YMMUpperOrderListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopPerformance;
- (void)startPerformance;
- (id)ymm_pageName;
- (void)addJournalForCall:(id)arg1;
- (void)addJournalForIM:(id)arg1;
- (void)addJournalForAssign:(id)arg1;
- (void)addJournalForRelease:(id)arg1;
- (void)addJournalForRefuse:(id)arg1;
- (void)viewcontrollerDidDisplayToScreenInTopBar:(id)arg1;
- (void)handleAutoButtonClick:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)upperOrderListTaskLoadMore;
- (void)upperOrderListTaskUpDate;
- (void)emptyViewShow;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)ymm_navBarTheme;
- (void)viewDidLoad;
- (id)initWithOrderType:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

