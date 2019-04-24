//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

@class NSString, NSTimer, UIButton, UILabel, UIView;

@interface YMMVirtualContactRuleAlertView : YMMPopupMaskView
{
    CDUnknownBlockType _okAction;
    NSString *_title;
    NSString *_textTip;
    long long _forceShowTime;
    long long _remainingAlertCount;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UILabel *_remainingCountLabel;
    UIButton *_okButton;
    UIView *_mView;
    UIView *_bottomButtonTopLine;
    NSTimer *_countDownTimer;
}

@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(retain, nonatomic) UIView *bottomButtonTopLine; // @synthesize bottomButtonTopLine=_bottomButtonTopLine;
@property(retain, nonatomic) UIView *mView; // @synthesize mView=_mView;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UILabel *remainingCountLabel; // @synthesize remainingCountLabel=_remainingCountLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long remainingAlertCount; // @synthesize remainingAlertCount=_remainingAlertCount;
@property(nonatomic) long long forceShowTime; // @synthesize forceShowTime=_forceShowTime;
@property(copy, nonatomic) NSString *textTip; // @synthesize textTip=_textTip;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType okAction; // @synthesize okAction=_okAction;
- (void).cxx_destruct;
- (void)ok;
- (void)timerRunAction:(id)arg1;
- (void)startTimer;
- (void)dismiss;
- (void)show;
- (void)ymm_maskDidDisappear;
- (void)ymm_maskDoDisappear;
- (void)ymm_maskWillDisappear;
- (void)ymm_maskDidAppear;
- (void)ymm_maskDoAppear;
- (void)ymm_maskWillAppear;
- (void)ymm_loadView;
- (id)init;

@end

