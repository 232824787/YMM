//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LogInfo, NSRecursiveLock, NSString;

@interface BaseBuffer : NSObject
{
    int _position;
    NSRecursiveLock *_lock;
    char *_ptr;
    unsigned long long _size;
    NSString *_logPath;
    LogInfo *_latestLogInfo;
}

@property(retain, nonatomic) LogInfo *latestLogInfo; // @synthesize latestLogInfo=_latestLogInfo;
@property(retain, nonatomic) NSString *logPath; // @synthesize logPath=_logPath;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) int position; // @synthesize position=_position;
@property(nonatomic) char *ptr; // @synthesize ptr=_ptr;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isNeedFlush;
- (void)realAppendLog:(char *)arg1 length:(unsigned long long)arg2;
- (void)realAppendLog:(char *)arg1;
- (void)onEnterBackground;
- (void)onMemoryWarning;
- (void)close;
- (void)flushToDisk;
- (void)appendLog:(id)arg1;
- (id)init;

@end

