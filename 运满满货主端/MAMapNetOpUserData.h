//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRunLoop;

@interface MAMapNetOpUserData : NSObject
{
    NSRunLoop *_runLoop;
    struct __CFRunLoopSource *_runLoopSourceRef;
}

@property(nonatomic) struct __CFRunLoopSource *runLoopSourceRef; // @synthesize runLoopSourceRef=_runLoopSourceRef;
@property(retain, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
- (void).cxx_destruct;
- (void)triggerSignal;
- (void)dealloc;

@end

