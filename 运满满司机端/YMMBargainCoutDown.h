//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface YMMBargainCoutDown : NSObject
{
    long long _timeInterval;
    NSTimer *_time;
}

+ (id)sharedYMMBargainCoutDown;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSTimer *time; // @synthesize time=_time;
@property(nonatomic) long long timeInterval; // @synthesize timeInterval=_timeInterval;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)timeAction;
- (void)reload;
- (void)start;

@end

