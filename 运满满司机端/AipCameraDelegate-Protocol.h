//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVCaptureMetadataOutputObjectsDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVMetadataFaceObject, NSError, VFSDKAipCameraController;

@protocol AipCameraDelegate <AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>

@optional
- (void)cameraController:(VFSDKAipCameraController *)arg1 didDetectFace:(AVMetadataFaceObject *)arg2;
- (void)cameraController:(VFSDKAipCameraController *)arg1 didCatchError:(NSError *)arg2;
- (void)cameraController:(VFSDKAipCameraController *)arg1 didChangeAuthorizationStatus:(long long)arg2;
@end

