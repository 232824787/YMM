//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GVAbstractProtocols.h"

@class GVGBTransmitStrategy;

@interface GVGBProtocol : GVAbstractProtocols
{
    int _maxFrameLength;
    GVGBTransmitStrategy *_transmitStrategy;
}

@property(nonatomic) int maxFrameLength; // @synthesize maxFrameLength=_maxFrameLength;
@property(retain, nonatomic) GVGBTransmitStrategy *transmitStrategy; // @synthesize transmitStrategy=_transmitStrategy;
- (void).cxx_destruct;
- (void)recvLostLastPkg:(CDUnknownBlockType)arg1;
- (void)recvLostMiddlePkg:(CDUnknownBlockType)arg1;
- (void)recvLostFirstPkg:(CDUnknownBlockType)arg1;
- (void)lostLastPkg:(CDUnknownBlockType)arg1;
- (void)lostMiddlePkg:(CDUnknownBlockType)arg1;
- (void)lostFirstPkg:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)addTransRecordWith:(id)arg1;
- (void)addConsumeRecordWith:(id)arg1;
- (void)packTlvArray:(id)arg1 targetType:(int)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)isCosCmdSuccess:(id)arg1;
- (void)transmit:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)recharge:(int)arg1 key:(id)arg2 deviceno:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)credit:(int)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)purchase:(int)arg1 key:(id)arg2 deviceno:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)purchase:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)manufacturerChannel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)transChannel:(id)arg1 dataType:(unsigned char)arg2 channelID:(unsigned char)arg3 callback:(CDUnknownBlockType)arg4;
- (void)transChannel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)authChannel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getDevRecords:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)cosChannel:(id)arg1 targetType:(int)arg2 callback:(CDUnknownBlockType)arg3;
- (void)devChannel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)creditForLoad:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)initializeForLoad:(id)arg1 creditAmount:(int)arg2 terminalNo:(id)arg3 pinCode:(id)arg4 procType:(id)arg5 keyIndex:(id)arg6 callback:(CDUnknownBlockType)arg7;
- (void)getICCOwnerRecord:(CDUnknownBlockType)arg1;
- (void)getICCConsumeRecords:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)cosTransChannel:(id)arg1 targetType:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getICCTransactionRecords:(id)arg1 maxNumber:(int)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getICCInfo:(CDUnknownBlockType)arg1;
- (void)intAuthDev:(id)arg1 mac:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getDevInfo:(CDUnknownBlockType)arg1;
- (void)getDevMac:(CDUnknownBlockType)arg1;
- (void)resetDev:(CDUnknownBlockType)arg1;
- (void)getDevBattery:(CDUnknownBlockType)arg1;
- (void)getDevVersion:(CDUnknownBlockType)arg1;
- (void)getDevSN:(CDUnknownBlockType)arg1;
- (void)shutDownObu:(CDUnknownBlockType)arg1;
- (void)initDevice:(CDUnknownBlockType)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;

@end

