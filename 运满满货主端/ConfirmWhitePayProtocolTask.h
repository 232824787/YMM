//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSNumber;

@interface ConfirmWhitePayProtocolTask : YMMCommonNetworkTask
{
    NSNumber *_orderId;
    NSNumber *_itemId;
    NSNumber *_payTimeType;
    NSNumber *_confirmWhitePay;
}

@property(retain, nonatomic) NSNumber *confirmWhitePay; // @synthesize confirmWhitePay=_confirmWhitePay;
@property(retain, nonatomic) NSNumber *payTimeType; // @synthesize payTimeType=_payTimeType;
@property(retain, nonatomic) NSNumber *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSNumber *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

