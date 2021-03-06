//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCompanyInfoBaseViewController.h"

#import "YMMAuditControllerProtocol.h"

@class NSString, UIBarButtonItem, UIButton, YMMUserAuditPresenter;

@interface YMMAuditShipperCompleteViewController : YMMCompanyInfoBaseViewController <YMMAuditControllerProtocol>
{
    UIButton *_submitButton;
    UIBarButtonItem *_helpItem;
    YMMUserAuditPresenter *_presenter;
}

@property(retain, nonatomic) YMMUserAuditPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) UIBarButtonItem *helpItem; // @synthesize helpItem=_helpItem;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
- (void).cxx_destruct;
- (void)journalForCommitAuthInfo:(id)arg1;
- (void)clickedBtnJournal:(id)arg1;
- (void)journalForPageView;
- (id)ymm_referPageName;
- (void)reloadCustomerServiceTitle:(id)arg1;
- (void)commitAuthInfoFailure:(id)arg1;
- (void)reloadSection:(long long)arg1 row:(long long)arg2;
- (void)reloadView;
- (void)pushToNextViewController;
- (void)stopLoading;
- (void)startLoading;
- (void)jumpAction;
- (void)openVCByScheme:(id)arg1;
- (void)openWeb:(id)arg1;
- (void)updateConstraints;
- (void)commitSuccess;
- (void)autoAuthSuccess;
- (void)ymm_doBack;
- (void)clickedSubmitBtn:(id)arg1;
- (void)contact:(id)arg1;
- (void)dissmissKeyboard:(id)arg1;
- (void)addGesture;
- (void)addSubViews;
- (id)basePresenter;
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

