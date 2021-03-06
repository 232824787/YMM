//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YMMPayOrderInfoModel : NSObject
{
    NSString *_strOrderNo;
    NSString *_strOrderId;
    double _strOrderTime;
    NSString *_strPayTitle;
    NSString *_strPaySubTitle;
    NSString *_strOrderImg;
    long long _tradeAmount;
    long long _tradeType;
    unsigned long long _bizType;
    NSString *_accountId;
    NSString *_strSign;
    NSString *_strPayStatusSign;
}

+ (id)fetchOrderInfo:(id)arg1;
@property(copy, nonatomic) NSString *strPayStatusSign; // @synthesize strPayStatusSign=_strPayStatusSign;
@property(copy, nonatomic) NSString *strSign; // @synthesize strSign=_strSign;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
@property(nonatomic) long long tradeType; // @synthesize tradeType=_tradeType;
@property(nonatomic) long long tradeAmount; // @synthesize tradeAmount=_tradeAmount;
@property(copy, nonatomic) NSString *strOrderImg; // @synthesize strOrderImg=_strOrderImg;
@property(copy, nonatomic) NSString *strPaySubTitle; // @synthesize strPaySubTitle=_strPaySubTitle;
@property(copy, nonatomic) NSString *strPayTitle; // @synthesize strPayTitle=_strPayTitle;
@property(nonatomic) double strOrderTime; // @synthesize strOrderTime=_strOrderTime;
@property(copy, nonatomic) NSString *strOrderId; // @synthesize strOrderId=_strOrderId;
@property(copy, nonatomic) NSString *strOrderNo; // @synthesize strOrderNo=_strOrderNo;
- (void).cxx_destruct;

@end

