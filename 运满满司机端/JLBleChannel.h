//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JLTimer, NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface JLBleChannel : NSObject
{
    int _findServiceState;
    int _sendState;
    int _openNotifyState;
    int _waiteDataState;
    int _readDataState;
    NSString *_changnelIdentifier;
    NSMutableDictionary *_characteristicsStored;
    JLTimer *_findServiceTimer;
    CDUnknownBlockType _findingCallBack;
    JLTimer *_sendTimer;
    NSMutableArray *_sendingDataArr;
    NSData *_sendingData;
    CDUnknownBlockType _sendCallBack;
    JLTimer *_openNotifyTimer;
    CDUnknownBlockType _openNotifyCallBack;
    JLTimer *_waitDataTimer;
    CDUnknownBlockType _waitCallBack;
    JLTimer *_readingTimer;
    CDUnknownBlockType _readValueBack;
}

+ (id)jlChannelWithChannelId:(id)arg1 service:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType readValueBack; // @synthesize readValueBack=_readValueBack;
@property(retain, nonatomic) JLTimer *readingTimer; // @synthesize readingTimer=_readingTimer;
@property(nonatomic) int readDataState; // @synthesize readDataState=_readDataState;
@property(copy, nonatomic) CDUnknownBlockType waitCallBack; // @synthesize waitCallBack=_waitCallBack;
@property(retain, nonatomic) JLTimer *waitDataTimer; // @synthesize waitDataTimer=_waitDataTimer;
@property(nonatomic) int waiteDataState; // @synthesize waiteDataState=_waiteDataState;
@property(copy, nonatomic) CDUnknownBlockType openNotifyCallBack; // @synthesize openNotifyCallBack=_openNotifyCallBack;
@property(retain, nonatomic) JLTimer *openNotifyTimer; // @synthesize openNotifyTimer=_openNotifyTimer;
@property(nonatomic) int openNotifyState; // @synthesize openNotifyState=_openNotifyState;
@property(copy, nonatomic) CDUnknownBlockType sendCallBack; // @synthesize sendCallBack=_sendCallBack;
@property(retain, nonatomic) NSData *sendingData; // @synthesize sendingData=_sendingData;
@property(retain, nonatomic) NSMutableArray *sendingDataArr; // @synthesize sendingDataArr=_sendingDataArr;
@property(retain, nonatomic) JLTimer *sendTimer; // @synthesize sendTimer=_sendTimer;
@property(nonatomic) int sendState; // @synthesize sendState=_sendState;
@property(copy, nonatomic) CDUnknownBlockType findingCallBack; // @synthesize findingCallBack=_findingCallBack;
@property(retain, nonatomic) JLTimer *findServiceTimer; // @synthesize findServiceTimer=_findServiceTimer;
@property(nonatomic) int findServiceState; // @synthesize findServiceState=_findServiceState;
@property(retain, nonatomic) NSMutableDictionary *characteristicsStored; // @synthesize characteristicsStored=_characteristicsStored;
@property(retain, nonatomic) NSString *changnelIdentifier; // @synthesize changnelIdentifier=_changnelIdentifier;
- (void).cxx_destruct;
- (void)jlCallBack:(CDUnknownBlockType)arg1 code:(int)arg2 data:(id)arg3 message:(id)arg4;
- (void)jlChannelWaitDataWorkEndWithCode:(int)arg1 reaponse:(id)arg2 message:(id)arg3;
- (void)jlChannelOpenNotifyWorkEndWithCode:(int)arg1 reaponse:(id)arg2 message:(id)arg3;
- (void)jlChannelSendDataWorkEndWithCode:(int)arg1 reaponse:(id)arg2 message:(id)arg3;
- (id)jlGetSomeBytesWaited;
- (int)jlStoreSendData:(id)arg1 perLength:(unsigned long long)arg2;
- (void)jlFindServiceWorkEndWithCode:(int)arg1 reaponse:(id)arg2 message:(id)arg3;
- (void)jlCancelAllWorkWithCode:(int)arg1 reaponse:(id)arg2 message:(id)arg3;
- (void)jlStartWorkWitState:(int)arg1 timer:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (_Bool)jlChannelCouldStartWorkState:(int)arg1;
- (id)jlGetCharacteristicWithID:(id)arg1;
- (void)jlReleaseChannelBloothBuffer;
- (void)jlStoreService:(id)arg1;
- (void)dealloc;

@end

