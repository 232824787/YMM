//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSNumber, NSString;

@interface YMMUploadReceiptTask : YMMCommonNetworkTask
{
    NSString *_pushId;
    NSString *_payload;
    NSNumber *_receiveTime;
}

@property(retain, nonatomic) NSNumber *receiveTime; // @synthesize receiveTime=_receiveTime;
@property(copy, nonatomic) NSString *payload; // @synthesize payload=_payload;
@property(copy, nonatomic) NSString *pushId; // @synthesize pushId=_pushId;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

