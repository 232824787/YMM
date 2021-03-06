//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMapNaviDriveManagerDelegate.h"
#import "AMapNaviDriveManagerInternalDelegate.h"
#import "AMapNaviRideManagerInternalDelegate.h"
#import "AMapNaviRouteSearchBarViewDelegate.h"
#import "AMapNaviSearchManagerDelegate.h"
#import "AMapNaviWalkManagerInternalDelegate.h"
#import "UIAlertViewDelegate.h"

@class AMapNaviBaseNaviViewController, AMapNaviCompositeUserConfig, AMapNaviDriveManager, AMapNaviLoadingView, AMapNaviNavigationViewController, AMapNaviPopMsgView, AMapNaviRideManager, AMapNaviRoute, AMapNaviRouteDrivingStrategyPreferenceView, AMapNaviRoutePlanViewController, AMapNaviRouteSearchBarView, AMapNaviSearchManager, AMapNaviWalkManager, NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSString;

@interface AMapNaviCompositeManager : NSObject <AMapNaviRouteSearchBarViewDelegate, AMapNaviSearchManagerDelegate, AMapNaviDriveManagerDelegate, AMapNaviDriveManagerInternalDelegate, AMapNaviWalkManagerInternalDelegate, AMapNaviRideManagerInternalDelegate, UIAlertViewDelegate>
{
    _Bool _isNeedWaitAuthorizationStatusChangeToDealWithUserConfig;
    _Bool _isHasZoominWhenInit;
    _Bool _isAutoStartNaviWhenSwtichStartPointToMyPos;
    _Bool _isAnimationWhenDismiss;
    _Bool _hasAlreadyPresent;
    _Bool _isNaviAllReady;
    _Bool _locationIsValid;
    _Bool _walkDoNotDroadcast;
    _Bool _walkTopInfoViewExpand;
    _Bool _rideDoNotDroadcast;
    _Bool _rideTopInfoViewExpand;
    id <AMapNaviCompositeManagerDelegate> _delegate;
    AMapNaviRoutePlanViewController *_routePlanVC;
    AMapNaviSearchManager *_searchManager;
    long long _autoStartWaitPosAccuracyHasRetryTimes;
    NSString *_cityCode;
    long long _netToGetCityCodeRetryTimes;
    NSMutableArray *_pointsCacheWhenCalculateRouteArray;
    AMapNaviNavigationViewController *_naviController;
    AMapNaviBaseNaviViewController *_showRouteNaviVC;
    long long _currentTransportationType;
    AMapNaviCompositeUserConfig *_configObj;
    NSMutableArray *_searchPOIObjs;
    AMapNaviRouteSearchBarView *_searchBarView;
    AMapNaviPopMsgView *_msgView;
    AMapNaviLoadingView *_loadingView;
    NSMutableArray *_wayPOIObjs;
    AMapNaviRoute *_currentSelectedRoute;
    NSMutableSet *_customAnnotationSet;
    double _horizontalAccuracy;
    AMapNaviDriveManager *_driveManager;
    long long _drivingStrategy;
    AMapNaviRouteDrivingStrategyPreferenceView *_drivingStrategyPreferenceView;
    long long _driveDroadcastType;
    AMapNaviWalkManager *_walkManager;
    AMapNaviRideManager *_rideManager;
    struct CLLocationCoordinate2D _locationCoor;
}

