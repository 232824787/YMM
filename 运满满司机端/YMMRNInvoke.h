//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface YMMRNInvoke : NSObject <RCTBridgeModule>
{
}

+ (const struct RCTMethodInfo *)__rct_export__rn_common_invoke450;
+ (void)load;
+ (id)moduleName;
- (id)instanceFromClassName:(id)arg1;
- (void)addArgs:(id)arg1 type:(id)arg2 value:(id)arg3 index:(long long)arg4;
- (void)className:(id)arg1 instanceMethod:(_Bool)arg2 methodName:(id)arg3 args:(id)arg4 callBack:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

