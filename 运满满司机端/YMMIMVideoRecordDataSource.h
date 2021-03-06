//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureFileOutputRecordingDelegate.h"

@class AVCaptureConnection, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureSession, AVCaptureVideoPreviewLayer, NSString, NSTimer;

@interface YMMIMVideoRecordDataSource : NSObject <AVCaptureFileOutputRecordingDelegate>
{
    id <YMMIMVideoRecordDataSourceDelegate> _delegate;
    AVCaptureVideoPreviewLayer *_captureLayer;
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_mediaDeviceInput;
    AVCaptureDeviceInput *_audioDeviceInput;
    AVCaptureMovieFileOutput *_movieFileOutput;
    AVCaptureConnection *_captureConnection;
    NSTimer *_timer;
    double _recordTime;
}

+ (id)getCacheDirWithCreate:(_Bool)arg1;
+ (double)getfileSize:(id)arg1;
+ (id)cacheFilePath:(_Bool)arg1;
+ (void)showNotAllowedAccessMicrophoneAlert;
+ (void)showNotAllowedAccessCameraAlert;
+ (void)getMicrophoneAuth:(CDUnknownBlockType)arg1;
+ (void)getCameraAuthorization:(CDUnknownBlockType)arg1;
@property(nonatomic) double recordTime; // @synthesize recordTime=_recordTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) AVCaptureConnection *captureConnection; // @synthesize captureConnection=_captureConnection;
@property(retain, nonatomic) AVCaptureMovieFileOutput *movieFileOutput; // @synthesize movieFileOutput=_movieFileOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *audioDeviceInput; // @synthesize audioDeviceInput=_audioDeviceInput;
@property(retain, nonatomic) AVCaptureDeviceInput *mediaDeviceInput; // @synthesize mediaDeviceInput=_mediaDeviceInput;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *captureLayer; // @synthesize captureLayer=_captureLayer;
@property(nonatomic) __weak id <YMMIMVideoRecordDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (unsigned long long)getVideoTotalDurationSecondsWithUrl:(id)arg1;
- (id)getThumbnailImageWithFilePath:(id)arg1 time:(double)arg2;
- (void)cleanCacheFiles;
- (void)convertVideoQuailtyWithInputURL:(id)arg1 outputURL:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (void)compressVideoWithFileURL:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)stopRecording;
- (void)startRecordToFileURL:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)fireWithTimer:(id)arg1;
- (id)getSwitchCameraDevice;
- (void)switchCamera;
- (void)configureExposureModeWithDevice:(id)arg1;
- (void)focusWithMode:(long long)arg1 exposureMode:(long long)arg2 point:(struct CGPoint)arg3;
- (void)setFoucusWithPoint:(struct CGPoint)arg1;
- (void)configureAVCaptureSession;
- (void)configureAVAudioSessionInBackgroundMode;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

