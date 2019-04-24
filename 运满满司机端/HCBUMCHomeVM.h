//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBUMCADSectionModel, HCBUMCDotModel, HCBUMCUserInfoModel;

@interface HCBUMCHomeVM : NSObject
{
    _Bool _autoCheckIn;
    _Bool _shouldRefreshBaseInfo;
    _Bool _shouldRefreshCouponDot;
    _Bool _shouldRefreshOrderDot;
    _Bool _refreshing;
    HCBUMCUserInfoModel *_model;
    HCBUMCDotModel *_couponDot;
    HCBUMCDotModel *_orderDot;
    HCBUMCADSectionModel *_adSectionModel;
    CDUnknownBlockType _notifyRefreshUI;
    CDUnknownBlockType _innerRefreshingStatusChangedHandler;
    CDUnknownBlockType _baseInfoDidUpdateHandler;
    CDUnknownBlockType _checkInTipsDidUpdateHandler;
    CDUnknownBlockType _checkInCompletionHandler;
    CDUnknownBlockType _receivedTaskRewardHandler;
}

@property(nonatomic, getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(copy, nonatomic) CDUnknownBlockType receivedTaskRewardHandler; // @synthesize receivedTaskRewardHandler=_receivedTaskRewardHandler;
@property(copy, nonatomic) CDUnknownBlockType checkInCompletionHandler; // @synthesize checkInCompletionHandler=_checkInCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType checkInTipsDidUpdateHandler; // @synthesize checkInTipsDidUpdateHandler=_checkInTipsDidUpdateHandler;
@property(copy, nonatomic) CDUnknownBlockType baseInfoDidUpdateHandler; // @synthesize baseInfoDidUpdateHandler=_baseInfoDidUpdateHandler;
@property(copy, nonatomic) CDUnknownBlockType innerRefreshingStatusChangedHandler; // @synthesize innerRefreshingStatusChangedHandler=_innerRefreshingStatusChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType notifyRefreshUI; // @synthesize notifyRefreshUI=_notifyRefreshUI;
@property(retain, nonatomic) HCBUMCADSectionModel *adSectionModel; // @synthesize adSectionModel=_adSectionModel;
@property(retain, nonatomic) HCBUMCDotModel *orderDot; // @synthesize orderDot=_orderDot;
@property(retain, nonatomic) HCBUMCDotModel *couponDot; // @synthesize couponDot=_couponDot;
@property(retain, nonatomic) HCBUMCUserInfoModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool shouldRefreshOrderDot; // @synthesize shouldRefreshOrderDot=_shouldRefreshOrderDot;
@property(nonatomic) _Bool shouldRefreshCouponDot; // @synthesize shouldRefreshCouponDot=_shouldRefreshCouponDot;
@property(nonatomic) _Bool shouldRefreshBaseInfo; // @synthesize shouldRefreshBaseInfo=_shouldRefreshBaseInfo;
@property(nonatomic) _Bool autoCheckIn; // @synthesize autoCheckIn=_autoCheckIn;
- (void).cxx_destruct;
- (long long)gasCardImpressionCount;
- (void)addGasCardImpressionCountIfNeeded;
- (void)triggerRefreshIfNeeded;
- (void)refreshAdSource;
- (void)refreshOrderDot;
- (void)refreshCouponDot;
- (void)receiveTaskReward:(id)arg1;
- (void)triggerRefreshBaseInfoWithCallback;
- (void)triggerCheckIn;
- (void)requestCheckInTipsWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshUMCBaseInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

