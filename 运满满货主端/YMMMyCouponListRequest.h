//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSNumber;

@interface YMMMyCouponListRequest : YMMCommonNetworkTask
{
    long long _couponStatus;
    NSNumber *_before;
    NSNumber *_after;
    unsigned long long _count;
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *after; // @synthesize after=_after;
@property(retain, nonatomic) NSNumber *before; // @synthesize before=_before;
@property(nonatomic) long long couponStatus; // @synthesize couponStatus=_couponStatus;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

