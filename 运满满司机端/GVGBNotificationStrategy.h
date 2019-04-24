//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GVGBTransmitStrategy.h"

#import "GVBleDataDelegate.h"

@class GVBleCentralManage, GVGBFrame, NSMutableArray, NSMutableData, NSString;

@interface GVGBNotificationStrategy : GVGBTransmitStrategy <GVBleDataDelegate>
{
    int _status;
    GVGBFrame *_recvFrameInfo;
    GVBleCentralManage *_bleCentralManage;
    GVGBFrame *_transFrame;
    NSMutableArray *_sendDataBuf;
    NSMutableArray *_curSendDataBuf;
    NSMutableData *_recvDataBuf;
    CDUnknownBlockType _resultBlock;
}

+ (void)processRecvDataTask;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) NSMutableData *recvDataBuf; // @synthesize recvDataBuf=_recvDataBuf;
@property(retain, nonatomic) NSMutableArray *curSendDataBuf; // @synthesize curSendDataBuf=_curSendDataBuf;
@property(retain, nonatomic) NSMutableArray *sendDataBuf; // @synthesize sendDataBuf=_sendDataBuf;
@property(retain, nonatomic) GVGBFrame *transFrame; // @synthesize transFrame=_transFrame;
@property(retain, nonatomic) GVBleCentralManage *bleCentralManage; // @synthesize bleCentralManage=_bleCentralManage;
@property(retain, nonatomic) GVGBFrame *recvFrameInfo; // @synthesize recvFrameInfo=_recvFrameInfo;
- (void).cxx_destruct;
- (void)sendTestData:(CDUnknownBlockType)arg1;
- (void)recvLostLastPkg:(CDUnknownBlockType)arg1;
- (void)recvLostMiddlePkg:(CDUnknownBlockType)arg1;
- (void)recvLostFirstPkg:(CDUnknownBlockType)arg1;
- (void)lostLastPkg:(CDUnknownBlockType)arg1;
- (void)lostMiddlePkg:(CDUnknownBlockType)arg1;
- (void)lostFirstPkg:(CDUnknownBlockType)arg1;
- (void)initTestArray;
- (void)linkDisconnect;
- (void)stopSenderTimerT4;
- (void)startSenderTimerT4:(int)arg1;
- (void)stopRecverTimerT2;
- (void)startRecverTimerT2;
- (void)sendAllData;
- (void)sendFrameData:(id)arg1;
- (void)processSendData:(id)arg1;
- (void)transmit:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)recvDataFinish:(id)arg1;
- (void)recvAllData;
- (void)resetStatus;
- (void)processControllFrame:(id)arg1;
- (void)respFinishFrame;
- (void)respRecvLostPkgWithIndex:(int)arg1;
- (void)requestLostPackageWithIndex:(int)arg1;
- (void)sendTempRespond;
- (void)processRightData:(id)arg1 packageIndex:(int)arg2;
- (void)processNotifyRecvData:(id)arg1;
- (void)cacheRecvDataWithQueue:(id)arg1;
- (void)recvData:(id)arg1;
- (void)didUpdateValueForCharacteristic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

