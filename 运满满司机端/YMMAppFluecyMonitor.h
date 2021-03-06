//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>;

@interface YMMAppFluecyMonitor : NSObject
{
    _Bool _isMonitoring;
    int _timeOut;
    struct __CFRunLoopObserver *_observer;
    unsigned long long _currentActivity;
    NSObject<OS_dispatch_semaphore> *_semphore;
    NSObject<OS_dispatch_semaphore> *_eventSemphore;
}

+ (id)sharedYMMAppFluecyMonitor;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *eventSemphore; // @synthesize eventSemphore=_eventSemphore;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semphore; // @synthesize semphore=_semphore;
@property(nonatomic) unsigned long long currentActivity; // @synthesize currentActivity=_currentActivity;
@property(nonatomic) struct __CFRunLoopObserver *observer; // @synthesize observer=_observer;
@property(nonatomic) _Bool isMonitoring; // @synthesize isMonitoring=_isMonitoring;
@property(nonatomic) int timeOut; // @synthesize timeOut=_timeOut;
- (void).cxx_destruct;
- (void)journalForFluency;
- (void)currStackInfoWithCallBak:(CDUnknownBlockType)arg1;
- (id)currStackInfo;
- (void)stopMonitoring;
- (void)startMonitoring;
- (_Bool)needFluecyMonitor;
- (void)commonInit;
- (void)dealloc;
- (id)init;

@end