@property(nonatomic) _Bool rideTopInfoViewExpand; // @synthesize rideTopInfoViewExpand=_rideTopInfoViewExpand;
@property(nonatomic) _Bool rideDoNotDroadcast; // @synthesize rideDoNotDroadcast=_rideDoNotDroadcast;
@property(retain, nonatomic) AMapNaviRideManager *rideManager; // @synthesize rideManager=_rideManager;
@property(nonatomic) _Bool walkTopInfoViewExpand; // @synthesize walkTopInfoViewExpand=_walkTopInfoViewExpand;
@property(nonatomic) _Bool walkDoNotDroadcast; // @synthesize walkDoNotDroadcast=_walkDoNotDroadcast;
@property(retain, nonatomic) AMapNaviWalkManager *walkManager; // @synthesize walkManager=_walkManager;
@property(nonatomic) long long driveDroadcastType; // @synthesize driveDroadcastType=_driveDroadcastType;
@property(retain, nonatomic) AMapNaviRouteDrivingStrategyPreferenceView *drivingStrategyPreferenceView; // @synthesize drivingStrategyPreferenceView=_drivingStrategyPreferenceView;
@property(nonatomic) long long drivingStrategy; // @synthesize drivingStrategy=_drivingStrategy;
@property(retain, nonatomic) AMapNaviDriveManager *driveManager; // @synthesize driveManager=_driveManager;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) struct CLLocationCoordinate2D locationCoor; // @synthesize locationCoor=_locationCoor;
@property(nonatomic) _Bool locationIsValid; // @synthesize locationIsValid=_locationIsValid;
@property(retain, nonatomic) NSMutableSet *customAnnotationSet; // @synthesize customAnnotationSet=_customAnnotationSet;
@property(nonatomic) __weak AMapNaviRoute *currentSelectedRoute; // @synthesize currentSelectedRoute=_currentSelectedRoute;
@property(retain, nonatomic) NSMutableArray *wayPOIObjs; // @synthesize wayPOIObjs=_wayPOIObjs;
@property(nonatomic) _Bool isNaviAllReady; // @synthesize isNaviAllReady=_isNaviAllReady;
@property(retain, nonatomic) AMapNaviLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AMapNaviPopMsgView *msgView; // @synthesize msgView=_msgView;
@property(retain, nonatomic) AMapNaviRouteSearchBarView *searchBarView; // @synthesize searchBarView=_searchBarView;
@property(retain, nonatomic) NSMutableArray *searchPOIObjs; // @synthesize searchPOIObjs=_searchPOIObjs;
@property(retain, nonatomic) AMapNaviCompositeUserConfig *configObj; // @synthesize configObj=_configObj;
@property(nonatomic) long long currentTransportationType; // @synthesize currentTransportationType=_currentTransportationType;
@property(nonatomic) __weak AMapNaviBaseNaviViewController *showRouteNaviVC; // @synthesize showRouteNaviVC=_showRouteNaviVC;
@property(retain, nonatomic) AMapNaviNavigationViewController *naviController; // @synthesize naviController=_naviController;
@property(nonatomic) _Bool hasAlreadyPresent; // @synthesize hasAlreadyPresent=_hasAlreadyPresent;
@property(nonatomic) _Bool isAnimationWhenDismiss; // @synthesize isAnimationWhenDismiss=_isAnimationWhenDismiss;
@property(nonatomic) _Bool isAutoStartNaviWhenSwtichStartPointToMyPos; // @synthesize isAutoStartNaviWhenSwtichStartPointToMyPos=_isAutoStartNaviWhenSwtichStartPointToMyPos;
@property(retain, nonatomic) NSMutableArray *pointsCacheWhenCalculateRouteArray; // @synthesize pointsCacheWhenCalculateRouteArray=_pointsCacheWhenCalculateRouteArray;
@property(nonatomic) _Bool isHasZoominWhenInit; // @synthesize isHasZoominWhenInit=_isHasZoominWhenInit;
@property(nonatomic) long long netToGetCityCodeRetryTimes; // @synthesize netToGetCityCodeRetryTimes=_netToGetCityCodeRetryTimes;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(nonatomic) long long autoStartWaitPosAccuracyHasRetryTimes; // @synthesize autoStartWaitPosAccuracyHasRetryTimes=_autoStartWaitPosAccuracyHasRetryTimes;
@property(nonatomic) _Bool isNeedWaitAuthorizationStatusChangeToDealWithUserConfig; // @synthesize isNeedWaitAuthorizationStatusChangeToDealWithUserConfig=_isNeedWaitAuthorizationStatusChangeToDealWithUserConfig;
@property(retain, nonatomic) AMapNaviSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(nonatomic) __weak AMapNaviRoutePlanViewController *routePlanVC; // @synthesize routePlanVC=_routePlanVC;
@property(nonatomic) __weak id <AMapNaviCompositeManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (void)showRouteDrivingStrategyPreferenceViewIn:(id)arg1;
- (void)readLocalData;
- (void)cityOfMyPosition;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)navSearchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)onBatchDone:(id)arg1 result:(id)arg2;
- (void)onReGeocodeDone:(id)arg1 result:(id)arg2;
- (void)showMsg:(id)arg1;
- (void)startNaviIsGPS:(_Bool)arg1;
- (id)handleRetryBtnText:(id)arg1 retryBtnCanClick:(_Bool)arg2;
- (void)handleWhenCalculateRouteComplete:(_Bool)arg1 retryBtnText:(id)arg2 retryBtnCanClick:(_Bool)arg3;
- (void)handleWhenStartCalculateRoute;
- (void)doCalculateDriveRouteIsRetry:(_Bool)arg1;
- (void)rideManager:(id)arg1 onCalculateRouteFailure:(id)arg2;
- (void)rideManagerOnCalculateRouteSuccess:(id)arg1;
- (void)internalRideManager:(id)arg1 didUpdateLocation:(id)arg2 offset:(_Bool)arg3;
- (void)internalRideManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)rideManager:(id)arg1 error:(id)arg2;
- (void)walkManager:(id)arg1 onCalculateRouteFailure:(id)arg2;
- (void)walkManagerOnCalculateRouteSuccess:(id)arg1;
- (void)internalWalkManager:(id)arg1 didUpdateLocation:(id)arg2 offset:(_Bool)arg3;
- (void)internalWalkManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)walkManager:(id)arg1 error:(id)arg2;
- (void)driveManager:(id)arg1 onCalculateRouteFailure:(id)arg2 routePlanType:(long long)arg3;
- (void)driveManager:(id)arg1 onCalculateRouteSuccessWithType:(long long)arg2;
- (void)driveManager:(id)arg1 error:(id)arg2;
- (void)internalDriveManager:(id)arg1 didUpdateLocation:(id)arg2 offset:(_Bool)arg3;
- (void)internalDriveManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)handleWhenInternalDelegateOnCalculateRouteFailure:(id)arg1 naviManager:(id)arg2 withType:(long long)arg3;
- (void)handleWhenInternalDelegateOnCalculateRouteSuccess:(id)arg1 withType:(long long)arg2;
- (void)handleWhenInternalDelegateDidUpdateLocation:(id)arg1 isOffset:(_Bool)arg2;
- (void)handleWhenInternalDelegateDidChangeAuthorizationStatus:(int)arg1;
- (void)handleWhenInternalDelegateError:(id)arg1;
- (void)aMapNaviRouteSearchBarView:(id)arg1 popMsg:(id)arg2;
- (void)aMapNaviRouteSearchBarView:(id)arg1 calculateRouteWithPOIObjs:(id)arg2 isFromSwitchTransportType:(_Bool)arg3;
- (void)aMapNaviRouteSearchBarView:(id)arg1 addPOIWithText:(id)arg2 placeholder:(id)arg3;
- (void)aMapNaviRouteSearchBarViewGoBackBtnClick:(id)arg1;
- (void)dealWithBarViewAndCalculateRouteByUserConfig;
- (void)dealWithMyPositonByUserConfig;
- (void)dealWithWhenInitByUserConfig;
- (void)updateSearchBarViewAddWayPOIInputViewBtn;
- (void)handleWhenSwitchTransportTypeWithSelectedIndex:(long long)arg1;
@property(readonly, nonatomic) NSDictionary *naviRoutes;
@property(readonly, nonatomic) NSArray *naviRouteIDs;
@property(readonly, nonatomic) AMapNaviRoute *naviRoute;
@property(readonly, nonatomic) long long naviRouteID;
- (void)presentRoutePlanViewControllerWithOptions:(id)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)handleDrivingStrategyWhenPresent;
- (id)createNaviVCIsGPS:(_Bool)arg1;
- (void)initNaviManagersIsNeedDealWithUserConfig:(id)arg1;
- (void)initProperties;
- (void)clearTheData;
- (void)dismissAndClear;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

