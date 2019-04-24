//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString;

@interface HCBAdCache : NSObject
{
    _Bool _isReset;
    NSMutableDictionary *_adCatchDic;
    NSArray *_catchAdData;
    NSArray *_groupAdData;
    long long _expiredTime;
    NSString *_adTypeStr;
    NSMutableDictionary *_isResetDic;
}

+ (id)sharedAdCacheManager;
@property(retain, nonatomic) NSMutableDictionary *isResetDic; // @synthesize isResetDic=_isResetDic;
@property(copy, nonatomic) NSString *adTypeStr; // @synthesize adTypeStr=_adTypeStr;
@property(nonatomic) _Bool isReset; // @synthesize isReset=_isReset;
@property(nonatomic) long long expiredTime; // @synthesize expiredTime=_expiredTime;
@property(copy, nonatomic) NSArray *groupAdData; // @synthesize groupAdData=_groupAdData;
@property(copy, nonatomic) NSArray *catchAdData; // @synthesize catchAdData=_catchAdData;
@property(retain, nonatomic) NSMutableDictionary *adCatchDic; // @synthesize adCatchDic=_adCatchDic;
- (void).cxx_destruct;
- (unsigned long long)getAllAdCacheSize;
- (void)removeAdDataWithAdType:(id)arg1;
- (void)clearAllAdCatch;
- (double)timeIntervalWithTypeStr:(id)arg1;
- (double)getExpiredShowTime;
- (double)getExpiredTime;
- (id)catchTimeWithTypeStr:(id)arg1;
- (id)stringFromDate;
- (void)catchDataWith:(id)arg1 adType:(id)arg2;
- (void)catchDataWithAdType:(id)arg1 expiredTime:(long long)arg2 adVert:(id)arg3 ats:(id)arg4;
- (id)dataWithAdType:(id)arg1;
- (_Bool)isMoreThanShowTimeWithType:(id)arg1;
- (_Bool)isExpireWithType:(id)arg1;
- (_Bool)isHaveLocalDataWithType:(id)arg1;
- (_Bool)isHaveMemoryDataWithType:(id)arg1;
- (_Bool)isHaveDataWithType:(id)arg1;
- (_Bool)isHaveDataWithTypeArray:(id)arg1;
- (_Bool)isResetWithType:(id)arg1;
- (void)adIsLoad:(_Bool)arg1 withType:(id)arg2;
- (void)handleMemoryWarning;
- (void)dealloc;
- (id)init;

@end

