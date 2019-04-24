//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSObject<OS_dispatch_source>, NSString, UIColor, UIFont, UILabel, YMMDigitalClockLabel;

@interface YMMTimerLabel : UIView
{
    UILabel *_countLabel;
    YMMDigitalClockLabel *_clockLabel;
    NSObject<OS_dispatch_source> *_timer;
    long long _countDownSeconds;
    double _originalDuraion;
    long long _delta;
    unsigned long long _style;
    long long _interval;
    double _endTime;
    UIColor *_textColor;
    long long _textAlignment;
    UIFont *_font;
    NSString *_title;
    CDUnknownBlockType _tickHandler;
    CDUnknownBlockType _completeHandler;
}

+ (id)countDownTimeLabelWithEndTime:(double)arg1;
@property(copy, nonatomic) CDUnknownBlockType completeHandler; // @synthesize completeHandler=_completeHandler;
@property(copy, nonatomic) CDUnknownBlockType tickHandler; // @synthesize tickHandler=_tickHandler;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_updateTextWithDuration:(long long)arg1;
- (void)_timerHandler;
- (void)_stopTimer;
- (void)_setupTimer;
- (void)_resetTimer;
- (void)_calculateRamainingTime;
- (void)_commonInit;
- (void)stop;
- (void)start;
- (void)dealloc;
- (void)layoutSubviews;
- (id)init;

@end

