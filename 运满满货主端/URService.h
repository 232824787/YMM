//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSSet, NSTimer;

@interface URService : NSObject
{
    NSTimer *_timer;
    _Bool _needCompileSqlite;
    _Bool _uploadConfig;
    CDUnknownBlockType _getOnlineParamBlock;
    CDUnknownBlockType _getUserInfoBlock;
    CDUnknownBlockType _getPositionInfoBlock;
    double _reportIntervalForWifi;
    double _reportIntervalForNotWifi;
    double _reportDataMaxSizeForWifi;
    double _reportDataMaxSizeForNotWifi;
    CDUnknownBlockType _postLogBlock;
    NSDictionary *_launchingOption;
    long long _currentActivityStartTime;
    id _addLogNote;
    id _onlineParamNote;
    id _foregroundNote;
    id _backgroundNote;
    NSArray *_excludeQosUrl;
    NSSet *_eventBlackList;
    NSMutableArray *_pvModels;
}

+ (void)trackNavigationEventWithLocationTime:(id)arg1 lat:(id)arg2 lng:(id)arg3 speed:(id)arg4 bearing:(id)arg5 mileage:(id)arg6 drivingTime:(id)arg7 startTime:(id)arg8 endTime:(id)arg9 extends:(id)arg10;
+ (void)trackQosEventWithModel:(id)arg1;
+ (void)trackAdvertEventWithAdvId:(long long)arg1 eventTye:(long long)arg2;
+ (void)trackViewDidAppear:(id)arg1 fromEventID:(id)arg2;
+ (void)trackPagePVActionWithPageName:(id)arg1 from:(id)arg2 durationTime:(double)arg3 values:(id)arg4;
+ (void)trackCustomizeEventWithAppKey:(id)arg1 eid:(id)arg2 label:(id)arg3 values:(id)arg4;
+ (void)trackCustomizeEventWithEid:(id)arg1 label:(id)arg2 values:(id)arg3;
+ (void)trackWebActionWithUrl:(id)arg1 userAgent:(id)arg2 label:(id)arg3 values:(id)arg4;
+ (void)trackWebActionWithUrl:(id)arg1 userAgent:(id)arg2 durationTime:(id)arg3;
+ (void)trackPushActionWithPushId:(id)arg1 actionType:(long long)arg2;
+ (void)trackListDataExposure;
+ (void)cacheListDataExposureWithArr:(id)arg1;
+ (void)trackGoodsClickEventWithMsgId:(id)arg1 domainId:(long long)arg2 position:(unsigned long long)arg3 requestUUID:(id)arg4 type:(id)arg5 action:(long long)arg6;
+ (long long)timeIntervalSinceCurrentlaunch;
+ (void)setupWithOption:(id)arg1 appKey:(id)arg2 domainId:(long long)arg3 serverEnvType:(unsigned long long)arg4 getOnlineParamSuccessNotiKey:(id)arg5 getOnlineParamBlock:(CDUnknownBlockType)arg6 getUserInfoBlock:(CDUnknownBlockType)arg7 getPositionInfoBlock:(CDUnknownBlockType)arg8;
+ (id)shareService;
+ (_Bool)logEnable;
+ (void)setLogEnable:(_Bool)arg1;
@property(retain, nonatomic) NSMutableArray *pvModels; // @synthesize pvModels=_pvModels;
@property(retain, nonatomic) NSSet *eventBlackList; // @synthesize eventBlackList=_eventBlackList;
@property(retain, nonatomic) NSArray *excludeQosUrl; // @synthesize excludeQosUrl=_excludeQosUrl;
@property(retain, nonatomic) id backgroundNote; // @synthesize backgroundNote=_backgroundNote;
@property(retain, nonatomic) id foregroundNote; // @synthesize foregroundNote=_foregroundNote;
@property(retain, nonatomic) id onlineParamNote; // @synthesize onlineParamNote=_onlineParamNote;
@property(retain, nonatomic) id addLogNote; // @synthesize addLogNote=_addLogNote;
@property(nonatomic) long long currentActivityStartTime; // @synthesize currentActivityStartTime=_currentActivityStartTime;
@property(retain, nonatomic) NSDictionary *launchingOption; // @synthesize launchingOption=_launchingOption;
@property(nonatomic) _Bool uploadConfig; // @synthesize uploadConfig=_uploadConfig;
@property(copy, nonatomic) CDUnknownBlockType postLogBlock; // @synthesize postLogBlock=_postLogBlock;
@property(nonatomic) _Bool needCompileSqlite; // @synthesize needCompileSqlite=_needCompileSqlite;
@property(nonatomic) double reportDataMaxSizeForNotWifi; // @synthesize reportDataMaxSizeForNotWifi=_reportDataMaxSizeForNotWifi;
@property(nonatomic) double reportDataMaxSizeForWifi; // @synthesize reportDataMaxSizeForWifi=_reportDataMaxSizeForWifi;
@property(nonatomic) double reportIntervalForNotWifi; // @synthesize reportIntervalForNotWifi=_reportIntervalForNotWifi;
@property(nonatomic) double reportIntervalForWifi; // @synthesize reportIntervalForWifi=_reportIntervalForWifi;
@property(readonly, copy, nonatomic) CDUnknownBlockType getPositionInfoBlock; // @synthesize getPositionInfoBlock=_getPositionInfoBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType getUserInfoBlock; // @synthesize getUserInfoBlock=_getUserInfoBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType getOnlineParamBlock; // @synthesize getOnlineParamBlock=_getOnlineParamBlock;
- (void).cxx_destruct;
- (void)removeNotification;
- (void)doAfterEnterBackground;
- (void)doAfterEnterForeground;
- (void)setupNotification;
- (void)timerAction;
- (void)invalidateTimer;
- (void)setupTimer;
- (void)setupGetOnlineParamBlock:(CDUnknownBlockType)arg1 getUserInfoBlock:(CDUnknownBlockType)arg2 getPositionInfoBlock:(CDUnknownBlockType)arg3;
- (void)setupBlackList;
- (void)dealloc;

@end

