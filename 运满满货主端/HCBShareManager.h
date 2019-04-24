//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBShareActionViewController;

@interface HCBShareManager : NSObject
{
    HCBShareActionViewController *_shareActionVC;
}

+ (unsigned long long)getPlatformCountWithTypes:(long long)arg1;
+ (void)shareMiniProgram:(id)arg1 userName:(id)arg2 path:(id)arg3 hdImageData:(id)arg4 title:(id)arg5 description:(id)arg6 completeBlock:(CDUnknownBlockType)arg7;
+ (void)showShareActionSheetWithTypes:(long long)arg1 onClickBlock:(CDUnknownBlockType)arg2;
+ (_Bool)shareLinkURL:(id)arg1 Title:(id)arg2 Description:(id)arg3 ThumbImageUrl:(id)arg4 Type:(long long)arg5 onCompleteBlock:(CDUnknownBlockType)arg6;
+ (_Bool)shareLinkURL:(id)arg1 Title:(id)arg2 Description:(id)arg3 ThumbImage:(id)arg4 Type:(long long)arg5 onCompleteBlock:(CDUnknownBlockType)arg6;
+ (_Bool)shareImageData:(id)arg1 ThumbImage:(id)arg2 Type:(long long)arg3 onCompleteBlock:(CDUnknownBlockType)arg4;
+ (_Bool)shareText:(id)arg1 Type:(long long)arg2 onCompleteBlock:(CDUnknownBlockType)arg3;
+ (_Bool)setupHandleOpenURL:(id)arg1;
+ (_Bool)setupQQAppKey:(id)arg1 QQScheme:(id)arg2;
+ (_Bool)setupWXAppKey:(id)arg1;
+ (_Bool)isFromQQShareWithHandleOpenURL:(id)arg1;
+ (_Bool)isFromWXShareWithHandleOpenURL:(id)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) HCBShareActionViewController *shareActionVC; // @synthesize shareActionVC=_shareActionVC;
- (void).cxx_destruct;

@end

