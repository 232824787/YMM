//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBCentralManagerDelegate.h"
#import "CBPeripheralDelegate.h"

@class NSString;

@interface ARTC_BlueObu_SDK : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>
{
}

+ (id)sharedObuSDK;
- (void)WRITE:(id)arg1;
- (id)assembleContentWithPort:(int)arg1 withEncrypt:(int)arg2 withCOS:(id)arg3;
- (id)addBCC:(id)arg1;
- (id)addGDWithContent:(id)arg1;
- (id)addWechatHeadWithCmdId:(int)arg1 withnSeq:(id)arg2 withData:(id)arg3;
- (void)PUSHFileRequest:(int)arg1 withMaxNumber:(int)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)PUSHPort:(int)arg1 withCos:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)pushCall:(id)arg1 state:(_Bool)arg2 error:(id)arg3;
- (_Bool)checkDataState:(id)arg1;
- (void)assembleBigPacket:(id)arg1;
- (void)resolve:(id)arg1;
- (void)handleData:(id)arg1;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)callTrans:(_Bool)arg1;
- (void)transCommand;
- (void)transCommand:(id)arg1 encode:(unsigned char)arg2 reqData:(id)arg3 reqDataLen:(unsigned long long)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)cardCommand:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)readCardOwnerRecordCallBack:(CDUnknownBlockType)arg1;
- (void)callback0019;
- (void)read0019File;
- (void)readCardConsumeRecord:(long long)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)readCardTransactionRecord:(id)arg1 maxNumber:(long long)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)loadCreditWriteCard:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)loadCreditGetMac1:(id)arg1 cardId:(id)arg2 terminalNo:(id)arg3 pinCode:(id)arg4 procType:(id)arg5 keyIndex:(id)arg6 callBack:(CDUnknownBlockType)arg7;
- (void)getObuInformation:(CDUnknownBlockType)arg1;
- (void)getCardInformation:(CDUnknownBlockType)arg1;
- (void)disconnectDevice:(CDUnknownBlockType)arg1;
- (void)connectTimeoutAction;
- (void)connectCall:(_Bool)arg1 message:(id)arg2;
- (void)connectDevice:(int)arg1 withDeviceName:(id)arg2 withMac:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (unsigned char)checkConnect;
- (unsigned char)isEnabledBluetooth;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

