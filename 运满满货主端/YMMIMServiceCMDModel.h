//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSString;

@interface YMMIMServiceCMDModel : YMMCommonModel
{
    NSString *_text;
    long long _waitNum;
    long long _time;
    long long _serviceTicketStatus;
    NSString *_breviaryContent;
    long long _type;
    long long _cargoId;
    long long _orderId;
    long long _driverId;
    long long _shipperId;
    long long _cargoStatus;
}

@property(nonatomic) long long cargoStatus; // @synthesize cargoStatus=_cargoStatus;
@property(nonatomic) long long shipperId; // @synthesize shipperId=_shipperId;
@property(nonatomic) long long driverId; // @synthesize driverId=_driverId;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
@property(nonatomic) long long cargoId; // @synthesize cargoId=_cargoId;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *breviaryContent; // @synthesize breviaryContent=_breviaryContent;
@property(nonatomic) long long serviceTicketStatus; // @synthesize serviceTicketStatus=_serviceTicketStatus;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) long long waitNum; // @synthesize waitNum=_waitNum;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

