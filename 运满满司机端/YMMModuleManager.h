//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIApplicationDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIWindow;

@interface YMMModuleManager : NSObject <UIApplicationDelegate>
{
    NSMutableArray *_modules;
    NSMutableDictionary *_serviceClassDict;
    NSMutableDictionary *_serviceDict;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)endBenchmark:(id)arg1 start:(double)arg2;
- (double)startBenchmark:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (id)servicesForProtocol:(id)arg1;
- (id)takeOneServiceForProtocol:(id)arg1;
- (id)serviceForModuleName:(id)arg1 andProtocol:(id)arg2;
- (void)setServiceClass:(Class)arg1 forProtocol:(id)arg2;
- (void)registerService:(id)arg1;
- (id)findServiceProtocols:(id)arg1;
- (id)moduleForName:(id)arg1;
- (void)registerModule:(id)arg1;
- (void)registerRouter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

