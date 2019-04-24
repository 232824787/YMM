//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YMMIMServiceProtocol.h"

@class NSString;

@interface YMMIMService : NSObject <YMMIMServiceProtocol>
{
}

+ (_Bool)singleton;
- (void)routeLoginVC;
- (_Bool)isAllowAccessedPermissionIntoIMWithEntranceType:(unsigned long long)arg1;
- (void)refreshUnReadNotificationAndActivityMessage;
- (unsigned long long)getIMNPCUnreadMessageCount;
- (unsigned long long)getIMNotificationUnreadMessageCount;
- (unsigned long long)getIMActivityUnreadMessageCount;
- (unsigned long long)getIMChatUnreadMessageCount;
- (void)sendChangeAvoidDisturbingRequest:(id)arg1 andResponse:(CDUnknownBlockType)arg2;
- (void)sendMassMessageRequest:(id)arg1 andResponse:(CDUnknownBlockType)arg2;
- (void)getUserGroupMsgOverLimitRequest:(id)arg1 andResponse:(CDUnknownBlockType)arg2;
- (void)getAllUnreadMessageCountRequest:(id)arg1 andResponse:(CDUnknownBlockType)arg2;
- (void)sendIMLeaveMessageRequest:(id)arg1 andResponse:(CDUnknownBlockType)arg2;
- (void)sendCallShipperIMMessageRequest:(id)arg1 andResponse:(CDUnknownBlockType)arg2;
- (void)getOtherIMUserInfoRequest:(id)arg1 andResponse:(CDUnknownBlockType)arg2;
- (void)addSelfSeedUserRequest:(id)arg1 andResponse:(CDUnknownBlockType)arg2;
- (void)getOtherIMUserInfoAndLeaveMsgWithRequest:(id)arg1 andResponse:(CDUnknownBlockType)arg2;
- (void)sendIMRequest:(id)arg1 andResponse:(CDUnknownBlockType)arg2;
- (long long)getAvoidDisturbingStatus;
- (_Bool)isPlayingNotificationAlert;
- (_Bool)haveIMRight;
- (void)getUnreadMessageCountGroupByGoodsIdCallBack:(CDUnknownBlockType)arg1;
- (long long)getUnreadMessageCountByYmmUserId:(id)arg1 hxId:(id)arg2;
- (long long)getUnreadMessageCountByChatterId:(id)arg1;
- (void)enterMessageListFromController:(id)arg1 withStyle:(long long)arg2 withExtendInfo:(id)arg3;
- (void)enterIMChatControllerWithDestUserId:(id)arg1 entranceType:(long long)arg2 fromController:(id)arg3 withStyle:(long long)arg4 withExt:(id)arg5;
- (void)logoutChatAccount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

