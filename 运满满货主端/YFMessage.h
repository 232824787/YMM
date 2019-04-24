//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, YFMessageBody;

@interface YFMessage : NSObject
{
    _Bool _isReadAcked;
    _Bool _isDeliverAcked;
    _Bool _isRead;
    NSString *_messageId;
    NSString *_inseqid;
    NSString *_outseqid;
    NSString *_conversationId;
    long long _direction;
    NSString *_from;
    NSString *_to;
    long long _timestamp;
    long long _localTime;
    long long _chatType;
    long long _conversationType;
    long long _status;
    long long _valid;
    YFMessageBody *_body;
    NSDictionary *_ext;
}

@property(copy, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) YFMessageBody *body; // @synthesize body=_body;
@property(nonatomic) long long valid; // @synthesize valid=_valid;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(nonatomic) _Bool isDeliverAcked; // @synthesize isDeliverAcked=_isDeliverAcked;
@property(nonatomic) _Bool isReadAcked; // @synthesize isReadAcked=_isReadAcked;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long conversationType; // @synthesize conversationType=_conversationType;
@property(nonatomic) long long chatType; // @synthesize chatType=_chatType;
@property(nonatomic) long long localTime; // @synthesize localTime=_localTime;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *to; // @synthesize to=_to;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(copy, nonatomic) NSString *outseqid; // @synthesize outseqid=_outseqid;
@property(copy, nonatomic) NSString *inseqid; // @synthesize inseqid=_inseqid;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConversationID:(id)arg1 from:(id)arg2 to:(id)arg3 body:(id)arg4 ext:(id)arg5;

@end

