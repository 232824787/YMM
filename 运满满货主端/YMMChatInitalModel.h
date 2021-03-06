//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EaseUserModel, NSDictionary, NSNumber, NSString;

@interface YMMChatInitalModel : NSObject
{
    EaseUserModel *_userModel;
    NSNumber *_userId;
    NSString *_orderID;
    NSString *_orderTitle;
    NSString *_orderDetail;
    NSString *_earnestAmount;
    NSString *_orderDetailSchema;
    id _cargoID;
    NSString *_cargoTitle;
    NSString *_cargoDetail;
    NSString *_depositStaus;
    NSString *_cargoDetailSchema;
}

@property(copy, nonatomic) NSString *cargoDetailSchema; // @synthesize cargoDetailSchema=_cargoDetailSchema;
@property(copy, nonatomic) NSString *depositStaus; // @synthesize depositStaus=_depositStaus;
@property(copy, nonatomic) NSString *cargoDetail; // @synthesize cargoDetail=_cargoDetail;
@property(copy, nonatomic) NSString *cargoTitle; // @synthesize cargoTitle=_cargoTitle;
@property(retain, nonatomic) id cargoID; // @synthesize cargoID=_cargoID;
@property(copy, nonatomic) NSString *orderDetailSchema; // @synthesize orderDetailSchema=_orderDetailSchema;
@property(copy, nonatomic) NSString *earnestAmount; // @synthesize earnestAmount=_earnestAmount;
@property(copy, nonatomic) NSString *orderDetail; // @synthesize orderDetail=_orderDetail;
@property(copy, nonatomic) NSString *orderTitle; // @synthesize orderTitle=_orderTitle;
@property(copy, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
@property(copy, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) EaseUserModel *userModel; // @synthesize userModel=_userModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *orderCargoDict;

@end

