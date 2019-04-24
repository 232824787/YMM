//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

#import "MGLiveDetectionDelegate.h"
#import "MGVideoDelegate.h"

@class AVCaptureVideoPreviewLayer, MGLiveDetectionManager, MGVideoManager, NSArray, NSString, UIImageView, UILabel;

@interface YMMFaceLiveViewController : YMMBaseViewController <MGLiveDetectionDelegate, MGVideoDelegate>
{
    _Bool _actionRandom;
    _Bool _actionRetry;
    _Bool _hiddenNavigation;
    long long _actionCount;
    NSArray *_actionArray;
    long long _actionTimeOut;
    long long _actionRetryCount;
    CDUnknownBlockType _faceDetectionBlock;
    id <YMMFaceLiveProtocol> _delegate;
    AVCaptureVideoPreviewLayer *_previewLayer;
    MGVideoManager *_videoManager;
    MGLiveDetectionManager *_liveManager;
    UIImageView *_faceImageView;
    UILabel *_stepTipLabel;
    UILabel *_stepLabel;
}

+ (id)idSdkVersion;
@property(nonatomic, getter=isHiddenNavigation) _Bool hiddenNavigation; // @synthesize hiddenNavigation=_hiddenNavigation;
@property(retain, nonatomic) UILabel *stepLabel; // @synthesize stepLabel=_stepLabel;
@property(retain, nonatomic) UILabel *stepTipLabel; // @synthesize stepTipLabel=_stepTipLabel;
@property(retain, nonatomic) UIImageView *faceImageView; // @synthesize faceImageView=_faceImageView;
@property(retain, nonatomic) MGLiveDetectionManager *liveManager; // @synthesize liveManager=_liveManager;
@property(retain, nonatomic) MGVideoManager *videoManager; // @synthesize videoManager=_videoManager;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(nonatomic) __weak id <YMMFaceLiveProtocol> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType faceDetectionBlock; // @synthesize faceDetectionBlock=_faceDetectionBlock;
@property(nonatomic) long long actionRetryCount; // @synthesize actionRetryCount=_actionRetryCount;
@property(nonatomic, getter=isActionRetry) _Bool actionRetry; // @synthesize actionRetry=_actionRetry;
@property(nonatomic) long long actionTimeOut; // @synthesize actionTimeOut=_actionTimeOut;
@property(retain, nonatomic) NSArray *actionArray; // @synthesize actionArray=_actionArray;
@property(nonatomic) long long actionCount; // @synthesize actionCount=_actionCount;
@property(nonatomic, getter=isActionRandom) _Bool actionRandom; // @synthesize actionRandom=_actionRandom;
- (void).cxx_destruct;
- (void)journalForCode:(unsigned long long)arg1;
- (void)detectionManagerSucessLiveDetection:(id)arg1 liveDetectionType:(unsigned long long)arg2;
- (void)detectionManager:(id)arg1 checkError:(id)arg2;
- (void)detectionManager:(id)arg1 liveChangeAction:(int)arg2 timeOut:(unsigned long long)arg3 currentActionStep:(unsigned long long)arg4;
- (void)detectionManager:(id)arg1 finishWithError:(int)arg2;
- (void)detectionManager:(id)arg1 frameWithImage:(id)arg2;
- (void)detectionManager:(id)arg1 finishWithStep:(unsigned long long)arg2;
- (void)MGCaptureOutput:(id)arg1 error:(unsigned long long)arg2;
- (void)MGCaptureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (_Bool)hasMediaVideoAuthorization;
- (void)starAnimation:(int)arg1 step:(long long)arg2 timeOut:(unsigned long long)arg3;
- (void)stopVideoWriter;
- (void)liveDetectionFinish:(int)arg1 checkOK:(_Bool)arg2 liveDetectionType:(unsigned long long)arg3;
- (void)showVideoPreview;
- (void)liveDetectionTimeOut;
- (void)restartLiveDetection;
- (void)liveFaceDetection;
- (void)ymm_goBack;
- (void)setParentVCNavigation:(_Bool)arg1;
- (void)loadSettings;
- (void)loadControls;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

