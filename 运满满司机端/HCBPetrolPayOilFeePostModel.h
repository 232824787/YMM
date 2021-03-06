//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBPetrolInsuranceModel, NSDictionary, NSString;

@interface HCBPetrolPayOilFeePostModel : NSObject
{
    _Bool _isAgreement;
    _Bool _enablePay;
    NSString *_orderNo;
    NSString *_gasStationName;
    NSString *_gasStationId;
    NSString *_oilCode;
    NSString *_oilName;
    NSString *_oilGunNo;
    NSString *_oilGunName;
    double _discountRate;
    NSString *_discountRateStr;
    NSString *_oilOriginAmount;
    NSString *_goodsAmount;
    NSString *_oilOriginAmountFen;
    NSString *_goodsAmountFen;
    NSString *_energySourceType;
    long long _payChannel;
    NSDictionary *_defaultOilAndGunDic;
    HCBPetrolInsuranceModel *_insuranceInfo;
}

@property(nonatomic) _Bool enablePay; // @synthesize enablePay=_enablePay;
@property(retain, nonatomic) HCBPetrolInsuranceModel *insuranceInfo; // @synthesize insuranceInfo=_insuranceInfo;
@property(retain, nonatomic) NSDictionary *defaultOilAndGunDic; // @synthesize defaultOilAndGunDic=_defaultOilAndGunDic;
@property(nonatomic) _Bool isAgreement; // @synthesize isAgreement=_isAgreement;
@property(nonatomic) long long payChannel; // @synthesize payChannel=_payChannel;
@property(copy, nonatomic) NSString *energySourceType; // @synthesize energySourceType=_energySourceType;
@property(copy, nonatomic) NSString *goodsAmountFen; // @synthesize goodsAmountFen=_goodsAmountFen;
@property(copy, nonatomic) NSString *oilOriginAmountFen; // @synthesize oilOriginAmountFen=_oilOriginAmountFen;
@property(copy, nonatomic) NSString *goodsAmount; // @synthesize goodsAmount=_goodsAmount;
@property(copy, nonatomic) NSString *oilOriginAmount; // @synthesize oilOriginAmount=_oilOriginAmount;
@property(copy, nonatomic) NSString *discountRateStr; // @synthesize discountRateStr=_discountRateStr;
@property(nonatomic) double discountRate; // @synthesize discountRate=_discountRate;
@property(copy, nonatomic) NSString *oilGunName; // @synthesize oilGunName=_oilGunName;
@property(copy, nonatomic) NSString *oilGunNo; // @synthesize oilGunNo=_oilGunNo;
@property(copy, nonatomic) NSString *oilName; // @synthesize oilName=_oilName;
@property(copy, nonatomic) NSString *oilCode; // @synthesize oilCode=_oilCode;
@property(copy, nonatomic) NSString *gasStationId; // @synthesize gasStationId=_gasStationId;
@property(copy, nonatomic) NSString *gasStationName; // @synthesize gasStationName=_gasStationName;
@property(copy, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
- (void).cxx_destruct;
- (id)checkAgreement;
- (id)checkOilOriginAmount;
- (id)checkOilCodeAndOilGun;
- (void)setupOilCodeAndOilGunWithOilCode:(id)arg1 OilGun:(id)arg2;

@end

