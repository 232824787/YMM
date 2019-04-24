//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "IFlyPcmRecorderDelegate.h"
#import "ISEEngineDelegate.h"

@class IFlyISEParam, IFlyPcmRecorder, ISEEngine, NSData, NSMutableArray, NSString;

@interface IFlyISERecognizer : NSOperation <IFlyPcmRecorderDelegate, ISEEngineDelegate>
{
    NSString *_textParams;
    NSData *_data;
    ISEEngine *_iseEngine;
    IFlyPcmRecorder *_iseRecorder;
    NSString *_params;
    NSString *_grammar;
    NSMutableArray *_queue;
    _Bool _isNeedExit;
    int _error;
    id <IFlySpeechEvaluatorDelegate> _delegate;
    int _state;
    IFlyISEParam *_sessionConfig;
    unsigned long long _iseSpeechTimeout;
    NSString *_iseSamplerate;
}

@property(copy, nonatomic) NSString *iseSamplerate; // @synthesize iseSamplerate=_iseSamplerate;
@property(nonatomic) unsigned long long iseSpeechTimeout; // @synthesize iseSpeechTimeout=_iseSpeechTimeout;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) IFlyISEParam *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
- (void)dealloc;
- (void)onIFlyRecorderError:(id)arg1 theError:(int)arg2;
- (void)onIFlyRecorderBuffer:(const void *)arg1 bufferSize:(int)arg2;
- (void)onEnd:(int)arg1;
- (void)onResult:(const void *)arg1 length:(unsigned int)arg2 status:(int)arg3;
- (void)onStop;
- (void)onWaitting;
- (void)onStart;
- (void)onRecording:(id)arg1;
- (void)end;
- (void)main;
- (id)getParam:(id)arg1;
- (void)setResultCategory:(unsigned long long)arg1;
- (void)setISESamplerate:(id)arg1;
- (void)setISETimeout:(unsigned long long)arg1;
- (_Bool)stopRecord;
- (_Bool)startRecord;
- (void)startListening:(id)arg1 data:(id)arg2 textParams:(id)arg3;
- (id)init:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

