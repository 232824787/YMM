//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "BargainChatProtocol.h"
#import "MBDataObserver.h"

@class EaseUserModel, MBJson, NSMutableDictionary, NSString, UIBarButtonItem, UILabel, UITableView, UIView, YMMBargainChatBottomVoiceView, YMMBargainChatDetailDirector, YMMBargainChatHeaderCargoInfoView, YMMBargainChatPriceConfirmView, YMMBargainHomePageModel, YMMIMNetworkStatusView;

@interface YMMBargainChatDetailViewController : YMMBaseViewController <MBDataObserver, BargainChatProtocol>
{
    _Bool _keyboardState;
    _Bool _limitedDlgState;
    _Bool _terminateDlgState;
    _Bool _isPlayingAudio;
    _Bool _isUserOnline;
    _Bool _isNeedRefreshList;
    UITableView *_chatListView;
    YMMBargainChatDetailDirector *_director;
    EaseUserModel *_destUser;
    EaseUserModel *_currentUser;
    double _messageTimeIntervalTag;
    UILabel *_recordVoiceErrorLable;
    YMMIMNetworkStatusView *_networkView;
    NSMutableDictionary *_serviceModelDict;
    UIBarButtonItem *_terminateBargainItem;
    MBJson *_dataJson;
    YMMBargainHomePageModel *_pageModel;
    long long _totalUnreadMsgCount;
    YMMBargainChatHeaderCargoInfoView *_cargoHeaderView;
    double _cargoHeaderHeight;
    YMMBargainChatBottomVoiceView *_bottomVoiceView;
    double _bottomVoiceHeight;
    YMMBargainChatPriceConfirmView *_priceConfirmView;
    UIView *_unreadMsgNoticeView;
    UILabel *_unreadMsgCountLabel;
}

@property(retain, nonatomic) UILabel *unreadMsgCountLabel; // @synthesize unreadMsgCountLabel=_unreadMsgCountLabel;
@property(retain, nonatomic) UIView *unreadMsgNoticeView; // @synthesize unreadMsgNoticeView=_unreadMsgNoticeView;
@property(retain, nonatomic) YMMBargainChatPriceConfirmView *priceConfirmView; // @synthesize priceConfirmView=_priceConfirmView;
@property(nonatomic) double bottomVoiceHeight; // @synthesize bottomVoiceHeight=_bottomVoiceHeight;
@property(retain, nonatomic) YMMBargainChatBottomVoiceView *bottomVoiceView; // @synthesize bottomVoiceView=_bottomVoiceView;
@property(nonatomic) double cargoHeaderHeight; // @synthesize cargoHeaderHeight=_cargoHeaderHeight;
@property(retain, nonatomic) YMMBargainChatHeaderCargoInfoView *cargoHeaderView; // @synthesize cargoHeaderView=_cargoHeaderView;
@property(nonatomic) long long totalUnreadMsgCount; // @synthesize totalUnreadMsgCount=_totalUnreadMsgCount;
@property(nonatomic) _Bool isNeedRefreshList; // @synthesize isNeedRefreshList=_isNeedRefreshList;
@property(retain, nonatomic) YMMBargainHomePageModel *pageModel; // @synthesize pageModel=_pageModel;
@property(retain, nonatomic) MBJson *dataJson; // @synthesize dataJson=_dataJson;
@property(retain, nonatomic) UIBarButtonItem *terminateBargainItem; // @synthesize terminateBargainItem=_terminateBargainItem;
@property(retain, nonatomic) NSMutableDictionary *serviceModelDict; // @synthesize serviceModelDict=_serviceModelDict;
@property(retain, nonatomic) YMMIMNetworkStatusView *networkView; // @synthesize networkView=_networkView;
@property(nonatomic) _Bool isUserOnline; // @synthesize isUserOnline=_isUserOnline;
@property(retain, nonatomic) UILabel *recordVoiceErrorLable; // @synthesize recordVoiceErrorLable=_recordVoiceErrorLable;
@property(nonatomic) double messageTimeIntervalTag; // @synthesize messageTimeIntervalTag=_messageTimeIntervalTag;
@property(nonatomic) _Bool isPlayingAudio; // @synthesize isPlayingAudio=_isPlayingAudio;
@property(retain, nonatomic) EaseUserModel *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) EaseUserModel *destUser; // @synthesize destUser=_destUser;
@property(retain, nonatomic) YMMBargainChatDetailDirector *director; // @synthesize director=_director;
@property(retain, nonatomic) UITableView *chatListView; // @synthesize chatListView=_chatListView;
- (void).cxx_destruct;
- (id)ymm_pageName;
- (void)terminateBargainAction;
- (void)ymm_networkChangeNotification:(id)arg1;
- (void)updateContentLayout;
- (void)updateContentWithData:(id)arg1;
- (void)requestFailedForTask:(id)arg1 withError:(id)arg2;
- (void)requestSuccessForTask:(id)arg1;
- (void)requestUnreadMessageCount;
- (void)chatDidReceiveCMDMessage:(id)arg1;
- (void)onBargainMessagesReceived:(id)arg1;
- (void)unreadMessageCountUpdate:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)_chatLoginFinshed:(id)arg1;
- (void)unreadMsgNoticeViewClickAction;
- (void)showUnreadMsgNoticeView:(long long)arg1;
- (void)getMicrophoneAuth:(CDUnknownBlockType)arg1;
- (_Bool)isShipperUser;
- (void)getHomePageData;
- (void)showNetworkTipView;
- (void)setupContentView;
- (void)setupNavigationBar;
@property(readonly, copy, nonatomic) NSString *bargainCargoId;
@property(readonly, copy, nonatomic) NSString *bargainDestUserId;
- (id)currentCargoId;
- (void)showGuide;
- (void)updateContentViewNeedRefreshList:(_Bool)arg1;
- (void)ymm_doBack;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initControllerWithChatter:(id)arg1 currentUser:(id)arg2 cargoId:(id)arg3 chatManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

