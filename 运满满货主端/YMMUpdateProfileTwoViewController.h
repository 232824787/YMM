//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YMMRealNameControllerProtocol.h"

@class NSString, UIButton, UITableView, UIView, YMMRealNamePresenter, YMMUserAuthAgreementView;

@interface YMMUpdateProfileTwoViewController : YMMBaseViewController <UITableViewDataSource, UITableViewDelegate, YMMRealNameControllerProtocol>
{
    YMMRealNamePresenter *_presenter;
    UITableView *_tableView;
    UIButton *_commitButton;
    UIView *_headerView;
    YMMUserAuthAgreementView *_userAgreementView;
}

@property(retain, nonatomic) YMMUserAuthAgreementView *userAgreementView; // @synthesize userAgreementView=_userAgreementView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIButton *commitButton; // @synthesize commitButton=_commitButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) YMMRealNamePresenter *presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (void)pgaeViewJournal;
- (void)reloadSection:(long long)arg1 row:(long long)arg2;
- (void)idNumberBeOccupied:(id)arg1;
- (void)commitInfoSuccess:(id)arg1;
- (void)reloadView;
- (void)stopLoading;
- (void)startLoading:(id)arg1;
- (void)startLoading;
- (void)gotoProfileVCWithRootVC:(id)arg1;
- (void)backProfileVC;
- (void)commitSuccess:(id)arg1;
- (void)openWeb:(id)arg1;
- (void)updateUserInfoTask;
- (void)commitBtnAction:(id)arg1;
- (void)updateConstraints;
- (void)addSubViews;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

