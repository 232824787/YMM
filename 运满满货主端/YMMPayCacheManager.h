//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, YMMPayOrderInfoModel;

@interface YMMPayCacheManager : NSObject
{
    long long payChannelType;
    long long payChannelId;
    NSArray *_cacheChannelListArr;
    YMMPayOrderInfoModel *_orderInfo;
}

+ (id)shared;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) YMMPayOrderInfoModel *orderInfo; // @synthesize orderInfo=_orderInfo;
- (void).cxx_destruct;
- (id)payMentCacheChList;
@property(retain, nonatomic) NSMutableArray *cacheChannelListArr;
- (void)payMentUpDateCacheChList:(id)arg1;
- (id)fetchChannelValueSuccessWithDic:(id)arg1;
- (void)payChannelListInit:(CDUnknownBlockType)arg1;

@end

