//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface YMMBigInsuranceStatusModel : YMMCommonModel
{
    int _showBtn;
    long long _minGoodsPrice;
    long long _maxInsuranceAmount;
    NSString *_insuranceTip;
    NSString *_insuranceProtocol;
    long long _maxGoodsPrice;
    NSString *_cargoInsuranceNotice;
}

@property(retain, nonatomic) NSString *cargoInsuranceNotice; // @synthesize cargoInsuranceNotice=_cargoInsuranceNotice;
@property(nonatomic) long long maxGoodsPrice; // @synthesize maxGoodsPrice=_maxGoodsPrice;
@property(retain, nonatomic) NSString *insuranceProtocol; // @synthesize insuranceProtocol=_insuranceProtocol;
@property(retain, nonatomic) NSString *insuranceTip; // @synthesize insuranceTip=_insuranceTip;
@property(nonatomic) long long maxInsuranceAmount; // @synthesize maxInsuranceAmount=_maxInsuranceAmount;
@property(nonatomic) long long minGoodsPrice; // @synthesize minGoodsPrice=_minGoodsPrice;
@property(nonatomic) int showBtn; // @synthesize showBtn=_showBtn;
- (void).cxx_destruct;

@end

