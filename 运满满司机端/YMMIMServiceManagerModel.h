//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EaseMessageModel, NSDate;

@interface YMMIMServiceManagerModel : NSObject
{
    _Bool _beInChatting;
    EaseMessageModel *_cmdMessage;
    EaseMessageModel *_timeOutMessage;
    NSDate *_timeOutDate;
}

@property(nonatomic) _Bool beInChatting; // @synthesize beInChatting=_beInChatting;
@property(retain, nonatomic) NSDate *timeOutDate; // @synthesize timeOutDate=_timeOutDate;
@property(retain, nonatomic) EaseMessageModel *timeOutMessage; // @synthesize timeOutMessage=_timeOutMessage;
@property(retain, nonatomic) EaseMessageModel *cmdMessage; // @synthesize cmdMessage=_cmdMessage;
- (void).cxx_destruct;

@end

