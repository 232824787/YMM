//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBBusinessParam, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface HCBOnlineParamConfig : NSObject
{
    NSDate *_updateTime;
    NSDate *_requestTime;
    id <HCBOnlineParamConfigDelegate> _delegate;
    NSDictionary *_mainOriginalDic;
    NSDictionary *_betaOriginalDic;
    HCBBusinessParam *_businessParam;
    NSMutableSet *_noReqbusinessParamSet;
    NSMutableDictionary *_defaultParams;
}

@property(retain, nonatomic) NSMutableDictionary *defaultParams; // @synthesize defaultParams=_defaultParams;
@property(retain, nonatomic) NSMutableSet *noReqbusinessParamSet; // @synthesize noReqbusinessParamSet=_noReqbusinessParamSet;
@property(retain, nonatomic) HCBBusinessParam *businessParam; // @synthesize businessParam=_businessParam;
@property(retain, nonatomic) NSDictionary *betaOriginalDic; // @synthesize betaOriginalDic=_betaOriginalDic;
@property(retain, nonatomic) NSDictionary *mainOriginalDic; // @synthesize mainOriginalDic=_mainOriginalDic;
@property(nonatomic) __weak id <HCBOnlineParamConfigDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *requestTime; // @synthesize requestTime=_requestTime;
@property(retain, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
- (void).cxx_destruct;
- (id)getAutoOnlineParamWithParamName:(id)arg1;
- (id)getLocalOnlineParamWithParamName:(id)arg1;
- (id)getBusinessOnlineParamWithParamName:(id)arg1;
- (id)getMainOnlineParamWithParamName:(id)arg1;
- (id)getBetaOnlineParamWithParamName:(id)arg1;
- (long long)versionNum;
- (void)addDefaultParams:(id)arg1;
- (void)cleanCache;
- (id)getOnlineParamWithParamName:(id)arg1 ParamType:(long long)arg2;
- (void)cleanNoReqBusinessParam:(id)arg1;
- (void)updateBusinessParam:(id)arg1 completedBlock:(CDUnknownBlockType)arg2;
- (void)updateOnlineParamDomainId:(long long)arg1 UserId:(long long)arg2 Lat:(double)arg3 Lng:(double)arg4 AppKey:(id)arg5 completedBlock:(CDUnknownBlockType)arg6;
- (id)initWithAppKey:(id)arg1;
- (_Bool)writeDictionary:(id)arg1 toFile:(id)arg2;
- (id)creatDocumentsFilePathWithAppKey:(id)arg1 postfix:(id)arg2;
- (_Bool)mainParamModifiedWithNewDic:(id)arg1 oldMainOriginalDic:(id)arg2;
- (void)cleanCacheWithAppKey:(id)arg1;
- (long long)filterVersionDic:(id)arg1;
- (id)filterParamDic:(id)arg1;
- (id)userDefaultsUpdateTimeWithAPPKey:(id)arg1;
- (id)userDefaultsRequestTimeWithAPPKey:(id)arg1;
- (id)documentsBetaOriginalDicWithAppKey:(id)arg1;
- (id)documentsMainOriginalDicWithAppKey:(id)arg1;
- (_Bool)updateParamsWithOriginalArray:(id)arg1 AppKey:(id)arg2 oldMainOriginalDic:(id)arg3;

@end

