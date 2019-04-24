//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYAbstractModule.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface BLYMartianTracker : BLYAbstractModule
{
    _Bool _autoTrackingEnable;
    NSObject<OS_dispatch_queue> *_trackerQueue;
    NSMutableArray *_trackerMessages;
}

+ (void)trackPageView:(id)arg1;
+ (id)trackLog;
+ (id)currentTimeString;
+ (id)constructSelector;
+ (id)sharedTracker;
@property(retain, nonatomic) NSMutableArray *trackerMessages; // @synthesize trackerMessages=_trackerMessages;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *trackerQueue; // @synthesize trackerQueue=_trackerQueue;
@property(nonatomic, getter=isAutoTrackingEnabled) _Bool autoTrackingEnable; // @synthesize autoTrackingEnable=_autoTrackingEnable;
- (void).cxx_destruct;
- (void)trackAppLifeCycleEvent:(id)arg1;
- (id)allLogs;
- (void)trackMessage:(id)arg1;
- (void)didReceiveAppLifeCycleEvent:(id)arg1;
- (void)registerAppLifeCycleEvents;
- (void)startTrack;
- (id)init;
- (_Bool)disableModule;
- (_Bool)enableModule;

@end

