//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface YMMGetInsurancePriceModel : YMMCommonModel
{
    int _canGetInsuranceFlag;
    long long _insurancePrice;
    NSString *_insuranceRate;
    NSString *_getInsuranceDesc;
}

@property(retain, nonatomic) NSString *getInsuranceDesc; // @synthesize getInsuranceDesc=_getInsuranceDesc;
@property(retain, nonatomic) NSString *insuranceRate; // @synthesize insuranceRate=_insuranceRate;
@property(nonatomic) long long insurancePrice; // @synthesize insurancePrice=_insurancePrice;
@property(nonatomic) int canGetInsuranceFlag; // @synthesize canGetInsuranceFlag=_canGetInsuranceFlag;
- (void).cxx_destruct;

@end

