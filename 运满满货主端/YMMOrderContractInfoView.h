//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YMMBaseAlertViewDelegate.h"

@class Journal, NSString, SHOrderDetailViewModel, UIButton, YMMOrderContractInfoViewModel, YMMOrderManager;

@interface YMMOrderContractInfoView : UIView <YMMBaseAlertViewDelegate>
{
    id <YMMOrderContractInfoViewDelegate> _delegate;
    YMMOrderContractInfoViewModel *_itemViewModel;
    UIButton *_imButton;
    UIButton *_telephoneButton;
    UIView *_bottomView;
    YMMOrderManager *_orderManager;
    SHOrderDetailViewModel *_journalManager;
    UIButton *_unreadMsgButton;
    Journal *_journalObj;
}

@property(retain, nonatomic) Journal *journalObj; // @synthesize journalObj=_journalObj;
@property(retain, nonatomic) UIButton *unreadMsgButton; // @synthesize unreadMsgButton=_unreadMsgButton;
@property(retain, nonatomic) SHOrderDetailViewModel *journalManager; // @synthesize journalManager=_journalManager;
@property(retain, nonatomic) YMMOrderManager *orderManager; // @synthesize orderManager=_orderManager;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIButton *telephoneButton; // @synthesize telephoneButton=_telephoneButton;
@property(retain, nonatomic) UIButton *imButton; // @synthesize imButton=_imButton;
@property(retain, nonatomic) YMMOrderContractInfoViewModel *itemViewModel; // @synthesize itemViewModel=_itemViewModel;
@property(nonatomic) __weak id <YMMOrderContractInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ymm_alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)returnElementIdByRoleType;
- (void)makeTelephone;
- (void)telephoneClick;
- (void)imClick;
- (void)buttonTitleBottom:(id)arg1;
- (void)loadContractInfoViewData:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

