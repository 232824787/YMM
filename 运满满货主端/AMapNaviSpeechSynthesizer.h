//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVSpeechSynthesizerDelegate.h"

@class AVSpeechSynthesizer, CTCallCenter, NSString;

@interface AMapNaviSpeechSynthesizer : NSObject <AVSpeechSynthesizerDelegate>
{
    _Bool _isMute;
    AVSpeechSynthesizer *_speechSynthesizer;
    CTCallCenter *_callCenter;
}

@property(retain, nonatomic) CTCallCenter *callCenter; // @synthesize callCenter=_callCenter;
@property(retain, nonatomic) AVSpeechSynthesizer *speechSynthesizer; // @synthesize speechSynthesizer=_speechSynthesizer;
@property(nonatomic) _Bool isMute; // @synthesize isMute=_isMute;
- (void).cxx_destruct;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)stopSpeak;
- (void)speakString:(id)arg1;
- (_Bool)isOnPhoneCall;
- (_Bool)isSpeaking;
- (void)buildSpeechSynthesizer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

