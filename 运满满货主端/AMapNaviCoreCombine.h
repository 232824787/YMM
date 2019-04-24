//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMapNaviCoreProtocol.h"

@class AMapNaviCameraInfo, AMapNaviDiceCore, AMapNaviLocation, AMapNaviPOIInfo, AMapNetworkManager, AMapRESTRequestReformer, CLLocation, NSArray, NSCalendar, NSDateFormatter, NSMutableArray, NSString;

@interface AMapNaviCoreCombine : NSObject <AMapNaviCoreProtocol>
{
    int _routeResultType;
    struct IPathResult *_currentNaviPathsResult;
    struct IVariantPath *_currentNaviPath;
    struct NaviInfo _currentNaviInfo;
    _Bool _diceCoreHasSetNaviPath;
    _Bool _isUserHasSetNeedMultiPathsNaviMode;
    _Bool _isInMultiPathsNaviMode;
    _Bool _hasStartDealloc;
    _Bool _isTruck;
    _Bool _isHackStartAndEndWhenOnlineCarHailingCalculate;
    int _hasPassWayPointIndex;
    int _endPOITypeWhenOnlineCarHailingCalculate;
    id <AMapNaviCoreCombineDelegate> _delegate;
    long long _onlineCarHailingType;
    AMapNaviDiceCore *_diceCore;
    NSMutableArray *_deletedBackUpNaviPath;
    CLLocation *_realGPSLocation;
    AMapNaviLocation *_naviLocation;
    NSDateFormatter *_dataFormatter;
    AMapNetworkManager *_networkManager;
    AMapRESTRequestReformer *_lastRoutePlanRequestReformer;
    NSString *_restResponseErrorCode;
    NSString *_responseGsid;
    NSString *_requestUrlPath;
    NSString *_requestRouteDataString;
    AMapNaviPOIInfo *_curStartPOIObj;
    AMapNaviPOIInfo *_curEndPOIObj;
    NSArray *_curWayPOIObjs;
    long long _curStrategy;
    NSCalendar *_calendar;
    long long _unitFlags;
    AMapNaviCameraInfo *_internalCameraStart;
    AMapNaviCameraInfo *_internalCameraEnd;
    long long _internalCameraState;
    NSString *_endPOIIDWhenOnlineCarHailingCalculate;
    NSString *_endPOITypeCodeWhenOnlineCarHailingCalculate;
}

