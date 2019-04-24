//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JLBleDeviceBaseSDK, NSData, NSMutableArray, NSMutableData, NSString;

@interface JLTransCommandService : NSObject
{
    NSString *_command;
    _Bool isEncode;
    unsigned long long _reqDataLen;
    NSData *_reqData;
    unsigned long long counts;
    CDUnknownBlockType _tempCallBack;
    JLBleDeviceBaseSDK *_protocolSDK;
    NSMutableArray *_historys;
    NSMutableArray *_commands;
    NSMutableData *_appendData;
}

@property(retain, nonatomic) NSMutableData *appendData; // @synthesize appendData=_appendData;
@property(retain, nonatomic) NSMutableArray *commands; // @synthesize commands=_commands;
@property(retain, nonatomic) NSMutableArray *historys; // @synthesize historys=_historys;
@property(retain, nonatomic) JLBleDeviceBaseSDK *protocolSDK; // @synthesize protocolSDK=_protocolSDK;
@property(copy, nonatomic) CDUnknownBlockType tempCallBack; // @synthesize tempCallBack=_tempCallBack;
- (void).cxx_destruct;
- (void)jlSendMulti;
- (void)jlSendFirstCos;
- (void)JLTransCommandServiceWithCmd:(id)arg1 encode:(_Bool)arg2 reqData:(id)arg3 reqDataLen:(unsigned long long)arg4 protocolSDK:(id)arg5 callBack:(CDUnknownBlockType)arg6;

@end

