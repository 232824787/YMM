//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HCBPetrolMonitor : NSObject
{
}

+ (void)monitorPage:(id)arg1 startDate:(id)arg2 endLoadDate:(id)arg3 onComplete:(CDUnknownBlockType)arg4;
+ (void)uploadEvent:(id)arg1;
+ (_Bool)eventCanUpload:(id)arg1;
+ (void)monitorPaymentLogWithData:(id)arg1 onLevel:(unsigned long long)arg2;
+ (void)monitorPaymentLogWithData:(id)arg1;

@end

