//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Logger : NSObject
{
}

+ (id)getLastFewLogs;
+ (id)getDayStringBefore:(int)arg1;
+ (id)getTodayString;
+ (void)openConsoleLog:(_Bool)arg1;
+ (void)closeBuffer;
+ (void)appendCycleLog:(id)arg1;
+ (void)appendLog:(id)arg1 level:(unsigned long long)arg2 cryptType:(unsigned long long)arg3 module:(const char *)arg4 function:(const char *)arg5 line:(int)arg6;
+ (void)appendLog:(id)arg1 level:(unsigned long long)arg2 module:(const char *)arg3 function:(const char *)arg4 line:(int)arg5;
+ (void)appendOpenFile:(id)arg1;

@end

