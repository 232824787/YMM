//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSNumber, NSString;

@interface YMMMakeOrderCallTask : YMMCommonNetworkTask
{
    NSNumber *_orderId;
    NSString *_callerRealTel;
}

@property(retain, nonatomic) NSString *callerRealTel; // @synthesize callerRealTel=_callerRealTel;
@property(copy, nonatomic) NSNumber *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

