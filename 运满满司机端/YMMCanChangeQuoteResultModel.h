//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSNumber, NSString, YMMQuoteHistoryModel, YMMQuoteIntervalModel;

@interface YMMCanChangeQuoteResultModel : YMMCommonModel
{
    long long _continueModifyBargain;
    YMMQuoteHistoryModel *_carrierBargainOrderItem;
    NSNumber *_maxIntervalAmount;
    NSNumber *_minIntervalAmount;
    long long _bargainTimeLimitValue;
    NSString *_bargainTimeLimitTips;
    long long _isNeedInterval;
    long long _bargainFieldNum;
    NSString *_bargainMoneyUnit;
    NSString *_bargainUnit;
    long long _bargainUnitLMinLimit;
    long long _bargainUnitLMaxLimit;
    NSString *_bargainUnitExceedDocumet;
    NSString *_bargainDocument;
    long long _bargainUnitPerMinLimit;
    long long _bargainUnitPerMaxLimit;
    NSString *_bargainUnitPerExceedDocument;
    NSString *_bargainMoneyLowDocument;
    NSString *_bargainMoneyHighDocument;
    long long _bargainUnitCode;
    YMMQuoteIntervalModel *_quoteIntervalModel;
}

@property(retain, nonatomic) YMMQuoteIntervalModel *quoteIntervalModel; // @synthesize quoteIntervalModel=_quoteIntervalModel;
@property(nonatomic) long long bargainUnitCode; // @synthesize bargainUnitCode=_bargainUnitCode;
@property(copy, nonatomic) NSString *bargainMoneyHighDocument; // @synthesize bargainMoneyHighDocument=_bargainMoneyHighDocument;
@property(copy, nonatomic) NSString *bargainMoneyLowDocument; // @synthesize bargainMoneyLowDocument=_bargainMoneyLowDocument;
@property(copy, nonatomic) NSString *bargainUnitPerExceedDocument; // @synthesize bargainUnitPerExceedDocument=_bargainUnitPerExceedDocument;
@property(nonatomic) long long bargainUnitPerMaxLimit; // @synthesize bargainUnitPerMaxLimit=_bargainUnitPerMaxLimit;
@property(nonatomic) long long bargainUnitPerMinLimit; // @synthesize bargainUnitPerMinLimit=_bargainUnitPerMinLimit;
@property(copy, nonatomic) NSString *bargainDocument; // @synthesize bargainDocument=_bargainDocument;
@property(copy, nonatomic) NSString *bargainUnitExceedDocumet; // @synthesize bargainUnitExceedDocumet=_bargainUnitExceedDocumet;
@property(nonatomic) long long bargainUnitLMaxLimit; // @synthesize bargainUnitLMaxLimit=_bargainUnitLMaxLimit;
@property(nonatomic) long long bargainUnitLMinLimit; // @synthesize bargainUnitLMinLimit=_bargainUnitLMinLimit;
@property(copy, nonatomic) NSString *bargainUnit; // @synthesize bargainUnit=_bargainUnit;
@property(copy, nonatomic) NSString *bargainMoneyUnit; // @synthesize bargainMoneyUnit=_bargainMoneyUnit;
@property(nonatomic) long long bargainFieldNum; // @synthesize bargainFieldNum=_bargainFieldNum;
@property(nonatomic) long long isNeedInterval; // @synthesize isNeedInterval=_isNeedInterval;
@property(copy, nonatomic) NSString *bargainTimeLimitTips; // @synthesize bargainTimeLimitTips=_bargainTimeLimitTips;
@property(nonatomic) long long bargainTimeLimitValue; // @synthesize bargainTimeLimitValue=_bargainTimeLimitValue;
@property(retain, nonatomic) NSNumber *minIntervalAmount; // @synthesize minIntervalAmount=_minIntervalAmount;
@property(retain, nonatomic) NSNumber *maxIntervalAmount; // @synthesize maxIntervalAmount=_maxIntervalAmount;
@property(retain, nonatomic) YMMQuoteHistoryModel *carrierBargainOrderItem; // @synthesize carrierBargainOrderItem=_carrierBargainOrderItem;
@property(nonatomic) long long continueModifyBargain; // @synthesize continueModifyBargain=_continueModifyBargain;
- (void).cxx_destruct;

@end

