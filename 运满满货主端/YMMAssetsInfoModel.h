//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSNumber, NSString;

@interface YMMAssetsInfoModel : YMMCommonModel
{
    long long _accountStatus;
    NSNumber *_accountBalance;
    NSNumber *_availableBalance;
    NSNumber *_freezeBalance;
    NSString *_cardNumber;
    NSString *_bankName;
    long long _bankCardSize;
    NSString *_accountName;
    long long _updateTime;
    NSString *_isOpenRechargeButton;
    NSString *_assetTitle;
    long long _toBeConfirmedBalance;
}

@property(nonatomic) long long toBeConfirmedBalance; // @synthesize toBeConfirmedBalance=_toBeConfirmedBalance;
@property(retain, nonatomic) NSString *assetTitle; // @synthesize assetTitle=_assetTitle;
@property(retain, nonatomic) NSString *isOpenRechargeButton; // @synthesize isOpenRechargeButton=_isOpenRechargeButton;
@property(nonatomic) long long updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(nonatomic) long long bankCardSize; // @synthesize bankCardSize=_bankCardSize;
@property(retain, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(retain, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
@property(retain, nonatomic) NSNumber *freezeBalance; // @synthesize freezeBalance=_freezeBalance;
@property(retain, nonatomic) NSNumber *availableBalance; // @synthesize availableBalance=_availableBalance;
@property(retain, nonatomic) NSNumber *accountBalance; // @synthesize accountBalance=_accountBalance;
@property(nonatomic) long long accountStatus; // @synthesize accountStatus=_accountStatus;
- (void).cxx_destruct;

@end

