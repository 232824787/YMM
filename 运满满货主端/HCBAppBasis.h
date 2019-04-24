//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBABConfiguration_Core, HCBABModuleManager;

@interface HCBAppBasis : NSObject
{
    HCBABModuleManager *_moduleManager;
}

+ (id)defaultAppBasis;
@property(retain, nonatomic) HCBABModuleManager *moduleManager; // @synthesize moduleManager=_moduleManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) HCBABConfiguration_Core *core_configuration;
@property(copy, nonatomic) CDUnknownBlockType coordinateProvider;
@property(nonatomic) unsigned long long env;
- (id)setupMethodSignatures;
- (void)setup;
- (struct HCBABCoordinate)coordinate;
- (void)setupWithConfigurations:(id)arg1;
- (id)init;
- (_Bool)isYMMClient;
- (int)appDomainId;
- (int)appClientId;
- (id)appBundleIdentifier;
- (unsigned long long)appClientType;
- (void)getPartnerTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)injectSessionWithPartnerData:(id)arg1;
- (void)setupCoordinateProvider;
- (void)logout;
- (_Bool)isLogin;
- (id)loginAndCreateUserWithObject:(id)arg1;

@end

