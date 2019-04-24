//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class NSString, NSTimer, UIImageView;

@interface YMMVoiceSearchEntranceView : UIView <CAAnimationDelegate>
{
    CDUnknownBlockType _voiceSerachCallback;
    UIView *_lineView;
    UIImageView *_voiceImageView;
    NSTimer *_timer;
    long long _currentCutdownNumber;
}

@property(nonatomic) long long currentCutdownNumber; // @synthesize currentCutdownNumber=_currentCutdownNumber;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIImageView *voiceImageView; // @synthesize voiceImageView=_voiceImageView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(copy, nonatomic) CDUnknownBlockType voiceSerachCallback; // @synthesize voiceSerachCallback=_voiceSerachCallback;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)timeAction;
- (void)voiceSerachAction;
- (void)setVoiceCargoSearchUsed;
- (void)showAnimation;
- (void)initTimer;
- (void)setViewConstraints;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

