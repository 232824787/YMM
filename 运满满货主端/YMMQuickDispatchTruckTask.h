//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSArray, NSString;

@interface YMMQuickDispatchTruckTask : YMMCommonNetworkTask
{
    NSString *_cargoId;
    NSArray *_scheduledNotifyDrivers;
    long long _sendType;
}

@property(nonatomic) long long sendType; // @synthesize sendType=_sendType;
@property(copy, nonatomic) NSArray *scheduledNotifyDrivers; // @synthesize scheduledNotifyDrivers=_scheduledNotifyDrivers;
@property(copy, nonatomic) NSString *cargoId; // @synthesize cargoId=_cargoId;
- (void).cxx_destruct;
- (id)ymm_networkAPIPath;

@end

