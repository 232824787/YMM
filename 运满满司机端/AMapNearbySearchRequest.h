//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint;

@interface AMapNearbySearchRequest : AMapSearchObject
{
    AMapGeoPoint *_center;
    long long _radius;
    long long _searchType;
    long long _timeRange;
    long long _limit;
}

+ (id)ajo_mapping;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(nonatomic) long long timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) long long searchType; // @synthesize searchType=_searchType;
@property(nonatomic) long long radius; // @synthesize radius=_radius;
@property(copy, nonatomic) AMapGeoPoint *center; // @synthesize center=_center;
- (void).cxx_destruct;
- (id)init;

@end

