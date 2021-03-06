//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCInvoiceBaseViewController.h"

#import "HCBETCInvoiceCreateHeaderViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "VFWalletSDKDelegate.h"

@class HCBETCInvoiceCardsModel, HCBETCInvoiceCreateHeaderView, NSMutableArray, NSString, UIButton, UITableView;

@interface HCBETCInvoiceCreateConfirmViewController : HCBETCInvoiceBaseViewController <UITableViewDelegate, UITableViewDataSource, VFWalletSDKDelegate, HCBETCInvoiceCreateHeaderViewDelegate>
{
    _Bool _needExpress;
    HCBETCInvoiceCardsModel *_cardModel;
    double _amount;
    NSMutableArray *_tradeIds;
    long long _postage;
    NSMutableArray *_consumeDataSource;
    NSMutableArray *_rechargeDataSource;
    UITableView *_tableView;
    HCBETCInvoiceCreateHeaderView *_headerView;
    NSMutableArray *_dataSource;
    NSMutableArray *_mArrSectionOne;
    NSMutableArray *_mArrSectionTwo;
    UIButton *_buttonConfirm;
    NSMutableArray *_titleLists;
    unsigned long long _applyType;
    long long _invoiceNum;
    NSString *_orderId;
}

@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) _Bool needExpress; // @synthesize needExpress=_needExpress;
@property(nonatomic) long long invoiceNum; // @synthesize invoiceNum=_invoiceNum;
@property(nonatomic) unsigned long long applyType; // @synthesize applyType=_applyType;
@property(retain, nonatomic) NSMutableArray *titleLists; // @synthesize titleLists=_titleLists;
@property(retain, nonatomic) UIButton *buttonConfirm; // @synthesize buttonConfirm=_buttonConfirm;
@property(retain, nonatomic) NSMutableArray *mArrSectionTwo; // @synthesize mArrSectionTwo=_mArrSectionTwo;
@property(retain, nonatomic) NSMutableArray *mArrSectionOne; // @synthesize mArrSectionOne=_mArrSectionOne;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) HCBETCInvoiceCreateHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *rechargeDataSource; // @synthesize rechargeDataSource=_rechargeDataSource;
@property(retain, nonatomic) NSMutableArray *consumeDataSource; // @synthesize consumeDataSource=_consumeDataSource;
@property(nonatomic) long long postage; // @synthesize postage=_postage;
@property(retain, nonatomic) NSMutableArray *tradeIds; // @synthesize tradeIds=_tradeIds;
@property(nonatomic) double amount; // @synthesize amount=_amount;
@property(retain, nonatomic) HCBETCInvoiceCardsModel *cardModel; // @synthesize cardModel=_cardModel;
- (void).cxx_destruct;
- (id)footerView;
- (id)getModelWithType:(long long)arg1;
- (void)turnToSuccessViewController;
- (void)actionConfirm:(id)arg1;
- (_Bool)cancelPayShouldPop;
- (void)didFinishedTransType:(long long)arg1 resultType:(long long)arg2 result:(id)arg3;
- (void)headerViewDidUpdateSubviews:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupView;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

