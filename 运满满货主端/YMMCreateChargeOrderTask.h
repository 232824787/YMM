//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSDecimalNumber;

@interface YMMCreateChargeOrderTask : YMMCommonNetworkTask
{
    NSDecimalNumber *_totalAmt;
    long long _bizType;
}

@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSDecimalNumber *totalAmt; // @synthesize totalAmt=_totalAmt;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

