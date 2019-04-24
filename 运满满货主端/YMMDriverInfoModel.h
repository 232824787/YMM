//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSNumber, NSString, YMMTruckInfoModel;

@interface YMMDriverInfoModel : YMMCommonModel
{
    _Bool _isMyCar;
    long long _isAuth;
    NSString *_avatar;
    NSString *_driverName;
    NSString *_nickName;
    NSString *_telephone;
    NSString *_registerTime;
    NSString *_alreadyAuditDay;
    NSString *_eValueDisplay;
    long long _isNameAuth;
    long long _isTruckAuth;
    long long _isUserDriverAuth;
    long long _isCarDriverAuth;
    long long _orderCount;
    long long _priceRecordCount;
    YMMTruckInfoModel *_truckInfo;
    double _lon;
    double _lat;
    NSNumber *_posTime;
    long long _city;
    NSString *_remark;
    NSString *_commonLines;
    NSString *_recommendLines;
    NSArray *_commonCitys;
    NSArray *_recommendCitys;
    NSString *_realTelephone;
    long long _tradeNum;
    NSString *_positionDescription;
    NSNumber *_driverId;
    long long _type;
    long long _isDefinitionCar;
    NSArray *_allOrderList;
    NSArray *_orderWithMe;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(retain, nonatomic) NSArray *orderWithMe; // @synthesize orderWithMe=_orderWithMe;
@property(retain, nonatomic) NSArray *allOrderList; // @synthesize allOrderList=_allOrderList;
@property(nonatomic) long long isDefinitionCar; // @synthesize isDefinitionCar=_isDefinitionCar;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *driverId; // @synthesize driverId=_driverId;
@property(retain, nonatomic) NSString *positionDescription; // @synthesize positionDescription=_positionDescription;
@property(nonatomic) long long tradeNum; // @synthesize tradeNum=_tradeNum;
@property(retain, nonatomic) NSString *realTelephone; // @synthesize realTelephone=_realTelephone;
@property(retain, nonatomic) NSArray *recommendCitys; // @synthesize recommendCitys=_recommendCitys;
@property(retain, nonatomic) NSArray *commonCitys; // @synthesize commonCitys=_commonCitys;
@property(retain, nonatomic) NSString *recommendLines; // @synthesize recommendLines=_recommendLines;
@property(retain, nonatomic) NSString *commonLines; // @synthesize commonLines=_commonLines;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) _Bool isMyCar; // @synthesize isMyCar=_isMyCar;
@property(nonatomic) long long city; // @synthesize city=_city;
@property(retain, nonatomic) NSNumber *posTime; // @synthesize posTime=_posTime;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(nonatomic) double lon; // @synthesize lon=_lon;
@property(retain, nonatomic) YMMTruckInfoModel *truckInfo; // @synthesize truckInfo=_truckInfo;
@property(nonatomic) long long priceRecordCount; // @synthesize priceRecordCount=_priceRecordCount;
@property(nonatomic) long long orderCount; // @synthesize orderCount=_orderCount;
@property(nonatomic) long long isCarDriverAuth; // @synthesize isCarDriverAuth=_isCarDriverAuth;
@property(nonatomic) long long isUserDriverAuth; // @synthesize isUserDriverAuth=_isUserDriverAuth;
@property(nonatomic) long long isTruckAuth; // @synthesize isTruckAuth=_isTruckAuth;
@property(nonatomic) long long isNameAuth; // @synthesize isNameAuth=_isNameAuth;
@property(retain, nonatomic) NSString *eValueDisplay; // @synthesize eValueDisplay=_eValueDisplay;
@property(copy, nonatomic) NSString *alreadyAuditDay; // @synthesize alreadyAuditDay=_alreadyAuditDay;
@property(copy, nonatomic) NSString *registerTime; // @synthesize registerTime=_registerTime;
@property(copy, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *driverName; // @synthesize driverName=_driverName;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) long long isAuth; // @synthesize isAuth=_isAuth;
- (void).cxx_destruct;
- (id)truckInfoDescription;
- (id)regionsWithCodes:(id)arg1;
- (id)avatarURLString;
- (_Bool)hasRecentLocation;

@end

