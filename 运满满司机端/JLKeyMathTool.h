//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JLKeyMathTool : NSObject
{
}

+ (int)jlRequestDeviceAuthDataWithPhoneId:(id)arg1 devSNData:(id)arg2 phoneTime:(id)arg3 authData:(id)arg4 deviceRand:(id)arg5 resultDict:(id *)arg6;
+ (int)jlCheckServiceAuthDataWithPhoneId:(id)arg1 deviceSNData:(id)arg2 phoneTime:(id)arg3 authData:(id)arg4 resultDict:(id *)arg5;
+ (int)jlRequestSessionRand:(id *)arg1;
+ (int)jlRequestDeviceActiveDataWithSNNum:(id)arg1 deviceRand:(id)arg2 resultDict:(id *)arg3;
+ (int)jlEncodeKeyDeviceWithSNNum:(id)arg1 rand:(id)arg2 startTime:(id)arg3 endTime:(id)arg4 resultDict:(id *)arg5;

@end

