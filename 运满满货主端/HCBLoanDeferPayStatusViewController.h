//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBLoanBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HCBLoanDeferInfoModel, HCBLoanDeferPayStatusHeaderView, HCBLoanDeferStatusModel, NSArray, NSString, UITableView;

@interface HCBLoanDeferPayStatusViewController : HCBLoanBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    HCBLoanDeferInfoModel *_deferModel;
    HCBLoanDeferStatusModel *_statusModel;
    UITableView *_tableView;
    HCBLoanDeferPayStatusHeaderView *_headView;
    NSArray *_lists;
}

@property(retain, nonatomic) NSArray *lists; // @synthesize lists=_lists;
@property(retain, nonatomic) HCBLoanDeferPayStatusHeaderView *headView; // @synthesize headView=_headView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) HCBLoanDeferStatusModel *statusModel; // @synthesize statusModel=_statusModel;
@property(retain, nonatomic) HCBLoanDeferInfoModel *deferModel; // @synthesize deferModel=_deferModel;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)p_createListCell;
- (void)p_setUpTableView;
- (id)trackablePVPageId;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

