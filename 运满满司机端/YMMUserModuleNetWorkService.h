//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YMMUserModuleNetWorkService : NSObject
{
}

- (void)networkTaskForNewUserPopupConfirm:(id)arg1 requestCallBack:(CDUnknownBlockType)arg2;
- (void)networkTaskForCheckUserStatus:(id)arg1 requestCallBack:(CDUnknownBlockType)arg2;
- (void)networkTaskForPosition:(id)arg1 sourceType:(long long)arg2 requestCallBack:(CDUnknownBlockType)arg3;
- (void)netWorkTaskForUserConfig:(id)arg1 requestCallBack:(CDUnknownBlockType)arg2;
- (void)netWorkTaskForUserProfile:(CDUnknownBlockType)arg1;
- (void)netWorkTaskForVoiceCaptchaCode:(id)arg1 requestCallBack:(CDUnknownBlockType)arg2;
- (void)netWorkTaskForRegisterCaptchaCode:(id)arg1 requestCallBack:(CDUnknownBlockType)arg2;
- (void)netWorkTaskForLoginCaptchaCode:(id)arg1 requestCallBack:(CDUnknownBlockType)arg2;
- (void)netWorkTaskForUserRegister:(id)arg1 captchaCode:(id)arg2 requestCallBack:(CDUnknownBlockType)arg3;
- (void)netWorkTaskForHCBToken:(CDUnknownBlockType)arg1;
- (void)netWorkTaskForUserLogin:(id)arg1 captchaCode:(id)arg2 pushToken:(id)arg3 requestCallBack:(CDUnknownBlockType)arg4;

@end

