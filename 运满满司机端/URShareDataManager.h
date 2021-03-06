//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface URShareDataManager : NSObject
{
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    unsigned long long _maxRequestThread;
    NSString *_lid;
    NSString *_openUDID;
    NSString *_appKey;
    NSObject<OS_dispatch_queue> *_safeQueue;
    unsigned long long _curRequestThread;
}

+ (id)shareManager;
@property(nonatomic) unsigned long long curRequestThread; // @synthesize curRequestThread=_curRequestThread;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *safeQueue; // @synthesize safeQueue=_safeQueue;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(copy, nonatomic) NSString *openUDID; // @synthesize openUDID=_openUDID;
@property(copy, nonatomic) NSString *lid; // @synthesize lid=_lid;
@property(nonatomic) unsigned long long maxRequestThread; // @synthesize maxRequestThread=_maxRequestThread;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *saveQueue; // @synthesize saveQueue=_saveQueue;
- (void).cxx_destruct;
- (void)addCurRequestThreadCount:(unsigned long long)arg1;
- (unsigned long long)curRequestThreadCount;

@end

