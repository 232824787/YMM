//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface HCBWalletPVUVTracker : NSObject
{
    id <HCBWalletPVTrackable> _currentTrackedPVObj;
    NSString *_lastTrackedPVPageId;
    double _pvPageAppearTime;
    NSDictionary *_pvConfigs;
}

+ (void)trackUVEventId:(id)arg1 label:(id)arg2 values:(id)arg3;
+ (void)trackUVEventLabel:(id)arg1;
+ (void)stopTrackPV:(id)arg1;
+ (void)startTrackPV:(id)arg1;
+ (id)sharedTracker;
@property(retain, nonatomic) NSDictionary *pvConfigs; // @synthesize pvConfigs=_pvConfigs;
@property(nonatomic) double pvPageAppearTime; // @synthesize pvPageAppearTime=_pvPageAppearTime;
@property(copy, nonatomic) NSString *lastTrackedPVPageId; // @synthesize lastTrackedPVPageId=_lastTrackedPVPageId;
@property(nonatomic) __weak id <HCBWalletPVTrackable> currentTrackedPVObj; // @synthesize currentTrackedPVObj=_currentTrackedPVObj;
- (void).cxx_destruct;
- (id)p_pvValueForTrackable:(id)arg1;
- (id)p_commonPVValues;
- (id)p_pvPageIdForTrackable:(id)arg1;
- (void)p_handleNotification:(id)arg1;
- (void)p_setupNotification;
- (void)dealloc;

@end

