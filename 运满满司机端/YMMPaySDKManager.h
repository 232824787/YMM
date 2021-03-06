//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController, YMMPayOrderInfoModel;

@interface YMMPaySDKManager : NSObject
{
    long long payChannelType;
    long long payChannelId;
    UIViewController *_payVC;
    NSString *_YBChannelName;
    id <GTPaySDKProtocol> _sdkPayCenter;
    YMMPayOrderInfoModel *_orderInfo;
    CDUnknownBlockType _successCallBack;
}

+ (id)shared;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) CDUnknownBlockType successCallBack; // @synthesize successCallBack=_successCallBack;
@property(retain, nonatomic) YMMPayOrderInfoModel *orderInfo; // @synthesize orderInfo=_orderInfo;
@property(retain, nonatomic) id <GTPaySDKProtocol> sdkPayCenter; // @synthesize sdkPayCenter=_sdkPayCenter;
@property(retain, nonatomic) NSString *YBChannelName; // @synthesize YBChannelName=_YBChannelName;
@property(retain, nonatomic) UIViewController *payVC; // @synthesize payVC=_payVC;
- (void).cxx_destruct;
- (void)payMentToSDKWithSDKOrder:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getNetworkIPAddress;
- (void)toPay:(long long)arg1 ChannelId:(long long)arg2 tradeAmountStr:(id)arg3 orderId:(id)arg4 orderInfo:(id)arg5 success:(CDUnknownBlockType)arg6 failed:(CDUnknownBlockType)arg7;
- (void)payCheckOrderStatus;
- (void)payCompletedAndBack;
- (void)popPayVC;
- (void)cancelCheckYBOrderStatusTimer;
- (void)wechatPayReplyFailed:(id)arg1;
- (void)wechatPayReplySucceed:(id)arg1;
- (void)alipayReplyFailed:(id)arg1;
- (void)alipayReplyWaiting:(id)arg1;
- (void)alipayReplySucceed:(id)arg1;
- (void)toWeChatH5Pay:(id)arg1 channelName:(id)arg2 parentVC:(id)arg3 orderInfo:(id)arg4 success:(CDUnknownBlockType)arg5;
- (void)toYiBaoPay:(id)arg1 channelName:(id)arg2 parentVC:(id)arg3 orderInfo:(id)arg4 success:(CDUnknownBlockType)arg5;
- (void)toWxPay:(id)arg1 success:(CDUnknownBlockType)arg2;
- (void)toAliPay:(id)arg1 success:(CDUnknownBlockType)arg2;

@end

