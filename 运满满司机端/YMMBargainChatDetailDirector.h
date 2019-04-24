//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBTableViewDirector.h"

#import "BargainChatProtocol.h"
#import "MBTableViewDirectorProtocal.h"
#import "YMMBargainMsgReceiveProtocol.h"

@class EaseUserModel, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, YMMBargainChatDetailViewController, YMMBargainChatManager;

@interface YMMBargainChatDetailDirector : MBTableViewDirector <MBTableViewDirectorProtocal, BargainChatProtocol, YMMBargainMsgReceiveProtocol>
{
    _Bool _isViewDidAppear;
    _Bool _haveSendReadLeave;
    _Bool _judgeMessageRepeat;
    _Bool _isCommonProblemsNeedAdd;
    int _messageCountOfPage;
    YMMBargainChatManager *_chatManager;
    NSString *_cargoId;
    NSMutableArray *_dataArray;
    NSString *_conversationId;
    NSDictionary *_commonProblemJson;
    double _messageTimeIntervalTag;
    NSMutableArray *_messagesSource;
    NSObject<OS_dispatch_queue> *_messageQueue;
    id <IMessageModel> _playingVoiceModel;
    EaseUserModel *_destUser;
    EaseUserModel *_currentUser;
    YMMBargainChatDetailViewController *_chatVC;
}

@property(nonatomic) __weak YMMBargainChatDetailViewController *chatVC; // @synthesize chatVC=_chatVC;
@property(nonatomic) _Bool isCommonProblemsNeedAdd; // @synthesize isCommonProblemsNeedAdd=_isCommonProblemsNeedAdd;
@property(retain, nonatomic) EaseUserModel *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) EaseUserModel *destUser; // @synthesize destUser=_destUser;
@property(retain, nonatomic) id <IMessageModel> playingVoiceModel; // @synthesize playingVoiceModel=_playingVoiceModel;
@property(nonatomic) int messageCountOfPage; // @synthesize messageCountOfPage=_messageCountOfPage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(retain, nonatomic) NSMutableArray *messagesSource; // @synthesize messagesSource=_messagesSource;
@property(nonatomic) _Bool judgeMessageRepeat; // @synthesize judgeMessageRepeat=_judgeMessageRepeat;
@property(nonatomic) _Bool haveSendReadLeave; // @synthesize haveSendReadLeave=_haveSendReadLeave;
@property(nonatomic) double messageTimeIntervalTag; // @synthesize messageTimeIntervalTag=_messageTimeIntervalTag;
@property(copy, nonatomic) NSDictionary *commonProblemJson; // @synthesize commonProblemJson=_commonProblemJson;
@property(nonatomic) _Bool isViewDidAppear; // @synthesize isViewDidAppear=_isViewDidAppear;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) NSString *cargoId; // @synthesize cargoId=_cargoId;
@property(retain, nonatomic) YMMBargainChatManager *chatManager; // @synthesize chatManager=_chatManager;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didMessageStatusChanged:(id)arg1 error:(id)arg2;
- (void)didReceiveHasDeliveredAcks:(id)arg1;
- (void)didReceiveMessages:(id)arg1;
- (void)didReceiveHasReadAcks:(id)arg1;
- (void)didReceiveResendMessageResponse:(id)arg1 andError:(id)arg2;
- (void)didReceiveSendMessageResponse:(id)arg1 andError:(id)arg2;
- (id)buildPublicData;
- (_Bool)shouldSendHasReadAckForMessage:(id)arg1 read:(_Bool)arg2;
- (void)sendHasReadResponseForMessages:(id)arg1 isRead:(_Bool)arg2;
- (id)getLowestMessage;
- (id)getUpestMessage;
- (void)_loadMessagesBefore:(id)arg1 andTime:(long long)arg2 count:(int)arg3 append:(_Bool)arg4;
- (void)removeMessageById:(id)arg1;
- (void)_updateMessageStatus:(id)arg1;
- (id)formatMessages:(id)arg1;
- (void)addMessageToDataSource:(id)arg1 ShowTimeTip:(_Bool)arg2;
- (void)addMessageToDataSource:(id)arg1 progress:(id)arg2;
- (void)updateReadMessage;
- (void)scrollToListBottom;
- (void)onLoadMoreMessages;
- (void)audioMessageClicked:(id)arg1;
- (void)onResentButtonClicked:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)sendVoiceMessageWithLocalPath:(id)arg1 voiceContent:(id)arg2 duration:(long long)arg3;
- (void)refreshView;
- (void)setInnerScrollView:(id)arg1;
- (void)tableViewDidTriggerHeaderRefresh;
- (void)attachChatVC:(id)arg1 destUser:(id)arg2 currentUser:(id)arg3 cargoId:(id)arg4;
- (id)getCellTypeForJson:(id)arg1 indexPath:(id)arg2 forDirector:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

