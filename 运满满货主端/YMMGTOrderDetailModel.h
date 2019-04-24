//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

#import "YMMOrderDetailProtocol.h"

@class GTWitnessInfoResponseModel, GuaranteedTrade, NSArray, NSAttributedString, NSNumber, NSString, SHDetailEnsureItemBeanModel, SHDetailMixProtocolBtnModel, SHDetailMixProtocolModel, SHOrderPayButtonModel, YMMOrderArriveButtonModel, YMMTransactionDegradePage;

@interface YMMGTOrderDetailModel : YMMCommonModel <YMMOrderDetailProtocol>
{
    _Bool _newShowReceipt;
    _Bool _isVirtualNumber;
    _Bool _isBargainOrder;
    _Bool _isShowConfirmLoadingBtn;
    _Bool _isShowSureUnloadingBtn;
    _Bool _isShowSureReceiptBtn;
    long long _messageId;
    NSString *_cargoId;
    NSString *_truckTypeSet;
    long long _truckType;
    long long _start;
    long long _end;
    NSNumber *_updateTime;
    NSNumber *_weight;
    NSNumber *_capacity;
    NSString *_truckLengthSet;
    NSNumber *_charges;
    NSNumber *_freightUnit;
    NSString *_remarkDescription;
    NSNumber *_loadingTime;
    NSString *_loadUnloadingDateTag;
    NSString *_loadingTimeText;
    NSString *_loadingUnloadingInfoTag;
    NSString *_cargoName;
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
    NSString *_parkName;
    NSString *_telephone;
    NSNumber *_cargoUserId;
    long long _orderCargoFee;
    long long _orderPayStatus;
    NSNumber *_orderId;
    NSNumber *_orderCreateTime;
    long long _orderType;
    NSString *_orderCancelDescrip;
    NSNumber *_orderDeliverTime;
    long long _orderCompenMoney;
    long long _cargoCommentScore;
    NSString *_cargoCommentTags;
    NSString *_cargoCommentDes;
    NSString *_cargoCommentId;
    long long _isShowUpdateComment;
    NSString *_commentTime;
    NSNumber *_orderOverFlag;
    NSNumber *_cargoType;
    NSNumber *_orderExpireTime;
    long long _discount;
    NSString *_orderPayStatusPic;
    long long _isExpire;
    NSString *_isExpireMessage;
    NSString *_contactInfo;
    NSString *_compenRuleUrl;
    NSArray *_orderItemBeanList;
    NSNumber *_curStatusTime;
    NSArray *_payItemList;
    GTWitnessInfoResponseModel *_protocolInfo;
    GuaranteedTrade *_guaranteedTrade;
    long long _showPay;
    long long _showCmt;
    long long _newShowCmt;
    long long _curStatusCode;
    NSString *_curStatusDes;
    long long _nextStatusCode;
    long long _nodeOrder;
    NSString *_nextStatusDes;
    NSNumber *_waybillId;
    long long _showUpload;
    long long _showReceipt;
    NSString *_platformAccountHint;
    NSString *_platformAccountExplain;
    NSArray *_orderPayItemBeanList;
    long long _lclCargo;
    NSString *_startName;
    NSString *_endName;
    NSString *_updateTimeString;
    NSString *_destinationStr;
    NSAttributedString *_cargoCarStrForDetail;
    NSAttributedString *_cargoTransportAttributedStrForDetail;
    NSAttributedString *_cargoOtherStr;
    long long _consignorTag;
    unsigned long long _consignorTagEnum;
    long long _shipperMember;
    NSString *_userStatusForCall;
    NSString *_reasonDesc;
    NSArray *_actionButtons;
    NSArray *_freightItemBeans;
    NSArray *_moneyStaticsItemBeans;
    SHDetailMixProtocolBtnModel *_detailProtocolButton;
    SHDetailMixProtocolModel *_detailProtocolInfo;
    SHDetailEnsureItemBeanModel *_ensureItemBean;
    long long _orderCount;
    long long _messageCount;
    NSString *_startCity;
    NSString *_endCity;
    NSString *_startLon;
    NSString *_startLat;
    NSString *_endLon;
    NSString *_endLat;
    NSString *_orderDetailTailDescText;
    SHOrderPayButtonModel *_cancelButton;
    NSString *_weightRange;
    NSString *_capacityRange;
    long long _cellHeight;
    double _cargoTransportHeight;
    YMMTransactionDegradePage *_replacePage;
    NSString *_buttonText;
    NSString *_remark;
    long long _receiptStatus;
    YMMOrderArriveButtonModel *_confirmLoadingButton;
    YMMOrderArriveButtonModel *_sureUnloadingButton;
    YMMOrderArriveButtonModel *_sureReceiptButton;
    NSString *_startCityName;
    NSString *_endCityName;
    NSString *_commentId;
    NSString *_commentDes;
    NSString *_commentTags;
    NSString *_commentScore;
    NSString *_requiredTruckInfo;
    NSString *_cargoInfo;
    NSString *_commentSchema;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(copy, nonatomic) NSString *commentSchema; // @synthesize commentSchema=_commentSchema;
@property(copy, nonatomic) NSString *cargoInfo; // @synthesize cargoInfo=_cargoInfo;
@property(copy, nonatomic) NSString *requiredTruckInfo; // @synthesize requiredTruckInfo=_requiredTruckInfo;
@property(copy, nonatomic) NSString *commentScore; // @synthesize commentScore=_commentScore;
@property(copy, nonatomic) NSString *commentTags; // @synthesize commentTags=_commentTags;
@property(copy, nonatomic) NSString *commentDes; // @synthesize commentDes=_commentDes;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) NSString *endCityName; // @synthesize endCityName=_endCityName;
@property(copy, nonatomic) NSString *startCityName; // @synthesize startCityName=_startCityName;
@property(nonatomic) _Bool isShowSureReceiptBtn; // @synthesize isShowSureReceiptBtn=_isShowSureReceiptBtn;
@property(retain, nonatomic) YMMOrderArriveButtonModel *sureReceiptButton; // @synthesize sureReceiptButton=_sureReceiptButton;
@property(nonatomic) _Bool isShowSureUnloadingBtn; // @synthesize isShowSureUnloadingBtn=_isShowSureUnloadingBtn;
@property(retain, nonatomic) YMMOrderArriveButtonModel *sureUnloadingButton; // @synthesize sureUnloadingButton=_sureUnloadingButton;
@property(nonatomic) _Bool isShowConfirmLoadingBtn; // @synthesize isShowConfirmLoadingBtn=_isShowConfirmLoadingBtn;
@property(retain, nonatomic) YMMOrderArriveButtonModel *confirmLoadingButton; // @synthesize confirmLoadingButton=_confirmLoadingButton;
@property(nonatomic) _Bool isBargainOrder; // @synthesize isBargainOrder=_isBargainOrder;
@property(nonatomic) _Bool isVirtualNumber; // @synthesize isVirtualNumber=_isVirtualNumber;
@property(nonatomic) long long receiptStatus; // @synthesize receiptStatus=_receiptStatus;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(nonatomic) _Bool newShowReceipt; // @synthesize newShowReceipt=_newShowReceipt;
@property(retain, nonatomic) YMMTransactionDegradePage *replacePage; // @synthesize replacePage=_replacePage;
@property(nonatomic) double cargoTransportHeight; // @synthesize cargoTransportHeight=_cargoTransportHeight;
@property(nonatomic) long long cellHeight; // @synthesize cellHeight=_cellHeight;
@property(copy, nonatomic) NSString *capacityRange; // @synthesize capacityRange=_capacityRange;
@property(copy, nonatomic) NSString *weightRange; // @synthesize weightRange=_weightRange;
@property(retain, nonatomic) SHOrderPayButtonModel *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(copy, nonatomic) NSString *orderDetailTailDescText; // @synthesize orderDetailTailDescText=_orderDetailTailDescText;
@property(copy, nonatomic) NSString *endLat; // @synthesize endLat=_endLat;
@property(copy, nonatomic) NSString *endLon; // @synthesize endLon=_endLon;
@property(copy, nonatomic) NSString *startLat; // @synthesize startLat=_startLat;
@property(copy, nonatomic) NSString *startLon; // @synthesize startLon=_startLon;
@property(copy, nonatomic) NSString *endCity; // @synthesize endCity=_endCity;
@property(copy, nonatomic) NSString *startCity; // @synthesize startCity=_startCity;
@property(nonatomic) long long messageCount; // @synthesize messageCount=_messageCount;
@property(nonatomic) long long orderCount; // @synthesize orderCount=_orderCount;
@property(retain, nonatomic) SHDetailEnsureItemBeanModel *ensureItemBean; // @synthesize ensureItemBean=_ensureItemBean;
@property(retain, nonatomic) SHDetailMixProtocolModel *detailProtocolInfo; // @synthesize detailProtocolInfo=_detailProtocolInfo;
@property(retain, nonatomic) SHDetailMixProtocolBtnModel *detailProtocolButton; // @synthesize detailProtocolButton=_detailProtocolButton;
@property(retain, nonatomic) NSArray *moneyStaticsItemBeans; // @synthesize moneyStaticsItemBeans=_moneyStaticsItemBeans;
@property(retain, nonatomic) NSArray *freightItemBeans; // @synthesize freightItemBeans=_freightItemBeans;
@property(retain, nonatomic) NSArray *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(copy, nonatomic) NSString *reasonDesc; // @synthesize reasonDesc=_reasonDesc;
@property(copy, nonatomic) NSString *userStatusForCall; // @synthesize userStatusForCall=_userStatusForCall;
@property(nonatomic) long long shipperMember; // @synthesize shipperMember=_shipperMember;
@property(nonatomic) unsigned long long consignorTagEnum; // @synthesize consignorTagEnum=_consignorTagEnum;
@property(nonatomic) long long consignorTag; // @synthesize consignorTag=_consignorTag;
@property(copy, nonatomic) NSAttributedString *cargoOtherStr; // @synthesize cargoOtherStr=_cargoOtherStr;
@property(copy, nonatomic) NSAttributedString *cargoTransportAttributedStrForDetail; // @synthesize cargoTransportAttributedStrForDetail=_cargoTransportAttributedStrForDetail;
@property(copy, nonatomic) NSAttributedString *cargoCarStrForDetail; // @synthesize cargoCarStrForDetail=_cargoCarStrForDetail;
@property(copy, nonatomic) NSString *destinationStr; // @synthesize destinationStr=_destinationStr;
@property(copy, nonatomic) NSString *updateTimeString; // @synthesize updateTimeString=_updateTimeString;
@property(copy, nonatomic) NSString *endName; // @synthesize endName=_endName;
@property(copy, nonatomic) NSString *startName; // @synthesize startName=_startName;
@property(nonatomic) long long lclCargo; // @synthesize lclCargo=_lclCargo;
@property(retain, nonatomic) NSArray *orderPayItemBeanList; // @synthesize orderPayItemBeanList=_orderPayItemBeanList;
@property(copy, nonatomic) NSString *platformAccountExplain; // @synthesize platformAccountExplain=_platformAccountExplain;
@property(copy, nonatomic) NSString *platformAccountHint; // @synthesize platformAccountHint=_platformAccountHint;
@property(nonatomic) long long showReceipt; // @synthesize showReceipt=_showReceipt;
@property(nonatomic) long long showUpload; // @synthesize showUpload=_showUpload;
@property(retain, nonatomic) NSNumber *waybillId; // @synthesize waybillId=_waybillId;
@property(copy, nonatomic) NSString *nextStatusDes; // @synthesize nextStatusDes=_nextStatusDes;
@property(nonatomic) long long nodeOrder; // @synthesize nodeOrder=_nodeOrder;
@property(nonatomic) long long nextStatusCode; // @synthesize nextStatusCode=_nextStatusCode;
@property(copy, nonatomic) NSString *curStatusDes; // @synthesize curStatusDes=_curStatusDes;
@property(nonatomic) long long curStatusCode; // @synthesize curStatusCode=_curStatusCode;
@property(nonatomic) long long newShowCmt; // @synthesize newShowCmt=_newShowCmt;
@property(nonatomic) long long showCmt; // @synthesize showCmt=_showCmt;
@property(nonatomic) long long showPay; // @synthesize showPay=_showPay;
@property(retain, nonatomic) GuaranteedTrade *guaranteedTrade; // @synthesize guaranteedTrade=_guaranteedTrade;
@property(retain, nonatomic) GTWitnessInfoResponseModel *protocolInfo; // @synthesize protocolInfo=_protocolInfo;
@property(retain, nonatomic) NSArray *payItemList; // @synthesize payItemList=_payItemList;
@property(retain, nonatomic) NSNumber *curStatusTime; // @synthesize curStatusTime=_curStatusTime;
@property(retain, nonatomic) NSArray *orderItemBeanList; // @synthesize orderItemBeanList=_orderItemBeanList;
@property(retain, nonatomic) NSString *compenRuleUrl; // @synthesize compenRuleUrl=_compenRuleUrl;
@property(retain, nonatomic) NSString *contactInfo; // @synthesize contactInfo=_contactInfo;
@property(copy, nonatomic) NSString *isExpireMessage; // @synthesize isExpireMessage=_isExpireMessage;
@property(nonatomic) long long isExpire; // @synthesize isExpire=_isExpire;
@property(copy, nonatomic) NSString *orderPayStatusPic; // @synthesize orderPayStatusPic=_orderPayStatusPic;
@property(nonatomic) long long discount; // @synthesize discount=_discount;
@property(retain, nonatomic) NSNumber *orderExpireTime; // @synthesize orderExpireTime=_orderExpireTime;
@property(retain, nonatomic) NSNumber *cargoType; // @synthesize cargoType=_cargoType;
@property(retain, nonatomic) NSNumber *orderOverFlag; // @synthesize orderOverFlag=_orderOverFlag;
@property(copy, nonatomic) NSString *commentTime; // @synthesize commentTime=_commentTime;
@property(nonatomic) long long isShowUpdateComment; // @synthesize isShowUpdateComment=_isShowUpdateComment;
@property(copy, nonatomic) NSString *cargoCommentId; // @synthesize cargoCommentId=_cargoCommentId;
@property(retain, nonatomic) NSString *cargoCommentDes; // @synthesize cargoCommentDes=_cargoCommentDes;
@property(retain, nonatomic) NSString *cargoCommentTags; // @synthesize cargoCommentTags=_cargoCommentTags;
@property(nonatomic) long long cargoCommentScore; // @synthesize cargoCommentScore=_cargoCommentScore;
@property(nonatomic) long long orderCompenMoney; // @synthesize orderCompenMoney=_orderCompenMoney;
@property(retain, nonatomic) NSNumber *orderDeliverTime; // @synthesize orderDeliverTime=_orderDeliverTime;
@property(retain, nonatomic) NSString *orderCancelDescrip; // @synthesize orderCancelDescrip=_orderCancelDescrip;
@property(nonatomic) long long orderType; // @synthesize orderType=_orderType;
@property(retain, nonatomic) NSNumber *orderCreateTime; // @synthesize orderCreateTime=_orderCreateTime;
@property(retain, nonatomic) NSNumber *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) long long orderPayStatus; // @synthesize orderPayStatus=_orderPayStatus;
@property(nonatomic) long long orderCargoFee; // @synthesize orderCargoFee=_orderCargoFee;
@property(retain, nonatomic) NSNumber *cargoUserId; // @synthesize cargoUserId=_cargoUserId;
@property(retain, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(retain, nonatomic) NSString *parkName; // @synthesize parkName=_parkName;
@property(retain, nonatomic) NSString *companyAddress; // @synthesize companyAddress=_companyAddress;
@property(retain, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(nonatomic) long long isDeposit; // @synthesize isDeposit=_isDeposit;
@property(nonatomic) long long isPictureAuth; // @synthesize isPictureAuth=_isPictureAuth;
@property(nonatomic) long long isNameAuth; // @synthesize isNameAuth=_isNameAuth;
@property(retain, nonatomic) NSString *picture; // @synthesize picture=_picture;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long isDelete; // @synthesize isDelete=_isDelete;
@property(nonatomic) long long isSelfCargo; // @synthesize isSelfCargo=_isSelfCargo;
@property(retain, nonatomic) NSString *payMethod; // @synthesize payMethod=_payMethod;
@property(nonatomic) long long loadingMethod; // @synthesize loadingMethod=_loadingMethod;
@property(retain, nonatomic) NSString *cargoName; // @synthesize cargoName=_cargoName;
@property(copy, nonatomic) NSString *loadingUnloadingInfoTag; // @synthesize loadingUnloadingInfoTag=_loadingUnloadingInfoTag;
@property(retain, nonatomic) NSString *loadingTimeText; // @synthesize loadingTimeText=_loadingTimeText;
@property(copy, nonatomic) NSString *loadUnloadingDateTag; // @synthesize loadUnloadingDateTag=_loadUnloadingDateTag;
@property(retain, nonatomic) NSNumber *loadingTime; // @synthesize loadingTime=_loadingTime;
@property(retain, nonatomic) NSString *remarkDescription; // @synthesize remarkDescription=_remarkDescription;
@property(retain, nonatomic) NSNumber *freightUnit; // @synthesize freightUnit=_freightUnit;
@property(retain, nonatomic) NSNumber *charges; // @synthesize charges=_charges;
@property(retain, nonatomic) NSString *truckLengthSet; // @synthesize truckLengthSet=_truckLengthSet;
@property(retain, nonatomic) NSNumber *capacity; // @synthesize capacity=_capacity;
@property(retain, nonatomic) NSNumber *weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSNumber *updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) long long end; // @synthesize end=_end;
@property(nonatomic) long long start; // @synthesize start=_start;
@property(nonatomic) long long truckType; // @synthesize truckType=_truckType;
@property(retain, nonatomic) NSString *truckTypeSet; // @synthesize truckTypeSet=_truckTypeSet;
@property(retain, nonatomic) NSString *cargoId; // @synthesize cargoId=_cargoId;
@property(nonatomic) long long messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (void)caculateCargoTransportInfoHeight;
- (void)caculateCellHeight;
- (id)cargoFareString;
- (id)trunkTypeStringForIM;
- (id)goodsInfoTextForIM;
- (_Bool)isShowCancleButton;
- (_Bool)isShowNodeButton;
- (_Bool)nodeStatsForShowBtn;
- (id)endPlace;
- (id)startPlace;
- (id)getHourIntervalStr:(long long)arg1;
- (id)dateString:(id)arg1;
@property(readonly, nonatomic) NSString *pictureUrlString;
- (_Bool)isHttpOrHttps:(id)arg1;
@property(readonly, nonatomic) NSString *loadingMethodString;
@property(readonly, nonatomic) NSString *loadingTimeString;
@property(readonly, nonatomic) NSString *orderCreateTimeString;
@property(readonly, nonatomic) NSString *capacityString;
@property(readonly, nonatomic) NSString *weightString;
- (id)trunkLengthString;
- (id)trunkTypeString;
- (void)setValue:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

