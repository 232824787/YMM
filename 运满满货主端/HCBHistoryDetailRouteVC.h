//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBTruckNaviBaseViewController.h"

#import "MAMapViewDelegate.h"

@class HCBDetailRouteBottomView, HCBHistoryRouteModel, MAMapView, MAPolyline, NSMutableArray, NSOperation, NSString;

@interface HCBHistoryDetailRouteVC : HCBTruckNaviBaseViewController <MAMapViewDelegate>
{
    HCBHistoryRouteModel *_historyRouteModel;
    MAMapView *_mapView;
    NSMutableArray *_routePointArr;
    MAPolyline *_commonPolyline;
    HCBDetailRouteBottomView *_bottomView;
    NSMutableArray *_MATraceLocationsArray;
    NSMutableArray *_MATracePointsArray;
    NSOperation *_queryOperation;
    NSMutableArray *_processedOverlays;
}

@property(retain, nonatomic) NSMutableArray *processedOverlays; // @synthesize processedOverlays=_processedOverlays;
@property(retain, nonatomic) NSOperation *queryOperation; // @synthesize queryOperation=_queryOperation;
@property(retain, nonatomic) NSMutableArray *MATracePointsArray; // @synthesize MATracePointsArray=_MATracePointsArray;
@property(retain, nonatomic) NSMutableArray *MATraceLocationsArray; // @synthesize MATraceLocationsArray=_MATraceLocationsArray;
@property(retain, nonatomic) HCBDetailRouteBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) MAPolyline *commonPolyline; // @synthesize commonPolyline=_commonPolyline;
@property(retain, nonatomic) NSMutableArray *routePointArr; // @synthesize routePointArr=_routePointArr;
@property(retain, nonatomic) MAMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) HCBHistoryRouteModel *historyRouteModel; // @synthesize historyRouteModel=_historyRouteModel;
- (void).cxx_destruct;
- (id)setupPVCurrentPageName;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)fetchDriverInfo;
- (void)showPolylineWithTrackPoints:(id)arg1;
- (void)fetchRouteDetail;
- (id)makePolyLineWith:(id)arg1;
- (void)addSubTrace:(id)arg1 toMapView:(id)arg2;
- (void)addFullTrace:(id)arg1 toMapView:(id)arg2;
- (void)startTrajectoryCorrection;
- (void)showRoute;
- (void)initMapView;
- (void)setupView;
- (void)shareRoute;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

