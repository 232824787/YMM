//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YMMAuthBaseNetWorkService : NSObject
{
}

- (void)netWorkTaskForCheckCertifyStatusWithSceneId:(long long)arg1 requestCallBack:(CDUnknownBlockType)arg2;
- (void)netWorkTaskForCustomerServiceScene:(id)arg1 requestCallBack:(CDUnknownBlockType)arg2;
- (void)netWorkTaskForCustomerServiceScene:(CDUnknownBlockType)arg1;
- (void)netWorkTaskForContactCustomerService:(CDUnknownBlockType)arg1;
- (void)netWorkTaskForVerifyIdCard:(id)arg1 userName:(id)arg2 requestCallBack:(CDUnknownBlockType)arg3;
- (void)netWorkTaskForOcrRecognitionPic:(long long)arg1 picUrl:(id)arg2 sourceType:(long long)arg3 callback:(CDUnknownBlockType)arg4;
- (void)netWorkTaskForOcrRecognitionPic:(long long)arg1 picUrl:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)netWorkTaskForVehicleLicOCR:(long long)arg1 picUrl:(id)arg2 requestCallBack:(CDUnknownBlockType)arg3;
- (void)netWorkTaskForDriverLicOCR:(long long)arg1 picUrl:(id)arg2 requestCallBack:(CDUnknownBlockType)arg3;
- (void)netWorkTaskForShipperAuthInfoAndStatus:(CDUnknownBlockType)arg1;
- (void)netWorkTaskForDriverAuthStatus:(CDUnknownBlockType)arg1;
- (void)netWorkTaskForDriverAuthInfo:(CDUnknownBlockType)arg1;
- (void)netWorkTaskForShipperAuthInfo:(CDUnknownBlockType)arg1;
- (void)netWorkTaskForAuthResult:(CDUnknownBlockType)arg1;
- (void)netWorkTaskForUserInfo:(CDUnknownBlockType)arg1;

@end

