//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface YMMSocketConfig : NSObject
{
    NSString *_host;
    long long _port;
    NSString *_client_info;
    NSString *_uid;
    NSNumber *_cityId;
    long long _conversation_type;
    NSString *_authorization;
    NSString *_client_ip;
}

@property(retain, nonatomic) NSString *client_ip; // @synthesize client_ip=_client_ip;
@property(copy, nonatomic) NSString *authorization; // @synthesize authorization=_authorization;
@property(nonatomic) long long conversation_type; // @synthesize conversation_type=_conversation_type;
@property(retain, nonatomic) NSNumber *cityId; // @synthesize cityId=_cityId;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *client_info; // @synthesize client_info=_client_info;
@property(nonatomic) long long port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (id)init;

@end

