//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseReq.h"

@class NSString;

@interface JoinChatRoomReq : BaseReq
{
    NSString *groupId;
    NSString *chatRoomNickName;
    NSString *extMsg;
}

@property(retain, nonatomic) NSString *extMsg; // @synthesize extMsg;
@property(retain, nonatomic) NSString *chatRoomNickName; // @synthesize chatRoomNickName;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId;
- (void)dealloc;

@end

