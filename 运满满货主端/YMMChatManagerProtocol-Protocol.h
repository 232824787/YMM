//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMIMClientProtocol.h"

@class NSString;

@protocol YMMChatManagerProtocol <YMMIMClientProtocol>
- (void)removeMsgReceiveProtocol:(id <YMMMsgReceiveProtocol>)arg1;
- (void)addMsgReceiveProtocol:(id <YMMMsgReceiveProtocol>)arg1;
- (void)updateConversationUnReadCountZero:(NSString *)arg1;
@end

