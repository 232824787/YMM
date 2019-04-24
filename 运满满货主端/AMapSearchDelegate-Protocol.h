//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMapBusLineBaseSearchRequest, AMapBusLineSearchResponse, AMapBusStopSearchRequest, AMapBusStopSearchResponse, AMapCloudPOISearchResponse, AMapCloudSearchBaseRequest, AMapDistanceSearchRequest, AMapDistanceSearchResponse, AMapDistrictSearchRequest, AMapDistrictSearchResponse, AMapGeocodeSearchRequest, AMapGeocodeSearchResponse, AMapInputTipsSearchRequest, AMapInputTipsSearchResponse, AMapNearbySearchRequest, AMapNearbySearchResponse, AMapPOISearchBaseRequest, AMapPOISearchResponse, AMapReGeocodeSearchRequest, AMapReGeocodeSearchResponse, AMapRoadTrafficSearchBaseRequest, AMapRoadTrafficSearchResponse, AMapRoutePOISearchRequest, AMapRoutePOISearchResponse, AMapRouteSearchBaseRequest, AMapRouteSearchResponse, AMapShareSearchBaseRequest, AMapShareSearchResponse, AMapWeatherSearchRequest, AMapWeatherSearchResponse, NSError;

@protocol AMapSearchDelegate <NSObject>

@optional
- (void)onShareSearchDone:(AMapShareSearchBaseRequest *)arg1 response:(AMapShareSearchResponse *)arg2;
- (void)onCloudSearchDone:(AMapCloudSearchBaseRequest *)arg1 response:(AMapCloudPOISearchResponse *)arg2;
- (void)onNearbySearchDone:(AMapNearbySearchRequest *)arg1 response:(AMapNearbySearchResponse *)arg2;
- (void)onRoadTrafficSearchDone:(AMapRoadTrafficSearchBaseRequest *)arg1 response:(AMapRoadTrafficSearchResponse *)arg2;
- (void)onWeatherSearchDone:(AMapWeatherSearchRequest *)arg1 response:(AMapWeatherSearchResponse *)arg2;
- (void)onDistanceSearchDone:(AMapDistanceSearchRequest *)arg1 response:(AMapDistanceSearchResponse *)arg2;
- (void)onRouteSearchDone:(AMapRouteSearchBaseRequest *)arg1 response:(AMapRouteSearchResponse *)arg2;
- (void)onDistrictSearchDone:(AMapDistrictSearchRequest *)arg1 response:(AMapDistrictSearchResponse *)arg2;
- (void)onBusLineSearchDone:(AMapBusLineBaseSearchRequest *)arg1 response:(AMapBusLineSearchResponse *)arg2;
- (void)onBusStopSearchDone:(AMapBusStopSearchRequest *)arg1 response:(AMapBusStopSearchResponse *)arg2;
- (void)onInputTipsSearchDone:(AMapInputTipsSearchRequest *)arg1 response:(AMapInputTipsSearchResponse *)arg2;
- (void)onReGeocodeSearchDone:(AMapReGeocodeSearchRequest *)arg1 response:(AMapReGeocodeSearchResponse *)arg2;
- (void)onGeocodeSearchDone:(AMapGeocodeSearchRequest *)arg1 response:(AMapGeocodeSearchResponse *)arg2;
- (void)onRoutePOISearchDone:(AMapRoutePOISearchRequest *)arg1 response:(AMapRoutePOISearchResponse *)arg2;
- (void)onPOISearchDone:(AMapPOISearchBaseRequest *)arg1 response:(AMapPOISearchResponse *)arg2;
- (void)AMapSearchRequest:(id)arg1 didFailWithError:(NSError *)arg2;
@end