@property(nonatomic) int endPOITypeWhenOnlineCarHailingCalculate; // @synthesize endPOITypeWhenOnlineCarHailingCalculate=_endPOITypeWhenOnlineCarHailingCalculate;
@property(copy, nonatomic) NSString *endPOITypeCodeWhenOnlineCarHailingCalculate; // @synthesize endPOITypeCodeWhenOnlineCarHailingCalculate=_endPOITypeCodeWhenOnlineCarHailingCalculate;
@property(copy, nonatomic) NSString *endPOIIDWhenOnlineCarHailingCalculate; // @synthesize endPOIIDWhenOnlineCarHailingCalculate=_endPOIIDWhenOnlineCarHailingCalculate;
@property(nonatomic) _Bool isHackStartAndEndWhenOnlineCarHailingCalculate; // @synthesize isHackStartAndEndWhenOnlineCarHailingCalculate=_isHackStartAndEndWhenOnlineCarHailingCalculate;
@property(nonatomic) _Bool isTruck; // @synthesize isTruck=_isTruck;
@property(nonatomic) long long internalCameraState; // @synthesize internalCameraState=_internalCameraState;
@property(retain, nonatomic) AMapNaviCameraInfo *internalCameraEnd; // @synthesize internalCameraEnd=_internalCameraEnd;
@property(retain, nonatomic) AMapNaviCameraInfo *internalCameraStart; // @synthesize internalCameraStart=_internalCameraStart;
@property(nonatomic) long long unitFlags; // @synthesize unitFlags=_unitFlags;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(nonatomic) long long curStrategy; // @synthesize curStrategy=_curStrategy;
@property(retain, nonatomic) NSArray *curWayPOIObjs; // @synthesize curWayPOIObjs=_curWayPOIObjs;
@property(retain, nonatomic) AMapNaviPOIInfo *curEndPOIObj; // @synthesize curEndPOIObj=_curEndPOIObj;
@property(retain, nonatomic) AMapNaviPOIInfo *curStartPOIObj; // @synthesize curStartPOIObj=_curStartPOIObj;
@property(retain, nonatomic) NSString *requestRouteDataString; // @synthesize requestRouteDataString=_requestRouteDataString;
@property(retain, nonatomic) NSString *requestUrlPath; // @synthesize requestUrlPath=_requestUrlPath;
@property(retain, nonatomic) NSString *responseGsid; // @synthesize responseGsid=_responseGsid;
@property(retain, nonatomic) NSString *restResponseErrorCode; // @synthesize restResponseErrorCode=_restResponseErrorCode;
@property(retain) AMapRESTRequestReformer *lastRoutePlanRequestReformer; // @synthesize lastRoutePlanRequestReformer=_lastRoutePlanRequestReformer;
@property(retain, nonatomic) AMapNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(retain, nonatomic) NSDateFormatter *dataFormatter; // @synthesize dataFormatter=_dataFormatter;
@property(retain) AMapNaviLocation *naviLocation; // @synthesize naviLocation=_naviLocation;
@property(retain) CLLocation *realGPSLocation; // @synthesize realGPSLocation=_realGPSLocation;
@property(retain, nonatomic) NSMutableArray *deletedBackUpNaviPath; // @synthesize deletedBackUpNaviPath=_deletedBackUpNaviPath;
@property(nonatomic) _Bool hasStartDealloc; // @synthesize hasStartDealloc=_hasStartDealloc;
@property(retain, nonatomic) AMapNaviDiceCore *diceCore; // @synthesize diceCore=_diceCore;
@property(nonatomic) _Bool isInMultiPathsNaviMode; // @synthesize isInMultiPathsNaviMode=_isInMultiPathsNaviMode;
@property(nonatomic) _Bool isUserHasSetNeedMultiPathsNaviMode; // @synthesize isUserHasSetNeedMultiPathsNaviMode=_isUserHasSetNeedMultiPathsNaviMode;
@property(nonatomic) int hasPassWayPointIndex; // @synthesize hasPassWayPointIndex=_hasPassWayPointIndex;
@property(nonatomic) long long onlineCarHailingType; // @synthesize onlineCarHailingType=_onlineCarHailingType;
@property(nonatomic) _Bool diceCoreHasSetNaviPath; // @synthesize diceCoreHasSetNaviPath=_diceCoreHasSetNaviPath;
@property(nonatomic) __weak id <AMapNaviCoreCombineDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)convertImageToTransparent:(id)arg1 bgColorR:(int)arg2 bgColorG:(int)arg3 bgColorB:(int)arg4 bgColorA:(int)arg5;
- (id)arrowImageToTransparent:(id)arg1;
- (id)addImage:(id)arg1 toImage:(id)arg2;
- (id)changeTheImageToTransparent:(id)arg1 bgColorR:(double)arg2 bgColorG:(double)arg3 bgColorB:(double)arg4;
- (id)addBgimageAndArrowimageToImage:(id)arg1 arrowImage:(id)arg2;
- (char *)convertImageToPixelData:(id)arg1;
- (struct String16)convertNSStringToString16:(id)arg1;
- (void)saveCurrentLocationToLocal;
- (_Bool)theCoreCombineRequestIsRestError:(id)arg1 andIsV4:(_Bool)arg2;
- (void)coreRouteHttpPostModuleId:(int)arg1 reqId:(int)arg2 url:(const char *)arg3 data:(const char *)arg4 size:(int)arg5;
- (void)coreGuideHttpPostModuleId:(int)arg1 reqId:(int)arg2 url:(const char *)arg3 data:(const char *)arg4 size:(int)arg5;
- (_Bool)diceCall_requestHttpPost:(int)arg1 moduleId:(int)arg2 reqId:(int)arg3 url:(const char *)arg4 data:(const char *)arg5 size:(int)arg6;
- (_Bool)diceCall_requestHttpGet:(int)arg1 moduleId:(int)arg2 reqId:(int)arg3 url:(const char *)arg4;
- (void)diceCall_;
- (void)diceCall_onNewRouteErrorMode:(int)arg1 routeType:(int)arg2 errorCode:(int)arg3 externData:(unsigned long long)arg4 isLocal:(_Bool)arg5 isChange:(_Bool)arg6;
- (void)diceCall_onNewRouteMode:(int)arg1 routeType:(int)arg2 pathResult:(struct IPathResult *)arg3 externData:(unsigned long long)arg4 isLocal:(_Bool)arg5;
- (_Bool)diceCall_isPlaying;
- (void)diceCall_onPlayRing:(int)arg1;
- (void)diceCall_onPlayTTS:(const struct SoundInfo *)arg1;
- (void)diceCall_onSignInfoUpdate:(const union LocSignData *)arg1;
- (void)diceCall_onSwitchParallelRoadFinished;
- (void)diceCall_onParallelRoadUpdate:(const struct LocParallelRoadInfo *)arg1;
- (void)diceCall_onLocInfoUpdate:(const struct LocInfo *)arg1;
- (void)diceCall_onUpdateCruiseFacility:(const struct CruiseFacilityInfo *)arg1 facilityCnt:(unsigned int)arg2;
- (void)diceCall_onUpdateCruiseTimeAndDist:(const struct CruiseTimeAndDist *)arg1;
- (void)diceCall_onUpdateCruiseInfo:(const struct CruiseInfo *)arg1;
- (void)diceCall_onSuggestChangePath:(unsigned int)arg1 oldPathID:(unsigned int)arg2 reason:(const struct SuggestChangePathReason *)arg3;
- (void)handleWhenNeedChangeNaviPathSuccess:(unsigned long long)arg1;
- (void)diceCall_onSelectMainPathStatus:(unsigned int)arg1 result:(int)arg2;
- (void)diceCall_onChangeNaviPath:(unsigned int)arg1;
- (_Bool)checkDeletePathWithPathIDMustInMainThread:(unsigned long long)arg1;
- (void)updateDeleteBackUpPath:(id)arg1;
- (void)diceCall_onDeletePath:(const unsigned int *)arg1 count:(unsigned int)arg2;
- (void)diceCall_onNaviStop:(int)arg1;
- (void)diceCall_onReroute:(struct IRerouteOption *)arg1;
- (void)diceCall_onUpdateSAPA:(const struct NaviFacility *)arg1 count:(unsigned int)arg2;
- (void)diceCall_onUpdateTMCCongestionInfo:(const struct NaviCongestionInfo *)arg1;
- (void)diceCall_onUpdateTMCLightBar:(const vector_586ea367 *)arg1 passedIdx:(unsigned int)arg2 dataStatus:(_Bool)arg3;
- (void)diceCall_onUpdateViaPass:(unsigned int)arg1;
- (void)diceCall_onUpdateIntervalCameraDynamicInfo:(const struct NaviIntervalCameraDynamicInfo *)arg1 count:(unsigned int)arg2;
- (void)diceCall_onShowNaviIntervalCamera:(const struct NaviIntervalCamera *)arg1 count:(unsigned int)arg2;
- (void)diceCall_onShowNaviCamera:(const struct NaviCamera *)arg1 count:(unsigned int)arg2;
- (void)diceCall_onObtainAsyncInfo:(const struct ObtainInfo *)arg1;
- (void)diceCall_onShowNaviManeuver:(const struct ManeuverInfo *)arg1;
- (void)diceCall_onHideNaviLaneInfo;
- (void)diceCall_onShowNaviLaneInfo:(const struct LaneInfo *)arg1;
- (void)diceCall_onPassLast3DSegment;
- (void)diceCall_onHideCrossImage:(int)arg1;
- (void)diceCall_onShowNaviCrossTMC:(const char *)arg1 length:(int)arg2;
- (void)diceCall_onShowCrossImage:(const struct CrossImageInfo *)arg1;
- (void)diceCall_onUpdateNaviInfo:(const struct NaviInfo *)arg1 count:(int)arg2;
- (_Bool)isValidRangeWithPathAccessor:(struct DrivePathAccessor *)arg1 startSegmentIndex:(int)arg2 startLinkIndex:(int)arg3 endSegmentIndex:(int)arg4 endLinkIndex:(int)arg5;
- (id)accordingPathToCreateDisplayRoadName:(struct DrivePathAccessor *)arg1;
- (id)accordingPathToCreateDifferentSectionInfos:(struct DrivePathAccessor *)arg1;
- (id)getNaviDisplayRoadNameAndDifferentPointSectionsWithPathIDMustInMainThread:(unsigned long long)arg1 differentPointSections:(id *)arg2;
- (void)handleInValidMultiPathsNaviMode;
- (void)upadateNaviPath:(struct NaviPath *)arg1;
- (void)setBackNaviPathWithPathResult:(struct IPathResult *)arg1;
- (void)setNaviPathResult:(struct IPathResult *)arg1 selectedRouteIndex:(int)arg2;
- (void)selectRouteWithRouteIndex:(int)arg1;
- (void)changeNaviPathToMainPath:(unsigned long long)arg1;
- (void)handleFerryInOnlineCarMode:(struct IPathResult *)arg1 routeType:(int)arg2;
- (void)updateOnlineCarHailingConfigFromLocalOrServer:(id)arg1;
- (void)setupOnlineCarHailing;
- (struct DriveLinkAccessor)getLinkAccessorWithRouteIndex:(int)arg1 segmentIndex:(int)arg2 linkIndex:(int)arg3;
- (struct DriveSegmentAccessor)getSegmentAccessorWithRouteIndex:(int)arg1 segmentIndex:(int)arg2;
- (struct IVariantPath *)getRouteWithRouteIndex:(int)arg1;
- (void)buildLink:(id)arg1 routeIndex:(int)arg2 segmentIndex:(int)arg3 linkIndex:(int)arg4;
- (long long)getLinkTrafficStatusWithRouteIndex:(int)arg1 segmentIndex:(int)arg2 linkIndex:(int)arg3;
- (int)getSegmentLinkNumberWithRouteIndex:(int)arg1 segmentIndex:(int)arg2;
- (void)buildSegment:(id)arg1 routeIndex:(int)arg2 segmentIndex:(int)arg3;
- (id)getSegmentCoordinateArrayWithRouteIndex:(int)arg1 segmentIndex:(int)arg2;
- (int)getSegmentTimeWithRouteIndex:(int)arg1 segmentIndex:(int)arg2;
- (int)getSegmentTurnIconWithRouteIndex:(int)arg1 segmentIndex:(int)arg2;
- (int)getSegmentAssitActionWithRouteIndex:(int)arg1 segmentIndex:(int)arg2;
- (int)getSegmentNumberWithRouteIndex:(int)arg1;
- (void)buildRoute:(id)arg1 routeIndex:(int)arg2;
- (id)getGroupSegmentListWithRouteIndex:(int)arg1;
- (id)getRoadFacilityWithRouteIndex:(int)arg1;
- (id)convertVehicleTypeToString:(long long)arg1;
- (id)getRouteForbiddenWithRouteIndex:(int)arg1;
- (id)getRouteTrafficStatusesWithRouteIndex:(int)arg1;
- (id)getAllRouteIndex;
- (void)setCarLocationWithCoordinate:(id)arg1 offset:(int)arg2;
- (void)setEmulatorNaviSpeed:(int)arg1;
- (_Bool)readNaviInfoManual;
- (id)getNaviGuideList;
- (void)resumeNavi;
- (void)pauseNavi;
- (void)stopNavi;
- (void)stopEmulatorNavi;
- (_Bool)startGPSNavi;
- (_Bool)startEmulatorNavi;
- (_Bool)setETARestriction:(_Bool)arg1;
- (_Bool)setVehicleInfo:(id)arg1;
- (_Bool)setNaviParam:(_Bool)arg1;
- (_Bool)setBroadcastMode:(int)arg1;
- (void)setDetectedMode:(int)arg1;
- (void)setCameraIsOpen:(_Bool)arg1;
- (void)setTrafficRadioIsOpen:(_Bool)arg1;
- (void)setClientNetType:(int)arg1;
- (_Bool)readTrafficInfoManualWithFrontDistance:(int)arg1;
- (void)processPosParmWithPointRequest:(struct POIForRequest *)arg1;
- (struct POIInfo)createEndPointWithPOIObj:(id)arg1;
- (struct POIInfo)createStartPointWithPOIType:(int)arg1 POIObj:(id)arg2;
- (struct POIForRequest)createRequestWithStartPOIType:(int)arg1 startPOIObj:(id)arg2;
- (_Bool)setRouteControlParamWithKey:(int)arg1 value:(id)arg2;
- (_Bool)reCalculateDriveRoute:(struct IRerouteOption *)arg1 isDiceAutoCall:(_Bool)arg2;
- (_Bool)reCalculateDriveRouteWithDrivingStrategy:(long long)arg1 rerouteType:(long long)arg2;
- (_Bool)calculateDriveRouteWithStart:(id)arg1 end:(id)arg2 ways:(id)arg3 drivingStrategy:(long long)arg4;
- (void)switchParallelRoad:(id)arg1;
- (void)setGPSInfoWithCurrentLocation:(id)arg1 offset:(_Bool)arg2;
- (void)initAllProperties;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

