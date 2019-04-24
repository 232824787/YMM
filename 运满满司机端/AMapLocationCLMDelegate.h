//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class NSMapTable, NSRecursiveLock, NSString;

@interface AMapLocationCLMDelegate : NSObject <CLLocationManagerDelegate>
{
    NSMapTable *_allDelegates;
    NSRecursiveLock *_mapTableLock;
}

+ (void)threadEntryPoint:(id)arg1;
+ (id)thread;
+ (id)sharedDelegate;
@property(retain, nonatomic) NSRecursiveLock *mapTableLock; // @synthesize mapTableLock=_mapTableLock;
@property(retain, nonatomic) NSMapTable *allDelegates; // @synthesize allDelegates=_allDelegates;
- (void).cxx_destruct;
- (_Bool)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)removeManager:(id)arg1;
- (void)addManager:(id)arg1 owner:(id)arg2;
- (void)initProperties;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

