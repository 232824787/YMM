//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSNumber, NSString;

@interface YMMIMSessionModel : YMMCommonModel
{
    NSString *_fromUid;
    NSString *_toUid;
    NSNumber *_lastId;
    NSNumber *_chatType;
    NSString *_msgType;
    NSString *_content;
    NSNumber *_cargoId;
    NSNumber *_unReadCount;
    NSString *_fromCity;
    NSString *_toCity;
    NSString *_cargoMessage;
    NSNumber *_lastMessageSendTimestamp;
    NSNumber *_chatMessageStatus;
    NSNumber *_imUserName;
    NSString *_avatar;
    NSString *_userName;
    NSString *_userTelephone;
    NSNumber *_conversationType;
}

@property(retain, nonatomic) NSNumber *conversationType; // @synthesize conversationType=_conversationType;
@property(copy, nonatomic) NSString *userTelephone; // @synthesize userTelephone=_userTelephone;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSNumber *imUserName; // @synthesize imUserName=_imUserName;
@property(retain, nonatomic) NSNumber *chatMessageStatus; // @synthesize chatMessageStatus=_chatMessageStatus;
@property(retain, nonatomic) NSNumber *lastMessageSendTimestamp; // @synthesize lastMessageSendTimestamp=_lastMessageSendTimestamp;
@property(copy, nonatomic) NSString *cargoMessage; // @synthesize cargoMessage=_cargoMessage;
@property(copy, nonatomic) NSString *toCity; // @synthesize toCity=_toCity;
@property(copy, nonatomic) NSString *fromCity; // @synthesize fromCity=_fromCity;
@property(retain, nonatomic) NSNumber *unReadCount; // @synthesize unReadCount=_unReadCount;
@property(retain, nonatomic) NSNumber *cargoId; // @synthesize cargoId=_cargoId;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSNumber *chatType; // @synthesize chatType=_chatType;
@property(retain, nonatomic) NSNumber *lastId; // @synthesize lastId=_lastId;
@property(copy, nonatomic) NSString *toUid; // @synthesize toUid=_toUid;
@property(copy, nonatomic) NSString *fromUid; // @synthesize fromUid=_fromUid;
- (void).cxx_destruct;
- (id)convertToConversation;

@end

