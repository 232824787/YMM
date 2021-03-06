//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSNumber, NSString, YMMChatCardInfo;

@interface YMMChatTopBarInfo : YMMCommonModel
{
    NSNumber *_cargoId;
    NSNumber *_orderId;
    NSString *_startCity;
    NSString *_endCity;
    NSString *_location;
    NSString *_truck;
    NSString *_wayStatusDesc;
    NSString *_depositStatusDesc;
    NSString *_freightStatusDesc;
    NSString *_contractStatusDesc;
    YMMChatCardInfo *_shipperCard;
    YMMChatCardInfo *_driverCard;
    NSNumber *_cargoStatus;
    NSNumber *_depositMoneyAmount;
    NSNumber *_depositPayStatus;
    NSString *_status;
    NSNumber *_time;
    NSString *_shipperPhone;
    NSString *_shipperName;
    NSString *_driverPhone;
    NSString *_driverName;
}

@property(copy, nonatomic) NSString *driverName; // @synthesize driverName=_driverName;
@property(copy, nonatomic) NSString *driverPhone; // @synthesize driverPhone=_driverPhone;
@property(copy, nonatomic) NSString *shipperName; // @synthesize shipperName=_shipperName;
@property(copy, nonatomic) NSString *shipperPhone; // @synthesize shipperPhone=_shipperPhone;
@property(retain, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *depositPayStatus; // @synthesize depositPayStatus=_depositPayStatus;
@property(retain, nonatomic) NSNumber *depositMoneyAmount; // @synthesize depositMoneyAmount=_depositMoneyAmount;
@property(retain, nonatomic) NSNumber *cargoStatus; // @synthesize cargoStatus=_cargoStatus;
@property(retain, nonatomic) YMMChatCardInfo *driverCard; // @synthesize driverCard=_driverCard;
@property(retain, nonatomic) YMMChatCardInfo *shipperCard; // @synthesize shipperCard=_shipperCard;
@property(copy, nonatomic) NSString *contractStatusDesc; // @synthesize contractStatusDesc=_contractStatusDesc;
@property(copy, nonatomic) NSString *freightStatusDesc; // @synthesize freightStatusDesc=_freightStatusDesc;
@property(copy, nonatomic) NSString *depositStatusDesc; // @synthesize depositStatusDesc=_depositStatusDesc;
@property(copy, nonatomic) NSString *wayStatusDesc; // @synthesize wayStatusDesc=_wayStatusDesc;
@property(copy, nonatomic) NSString *truck; // @synthesize truck=_truck;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *endCity; // @synthesize endCity=_endCity;
@property(copy, nonatomic) NSString *startCity; // @synthesize startCity=_startCity;
@property(retain, nonatomic) NSNumber *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) NSNumber *cargoId; // @synthesize cargoId=_cargoId;
- (void).cxx_destruct;
- (id)getButtonNames;
- (id)getViewJournalParams;
- (id)getImCardInfoWithUserType:(int)arg1;
- (id)getDetailStatusDesc;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end

