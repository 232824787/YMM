//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBBaseShareInfo, HCBBaseSharePlatformConfig;

@protocol HCBBaseShareDelegate <NSObject>
- (void)HCBBaseShareWithInfo:(HCBBaseShareInfo *)arg1 shareDoneBlock:(void (^)(unsigned long long, NSDictionary *))arg2;
- (void)HCBBaseShareStartWithConfig:(HCBBaseSharePlatformConfig *)arg1 didSelectedPlatformBlock:(void (^)(NSString *, NSDictionary *))arg2;
@end

