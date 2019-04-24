//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UIButton, UIImageView, UITableView, YMMCopilotManager;

@interface YMMManageCopilotViewController : YMMBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    UIButton *_inviteButton;
    UIImageView *_inviteImageView;
    UIButton *_noCodriverInviteButton;
    NSArray *_copilotList;
    YMMCopilotManager *_copilotManager;
}

@property(retain, nonatomic) YMMCopilotManager *copilotManager; // @synthesize copilotManager=_copilotManager;
@property(retain, nonatomic) NSArray *copilotList; // @synthesize copilotList=_copilotList;
@property(retain, nonatomic) UIButton *noCodriverInviteButton; // @synthesize noCodriverInviteButton=_noCodriverInviteButton;
@property(retain, nonatomic) UIImageView *inviteImageView; // @synthesize inviteImageView=_inviteImageView;
@property(retain, nonatomic) UIButton *inviteButton; // @synthesize inviteButton=_inviteButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)tapJournalWithElementId:(id)arg1 extra:(id)arg2;
- (void)addPVJournal;
- (void)gotoCarInfoAuthViewController;
- (void)gotoInviteCodriverVC;
- (void)deleteInviteCodriverWithCopilotModel:(id)arg1;
- (id)sourceString:(id)arg1 copilotModel:(id)arg2;
- (void)showCancelInvieteAlertViewWithCopilotModel:(id)arg1;
- (void)showUnbindAlertViewWithCopilotModel:(id)arg1;
- (void)inviteButtonClick:(id)arg1;
- (void)requestCopilotListTask;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
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

