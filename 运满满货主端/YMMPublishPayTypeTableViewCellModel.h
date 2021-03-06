//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSNumber, NSString;

@interface YMMPublishPayTypeTableViewCellModel : YMMCommonModel
{
    unsigned long long _dealModel;
    unsigned long long _cargoSender;
    unsigned long long _needReceiptQuittance;
    NSString *_companyPayTypeText;
    unsigned long long _payMethodByEnum;
    NSNumber *_prepayCharge;
    NSNumber *_receiptCharge;
    unsigned long long _prepayType;
    unsigned long long _needReceipt;
    long long _prepayWithinDays;
    long long _deliveryPayWithinDays;
    long long _receiptPayWithinDays;
}

@property(nonatomic) long long receiptPayWithinDays; // @synthesize receiptPayWithinDays=_receiptPayWithinDays;
@property(nonatomic) long long deliveryPayWithinDays; // @synthesize deliveryPayWithinDays=_deliveryPayWithinDays;
@property(nonatomic) long long prepayWithinDays; // @synthesize prepayWithinDays=_prepayWithinDays;
@property(nonatomic) unsigned long long needReceipt; // @synthesize needReceipt=_needReceipt;
@property(nonatomic) unsigned long long prepayType; // @synthesize prepayType=_prepayType;
@property(retain, nonatomic) NSNumber *receiptCharge; // @synthesize receiptCharge=_receiptCharge;
@property(retain, nonatomic) NSNumber *prepayCharge; // @synthesize prepayCharge=_prepayCharge;
@property(nonatomic) unsigned long long payMethodByEnum; // @synthesize payMethodByEnum=_payMethodByEnum;
@property(copy, nonatomic) NSString *companyPayTypeText; // @synthesize companyPayTypeText=_companyPayTypeText;
@property(nonatomic) unsigned long long needReceiptQuittance; // @synthesize needReceiptQuittance=_needReceiptQuittance;
@property(nonatomic) unsigned long long cargoSender; // @synthesize cargoSender=_cargoSender;
@property(nonatomic) unsigned long long dealModel; // @synthesize dealModel=_dealModel;
- (void).cxx_destruct;

@end

