//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JLBleDeviceBaseSDK, NSMutableArray, NSMutableDictionary, NSString;

@interface JLTradeService : NSObject
{
    int _maxNo;
    NSMutableArray *_historys;
    NSString *_pinCodeStr;
    JLBleDeviceBaseSDK *_protocolSDK;
    CDUnknownBlockType _tempCallBack;
    NSMutableArray *_tradeHistorys;
    NSMutableDictionary *_packDic;
}

@property(retain, nonatomic) NSMutableDictionary *packDic; // @synthesize packDic=_packDic;
@property(retain, nonatomic) NSMutableArray *tradeHistorys; // @synthesize tradeHistorys=_tradeHistorys;
@property(copy, nonatomic) CDUnknownBlockType tempCallBack; // @synthesize tempCallBack=_tempCallBack;
@property(retain, nonatomic) JLBleDeviceBaseSDK *protocolSDK; // @synthesize protocolSDK=_protocolSDK;
@property(copy, nonatomic) NSString *pinCodeStr; // @synthesize pinCodeStr=_pinCodeStr;
@property(nonatomic) int maxNo; // @synthesize maxNo=_maxNo;
@property(retain, nonatomic) NSMutableArray *historys; // @synthesize historys=_historys;
- (void).cxx_destruct;
- (void)cleanObject;
- (void)packData;
- (void)jlReadMultiHistorys;
- (void)jlReadTradeHistorys;
- (void)jlVertifyPinCode;
- (void)jlSelectedDF01;
- (void)jlCardReset;
- (void)jlTradeServiceWithProtocolSDK:(id)arg1 maxNumber:(int)arg2 pinCode:(id)arg3 callBack:(CDUnknownBlockType)arg4;

@end

