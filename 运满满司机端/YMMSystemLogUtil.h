//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YMMSystemLogUtil : NSObject
{
}

+ (id)timeStampyyyyMMdd:(id)arg1;
+ (id)systemLogTimestamp:(id)arg1;
+ (id)systemLogHTMLAfterCurrentTime:(double)arg1 logType:(long long)arg2;
+ (id)systemLogHTMLAfterCurrentTime:(double)arg1;
+ (id)logFormat:(id)arg1 date:(id)arg2;
+ (void)appendSystemLogToHTML:(id)arg1 sourceLog:(id)arg2 logType:(long long)arg3 journalType:(long long)arg4;
+ (void)appendSystemLogToHTML:(id)arg1 sourceLog:(id)arg2 logType:(long long)arg3;
+ (void)appendSystemLogToHTML:(id)arg1 afterCurrentTime:(double)arg2 logType:(long long)arg3 journalType:(long long)arg4;
+ (void)appendSystemLogToHTML:(id)arg1 afterCurrentTime:(double)arg2 logType:(long long)arg3;
+ (void)appendSystemLogToHTML:(id)arg1 afterCurrentTime:(double)arg2;
+ (id)logsAfterCurrentTime:(double)arg1;
+ (id)allLogInfoInCurrentProcess;
+ (id)loadHTMLTemplate:(long long)arg1;
+ (id)loadHTMLTemplate;

@end

