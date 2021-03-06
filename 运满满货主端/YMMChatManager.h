//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YMMChatManagerProtocol.h"
#import "YMMIMSinkProtocol.h"

@class NSArray, NSLock, NSMutableArray, NSNumber, NSString, YMMFlyChatClient;

@interface YMMChatManager : NSObject <YMMIMSinkProtocol, YMMChatManagerProtocol>
{
    _Bool _loginYmmSuccess;
    long long _clientType;
    NSNumber *_ymmUserId;
    NSNumber *_destYmmUserId;
    NSString *_destImUserId;
    YMMFlyChatClient *_ymmClient;
    NSArray *_reminders;
    NSMutableArray *_sinkProtocolArray;
    NSLock *_sinkLock;
}

+ (id)shareManager;
@property(retain, nonatomic) NSLock *sinkLock; // @synthesize sinkLock=_sinkLock;
@property(retain, nonatomic) NSMutableArray *sinkProtocolArray; // @synthesize sinkProtocolArray=_sinkProtocolArray;
@property(nonatomic) _Bool loginYmmSuccess; // @synthesize loginYmmSuccess=_loginYmmSuccess;
@property(retain, nonatomic) NSArray *reminders; // @synthesize reminders=_reminders;
@property(retain, nonatomic) YMMFlyChatClient *ymmClient; // @synthesize ymmClient=_ymmClient;
@property(copy, nonatomic) NSString *destImUserId; // @synthesize destImUserId=_destImUserId;
@property(retain, nonatomic) NSNumber *destYmmUserId; // @synthesize destYmmUserId=_destYmmUserId;
@property(retain, nonatomic) NSNumber *ymmUserId; // @synthesize ymmUserId=_ymmUserId;
@property(nonatomic) long long clientType; // @synthesize clientType=_clientType;
- (void).cxx_destruct;
- (id)currentChatClient;
- (void)userLoginLongConnectDismiss;
- (void)userLoginLongConnectSuccess;
- (void)userAccountDidLoginFromOtherDevice;
- (void)didMessageAttachmentsStatusChanged:(id)arg1 error:(id)arg2;
- (void)didMessageStatusChanged:(id)arg1 error:(id)arg2;
- (void)didReceiveHasReadAcks:(id)arg1;
- (void)didReceiveHasDeliveredAcks:(id)arg1;
- (void)handleConversationsWithCmdMsg:(id)arg1;
- (void)didReceiveCmdMessages:(id)arg1;
- (void)updateRecvConversation:(id)arg1;
- (void)didReceiveMessages:(id)arg1;
- (id)getAllMsgReceiveProtocols;
- (id)handleReminderWithMessageText:(id)arg1;
- (void)sendKeywordsAlertForMessage:(id)arg1;
- (void)messageSendResult:(id)arg1 andError:(id)arg2 andBeResend:(_Bool)arg3 result:(id)arg4;
- (void)removeMsgReceiveProtocol:(id)arg1;
- (void)addMsgReceiveProtocol:(id)arg1;
- (void)downloadMessageAttachment:(id)arg1 responseId:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)downloadMessageThumbnail:(id)arg1 responseId:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateSendConversation:(id)arg1;
- (void)resendMessage:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadMessagesStartFromId:(id)arg1 withConversation:(id)arg2 count:(int)arg3 withTime:(long long)arg4 searchDirection:(int)arg5 completion:(CDUnknownBlockType)arg6;
- (void)sendBatchMessageReadAck:(id)arg1;
- (void)sendMessageReadAck:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)importMessagesToDB:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getBlackListFromServer:(CDUnknownBlockType)arg1;
- (void)operateBlackList:(id)arg1 status:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)markAllMessagesAsReadWithConversation:(id)arg1 error:(CDUnknownBlockType)arg2;
- (void)markMessageAsReadWithId:(id)arg1 forConversation:(id)arg2 error:(CDUnknownBlockType)arg3;
- (long long)getUnreadMessageCountByConversation:(id)arg1;
- (id)getAllConversations;
- (void)deleteMessageWithId:(id)arg1 forConversation:(id)arg2 error:(CDUnknownBlockType)arg3;
- (void)deleteMessagesByConversation:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)removeAllConversationAndMessages:(CDUnknownBlockType)arg1;
- (void)removeConversation:(id)arg1 isDeleteMessages:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (id)getConversationById:(id)arg1 andType:(int)arg2;
- (void)updateConversationUnReadCountZero:(id)arg1;
- (void)clearChatDestUserInfo;
- (_Bool)isImLoggedinSuccess;
- (void)logoutChatAccount;
- (void)loginChatWithYmmImUser:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool isLoginChatServerSuccess;
- (id)startChatSDK;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

