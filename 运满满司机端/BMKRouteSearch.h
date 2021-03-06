//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BMKSearchBase.h"

#import "SearcherDelegate.h"

@class NSString, Searcher;

@interface BMKRouteSearch : BMKSearchBase <SearcherDelegate>
{
    int _transitPolicy;
    int _drivingPolicy;
    int searchType;
    Searcher *_searcher;
    id <BMKRouteSearchDelegate> _delegate;
}

- (void).cxx_destruct;
- (double)getFolatValue:(id)arg1;
- (long long)getIntegerValue:(id)arg1;
- (void)parseLatLonPath:(id)arg1 outputStep:(id)arg2;
- (id)getBMKTimeFromDuration:(long long)arg1;
- (_Bool)parseBus2Sugs:(id)arg1 outputResult:(id)arg2;
- (_Bool)parseBus2Routes:(id)arg1 outputResult:(id)arg2;
- (long long)parseBus2RouteResult:(id)arg1 outputResult:(id)arg2;
- (void)onGetBus2RouteResult:(id)arg1;
- (struct CLLocationCoordinate2D)getCoordinateWithLatLngDic:(id)arg1;
- (int)parseIndoorRouteResult:(id)arg1 outputResult:(id)arg2;
- (void)onGetIndoorRouteResult:(id)arg1;
- (_Bool)parseRidingSug:(id)arg1 outputResult:(id)arg2;
- (_Bool)parseRidingRoutes:(id)arg1 outputResult:(id)arg2;
- (long long)parseRidingRouteResult:(id)arg1 outputResult:(id)arg2;
- (void)onGetBikeRouteResult:(id)arg1;
- (_Bool)parseCarsRouteResult:(id)arg1 outPutResult:(id)arg2;
- (_Bool)parseCarRouteResult:(id)arg1 outPutResult:(id)arg2;
- (_Bool)parseFootRouteResult:(id)arg1 outPutResult:(id)arg2;
- (_Bool)parseBusRouteResult:(id)arg1 outPutResult:(id)arg2;
- (_Bool)parseAddrListResult:(id)arg1 outPutResult:(id)arg2;
- (void)onGetAddrList:(id)arg1;
- (void)onGetFootRouteResult:(id)arg1;
- (void)onGetCarRouteResult:(id)arg1;
- (int)getStepType:(int)arg1 transitType:(int)arg2;
- (void)onGetBusRouteResult:(id)arg1;
- (_Bool)indoorRoutePlanSearch:(id)arg1;
- (_Bool)ridingSearch:(id)arg1;
- (_Bool)walkingSearch:(id)arg1;
- (_Bool)drivingSearch:(id)arg1;
- (_Bool)massTransitSearch:(id)arg1;
- (_Bool)transitSearch:(id)arg1;
- (void)onGetExceptionInfo:(long long)arg1;
- (void)setDrivingPolicy:(int)arg1;
- (int)drivingPolicy;
- (void)setTransitPolicy:(int)arg1;
- (int)transitPolicy;
@property(nonatomic) __weak id <BMKRouteSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

