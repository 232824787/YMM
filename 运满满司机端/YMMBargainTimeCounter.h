//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UILabel, YMMBargainHomePageModel;

@interface YMMBargainTimeCounter : UIView
{
    _Bool _isCutdown;
    YMMBargainHomePageModel *_pageModel;
    UILabel *_timerLabel;
    NSTimer *_cutdownTimer;
    long long _totalInterval;
    long long _restInterval;
    CDUnknownBlockType _stopCutdownTimerInnerBlock;
}

+ (double)itemHeight:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType stopCutdownTimerInnerBlock; // @synthesize stopCutdownTimerInnerBlock=_stopCutdownTimerInnerBlock;
@property(nonatomic) _Bool isCutdown; // @synthesize isCutdown=_isCutdown;
@property(nonatomic) long long restInterval; // @synthesize restInterval=_restInterval;
@property(nonatomic) long long totalInterval; // @synthesize totalInterval=_totalInterval;
@property(retain, nonatomic) NSTimer *cutdownTimer; // @synthesize cutdownTimer=_cutdownTimer;
@property(retain, nonatomic) UILabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(retain, nonatomic) YMMBargainHomePageModel *pageModel; // @synthesize pageModel=_pageModel;
- (void).cxx_destruct;
- (id)getMMSSFromSS:(long long)arg1;
- (void)stopCutdownTimer;
- (void)updateCaptchaButtonTitle;
- (void)cutdownSeconds;
- (void)startCutdownTimer:(long long)arg1;
- (void)addConstraint;
- (void)setupTimeCounter:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

