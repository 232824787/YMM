//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YMMBacktraceLogger : NSObject
{
}

+ (void)ymm_logAllThread;
+ (void)ymm_logCurrentThread;
+ (void)ymm_logMainThread;
+ (id)ymm_backtraceOfNSThread:(id)arg1;
+ (id)ymm_backtraceOfCurrentThread;
+ (id)ymm_backtraceOfMainThread;
+ (id)ymm_backtraceOfAllThread;
+ (void)load;

@end

