//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCInvoiceBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UIButton, UITableView, UIView;

@interface HCBETCInvoiceAddTitleVC : HCBETCInvoiceBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *infoTitle;
    NSArray *infoPlaceholder;
    NSString *companyName;
    NSString *taxNo;
    _Bool _needPopBack;
    _Bool _manualCloseRemind;
    UIView *_headerView;
    UIView *_footerView;
    UITableView *_tableView;
    UIButton *_enterpriseBtn;
    UIButton *_personBtn;
    UIView *_infoContainerView;
    UIButton *_addBtn;
    UIView *_headerSlider;
    long long _titleType;
    UIView *_rechargeRemindView;
    NSArray *_companyArray;
}

@property(retain, nonatomic) NSArray *companyArray; // @synthesize companyArray=_companyArray;
@property(nonatomic) _Bool manualCloseRemind; // @synthesize manualCloseRemind=_manualCloseRemind;
@property(retain, nonatomic) UIView *rechargeRemindView; // @synthesize rechargeRemindView=_rechargeRemindView;
@property(nonatomic) long long titleType; // @synthesize titleType=_titleType;
@property(retain, nonatomic) UIView *headerSlider; // @synthesize headerSlider=_headerSlider;
@property(retain, nonatomic) UIButton *addBtn; // @synthesize addBtn=_addBtn;
@property(retain, nonatomic) UIView *infoContainerView; // @synthesize infoContainerView=_infoContainerView;
@property(retain, nonatomic) UIButton *personBtn; // @synthesize personBtn=_personBtn;
@property(retain, nonatomic) UIButton *enterpriseBtn; // @synthesize enterpriseBtn=_enterpriseBtn;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool needPopBack; // @synthesize needPopBack=_needPopBack;
- (void).cxx_destruct;
- (_Bool)isGetCompanyNameCellAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestTaxNo:(id)arg1;
- (void)requestCompanyInfo:(id)arg1;
- (void)clickRemindView;
- (void)loadInfoContainerViewWithArray:(id)arg1;
- (id)getCellContentWithIndexPath:(id)arg1;
- (void)clickAddBtn:(id)arg1;
- (void)clickPersonBtn:(id)arg1;
- (void)clickEnterpriseBtn:(id)arg1;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

