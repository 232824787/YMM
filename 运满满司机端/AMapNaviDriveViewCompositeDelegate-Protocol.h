//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMapNaviDriveViewComposite, UIButton;

@protocol AMapNaviDriveViewCompositeDelegate <NSObject>

@optional
- (void)driveViewComposite:(AMapNaviDriveViewComposite *)arg1 didChangeOrientation:(_Bool)arg2;
- (void)driveViewComposite:(AMapNaviDriveViewComposite *)arg1 didChangeDayNightType:(_Bool)arg2;
- (void)driveViewCompositeSwitchParallelRoadClick:(AMapNaviDriveViewComposite *)arg1;
- (void)driveViewComposite:(AMapNaviDriveViewComposite *)arg1 emulatorNaviSpeedTo:(long long)arg2;
- (void)driveViewCompositeRecalculeRouteBtnClick:(AMapNaviDriveViewComposite *)arg1;
- (void)driveViewCompositeMoreButtonClicked:(UIButton *)arg1;
- (void)driveViewCompositeCloseButtonClicked:(AMapNaviDriveViewComposite *)arg1;
@end

