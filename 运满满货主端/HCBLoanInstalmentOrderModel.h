//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HCBLoanInstalmentOrderModel : NSObject
{
    NSString *_orderNo;
    NSString *_amount;
    NSString *_amountStr;
    NSString *_payee;
    NSString *_bizType;
    NSString *_source;
    NSString *_forwardType;
    NSString *_forwardUrl;
}

@property(copy, nonatomic) NSString *forwardUrl; // @synthesize forwardUrl=_forwardUrl;
@property(copy, nonatomic) NSString *forwardType; // @synthesize forwardType=_forwardType;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *payee; // @synthesize payee=_payee;
@property(copy, nonatomic) NSString *amountStr; // @synthesize amountStr=_amountStr;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
- (void).cxx_destruct;

@end

