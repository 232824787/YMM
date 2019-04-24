//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YMMRealNameControllerProtocol.h"

@class NSNumber, NSString, UIButton, UILabel, UITableView, YMMAuthTipView, YMMFaceIdCardManager, YMMRealNamePresenter;

@interface YMMUpdateProfileOneViewController : YMMBaseViewController <UITableViewDataSource, UITableViewDelegate, YMMRealNameControllerProtocol>
{
    NSNumber *_source;
    UITableView *_tableView;
    UIButton *_nextButton;
    YMMAuthTipView *_headerView;
    UILabel *_tipLabel;
    YMMRealNamePresenter *_presenter;
    YMMFaceIdCardManager *_faceIdManager;
}

@property(retain, nonatomic) YMMFaceIdCardManager *faceIdManager; // @synthesize faceIdManager=_faceIdManager;
@property(retain, nonatomic) YMMRealNamePresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) YMMAuthTipView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSNumber *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)tapJournalWithElementId:(id)arg1;
- (void)viewJournalWithElementId:(id)arg1;
- (void)pageViewJournal;
- (void)startFaceIDLive;
- (void)startFaceLive;
- (void)idCardNumberRegisted:(id)arg1;
- (void)pushToNextViewController;
- (void)reloadSection:(long long)arg1 row:(long long)arg2;
- (void)reloadView;
- (void)stopLoading;
- (void)startLoading;
- (void)gotoChangeTelAction;
- (void)reloadTableViewSection:(long long)arg1 row:(long long)arg2;
- (void)clickNextBtnAction:(id)arg1;
- (void)dismissKeyboard;
- (void)addSubViews;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)idCardTitle;
- (id)avatarTitle;
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

