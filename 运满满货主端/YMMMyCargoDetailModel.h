//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSAttributedString, NSNumber, NSString, YMMCargoDepositGuaranteeModel, YMMMyCargoGuaranteedTradeModel, YMMMyCargoQuoteBiddingModel, YMMPublishingCargoCountDownModel;

@interface YMMMyCargoDetailModel : YMMCommonModel
{
    long long _messageId;
    long long _cargoType;
    NSNumber *_cargoUserId;
    long long _start;
    long long _end;
    NSString *_updateTimeTag;
    NSNumber *_weight;
    NSNumber *_capacity;
    NSString *_truckLengthSet;
    long long _truckType;
    NSNumber *_charges;
    NSString *_remarkDescription;
    NSNumber *_loadingTime;
    NSNumber *_unloadingDateTime;
    NSString *_loadAddress;
    NSString *_unloadingAdress;
    NSString *_loadingUnloadingInfoTag;
    NSString *_cargoName;
    NSString *_secondCategoryName;
    NSString *_beyondCarriageSpecsTag;
    NSString *_packageType;
    long long _loadingMethod;
    NSString *_payMethod;
    long long _isSelfCargo;
    long long _isDelete;
    NSString *_name;
    NSString *_picture;
    long long _isNameAuth;
    long long _isPictureAuth;
    long long _isDeposit;
    NSString *_companyName;
    NSString *_companyAddress;
    NSString *_telephone;
    NSArray *_calleddriverList;
    YMMMyCargoGuaranteedTradeModel *_guaranteedTrade;
    YMMMyCargoGuaranteedTradeModel *_biddingCargoShowTips;
    NSString *_cargoInsuranceIcon;
    NSNumber *_insuranceStatus;
    long long _buyoutPrice;
    NSString *_buyoutPriceText;
    long long _buyoutPriceCount;
    NSArray *_cargoRightButtonItems;
    NSString *_latestPayTimeTip;
    long long _dealModel;
    YMMPublishingCargoCountDownModel *_competitiveProductsCargoUiControlTag;
    NSString *_securityTran;
    unsigned long long _securedTran;
    long long _isExpire;
    NSString *_telephoneString;
    long long _depositPayee;
    NSNumber *_cargoId;
    NSString *_truckTypeSet;
    NSNumber *_freightUnit;
    long long _lclCargo;
    NSString *_startName;
    NSString *_endName;
    long long _orderCount;
    long long _messageCount;
    long long _shipperMember;
    NSString *_parkName;
    NSAttributedString *_cargoTransportAttributedStrForDetail;
    NSAttributedString *_cargoOtherInfoForDetail;
    NSNumber *_showDepositGuarantee;
    YMMCargoDepositGuaranteeModel *_depositGuaranteeItem;
    double _cellHeight;
    double _quoteCellHeight;
    double _cargoTransportHeight;
    NSString *_cargoInsuranceUrl;
    NSString *_promotionName;
    NSString *_weightRange;
    NSString *_capacityRange;
    NSString *_truckLengthCodes;
    NSString *_truckTypeCodes;
    NSNumber *_freight;
    YMMMyCargoQuoteBiddingModel *_biddingInfo;
    NSString *_otherDescriptionTag;
    NSString *_localInvisibleTip;
    long long _brokerCargoType;
    NSString *_brokerCargoUserAvatarUrl;
    NSString *_brokerCargoUserName;
    NSString *_brokerCargoTelephone;
    NSString *_brokerCargoCompanyTitle;
    NSString *_brokerCargoCompanyLogo;
    NSArray *_cargoTips;
    NSString *_expectFreightInfo;
    NSString *_depositInfo;
    NSString *_loadingMethodStr;
    NSString *_loadDateTimeStr;
    NSString *_unloadingDateTimeStr;
    NSString *_driveGuide;
    NSArray *_cargoImages;
    NSString *_otherDescriptionStr;
    long long _commonQuesCount;
    NSArray *_commonQuesInfo;
    NSArray *_commonQuestionItems;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(copy, nonatomic) NSArray *commonQuestionItems; // @synthesize commonQuestionItems=_commonQuestionItems;
@property(retain, nonatomic) NSArray *commonQuesInfo; // @synthesize commonQuesInfo=_commonQuesInfo;
@property(nonatomic) long long commonQuesCount; // @synthesize commonQuesCount=_commonQuesCount;
@property(copy, nonatomic) NSString *otherDescriptionStr; // @synthesize otherDescriptionStr=_otherDescriptionStr;
@property(retain, nonatomic) NSArray *cargoImages; // @synthesize cargoImages=_cargoImages;
@property(copy, nonatomic) NSString *driveGuide; // @synthesize driveGuide=_driveGuide;
@property(copy, nonatomic) NSString *unloadingDateTimeStr; // @synthesize unloadingDateTimeStr=_unloadingDateTimeStr;
@property(copy, nonatomic) NSString *loadDateTimeStr; // @synthesize loadDateTimeStr=_loadDateTimeStr;
@property(copy, nonatomic) NSString *loadingMethodStr; // @synthesize loadingMethodStr=_loadingMethodStr;
@property(copy, nonatomic) NSString *depositInfo; // @synthesize depositInfo=_depositInfo;
@property(copy, nonatomic) NSString *expectFreightInfo; // @synthesize expectFreightInfo=_expectFreightInfo;
@property(retain, nonatomic) NSArray *cargoTips; // @synthesize cargoTips=_cargoTips;
@property(retain, nonatomic) NSString *brokerCargoCompanyLogo; // @synthesize brokerCargoCompanyLogo=_brokerCargoCompanyLogo;
@property(retain, nonatomic) NSString *brokerCargoCompanyTitle; // @synthesize brokerCargoCompanyTitle=_brokerCargoCompanyTitle;
@property(retain, nonatomic) NSString *brokerCargoTelephone; // @synthesize brokerCargoTelephone=_brokerCargoTelephone;
@property(retain, nonatomic) NSString *brokerCargoUserName; // @synthesize brokerCargoUserName=_brokerCargoUserName;
@property(retain, nonatomic) NSString *brokerCargoUserAvatarUrl; // @synthesize brokerCargoUserAvatarUrl=_brokerCargoUserAvatarUrl;
@property(nonatomic) long long brokerCargoType; // @synthesize brokerCargoType=_brokerCargoType;
@property(retain, nonatomic) NSString *localInvisibleTip; // @synthesize localInvisibleTip=_localInvisibleTip;
@property(retain, nonatomic) NSString *otherDescriptionTag; // @synthesize otherDescriptionTag=_otherDescriptionTag;
@property(retain, nonatomic) YMMMyCargoQuoteBiddingModel *biddingInfo; // @synthesize biddingInfo=_biddingInfo;
@property(retain, nonatomic) NSNumber *freight; // @synthesize freight=_freight;
@property(copy, nonatomic) NSString *truckTypeCodes; // @synthesize truckTypeCodes=_truckTypeCodes;
@property(copy, nonatomic) NSString *truckLengthCodes; // @synthesize truckLengthCodes=_truckLengthCodes;
@property(copy, nonatomic) NSString *capacityRange; // @synthesize capacityRange=_capacityRange;
@property(copy, nonatomic) NSString *weightRange; // @synthesize weightRange=_weightRange;
@property(retain, nonatomic) NSString *promotionName; // @synthesize promotionName=_promotionName;
@property(retain, nonatomic) NSString *cargoInsuranceUrl; // @synthesize cargoInsuranceUrl=_cargoInsuranceUrl;
@property(nonatomic) double cargoTransportHeight; // @synthesize cargoTransportHeight=_cargoTransportHeight;
@property(nonatomic) double quoteCellHeight; // @synthesize quoteCellHeight=_quoteCellHeight;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) YMMCargoDepositGuaranteeModel *depositGuaranteeItem; // @synthesize depositGuaranteeItem=_depositGuaranteeItem;
@property(retain, nonatomic) NSNumber *showDepositGuarantee; // @synthesize showDepositGuarantee=_showDepositGuarantee;
@property(copy, nonatomic) NSAttributedString *cargoOtherInfoForDetail; // @synthesize cargoOtherInfoForDetail=_cargoOtherInfoForDetail;
@property(copy, nonatomic) NSAttributedString *cargoTransportAttributedStrForDetail; // @synthesize cargoTransportAttributedStrForDetail=_cargoTransportAttributedStrForDetail;
@property(retain, nonatomic) NSString *parkName; // @synthesize parkName=_parkName;
@property(nonatomic) long long shipperMember; // @synthesize shipperMember=_shipperMember;
@property(nonatomic) long long messageCount; // @synthesize messageCount=_messageCount;
@property(nonatomic) long long orderCount; // @synthesize orderCount=_orderCount;
@property(copy, nonatomic) NSString *endName; // @synthesize endName=_endName;
@property(copy, nonatomic) NSString *startName; // @synthesize startName=_startName;
@property(nonatomic) long long lclCargo; // @synthesize lclCargo=_lclCargo;
@property(retain, nonatomic) NSNumber *freightUnit; // @synthesize freightUnit=_freightUnit;
@property(copy, nonatomic) NSString *truckTypeSet; // @synthesize truckTypeSet=_truckTypeSet;
@property(retain, nonatomic) NSNumber *cargoId; // @synthesize cargoId=_cargoId;
@property(readonly, nonatomic) long long depositPayee; // @synthesize depositPayee=_depositPayee;
@property(readonly, nonatomic) NSString *telephoneString; // @synthesize telephoneString=_telephoneString;
@property(nonatomic) long long isExpire; // @synthesize isExpire=_isExpire;
@property(nonatomic) unsigned long long securedTran; // @synthesize securedTran=_securedTran;
@property(retain, nonatomic) NSString *securityTran; // @synthesize securityTran=_securityTran;
@property(retain, nonatomic) YMMPublishingCargoCountDownModel *competitiveProductsCargoUiControlTag; // @synthesize competitiveProductsCargoUiControlTag=_competitiveProductsCargoUiControlTag;
@property(nonatomic) long long dealModel; // @synthesize dealModel=_dealModel;
@property(retain, nonatomic) NSString *latestPayTimeTip; // @synthesize latestPayTimeTip=_latestPayTimeTip;
@property(retain, nonatomic) NSArray *cargoRightButtonItems; // @synthesize cargoRightButtonItems=_cargoRightButtonItems;
@property(nonatomic) long long buyoutPriceCount; // @synthesize buyoutPriceCount=_buyoutPriceCount;
@property(retain, nonatomic) NSString *buyoutPriceText; // @synthesize buyoutPriceText=_buyoutPriceText;
@property(nonatomic) long long buyoutPrice; // @synthesize buyoutPrice=_buyoutPrice;
@property(retain, nonatomic) NSNumber *insuranceStatus; // @synthesize insuranceStatus=_insuranceStatus;
@property(retain, nonatomic) NSString *cargoInsuranceIcon; // @synthesize cargoInsuranceIcon=_cargoInsuranceIcon;
@property(retain, nonatomic) YMMMyCargoGuaranteedTradeModel *biddingCargoShowTips; // @synthesize biddingCargoShowTips=_biddingCargoShowTips;
@property(retain, nonatomic) YMMMyCargoGuaranteedTradeModel *guaranteedTrade; // @synthesize guaranteedTrade=_guaranteedTrade;
@property(retain, nonatomic) NSArray *calleddriverList; // @synthesize calleddriverList=_calleddriverList;
@property(copy, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(copy, nonatomic) NSString *companyAddress; // @synthesize companyAddress=_companyAddress;
@property(copy, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(nonatomic) long long isDeposit; // @synthesize isDeposit=_isDeposit;
@property(nonatomic) long long isPictureAuth; // @synthesize isPictureAuth=_isPictureAuth;
@property(nonatomic) long long isNameAuth; // @synthesize isNameAuth=_isNameAuth;
@property(copy, nonatomic) NSString *picture; // @synthesize picture=_picture;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long isDelete; // @synthesize isDelete=_isDelete;
@property(nonatomic) long long isSelfCargo; // @synthesize isSelfCargo=_isSelfCargo;
@property(copy, nonatomic) NSString *payMethod; // @synthesize payMethod=_payMethod;
@property(nonatomic) long long loadingMethod; // @synthesize loadingMethod=_loadingMethod;
@property(copy, nonatomic) NSString *packageType; // @synthesize packageType=_packageType;
@property(copy, nonatomic) NSString *beyondCarriageSpecsTag; // @synthesize beyondCarriageSpecsTag=_beyondCarriageSpecsTag;
@property(copy, nonatomic) NSString *secondCategoryName; // @synthesize secondCategoryName=_secondCategoryName;
@property(copy, nonatomic) NSString *cargoName; // @synthesize cargoName=_cargoName;
@property(copy, nonatomic) NSString *loadingUnloadingInfoTag; // @synthesize loadingUnloadingInfoTag=_loadingUnloadingInfoTag;
@property(copy, nonatomic) NSString *unloadingAdress; // @synthesize unloadingAdress=_unloadingAdress;
@property(copy, nonatomic) NSString *loadAddress; // @synthesize loadAddress=_loadAddress;
@property(retain, nonatomic) NSNumber *unloadingDateTime; // @synthesize unloadingDateTime=_unloadingDateTime;
@property(retain, nonatomic) NSNumber *loadingTime; // @synthesize loadingTime=_loadingTime;
@property(copy, nonatomic) NSString *remarkDescription; // @synthesize remarkDescription=_remarkDescription;
@property(retain, nonatomic) NSNumber *charges; // @synthesize charges=_charges;
@property(nonatomic) long long truckType; // @synthesize truckType=_truckType;
@property(copy, nonatomic) NSString *truckLengthSet; // @synthesize truckLengthSet=_truckLengthSet;
@property(retain, nonatomic) NSNumber *capacity; // @synthesize capacity=_capacity;
@property(retain, nonatomic) NSNumber *weight; // @synthesize weight=_weight;
@property(copy, nonatomic) NSString *updateTimeTag; // @synthesize updateTimeTag=_updateTimeTag;
@property(nonatomic) long long end; // @synthesize end=_end;
@property(nonatomic) long long start; // @synthesize start=_start;
@property(retain, nonatomic) NSNumber *cargoUserId; // @synthesize cargoUserId=_cargoUserId;
@property(nonatomic) long long cargoType; // @synthesize cargoType=_cargoType;
@property(nonatomic) long long messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (id)cargoPriceStr;
- (id)sendGroupMessage;
- (void)caculateQuoteCellHeight;
- (void)caculateCellHeight;
- (void)caculateCargoTransportInfoHeight;
- (id)cargoLineStr;
- (id)getStringWithStartCode:(long long)arg1 endCode:(long long)arg2;
- (id)goodsInfoString;
- (id)cargoInfoString;
- (id)truckTypeAtbForFont:(id)arg1 ShowDefaultTypr:(_Bool)arg2;
- (id)truckLengthAtbForFont:(id)arg1;
- (id)truckInfoString;
- (id)destinationStr;
- (id)getHourIntervalStr:(long long)arg1;
@property(readonly, nonatomic) NSString *pictureUrlString;
@property(readonly, nonatomic) NSString *loadingMethodString;
@property(readonly, nonatomic) NSString *capacityString;
- (_Bool)isBuyoutPrice;
@property(readonly, nonatomic) NSString *weightString;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end

