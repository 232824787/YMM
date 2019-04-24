//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GVBleDevAPI;

@interface GVObuSDK : NSObject
{
    GVBleDevAPI *_gvBleAPI;
    id <GVObuSDKDelegate> _gvObuSDKDelegate;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedObuSDK;
@property(nonatomic) __weak id <GVObuSDKDelegate> gvObuSDKDelegate; // @synthesize gvObuSDKDelegate=_gvObuSDKDelegate;
@property(retain, nonatomic) GVBleDevAPI *gvBleAPI; // @synthesize gvBleAPI=_gvBleAPI;
- (void).cxx_destruct;
- (void)recvLostLastPkg:(CDUnknownBlockType)arg1;
- (void)recvLostMiddlePkg:(CDUnknownBlockType)arg1;
- (void)recvLostFirstPkg:(CDUnknownBlockType)arg1;
- (void)lostLastPkg:(CDUnknownBlockType)arg1;
- (void)lostMiddlePkg:(CDUnknownBlockType)arg1;
- (void)lostFirstPkg:(CDUnknownBlockType)arg1;
- (void)purchaseWithMoney:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)creditWithMoney:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)creditForLoad:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)initializeForLoad:(id)arg1 creditAmount:(int)arg2 terminalNo:(id)arg3 pinCode:(id)arg4 procType:(id)arg5 keyIndex:(id)arg6 callback:(CDUnknownBlockType)arg7;
- (void)getICCOwnerRecord:(CDUnknownBlockType)arg1;
- (void)getICCConsumeRecords:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)cosTransChannel:(id)arg1 targetType:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getICCTransactionRecords:(id)arg1 maxNumber:(int)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getICCInfo:(CDUnknownBlockType)arg1;
- (void)getDevInfo:(CDUnknownBlockType)arg1;
- (void)intAuthDev:(id)arg1 mac:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getDevMac:(CDUnknownBlockType)arg1;
- (void)resetDev:(CDUnknownBlockType)arg1;
- (void)getDevBattery:(CDUnknownBlockType)arg1;
- (void)getDevVersion:(CDUnknownBlockType)arg1;
- (void)getDevSN:(CDUnknownBlockType)arg1;
- (void)manufacturerChannel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)transChannel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)authChannelC1WorkKey:(id)arg1 workKeyMac:(id)arg2 macKey:(id)arg3 macKeyMac:(id)arg4 serverRondom:(id)arg5 signData:(id)arg6 callback:(CDUnknownBlockType)arg7;
- (void)authChannelC0:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)authChannel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getDevRecords:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)cosChannel:(id)arg1 targetType:(int)arg2 callback:(CDUnknownBlockType)arg3;
- (void)devChannel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)initDevice:(CDUnknownBlockType)arg1;
- (void)switchCommType:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)disconnectDevice:(CDUnknownBlockType)arg1;
- (void)connectDeviceWithName:(id)arg1 timeout:(double)arg2 callback:(CDUnknownBlockType)arg3;
- (void)connectDevice:(double)arg1 callback:(CDUnknownBlockType)arg2;
- (void)stopScanDevice;
- (void)startScanDevice:(CDUnknownBlockType)arg1;
- (void)unbindDev:(CDUnknownBlockType)arg1;
- (void)bindDev:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (unsigned char)checkConnection:(CDUnknownBlockType)arg1;
- (void)isEnabledBluetooth:(CDUnknownBlockType)arg1;
- (void)setProtocolType:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setObuSDKDelegate:(id)arg1;
- (id)getSDKVersion;

@end

