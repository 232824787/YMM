//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YMMAutoLogPageProtocol.h"
#import "YMMIPopupMaskView.h"

@class NSString, YMMPopupMaskConfig;

@interface YMMPopupMaskView : UIView <YMMIPopupMaskView, YMMAutoLogPageProtocol>
{
    _Bool isDismissed;
    long long loadOnceToken;
    _Bool _runStatus;
    NSString *pageName;
    NSString *moduleName;
    NSString *referPageName;
    UIView *_ymm_contentView;
    CDUnknownBlockType _ymm_dismission;
    YMMPopupMaskConfig *_config;
    long long _showInteval;
}

@property(nonatomic) long long showInteval; // @synthesize showInteval=_showInteval;
@property(nonatomic) _Bool runStatus; // @synthesize runStatus=_runStatus;
@property(retain, nonatomic) YMMPopupMaskConfig *config; // @synthesize config=_config;
@property(copy, nonatomic) CDUnknownBlockType ymm_dismission; // @synthesize ymm_dismission=_ymm_dismission;
@property(retain, nonatomic) UIView *ymm_contentView; // @synthesize ymm_contentView=_ymm_contentView;
@property(copy, nonatomic) NSString *referPageName; // @synthesize referPageName;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName;
- (void).cxx_destruct;
- (void)show;
- (void)journal_showTime;
- (void)ymm_doDismiss;
- (void)ymm_doDismiss:(CDUnknownBlockType)arg1;
- (void)ymm_showInView:(id)arg1 offsetInsets:(struct UIEdgeInsets)arg2 maskColor:(id)arg3 completion:(CDUnknownBlockType)arg4 dismission:(CDUnknownBlockType)arg5;
- (id)contentView;
- (void)ymm_maskDidDisappear;
- (void)ymm_maskDoDisappear;
- (void)ymm_maskWillDisappear;
- (void)ymm_maskDidAppear;
- (void)ymm_maskDoAppear;
- (void)ymm_maskWillAppear;
- (void)ymm_loadView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) _Bool ymm_tapToDismiss;
@property(nonatomic) double ymm_animationDuration;
- (id)getMaskConfig;
- (void)setMaskConfig:(id)arg1;
- (long long)getDateTimeTOMilliSeconds:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

