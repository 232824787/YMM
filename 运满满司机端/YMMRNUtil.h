//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface YMMRNUtil : NSObject <RCTBridgeModule>
{
}

+ (const struct RCTMethodInfo *)__rct_export__rn_ios_localDefaults66930;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_location65429;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_getexpr64528;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_nativelog63027;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_openShareView61226;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_getAppType60425;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_getUnreadMessageByChatterParam59524;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_advertisements56923;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_getFileURL55922;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_configurationModel52721;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_getCurrLocByTimer51620;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_coorStrByCityCode50219;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_getCityNames47318;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_truckInfo46517;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_getFullImageURL45616;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_openH5WithPath44715;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_openIMCatter42414;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_chatShipperAction37013;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_getImEntrance35112;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_haveIMRight34111;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_callCustomServiceNumber33310;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_hideLoading3229;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_showLoading3128;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_toast2987;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_getGeocoderWithCoordinate2656;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_getUserInfo2455;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_backToLastPage2364;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_openWebApp2213;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_openUrl1932;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_performNative661;
+ (void)load;
+ (id)moduleName;
- (void)defaults:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)info:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)getExprWithFeatureCode:(id)arg1 withValueKey:(id)arg2 withStringDefault:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)nativelog:(id)arg1;
- (void)shareListInfo:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)newcallBack:(CDUnknownBlockType)arg1;
- (void)getUnreadMessageByChatterParam:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)getAdvertisements:(long long)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)callBack:(CDUnknownBlockType)arg1;
- (id)getConfigurationValueWithSEL:(id)arg1;
- (void)openConfigurationModel:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)currLocByTimerWithCallBack:(CDUnknownBlockType)arg1;
- (void)coorStrByCityCode:(long long)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)placeStringByCode:(long long)arg1;
- (void)getCityNames:(id)arg1 resolver:(CDUnknownBlockType)arg2;
- (void)truckTypes:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)getFullImageURLWithPicture:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)openH5WithPath:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)openIMCatter:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)gotoIMViewController:(id)arg1;
- (void)chatShipper:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)cargoInfo:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)haveIMRight:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)callCustomServiceNumber:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)hideLoading:(CDUnknownBlockType)arg1;
- (void)showLoading:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)toast:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)getGeocoderWithCoordinate:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)getUserInfo:(CDUnknownBlockType)arg1;
- (void)backToLastPage:(CDUnknownBlockType)arg1;
- (void)openWebApp:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)openURL:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)method:(id)arg1 callback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

