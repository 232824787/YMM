//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSNumber, NSString, YMMOrderArriveButtonModel;

@interface YMMWaitForPayListModel : YMMCommonModel
{
    NSArray *_subPayInfos;
    NSNumber *_orderId;
    NSString *_orderDetail;
    NSString *_mybLogoUrl;
    NSString *_mybMessage;
    NSString *_addressStart;
    NSString *_addressEnd;
    NSString *_driverName;
    NSString *_truckNumber;
    NSNumber *_createTime;
    NSNumber *_leftPayTime;
    NSNumber *_payFreightDeadline;
    long long _isRiskIntercept;
    NSString *_outerDispatcherName;
    NSString *_companyName;
    NSString *_companyLogo;
    NSString *_companyContact;
    YMMOrderArriveButtonModel *_payButton;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(retain, nonatomic) YMMOrderArriveButtonModel *payButton; // @synthesize payButton=_payButton;
@property(copy, nonatomic) NSString *companyContact; // @synthesize companyContact=_companyContact;
@property(copy, nonatomic) NSString *companyLogo; // @synthesize companyLogo=_companyLogo;
@property(copy, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(copy, nonatomic) NSString *outerDispatcherName; // @synthesize outerDispatcherName=_outerDispatcherName;
@property(nonatomic) long long isRiskIntercept; // @synthesize isRiskIntercept=_isRiskIntercept;
@property(retain, nonatomic) NSNumber *payFreightDeadline; // @synthesize payFreightDeadline=_payFreightDeadline;
@property(retain, nonatomic) NSNumber *leftPayTime; // @synthesize leftPayTime=_leftPayTime;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *truckNumber; // @synthesize truckNumber=_truckNumber;
@property(copy, nonatomic) NSString *driverName; // @synthesize driverName=_driverName;
@property(copy, nonatomic) NSString *addressEnd; // @synthesize addressEnd=_addressEnd;
@property(copy, nonatomic) NSString *addressStart; // @synthesize addressStart=_addressStart;
@property(copy, nonatomic) NSString *mybMessage; // @synthesize mybMessage=_mybMessage;
@property(copy, nonatomic) NSString *mybLogoUrl; // @synthesize mybLogoUrl=_mybLogoUrl;
@property(copy, nonatomic) NSString *orderDetail; // @synthesize orderDetail=_orderDetail;
@property(retain, nonatomic) NSNumber *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) NSArray *subPayInfos; // @synthesize subPayInfos=_subPayInfos;
- (void).cxx_destruct;

@end

