//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class YMMShareCargoMiniAppModel, YMMShareInfoModel;

@interface YMMShareListModel : YMMCommonModel
{
    YMMShareInfoModel *_wechat;
    YMMShareInfoModel *_wechatFriend;
    YMMShareInfoModel *_sms;
    YMMShareInfoModel *_qq;
    YMMShareCargoMiniAppModel *_miniApp;
}

@property(retain, nonatomic) YMMShareCargoMiniAppModel *miniApp; // @synthesize miniApp=_miniApp;
@property(retain, nonatomic) YMMShareInfoModel *qq; // @synthesize qq=_qq;
@property(retain, nonatomic) YMMShareInfoModel *sms; // @synthesize sms=_sms;
@property(retain, nonatomic) YMMShareInfoModel *wechatFriend; // @synthesize wechatFriend=_wechatFriend;
@property(retain, nonatomic) YMMShareInfoModel *wechat; // @synthesize wechat=_wechat;
- (void).cxx_destruct;
- (void)dealloc;
- (id)images;
- (id)titles;

@end

