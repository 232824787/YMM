//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMapPOISearchBaseRequest, AMapPOISearchResponse, MAMapView, NSError;

@protocol HCBNaviChoiceAddressBaseViewDelegate <NSObject>
- (void)HCB_mapView:(MAMapView *)arg1 mapDidMoveByUser:(_Bool)arg2;
- (void)HCB_AMapSearchRequest:(id)arg1 didFailWithError:(NSError *)arg2;
- (void)HCB_onPOISearchDone:(AMapPOISearchBaseRequest *)arg1 response:(AMapPOISearchResponse *)arg2;
@end

