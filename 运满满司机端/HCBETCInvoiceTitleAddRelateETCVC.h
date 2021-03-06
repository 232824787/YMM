//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCInvoiceBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HCBETCInvoiceTitleModel, NSMutableArray, NSString, UIButton, UITableView;

@interface HCBETCInvoiceTitleAddRelateETCVC : HCBETCInvoiceBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    HCBETCInvoiceTitleModel *_titleModel;
    NSString *_titleId;
    UITableView *_tableView;
    NSMutableArray *_dataSource;
    NSMutableArray *_cardListArray;
    UIButton *_confirmBtn;
}

@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) NSMutableArray *cardListArray; // @synthesize cardListArray=_cardListArray;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *titleId; // @synthesize titleId=_titleId;
@property(retain, nonatomic) HCBETCInvoiceTitleModel *titleModel; // @synthesize titleModel=_titleModel;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)associateUserCard;
- (void)requestData;
- (void)clickConfirmBtn:(id)arg1;
- (void)clickBackButton:(id)arg1;
- (void)clickRightButton:(id)arg1;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

