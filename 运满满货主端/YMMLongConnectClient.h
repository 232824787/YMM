//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LongConnectDataDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, YMMSocketClient;

@interface YMMLongConnectClient : NSObject <LongConnectDataDelegate>
{
    _Bool _isConnected;
    YMMSocketClient *_client;
    NSMutableDictionary *_eventPool;
    NSMutableArray *_serviceArr;
}

+ (id)shared;
@property(retain, nonatomic) NSMutableArray *serviceArr; // @synthesize serviceArr=_serviceArr;
@property(retain, nonatomic) NSMutableDictionary *eventPool; // @synthesize eventPool=_eventPool;
@property(retain, nonatomic) YMMSocketClient *client; // @synthesize client=_client;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
- (void).cxx_destruct;
- (void)longConnectReadData:(id)arg1;
- (void)disConnect;
- (void)connect;
- (void)applicationBecomeActive:(id)arg1;
- (void)notification_disconnect:(id)arg1;
- (void)notification_connect:(id)arg1;
- (void)setupNotification;
- (void)unRegisterEvent:(id)arg1;
- (void)reg;
- (void)registerEvent:(id)arg1 block:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

