//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "TangramViewDatasource.h"

@class HCBETCPublicExtensionView, HCBOilCardView, NSArray, NSDate, NSDictionary, NSMutableArray, NSString, TangramBus, TangramView, VFSDKLoanCardView, YMMServiceHeadLineView;

@interface YMMCloudRenderingViewController : YMMBaseViewController <TangramViewDatasource>
{
    _Bool _showNav;
    _Bool _isVisible;
    _Bool _showLoan;
    NSDictionary *_dynamicRenderDic;
    TangramView *_tangramView;
    NSDictionary *_dynamicRender;
    NSMutableArray *_layoutModelArray;
    NSMutableArray *_modelViewArray;
    NSArray *_layoutArray;
    TangramBus *_tangramBus;
    HCBOilCardView *_oilCardView;
    HCBETCPublicExtensionView *_etcView;
    VFSDKLoanCardView *_loanView;
    YMMServiceHeadLineView *_headlineView;
    long long _downloadTempleteCount;
    NSDate *_loadDate;
}

@property(nonatomic) _Bool showLoan; // @synthesize showLoan=_showLoan;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(retain, nonatomic) NSDate *loadDate; // @synthesize loadDate=_loadDate;
@property(nonatomic) long long downloadTempleteCount; // @synthesize downloadTempleteCount=_downloadTempleteCount;
@property(nonatomic) _Bool showNav; // @synthesize showNav=_showNav;
@property(retain, nonatomic) YMMServiceHeadLineView *headlineView; // @synthesize headlineView=_headlineView;
@property(retain, nonatomic) VFSDKLoanCardView *loanView; // @synthesize loanView=_loanView;
@property(retain, nonatomic) HCBETCPublicExtensionView *etcView; // @synthesize etcView=_etcView;
@property(retain, nonatomic) HCBOilCardView *oilCardView; // @synthesize oilCardView=_oilCardView;
@property(retain, nonatomic) TangramBus *tangramBus; // @synthesize tangramBus=_tangramBus;
@property(retain, nonatomic) NSArray *layoutArray; // @synthesize layoutArray=_layoutArray;
@property(retain, nonatomic) NSMutableArray *modelViewArray; // @synthesize modelViewArray=_modelViewArray;
@property(retain, nonatomic) NSMutableArray *layoutModelArray; // @synthesize layoutModelArray=_layoutModelArray;
@property(retain, nonatomic) NSDictionary *dynamicRender; // @synthesize dynamicRender=_dynamicRender;
@property(retain, nonatomic) TangramView *tangramView; // @synthesize tangramView=_tangramView;
@property(retain, nonatomic) NSDictionary *dynamicRenderDic; // @synthesize dynamicRenderDic=_dynamicRenderDic;
- (void).cxx_destruct;
- (void)needJournalForDidLoadPageView;
- (void)needJournalForWillPageView;
- (void)needJournalForPageView;
- (void)journal_adv_click:(id)arg1 code:(id)arg2;
- (void)journal_box:(id)arg1;
- (void)journal_Advertisement:(id)arg1 code:(id)arg2;
- (void)journal_refuel;
- (void)journal_Buytruck;
- (void)journal_loan;
- (void)journal_Etc;
- (void)journal_TapHeadlines;
- (id)ymm_pageName;
- (long long)ymm_navBarTheme;
- (id)itemInTangramView:(id)arg1 withModel:(id)arg2 forLayout:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)itemModelInTangramView:(id)arg1 forLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)numberOfItemsInTangramView:(id)arg1 forLayout:(id)arg2;
- (id)layoutInTangramView:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfLayoutsInTangramView:(id)arg1;
- (void)pushSchemeForUrl:(id)arg1 Params:(id)arg2;
- (void)movePageEvent:(id)arg1;
- (void)responseToClickEvent:(id)arg1;
- (void)loadMockContent;
- (void)reloadData;
- (void)initData;
- (void)requestCloudRenderTask;
- (void)didReceiveMemoryWarning;
- (void)refreshCardView;
- (void)updateCollectionViewWithNav;
- (void)updateCollectionViewWithNoNav;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)registerNotification;
- (void)initUI;
- (void)registerTangramElement;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

