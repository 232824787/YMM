//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMapNaviRouteSearchBarView, NSMutableArray, NSString;

@protocol AMapNaviRouteSearchBarViewDelegate <NSObject>

@optional
- (void)aMapNaviRouteSearchBarView:(AMapNaviRouteSearchBarView *)arg1 popMsg:(NSString *)arg2;
- (void)aMapNaviRouteSearchBarView:(AMapNaviRouteSearchBarView *)arg1 calculateRouteWithPOIObjs:(NSMutableArray *)arg2 isFromSwitchTransportType:(_Bool)arg3;
- (void)aMapNaviRouteSearchBarView:(AMapNaviRouteSearchBarView *)arg1 addPOIWithText:(NSString *)arg2 placeholder:(NSString *)arg3;
- (void)aMapNaviRouteSearchBarViewGoBackBtnClick:(AMapNaviRouteSearchBarView *)arg1;
@end

