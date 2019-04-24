//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPublishCommonNetworkTask.h"

@class NSNumber, NSString;

@interface YMMGetFreightRateRangeTask : YMMPublishCommonNetworkTask
{
    NSString *_truckLength;
    NSString *_truckTypeList;
    NSNumber *_freightUnit;
    NSNumber *_lclCargo;
    long long _start;
    long long _end;
    NSString *_minWeight;
    NSString *_maxWeight;
    NSString *_minCapacity;
    NSString *_maxCapacity;
    long long _shipperExpectedFreightRate;
    NSString *_cargoType;
    long long _cargoId;
}

@property(nonatomic) long long cargoId; // @synthesize cargoId=_cargoId;
@property(retain, nonatomic) NSString *cargoType; // @synthesize cargoType=_cargoType;
@property(nonatomic) long long shipperExpectedFreightRate; // @synthesize shipperExpectedFreightRate=_shipperExpectedFreightRate;
@property(retain, nonatomic) NSString *maxCapacity; // @synthesize maxCapacity=_maxCapacity;
@property(retain, nonatomic) NSString *minCapacity; // @synthesize minCapacity=_minCapacity;
@property(retain, nonatomic) NSString *maxWeight; // @synthesize maxWeight=_maxWeight;
@property(retain, nonatomic) NSString *minWeight; // @synthesize minWeight=_minWeight;
@property(nonatomic) long long end; // @synthesize end=_end;
@property(nonatomic) long long start; // @synthesize start=_start;
@property(retain, nonatomic) NSNumber *lclCargo; // @synthesize lclCargo=_lclCargo;
@property(retain, nonatomic) NSNumber *freightUnit; // @synthesize freightUnit=_freightUnit;
@property(retain, nonatomic) NSString *truckTypeList; // @synthesize truckTypeList=_truckTypeList;
@property(retain, nonatomic) NSString *truckLength; // @synthesize truckLength=_truckLength;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

