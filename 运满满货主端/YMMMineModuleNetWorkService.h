//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YMMMineModuleNetWorkService : NSObject
{
}

- (void)networkTaskForPermissionMsgTask:(CDUnknownBlockType)arg1;
- (void)netWorkTaskForCheckDriverLicense:(CDUnknownBlockType)arg1;
- (void)netWorkTaskForProfile:(CDUnknownBlockType)arg1;
- (void)netWorkTaskForMemberlimit:(id)arg1 requestCallBack:(CDUnknownBlockType)arg2;
- (void)netWorkTaskForVerifyDriver:(id)arg1 idNumber:(id)arg2 requestCallBack:(CDUnknownBlockType)arg3;
- (void)netWorkTaskForMoreInfo:(CDUnknownBlockType)arg1;
- (void)netWorkTaskForSubItemsInfo:(CDUnknownBlockType)arg1 groupCode:(long long)arg2;
- (void)netWorkTaskForOrderMoreInfo:(CDUnknownBlockType)arg1;
- (void)netWorkTaskForUserDetailByCodes:(id)arg1 filterParams:(id)arg2 requestCallBack:(CDUnknownBlockType)arg3;
- (void)netWorkTaskForGroupItems:(long long)arg1 filterParams:(id)arg2 requestCallBack:(CDUnknownBlockType)arg3;
- (void)netWorkTaskForGroupItems:(CDUnknownBlockType)arg1;

@end

