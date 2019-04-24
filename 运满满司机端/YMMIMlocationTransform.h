//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YMMIMlocationTransform : NSObject
{
    double _latitude;
    double _longitude;
}

+ (_Bool)isLocationOutOfChina:(struct CLLocationCoordinate2D)arg1;
+ (struct CLLocationCoordinate2D)transformFromGCJToWGS:(struct CLLocationCoordinate2D)arg1;
+ (struct CLLocationCoordinate2D)transformFromBaiduToGCJ:(struct CLLocationCoordinate2D)arg1;
+ (struct CLLocationCoordinate2D)transformFromGCJToBaidu:(struct CLLocationCoordinate2D)arg1;
+ (double)transformLonWithX:(double)arg1 withY:(double)arg2;
+ (double)transformLatWithX:(double)arg1 withY:(double)arg2;
+ (struct CLLocationCoordinate2D)transformFromWGSToGCJ:(struct CLLocationCoordinate2D)arg1;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (id)transformFromBDToGPS;
- (id)transformFromGDToGPS;
- (id)transformFromBDToGD;
- (id)transformFromGDToBD;
- (id)transformFromGPSToGD;
- (id)initWithLatitude:(double)arg1 andLongitude:(double)arg2;

@end

