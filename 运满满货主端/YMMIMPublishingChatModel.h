//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSNumber, NSString;

@interface YMMIMPublishingChatModel : YMMCommonModel
{
    NSNumber *_orderId;
    NSNumber *_driverId;
    NSString *_avatarUrl;
    NSString *_nickName;
    NSString *_route;
    NSString *_lastChat;
    NSString *_tips;
    NSString *_remind;
}

@property(copy, nonatomic) NSString *remind; // @synthesize remind=_remind;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSString *lastChat; // @synthesize lastChat=_lastChat;
@property(copy, nonatomic) NSString *route; // @synthesize route=_route;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSNumber *driverId; // @synthesize driverId=_driverId;
@property(retain, nonatomic) NSNumber *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;

@end

