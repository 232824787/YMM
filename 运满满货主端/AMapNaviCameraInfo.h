//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AMapNaviIntervalCameraDynamicInfo, AMapNaviPoint;

@interface AMapNaviCameraInfo : NSObject <NSCopying>
{
    long long _cameraType;
    long long _cameraSpeed;
    AMapNaviPoint *_coordinate;
    long long _distance;
    AMapNaviIntervalCameraDynamicInfo *_intervalCameraDynamicInfo;
}

@property(retain, nonatomic) AMapNaviIntervalCameraDynamicInfo *intervalCameraDynamicInfo; // @synthesize intervalCameraDynamicInfo=_intervalCameraDynamicInfo;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(retain, nonatomic) AMapNaviPoint *coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) long long cameraSpeed; // @synthesize cameraSpeed=_cameraSpeed;
@property(nonatomic) long long cameraType; // @synthesize cameraType=_cameraType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

