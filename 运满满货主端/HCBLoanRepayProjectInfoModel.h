//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface HCBLoanRepayProjectInfoModel : NSObject
{
    NSString *_goodsDescription;
    NSString *_loanProjNo;
    double _orderAddTime;
    NSString *_repayOrderNo;
    NSString *_repayWay;
    long long _repaySchedId;
    double _currentPrincipal;
    NSString *_currentPrincipalStr;
    double _serviceFee;
    NSString *_serviceFeeStr;
    double _totalAmount;
    NSString *_totalAmountStr;
    double _paidTotalAmount;
    NSString *_paidTotalAmountStr;
    double _unpaidtotalAmount;
    NSString *_unpaidtotalAmountStr;
    NSArray *_installmentInfos;
}

+ (id)modelContainerPropertyGenericClass;
@property(copy, nonatomic) NSArray *installmentInfos; // @synthesize installmentInfos=_installmentInfos;
@property(copy, nonatomic) NSString *unpaidtotalAmountStr; // @synthesize unpaidtotalAmountStr=_unpaidtotalAmountStr;
@property(nonatomic) double unpaidtotalAmount; // @synthesize unpaidtotalAmount=_unpaidtotalAmount;
@property(copy, nonatomic) NSString *paidTotalAmountStr; // @synthesize paidTotalAmountStr=_paidTotalAmountStr;
@property(nonatomic) double paidTotalAmount; // @synthesize paidTotalAmount=_paidTotalAmount;
@property(copy, nonatomic) NSString *totalAmountStr; // @synthesize totalAmountStr=_totalAmountStr;
@property(nonatomic) double totalAmount; // @synthesize totalAmount=_totalAmount;
@property(copy, nonatomic) NSString *serviceFeeStr; // @synthesize serviceFeeStr=_serviceFeeStr;
@property(nonatomic) double serviceFee; // @synthesize serviceFee=_serviceFee;
@property(copy, nonatomic) NSString *currentPrincipalStr; // @synthesize currentPrincipalStr=_currentPrincipalStr;
@property(nonatomic) double currentPrincipal; // @synthesize currentPrincipal=_currentPrincipal;
@property(nonatomic) long long repaySchedId; // @synthesize repaySchedId=_repaySchedId;
@property(copy, nonatomic) NSString *repayWay; // @synthesize repayWay=_repayWay;
@property(copy, nonatomic) NSString *repayOrderNo; // @synthesize repayOrderNo=_repayOrderNo;
@property(nonatomic) double orderAddTime; // @synthesize orderAddTime=_orderAddTime;
@property(copy, nonatomic) NSString *loanProjNo; // @synthesize loanProjNo=_loanProjNo;
@property(copy, nonatomic) NSString *goodsDescription; // @synthesize goodsDescription=_goodsDescription;
- (void).cxx_destruct;

@end

