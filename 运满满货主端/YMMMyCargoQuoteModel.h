//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSNumber, NSString;

@interface YMMMyCargoQuoteModel : YMMCommonModel
{
    _Bool _countDown;
    _Bool _isValid;
    _Bool _isVirtualNumber;
    _Bool _definedCarFlag;
    _Bool _selectionCargoShowFlag;
    NSString *_carrierHeadPicUrl;
    long long _tradeOrderCount;
    NSString *_cooperate;
    NSString *_plat;
    NSString *_statusDesc;
    long long _status;
    NSNumber *_carrierId;
    NSString *_weightRange;
    NSString *_carrierName;
    NSNumber *_bargainId;
    long long _confirmBargainAmount;
    long long _bargainAmount;
    long long _countDownTime;
    NSString *_carrierPhone;
    long long _isShowPressedIcon;
    NSArray *_buttons;
    NSString *_truckTypeDesc;
    long long _updateTime;
    long long _isShowTelIcon;
    NSString *_countDownTips;
    long long _normalStatus;
    NSString *_position;
    NSString *_freightDescribe;
    NSString *_countDownTips4Selection;
    NSString *_telIconUrl;
    NSString *_csTelScheme;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(retain, nonatomic) NSString *csTelScheme; // @synthesize csTelScheme=_csTelScheme;
@property(retain, nonatomic) NSString *telIconUrl; // @synthesize telIconUrl=_telIconUrl;
@property(copy, nonatomic) NSString *countDownTips4Selection; // @synthesize countDownTips4Selection=_countDownTips4Selection;
@property(nonatomic) _Bool selectionCargoShowFlag; // @synthesize selectionCargoShowFlag=_selectionCargoShowFlag;
@property(nonatomic) _Bool definedCarFlag; // @synthesize definedCarFlag=_definedCarFlag;
@property(retain, nonatomic) NSString *freightDescribe; // @synthesize freightDescribe=_freightDescribe;
@property(retain, nonatomic) NSString *position; // @synthesize position=_position;
@property(nonatomic) long long normalStatus; // @synthesize normalStatus=_normalStatus;
@property(retain, nonatomic) NSString *countDownTips; // @synthesize countDownTips=_countDownTips;
@property(nonatomic) _Bool isVirtualNumber; // @synthesize isVirtualNumber=_isVirtualNumber;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(nonatomic) long long isShowTelIcon; // @synthesize isShowTelIcon=_isShowTelIcon;
@property(nonatomic) long long updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *truckTypeDesc; // @synthesize truckTypeDesc=_truckTypeDesc;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) long long isShowPressedIcon; // @synthesize isShowPressedIcon=_isShowPressedIcon;
@property(retain, nonatomic) NSString *carrierPhone; // @synthesize carrierPhone=_carrierPhone;
@property(nonatomic) long long countDownTime; // @synthesize countDownTime=_countDownTime;
@property(nonatomic) long long bargainAmount; // @synthesize bargainAmount=_bargainAmount;
@property(nonatomic) long long confirmBargainAmount; // @synthesize confirmBargainAmount=_confirmBargainAmount;
@property(retain, nonatomic) NSNumber *bargainId; // @synthesize bargainId=_bargainId;
@property(retain, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(retain, nonatomic) NSString *weightRange; // @synthesize weightRange=_weightRange;
@property(retain, nonatomic) NSNumber *carrierId; // @synthesize carrierId=_carrierId;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *statusDesc; // @synthesize statusDesc=_statusDesc;
@property(retain, nonatomic) NSString *plat; // @synthesize plat=_plat;
@property(retain, nonatomic) NSString *cooperate; // @synthesize cooperate=_cooperate;
@property(nonatomic) long long tradeOrderCount; // @synthesize tradeOrderCount=_tradeOrderCount;
@property(retain, nonatomic) NSString *carrierHeadPicUrl; // @synthesize carrierHeadPicUrl=_carrierHeadPicUrl;
@property(nonatomic) _Bool countDown; // @synthesize countDown=_countDown;
- (void).cxx_destruct;
- (_Bool)isFailureOfquotation;
- (_Bool)quoteIsValid;
- (id)counterOfferDesc;
- (id)quoteInfoDesc;
- (id)truckInfoDesc;

@end

