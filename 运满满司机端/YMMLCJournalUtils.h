//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YMMLCJournalUtils : NSObject
{
    id <YMMLCJournalDelegate> _delegate;
}

+ (void)sentAckTime:(id)arg1;
+ (void)toSendAckTime:(id)arg1;
+ (void)received_msgid:(id)arg1;
+ (void)sendAck_exception:(id)arg1 msgid:(id)arg2 pushType:(long long)arg3;
+ (void)send_exception:(long long)arg1 message:(id)arg2 client_ip:(id)arg3;
+ (void)heartbeat_exception:(long long)arg1 client_ip:(id)arg2;
+ (void)conn_time_cost:(long long)arg1 host:(id)arg2 port:(long long)arg3 client_ip:(id)arg4;
+ (void)decipher:(long long)arg1 message:(id)arg2 origin_str:(id)arg3 iv:(id)arg4 key:(id)arg5 client_ip:(id)arg6;
+ (void)encrypt:(long long)arg1 message:(id)arg2 origin_str:(id)arg3 key:(id)arg4 iv:(id)arg5 client_ip:(id)arg6;
+ (void)reconnect:(id)arg1 timestamp:(long long)arg2 retryCount:(long long)arg3 client_ip:(id)arg4;
+ (void)connection:(id)arg1 port:(long long)arg2 timestamp:(long long)arg3 code:(long long)arg4 message:(id)arg5 client_ip:(id)arg6;
@property(nonatomic) __weak id <YMMLCJournalDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

@end

