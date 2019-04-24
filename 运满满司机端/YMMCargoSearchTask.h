//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCargoCommonNetworkTask.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface YMMCargoSearchTask : YMMCargoCommonNetworkTask
{
    NSString *_startList;
    NSString *_endList;
    NSNumber *_onlyLclCargo;
    NSNumber *_onlySecurityTran;
    NSString *_truckLengthList;
    NSString *_truckLengthInterval;
    NSString *_truckTypeList;
    NSNumber *_weightRange;
    NSString *_rangeTruckWeight;
    NSNumber *_before;
    NSNumber *_after;
    long long _count;
    NSNumber *_totalCount;
    NSString *_recommendCargoFlag;
    long long _nearbyFlag;
    NSNumber *_appClientId;
    NSString *_visitSummary;
    NSString *_orderBy;
    NSString *_cargoTagList;
    NSDictionary *_location;
    unsigned long long _vcType;
    long long _nearRange;
    NSArray *_transitRangeList;
    NSString *_loadDateTimeType;
    NSString *_cargoTypeList;
    NSString *_cargoCategoryList;
    long long _nearRangeOfEnd;
    NSDictionary *_backHaulLocation;
}

@property(retain, nonatomic) NSDictionary *backHaulLocation; // @synthesize backHaulLocation=_backHaulLocation;
@property(nonatomic) long long nearRangeOfEnd; // @synthesize nearRangeOfEnd=_nearRangeOfEnd;
@property(copy, nonatomic) NSString *cargoCategoryList; // @synthesize cargoCategoryList=_cargoCategoryList;
@property(copy, nonatomic) NSString *cargoTypeList; // @synthesize cargoTypeList=_cargoTypeList;
@property(copy, nonatomic) NSString *loadDateTimeType; // @synthesize loadDateTimeType=_loadDateTimeType;
@property(retain, nonatomic) NSArray *transitRangeList; // @synthesize transitRangeList=_transitRangeList;
@property(nonatomic) long long nearRange; // @synthesize nearRange=_nearRange;
@property(nonatomic) unsigned long long vcType; // @synthesize vcType=_vcType;
@property(retain, nonatomic) NSDictionary *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *cargoTagList; // @synthesize cargoTagList=_cargoTagList;
@property(copy, nonatomic) NSString *orderBy; // @synthesize orderBy=_orderBy;
@property(copy, nonatomic) NSString *visitSummary; // @synthesize visitSummary=_visitSummary;
@property(retain, nonatomic) NSNumber *appClientId; // @synthesize appClientId=_appClientId;
@property(nonatomic) long long nearbyFlag; // @synthesize nearbyFlag=_nearbyFlag;
@property(copy, nonatomic) NSString *recommendCargoFlag; // @synthesize recommendCargoFlag=_recommendCargoFlag;
@property(retain, nonatomic) NSNumber *totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *after; // @synthesize after=_after;
@property(retain, nonatomic) NSNumber *before; // @synthesize before=_before;
@property(copy, nonatomic) NSString *rangeTruckWeight; // @synthesize rangeTruckWeight=_rangeTruckWeight;
@property(retain, nonatomic) NSNumber *weightRange; // @synthesize weightRange=_weightRange;
@property(retain, nonatomic) NSString *truckTypeList; // @synthesize truckTypeList=_truckTypeList;
@property(copy, nonatomic) NSString *truckLengthInterval; // @synthesize truckLengthInterval=_truckLengthInterval;
@property(retain, nonatomic) NSString *truckLengthList; // @synthesize truckLengthList=_truckLengthList;
@property(retain, nonatomic) NSNumber *onlySecurityTran; // @synthesize onlySecurityTran=_onlySecurityTran;
@property(retain, nonatomic) NSNumber *onlyLclCargo; // @synthesize onlyLclCargo=_onlyLclCargo;
@property(copy, nonatomic) NSString *endList; // @synthesize endList=_endList;
@property(retain, nonatomic) NSString *startList; // @synthesize startList=_startList;
- (void).cxx_destruct;
- (id)ymm_handleResponseObject:(id)arg1;
- (id)ymm_requestHeader;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;
- (id)ymm_networkAPIDomain;
- (id)ymm_requestIgnoreProperties;

@end

