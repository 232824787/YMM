//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OSSCancellationToken;

@interface OSSCancellationTokenRegistration : NSObject
{
    _Bool _disposed;
    OSSCancellationToken *_token;
    CDUnknownBlockType _cancellationObserverBlock;
    NSObject *_lock;
}

+ (id)registrationWithToken:(id)arg1 delegate:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool disposed; // @synthesize disposed=_disposed;
@property(retain, nonatomic) NSObject *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) CDUnknownBlockType cancellationObserverBlock; // @synthesize cancellationObserverBlock=_cancellationObserverBlock;
@property(nonatomic) __weak OSSCancellationToken *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)throwIfDisposed;
- (void)notifyDelegate;
- (void)dispose;
- (id)init;

@end

