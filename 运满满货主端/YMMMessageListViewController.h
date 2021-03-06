//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMIMBaseVC.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, UITableView, YMMConversation;

@interface YMMMessageListViewController : YMMIMBaseVC <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _bLocalIMPush;
    unsigned long long _listType;
    NSDictionary *_imDict;
    UITableView *_tableView;
    NSMutableArray *_dataSource;
    NSArray *_transitArray;
    YMMConversation *_currentModel;
}

@property(retain, nonatomic) YMMConversation *currentModel; // @synthesize currentModel=_currentModel;
@property(retain, nonatomic) NSArray *transitArray; // @synthesize transitArray=_transitArray;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSDictionary *imDict; // @synthesize imDict=_imDict;
@property(nonatomic) _Bool bLocalIMPush; // @synthesize bLocalIMPush=_bLocalIMPush;
@property(nonatomic) unsigned long long listType; // @synthesize listType=_listType;
- (void).cxx_destruct;
- (void)addJournalForVoiceTap;
- (void)clickJournalConversation;
- (void)viewJournalPageWithListType:(unsigned long long)arg1;
- (id)ymm_pageName;
- (void)receiveUpdateDataAndReloadUIWithNotification:(id)arg1;
- (void)gotoForumViewController;
- (void)gotoIMChatViewController;
- (void)talkAction:(id)arg1 toImuserId:(id)arg2 toYMMUserId:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateConversationFavrate;
- (id)createEaseUserModelWithConversationModel:(id)arg1;
- (void)deleteSessionAtIndexPath:(id)arg1;
- (void)updateSessionsDataSourceAndReloadUI;
- (void)sendVoiceResult:(id)arg1;
- (void)showVoiceChatView:(id)arg1 toImuserId:(id)arg2 toYMMUserId:(id)arg3;
- (void)asynReloadTableViewWithData:(id)arg1;
- (void)addAllSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

