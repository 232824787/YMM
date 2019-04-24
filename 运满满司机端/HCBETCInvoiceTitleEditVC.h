//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCInvoiceBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HCBETCInvoiceTitleModel, NSArray, NSMutableArray, NSString, UIButton, UILabel, UITableView, UIView;

@interface HCBETCInvoiceTitleEditVC : HCBETCInvoiceBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *enterpriseInfoTitle;
    NSArray *personInfoTitle;
    HCBETCInvoiceTitleModel *_titleModel;
    UIView *_headerContainerView;
    UILabel *_relateCardNumLabel;
    UIView *_relateETCContainerView;
    UITableView *_tableView;
    UIButton *_confirmBtn;
    NSArray *_relateDataSource;
    NSArray *_unRelateDataSource;
    NSMutableArray *_selectedCardList;
    NSArray *_titleInfoArray;
    UIView *_footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSArray *titleInfoArray; // @synthesize titleInfoArray=_titleInfoArray;
@property(retain, nonatomic) NSMutableArray *selectedCardList; // @synthesize selectedCardList=_selectedCardList;
@property(retain, nonatomic) NSArray *unRelateDataSource; // @synthesize unRelateDataSource=_unRelateDataSource;
@property(retain, nonatomic) NSArray *relateDataSource; // @synthesize relateDataSource=_relateDataSource;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *relateETCContainerView; // @synthesize relateETCContainerView=_relateETCContainerView;
@property(retain, nonatomic) UILabel *relateCardNumLabel; // @synthesize relateCardNumLabel=_relateCardNumLabel;
@property(retain, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(retain, nonatomic) HCBETCInvoiceTitleModel *titleModel; // @synthesize titleModel=_titleModel;
- (void).cxx_destruct;
- (id)separateLine;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)abstractUnrelateETCCardFromCardList:(id)arg1;
- (void)requestData;
- (void)requestTitleDetail;
- (void)clickConfirmBtn:(id)arg1;
- (double)headerContainerHeight;
- (void)refreshMasonry;
- (void)loadMasonry;
- (void)loadInfoContainerViewWithArray:(id)arg1;
- (void)loadUI;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

