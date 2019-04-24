//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPublishCommonNetworkTask.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface YMMForecastPriceForNewCargoTask : YMMPublishCommonNetworkTask
{
    NSString *_truckLength;
    NSString *_truckTypeList;
    NSString *_minWeight;
    NSString *_maxWeight;
    NSString *_minCapacity;
    NSString *_maxCapacity;
    NSString *_cargoType;
    NSNumber *_lclCargo;
    NSNumber *_freightUnit;
    long long _loadingMethod;
    long long _start;
    long long _end;
    NSNumber *_loadingTime;
    NSDictionary *_startCoordinate;
    NSDictionary *_endCoordinate;
    NSString *_cargoName;
    NSNumber *_unloadingDateTime;
    NSString *_loadAddress;
    NSString *_unloadingAdress;
    NSString *_packingType;
    NSString *_payMethod;
    long long _needReturnDeposit;
    NSNumber *_deposit;
    long long _needReceipt;
    NSArray *_commentTagList;
    NSString *_goodsDescription;
    long long _beyondCarriageSpecs;
    NSString *_factCarriageLength;
    NSString *_factCarriageHeight;
    NSString *_factCarriageWidth;
    long long _containThirdLevelTime;
    NSString *_secondCategoryId;
    NSString *_secondCategoryName;
    NSString *_firstCategoryId;
    NSString *_firstCategoryName;
    NSString *_traceId;
}

@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(copy, nonatomic) NSString *firstCategoryName; // @synthesize firstCategoryName=_firstCategoryName;
@property(copy, nonatomic) NSString *firstCategoryId; // @synthesize firstCategoryId=_firstCategoryId;
@property(copy, nonatomic) NSString *secondCategoryName; // @synthesize secondCategoryName=_secondCategoryName;
@property(copy, nonatomic) NSString *secondCategoryId; // @synthesize secondCategoryId=_secondCategoryId;
@property(nonatomic) long long containThirdLevelTime; // @synthesize containThirdLevelTime=_containThirdLevelTime;
@property(copy, nonatomic) NSString *factCarriageWidth; // @synthesize factCarriageWidth=_factCarriageWidth;
@property(copy, nonatomic) NSString *factCarriageHeight; // @synthesize factCarriageHeight=_factCarriageHeight;
@property(copy, nonatomic) NSString *factCarriageLength; // @synthesize factCarriageLength=_factCarriageLength;
@property(nonatomic) long long beyondCarriageSpecs; // @synthesize beyondCarriageSpecs=_beyondCarriageSpecs;
@property(copy, nonatomic) NSString *goodsDescription; // @synthesize goodsDescription=_goodsDescription;
@property(retain, nonatomic) NSArray *commentTagList; // @synthesize commentTagList=_commentTagList;
@property(nonatomic) long long needReceipt; // @synthesize needReceipt=_needReceipt;
@property(retain, nonatomic) NSNumber *deposit; // @synthesize deposit=_deposit;
@property(nonatomic) long long needReturnDeposit; // @synthesize needReturnDeposit=_needReturnDeposit;
@property(copy, nonatomic) NSString *payMethod; // @synthesize payMethod=_payMethod;
@property(copy, nonatomic) NSString *packingType; // @synthesize packingType=_packingType;
@property(copy, nonatomic) NSString *unloadingAdress; // @synthesize unloadingAdress=_unloadingAdress;
@property(copy, nonatomic) NSString *loadAddress; // @synthesize loadAddress=_loadAddress;
@property(retain, nonatomic) NSNumber *unloadingDateTime; // @synthesize unloadingDateTime=_unloadingDateTime;
@property(copy, nonatomic) NSString *cargoName; // @synthesize cargoName=_cargoName;
@property(retain, nonatomic) NSDictionary *endCoordinate; // @synthesize endCoordinate=_endCoordinate;
@property(retain, nonatomic) NSDictionary *startCoordinate; // @synthesize startCoordinate=_startCoordinate;
@property(retain, nonatomic) NSNumber *loadingTime; // @synthesize loadingTime=_loadingTime;
@property(nonatomic) long long end; // @synthesize end=_end;
@property(nonatomic) long long start; // @synthesize start=_start;
@property(nonatomic) long long loadingMethod; // @synthesize loadingMethod=_loadingMethod;
@property(retain, nonatomic) NSNumber *freightUnit; // @synthesize freightUnit=_freightUnit;
@property(retain, nonatomic) NSNumber *lclCargo; // @synthesize lclCargo=_lclCargo;
@property(copy, nonatomic) NSString *cargoType; // @synthesize cargoType=_cargoType;
@property(copy, nonatomic) NSString *maxCapacity; // @synthesize maxCapacity=_maxCapacity;
@property(copy, nonatomic) NSString *minCapacity; // @synthesize minCapacity=_minCapacity;
@property(copy, nonatomic) NSString *maxWeight; // @synthesize maxWeight=_maxWeight;
@property(copy, nonatomic) NSString *minWeight; // @synthesize minWeight=_minWeight;
@property(copy, nonatomic) NSString *truckTypeList; // @synthesize truckTypeList=_truckTypeList;
@property(copy, nonatomic) NSString *truckLength; // @synthesize truckLength=_truckLength;
- (void).cxx_destruct;
- (id)ymm_propertiesMap;
- (Class)ymm_responseModelClass;
- (id)ymm_networkAPIPath;

@end

