//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (NetworkExtention)
- (void)ymm_cancelAllNetworkTask;
- (void)ymm_cancelNetworkTaskWithIdentifier:(id)arg1;
- (id)ymm_executeNetworkTask:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)_ymm_taskPool;
@end

