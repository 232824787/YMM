//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMapNaviInfo, AMapNaviLocation, AMapNaviWalkCore, NSError, NSString;

@protocol AMapNaviWalkCoreDelegate <NSObject>
- (void)naviWalkCore:(AMapNaviWalkCore *)arg1 onVibratePhoneTipsWithStrength:(int)arg2 time:(int)arg3;
- (void)naviWalkCore:(AMapNaviWalkCore *)arg1 onCarProjectionChangeToLocation:(AMapNaviLocation *)arg2;
- (void)naviWalkCore:(AMapNaviWalkCore *)arg1 onArrivedWayPoint:(int)arg2;
- (void)naviWalkCoreOnArrivedDestination:(AMapNaviWalkCore *)arg1;
- (void)naviWalkCore:(AMapNaviWalkCore *)arg1 lockScreenNaviTipsWithSoundString:(NSString *)arg2 turnIconType:(long long)arg3 segmentRemainLength:(int)arg4;
- (void)naviWalkCore:(AMapNaviWalkCore *)arg1 onGetNaviSoundString:(NSString *)arg2 soundStringType:(int)arg3;
- (void)naviWalkCore:(AMapNaviWalkCore *)arg1 onCarLocationChangeToLocation:(AMapNaviLocation *)arg2;
- (void)naviWalkCore:(AMapNaviWalkCore *)arg1 onUpdateNaviInfo:(AMapNaviInfo *)arg2;
- (void)naviWalkCoreOnEndEmulatorNavi:(AMapNaviWalkCore *)arg1;
- (void)naviWalkCoreOnRouteDestory:(AMapNaviWalkCore *)arg1;
- (void)naviWalkCoreOnOffRoute:(AMapNaviWalkCore *)arg1;
- (void)naviWalkCoreOnCalculateRouteSuccess:(AMapNaviWalkCore *)arg1;
- (void)naviWalkCore:(AMapNaviWalkCore *)arg1 onCalculateRouteFailure:(NSError *)arg2;
@end

