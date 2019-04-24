//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YMMUploadInfoControllerProtocol.h"

@class NSString, UITableView, YMMAuthTipView, YMMUploadInfoPresenter;

@interface YMMShipperProfileViewController : YMMBaseViewController <UITableViewDataSource, UITableViewDelegate, YMMUploadInfoControllerProtocol>
{
    UITableView *_tableView;
    YMMAuthTipView *_headerView;
    YMMUploadInfoPresenter *_presenter;
}

@property(retain, nonatomic) YMMUploadInfoPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) YMMAuthTipView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)clickedBtnRealNameJournal;
- (void)clickedRealNameJournal;
- (void)pageViewJournal;
- (void)reloadSection:(long long)arg1 row:(long long)arg2;
- (void)reloadView;
- (void)stopLoading;
- (void)startLoading;
- (_Bool)clickAndAlert;
- (void)noAuthAlert;
- (void)gotoContactPhone;
- (void)gotoUploadCompanyInfo;
- (void)gotoRealNameAuth;
- (void)gotoShowRealName;
- (void)gotoUploadAvatar;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)ymm_pageName;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

