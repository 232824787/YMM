//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBMonitorHookUnit, NSDictionary, NSString;

@protocol HCBMonitorHookUnitDelegate <NSObject>
- (void)unit:(HCBMonitorHookUnit *)arg1 didCallHookedMethod:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
@end

