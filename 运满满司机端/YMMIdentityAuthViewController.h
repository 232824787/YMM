//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YMMBaseAlertViewDelegate.h"

@class NSString, UIBarButtonItem, UITableView, YMMMyAssetsModel;

@interface YMMIdentityAuthViewController : YMMBaseViewController <UITableViewDelegate, UITableViewDataSource, YMMBaseAlertViewDelegate>
{
    _Bool _checkIDCard;
    YMMMyAssetsModel *_assetModel;
    UITableView *_tableView;
    NSString *_inputIDStr;
    NSString *_checkResultStr;
    UIBarButtonItem *_rightBarItem;
}

@property(retain, nonatomic) UIBarButtonItem *rightBarItem; // @synthesize rightBarItem=_rightBarItem;
@property(nonatomic) _Bool checkIDCard; // @synthesize checkIDCard=_checkIDCard;
@property(copy, nonatomic) NSString *checkResultStr; // @synthesize checkResultStr=_checkResultStr;
@property(copy, nonatomic) NSString *inputIDStr; // @synthesize inputIDStr=_inputIDStr;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) YMMMyAssetsModel *assetModel; // @synthesize assetModel=_assetModel;
- (void).cxx_destruct;
- (void)checkCardNumberState:(id)arg1;
- (void)ymm_alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadSubmitCell;
- (_Bool)cheInputStr;
- (void)submitAuthInfo;
- (void)doBack;
- (void)withdrawAuthTask;
- (void)tipsForA1UserWithTips:(id)arg1;
- (void)tempResetBankNumberWithUserName:(id)arg1;
- (void)clickedContactUsItem;
- (id)currentUserName;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)ymm_supportBackGesture;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

