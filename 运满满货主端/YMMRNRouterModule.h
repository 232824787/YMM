//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YMMModuleProtocol.h"

@class NSString, UIWindow;

@interface YMMRNRouterModule : NSObject <YMMModuleProtocol>
{
}

- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (id)routers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

