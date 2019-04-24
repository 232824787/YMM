//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HCBPetrolOrderModel : NSObject
{
    float _oilOriginalAmount;
    NSString *_orderNo;
    NSString *_payAmount;
    NSString *_savePrice;
    NSString *_gasStationName;
    NSString *_address;
    NSString *_orderStatusDes;
    NSString *_payChannelDes;
    NSString *_gasStationId;
    NSString *_oilCode;
    NSString *_oilCodeDes;
    double _createTime;
    long long _payChannel;
    long long _orderStatus;
    long long _refundedAmount;
    long long _refundingAmount;
    long long _evaluateStatus;
    long long _energySourceType;
}

@property(nonatomic) long long energySourceType; // @synthesize energySourceType=_energySourceType;
@property(nonatomic) long long evaluateStatus; // @synthesize evaluateStatus=_evaluateStatus;
@property(nonatomic) long long refundingAmount; // @synthesize refundingAmount=_refundingAmount;
@property(nonatomic) long long refundedAmount; // @synthesize refundedAmount=_refundedAmount;
@property(nonatomic) long long orderStatus; // @synthesize orderStatus=_orderStatus;
@property(nonatomic) long long payChannel; // @synthesize payChannel=_payChannel;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(nonatomic) float oilOriginalAmount; // @synthesize oilOriginalAmount=_oilOriginalAmount;
@property(copy, nonatomic) NSString *oilCodeDes; // @synthesize oilCodeDes=_oilCodeDes;
@property(copy, nonatomic) NSString *oilCode; // @synthesize oilCode=_oilCode;
@property(copy, nonatomic) NSString *gasStationId; // @synthesize gasStationId=_gasStationId;
@property(copy, nonatomic) NSString *payChannelDes; // @synthesize payChannelDes=_payChannelDes;
@property(copy, nonatomic) NSString *orderStatusDes; // @synthesize orderStatusDes=_orderStatusDes;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *gasStationName; // @synthesize gasStationName=_gasStationName;
@property(copy, nonatomic) NSString *savePrice; // @synthesize savePrice=_savePrice;
@property(copy, nonatomic) NSString *payAmount; // @synthesize payAmount=_payAmount;
@property(copy, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
- (void).cxx_destruct;

@end

