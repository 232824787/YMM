//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge, UIViewController;

@interface YMMRCTNetworkApi : NSObject <RCTBridgeModule>
{
    UIViewController *_currentCtrl;
}

+ (_Bool)requiresMainQueueSetup;
+ (const struct RCTMethodInfo *)__rct_export__rn_ios_request300;
+ (void)load;
+ (id)moduleName;
@property(retain, nonatomic) UIViewController *currentCtrl; // @synthesize currentCtrl=_currentCtrl;
- (void).cxx_destruct;
- (id)convertSuccessResult:(id)arg1;
- (id)convertFailResult:(id)arg1;
- (id)serverFilePathPrefix;
- (id)constantsToExport;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)requestParams:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

