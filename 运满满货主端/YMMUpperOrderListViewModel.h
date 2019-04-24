//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController, YMMOrderManager, YMMUpperOrderListModel;

@interface YMMUpperOrderListViewModel : NSObject
{
    UIViewController *_currentVC;
    YMMUpperOrderListModel *_currentOrderModel;
    YMMOrderManager *_orderManager;
}

@property(retain, nonatomic) YMMOrderManager *orderManager; // @synthesize orderManager=_orderManager;
@property(retain, nonatomic) YMMUpperOrderListModel *currentOrderModel; // @synthesize currentOrderModel=_currentOrderModel;
@property(retain, nonatomic) UIViewController *currentVC; // @synthesize currentVC=_currentVC;
- (void).cxx_destruct;
- (void)showCalloutLogoutAlertViewByOrderModel:(id)arg1;
- (void)checkAccountLogoutStatus:(id)arg1;
- (void)upperOrderCallPhone:(id)arg1;
- (void)upperOrderOpenIM:(id)arg1;
- (void)rejectUpstream:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)publishUpperOrderToYMM:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)getShowsCount:(long long)arg1;
- (void)requestUpperOrderListTabNum:(CDUnknownBlockType)arg1;
- (void)requestOrderList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)initWithVC:(id)arg1;

@end

