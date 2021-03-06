//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YMMBalanceTipViewDelegate.h"
#import "YMMRechargeAlertViewDelegate.h"

@class NSString, UITableView, YMMAccountCenterGroupListModel, YMMBalanceTipView, YMMMyAssetsModel;

@interface YMMAccountHomeViewController : YMMBaseViewController <UITableViewDelegate, UITableViewDataSource, YMMRechargeAlertViewDelegate, YMMBalanceTipViewDelegate>
{
    _Bool _needShowTips;
    _Bool _completeAccount;
    UITableView *_tableView;
    YMMAccountCenterGroupListModel *_listModel;
    YMMMyAssetsModel *_assetsModel;
    YMMBalanceTipView *_balanceTipsView;
    NSString *_authTipsStr;
}

@property(nonatomic) _Bool completeAccount; // @synthesize completeAccount=_completeAccount;
@property(copy, nonatomic) NSString *authTipsStr; // @synthesize authTipsStr=_authTipsStr;
@property(nonatomic) _Bool needShowTips; // @synthesize needShowTips=_needShowTips;
@property(retain, nonatomic) YMMBalanceTipView *balanceTipsView; // @synthesize balanceTipsView=_balanceTipsView;
@property(retain, nonatomic) YMMMyAssetsModel *assetsModel; // @synthesize assetsModel=_assetsModel;
@property(retain, nonatomic) YMMAccountCenterGroupListModel *listModel; // @synthesize listModel=_listModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)addRechargeJournal;
- (void)clickedWithdrawBtnJournalByResult:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)rechargeView:(id)arg1 clickedButtonIndex:(long long)arg2;
- (void)updateRechargePayStatus:(id)arg1;
- (void)balanceTipViewButtonClicked;
- (id)assetsAccountCellInTableview:(id)arg1 atIndexPath:(id)arg2;
- (id)normalCellInTableview:(id)arg1 atIndexPath:(id)arg2;
- (id)userInfoCellInTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)getUserItemByIndexPath:(id)arg1;
- (id)getSpecifiedIndexPathWithCode:(long long)arg1;
- (void)fileterUIListModelModel;
- (void)getMyAssetsRequest;
- (void)getHomeItemsRequest;
- (void)gotoApplyWithdrawalsVC;
- (void)gotoAccountViewController:(id)arg1;
- (void)rechargeActionByAssetModel:(id)arg1;
- (void)withdrawActionByAssetModel:(id)arg1;
- (void)withdrawNeedAuthTask;
- (void)makeConstraint;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

