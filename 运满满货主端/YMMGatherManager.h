//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YMMGatherCapacity, YMMGatherConfig, YMMGatherUploadManager;

@interface YMMGatherManager : NSObject
{
    _Bool _isVisualing;
    YMMGatherConfig *_config;
    long long _seq;
    long long _clickEventCount;
    YMMGatherCapacity *_capacity;
    YMMGatherUploadManager *_uploadManager;
    long long _retryAcquireConfigCount;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)defaultManager;
@property(nonatomic) long long retryAcquireConfigCount; // @synthesize retryAcquireConfigCount=_retryAcquireConfigCount;
@property(retain, nonatomic) YMMGatherUploadManager *uploadManager; // @synthesize uploadManager=_uploadManager;
@property(retain, nonatomic) YMMGatherCapacity *capacity; // @synthesize capacity=_capacity;
@property(nonatomic) long long clickEventCount; // @synthesize clickEventCount=_clickEventCount;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(nonatomic) _Bool isVisualing; // @synthesize isVisualing=_isVisualing;
@property(retain, nonatomic) YMMGatherConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)mutablecopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)removeLifecycleNotification;
- (void)addAppLifecycleNotification;
- (void)appWillEnterForeground:(id)arg1;
- (void)updateHubbleSeqId;
- (void)addBlacklistURLPaths:(id)arg1;
- (void)addWhitelistDomains:(id)arg1;
- (void)setGatherMode:(long long)arg1;
- (_Bool)enableOpenVisualMode;
- (_Bool)enableHubbleGather;
- (_Bool)enableAutoGather;
- (_Bool)enableGather;
- (void)addHubbleEventLog:(id)arg1;
- (void)addGatherEventLog:(id)arg1;
- (void)addEventLog:(id)arg1;
- (void)updateLongitude:(id)arg1 latitude:(id)arg2 andLocalCityId:(id)arg3;
- (void)setUserIdentifier:(id)arg1;
- (void)retryAcquireConfig;
- (void)accquireGatherSystemConfig;
- (void)configWithAppType:(long long)arg1 marketId:(id)arg2;

@end

