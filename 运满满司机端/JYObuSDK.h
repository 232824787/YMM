//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JYObuSDK : NSObject
{
    unsigned char _cosType;
    id <JYObuSDKDelegate> _delegate;
}

+ (int)parseCosData:(id)arg1 fileByte:(unsigned char)arg2;
+ (void)addConsumeRecordWith:(id)arg1;
+ (void)addTransRecordWith:(id)arg1;
+ (id)readRecordWith:(long long)arg1 orderCount:(long long)arg2 fileByte:(unsigned char)arg3;
+ (void)writeKey:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)intAuthDev:(id)arg1 mac:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)extAuthDev:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)cosChannel:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)purchase:(int)arg1 key:(id)arg2 deviceno:(id)arg3 result:(CDUnknownBlockType)arg4;
+ (void)recharge:(int)arg1 key:(id)arg2 deviceno:(id)arg3 result:(CDUnknownBlockType)arg4;
+ (void)loadCreditWithDateMAC2:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)readyForLoadWithCredit:(id)arg1 terminalNo:(id)arg2 pinCode:(id)arg3 procType:(id)arg4 keyIndex:(id)arg5 callback:(CDUnknownBlockType)arg6;
+ (void)readCardConsumeRecord:(long long)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)readCardTransactionRecord:(id)arg1 maxNumber:(long long)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)readCardOwnerRecord:(CDUnknownBlockType)arg1;
+ (void)readCardInfo:(CDUnknownBlockType)arg1;
+ (void)cosPinCmd:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)authenticateOBU:(unsigned char)arg1 result:(CDUnknownBlockType)arg2;
+ (void)transCommand:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)electricity:(CDUnknownBlockType)arg1;
+ (void)obuMMIWithRed:(unsigned char)arg1 green:(unsigned char)arg2 beep:(unsigned char)arg3 lcd:(unsigned char)arg4 result:(CDUnknownBlockType)arg5;
+ (void)getBluetoothInfo:(CDUnknownBlockType)arg1;
+ (void)version:(CDUnknownBlockType)arg1;
+ (void)shutdown:(CDUnknownBlockType)arg1;
+ (void)unbindOBU:(CDUnknownBlockType)arg1;
+ (void)bindOBU:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (id)shareSDK;
@property(nonatomic) unsigned char cosType; // @synthesize cosType=_cosType;
@property(nonatomic) __weak id <JYObuSDKDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)disconnect;
- (void)connect;
- (void)stopScan;
- (void)startScanWithName:(id)arg1 timeout:(int)arg2;
- (void)startScanWithId:(id)arg1 name:(id)arg2 timeout:(int)arg3;
- (void)startScan:(int)arg1;
- (void)addBleStatus;
- (_Bool)isConnect;
- (void)controlSetup:(CDUnknownBlockType)arg1;

@end

