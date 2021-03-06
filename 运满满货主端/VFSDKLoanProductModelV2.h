//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseModelObject.h"

@class NSString;

@interface VFSDKLoanProductModelV2 : VFSDKBaseModelObject
{
    NSString *_couponNo;
    NSString *_couponName;
    NSString *_couponBackgroundColor;
    NSString *_couponType;
    NSString *_discountContent;
    NSString *_interest;
    NSString *_interestCycle;
    NSString *_interestRate;
    NSString *_interestType;
    NSString *_originalInterest;
    NSString *_originalInterestRate;
    NSString *_productId;
    NSString *_productCode;
    NSString *_productName;
    NSString *_term;
    NSString *_isSms;
    NSString *_loanFees;
    NSString *_monthFees;
    NSString *_totalRepayAmountStr;
}

@property(copy, nonatomic) NSString *totalRepayAmountStr; // @synthesize totalRepayAmountStr=_totalRepayAmountStr;
@property(copy, nonatomic) NSString *monthFees; // @synthesize monthFees=_monthFees;
@property(copy, nonatomic) NSString *loanFees; // @synthesize loanFees=_loanFees;
@property(copy, nonatomic) NSString *isSms; // @synthesize isSms=_isSms;
@property(copy, nonatomic) NSString *term; // @synthesize term=_term;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(copy, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *originalInterestRate; // @synthesize originalInterestRate=_originalInterestRate;
@property(copy, nonatomic) NSString *originalInterest; // @synthesize originalInterest=_originalInterest;
@property(copy, nonatomic) NSString *interestType; // @synthesize interestType=_interestType;
@property(copy, nonatomic) NSString *interestRate; // @synthesize interestRate=_interestRate;
@property(copy, nonatomic) NSString *interestCycle; // @synthesize interestCycle=_interestCycle;
@property(copy, nonatomic) NSString *interest; // @synthesize interest=_interest;
@property(copy, nonatomic) NSString *discountContent; // @synthesize discountContent=_discountContent;
@property(copy, nonatomic) NSString *couponType; // @synthesize couponType=_couponType;
@property(copy, nonatomic) NSString *couponBackgroundColor; // @synthesize couponBackgroundColor=_couponBackgroundColor;
@property(copy, nonatomic) NSString *couponName; // @synthesize couponName=_couponName;
@property(copy, nonatomic) NSString *couponNo; // @synthesize couponNo=_couponNo;
- (void).cxx_destruct;
- (id)attributeMapDictionary;

@end

