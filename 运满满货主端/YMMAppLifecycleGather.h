//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YMMAppLifecycleGather : NSObject
{
}

+ (void)ymm_appWillTerminate:(id)arg1;
+ (void)ymm_appDidEnterBackground:(id)arg1;
+ (void)ymm_appWillEnterForeground:(id)arg1;
+ (void)ymm_appDidFinishLaunching:(id)arg1;
+ (void)ymm_addAppLifecycleNotification;

@end

