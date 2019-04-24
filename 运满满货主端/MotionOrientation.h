//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMotionManager, NSOperationQueue;

@interface MotionOrientation : NSObject
{
    long long _interfaceOrientation;
    long long _deviceOrientation;
    CMMotionManager *_motionManager;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedInstance;
+ (void)initialize;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(readonly) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(readonly) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
- (void).cxx_destruct;
- (id)debugDataStringWithZ:(double)arg1 withAngle:(double)arg2;
- (long long)deviceOrientationWithCurrentDeviceOrientation:(long long)arg1 angle:(float)arg2 z:(float)arg3;
- (long long)interfaceOrientationWithCurrentInterfaceOrientation:(long long)arg1 angle:(float)arg2 z:(float)arg3;
- (long long)deviceOrientationForInterfaceOrientation:(long long)arg1;
- (void)accelerometerUpdateWithData:(id)arg1 error:(id)arg2;
- (void)stopAccelerometerUpdates;
- (void)startAccelerometerUpdates;
@property(readonly) struct CGAffineTransform affineTransform;
- (id)init;
- (void)_initialize;

@end

