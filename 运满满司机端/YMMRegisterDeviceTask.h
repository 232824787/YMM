//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSNumber, NSString;

@interface YMMRegisterDeviceTask : YMMCommonNetworkTask
{
    NSString *_pushToken;
    NSString *_userId;
    NSNumber *_appType;
    NSNumber *_platformType;
    NSString *_osVersion;
    NSString *_appVersion;
}

@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSNumber *platformType; // @synthesize platformType=_platformType;
@property(retain, nonatomic) NSNumber *appType; // @synthesize appType=_appType;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
- (void).cxx_destruct;
- (Class)ymm_responseModelClass;
- (id)init;
- (id)ymm_networkAPIPath;

@end

