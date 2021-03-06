//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString, YMMQueryCreditDriverTruckModel;

@interface YMMQueryCreditDriverModel : YMMCommonModel
{
    _Bool _isAuth;
    unsigned long long _userId;
    NSString *_avatar;
    NSString *_driverName;
    NSString *_nickName;
    NSString *_telephone;
    NSString *_alreadyAuditDay;
    NSString *_truckInfo;
    NSString *_truckNumber;
    YMMQueryCreditDriverTruckModel *_driverTruck;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(retain, nonatomic) YMMQueryCreditDriverTruckModel *driverTruck; // @synthesize driverTruck=_driverTruck;
@property(copy, nonatomic) NSString *truckNumber; // @synthesize truckNumber=_truckNumber;
@property(copy, nonatomic) NSString *truckInfo; // @synthesize truckInfo=_truckInfo;
@property(copy, nonatomic) NSString *alreadyAuditDay; // @synthesize alreadyAuditDay=_alreadyAuditDay;
@property(copy, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *driverName; // @synthesize driverName=_driverName;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) _Bool isAuth; // @synthesize isAuth=_isAuth;
@property(nonatomic) unsigned long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

