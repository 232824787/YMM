//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IConversationModel.h"

@class EaseMessageModel, NSDictionary, NSString, YFConversation;

@interface EaseConversationModel : NSObject <IConversationModel>
{
    NSString *_conversationId;
    YFConversation *_yconversation;
    EaseMessageModel *_latestMessage;
    long long _conversationType;
}

@property(nonatomic) long long conversationType; // @synthesize conversationType=_conversationType;
@property(readonly, nonatomic) EaseMessageModel *latestMessage; // @synthesize latestMessage=_latestMessage;
@property(readonly, nonatomic) YFConversation *yconversation; // @synthesize yconversation=_yconversation;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (id)currentConversation;
@property(retain, nonatomic) NSDictionary *ext;
- (id)initWithYFConversation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

