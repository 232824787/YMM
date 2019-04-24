//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSArray;

@interface SHNearTruckTask : YMMCommonNetworkTask
{
    float _truckLength;
    long long _start;
    long long _end;
    long long _travelType;
    long long _before;
    long long _after;
    long long _count;
    long long _truckType;
    double _lat;
    double _lon;
    NSArray *_truckLengthes;
    NSArray *_truckTypes;
}

@property(retain, nonatomic) NSArray *truckTypes; // @synthesize truckTypes=_truckTypes;
@property(retain, nonatomic) NSArray *truckLengthes; // @synthesize truckLengthes=_truckLengthes;
@property(nonatomic) double lon; // @synthesize lon=_lon;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(nonatomic) float truckLength; // @synthesize truckLength=_truckLength;
@property(nonatomic) long long truckType; // @synthesize truckType=_truckType;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long after; // @synthesize after=_after;
@property(nonatomic) long long before; // @synthesize before=_before;
@property(nonatomic) long long travelType; // @synthesize travelType=_travelType;
@property(nonatomic) long long end; // @synthesize end=_end;
@property(nonatomic) long long start; // @synthesize start=_start;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

