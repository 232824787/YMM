//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"
#import "YMMImagePickerManagerDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge, YMMOSSUploadManager, YMMQuotePayTypeSelector;

@interface YMMPublishRNBridgeModule : NSObject <YMMImagePickerManagerDelegate, RCTBridgeModule>
{
    _Bool _crop;
    YMMQuotePayTypeSelector *_quotePayTypeSelector;
    CDUnknownBlockType _selectCompletionBlock;
    CDUnknownBlockType _uploadCompletionBlock;
    YMMOSSUploadManager *_uploadManager;
    long long _size;
    long long _maxBytes;
    long long _num;
    long long _from;
}

+ (const struct RCTMethodInfo *)__rct_export__rn_ios_publishImageLoad53316;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_publishImagePicker42715;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_VoiceDialog40214;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_PublishFreightView37313;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_publishWeightCapacity32912;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_backToRootViewController31311;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_postNotification30010;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_traceId2919;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_assignDriver2618;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_pulishCargoName2387;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_weightAndCapacity2056;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_PackageTimeView1635;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_HcbMapNavigator1334;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_selectPayMethod1103;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_getAddressRoutes982;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_setPageConfigProtocolVersion871;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_getPageConfig760;
+ (void)load;
+ (id)moduleName;
@property(nonatomic) long long from; // @synthesize from=_from;
@property(nonatomic) long long num; // @synthesize num=_num;
@property(nonatomic) long long maxBytes; // @synthesize maxBytes=_maxBytes;
@property(nonatomic) _Bool crop; // @synthesize crop=_crop;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) YMMOSSUploadManager *uploadManager; // @synthesize uploadManager=_uploadManager;
@property(copy, nonatomic) CDUnknownBlockType uploadCompletionBlock; // @synthesize uploadCompletionBlock=_uploadCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType selectCompletionBlock; // @synthesize selectCompletionBlock=_selectCompletionBlock;
@property(retain, nonatomic) YMMQuotePayTypeSelector *quotePayTypeSelector; // @synthesize quotePayTypeSelector=_quotePayTypeSelector;
- (void).cxx_destruct;
- (long long)canRecord;
- (id)currentTimeStr;
- (void)dic:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)ymm_imagePickerManagerDidSelectItem:(id)arg1 dataStringArray:(id)arg2;
- (void)imagePickerParams:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)voiceDialog:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)freight:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)WeightCapacityType:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)complete:(CDUnknownBlockType)arg1;
- (void)postNotification:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)traceId:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)assignDriver:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)cargoName:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)type:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)goodPackageTime:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)loadType:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)types:(id)arg1 selectIndex:(long long)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)routesCallBack:(CDUnknownBlockType)arg1;
- (void)protocolVersion:(id)arg1 versioncallBack:(CDUnknownBlockType)arg2;
- (void)callBack:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

