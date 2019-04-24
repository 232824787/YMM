//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, SHDetailEnsureItemBeanModel, SHDetailMixProtocolModel;

@protocol YMMOrderDetailProtocol <NSObject>

@optional
- (NSString *)orderCreateTimeString;
- (NSNumber *)updateTime;
- (long long)orderType;
- (NSNumber *)orderId;
- (SHDetailMixProtocolModel *)detailProtocolInfo;
- (NSArray *)moneyStaticsItemBeans;
- (NSArray *)freightItemBeans;
- (SHDetailEnsureItemBeanModel *)ensureItemBean;
@end

