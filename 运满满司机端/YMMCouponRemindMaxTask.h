//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSArray, NSNumber;

@interface YMMCouponRemindMaxTask : YMMCommonNetworkTask
{
    NSNumber *_cargoId;
    long long _bizType;
    NSArray *_tradeSettleList;
}

@property(retain, nonatomic) NSArray *tradeSettleList; // @synthesize tradeSettleList=_tradeSettleList;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSNumber *cargoId; // @synthesize cargoId=_cargoId;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

