//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTCellularData, NSMutableArray, UIAlertController;

@interface YMMNetworkAccessability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
    CTCellularData *_cellularData;
    NSMutableArray *_becomeActiveCallbacks;
    unsigned long long _previousState;
    UIAlertController *_alertController;
    _Bool _automaticallyAlert;
    CDUnknownBlockType _networkAccessibleStateDidUpdateNotifier;
    _Bool _checkActiveLaterWhenDidBecomeActive;
    _Bool _checkingActiveLater;
}

+ (id)sharedInstance;
+ (unsigned long long)currentState;
+ (void)setStateDidUpdateNotifier:(CDUnknownBlockType)arg1;
+ (void)setAlertEnable:(_Bool)arg1;
+ (void)stop;
+ (void)start;
- (void).cxx_destruct;
- (id)alertController;
- (void)hideNetworkRestrictedAlert;
- (void)showNetworkRestrictedAlert;
- (void)notiWithAccessibleState:(unsigned long long)arg1;
- (_Bool)isWiFiEnable;
- (long long)getNetworkTypeFromStatusBar;
- (void)getCurrentNetworkType:(CDUnknownBlockType)arg1;
- (void)startCheck;
- (_Bool)currentReachable;
- (void)startCellularDataNotifier;
- (void)startReachabilityNotifier;
- (void)cancelEnsureActive;
- (void)ensureActive;
- (void)checkActiveLater;
- (void)waitActive:(CDUnknownBlockType)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)cleanNetworkAccessibity;
- (void)setupNetworkAccessibity;
- (id)init;
- (void)dealloc;
- (unsigned long long)currentState;
- (void)monitorNetworkAccessibleStateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setNetworkAccessibleStateDidUpdateNotifier:(CDUnknownBlockType)arg1;

@end

