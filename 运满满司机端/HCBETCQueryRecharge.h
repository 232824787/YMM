//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCModel.h"

#import "HCBETCContextRender.h"

@class NSArray, NSNumber, NSString;

@interface HCBETCQueryRecharge : HCBETCModel <HCBETCContextRender>
{
    float _amount;
    NSNumber *_id;
    NSString *_cardNo;
    NSString *_orderNo;
    NSString *_deviceNo;
    NSNumber *_time;
    NSString *_date;
    NSString *_payMethod;
    unsigned long long _appChannel;
    unsigned long long _unionpayType;
    unsigned long long _status;
    NSArray *_thirdOrders;
}

@property(copy, nonatomic) NSArray *thirdOrders; // @synthesize thirdOrders=_thirdOrders;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long unionpayType; // @synthesize unionpayType=_unionpayType;
@property(nonatomic) unsigned long long appChannel; // @synthesize appChannel=_appChannel;
@property(retain, nonatomic) NSString *payMethod; // @synthesize payMethod=_payMethod;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(nonatomic) float amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *deviceNo; // @synthesize deviceNo=_deviceNo;
@property(retain, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
@property(retain, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (void)renderInContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

