//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBLoanBaseViewController.h"

@class NSDictionary, NSTimer, UIButton, UIImageView, UILabel, UIView;

@interface HCBLoanLCIAmountCalculationViewController : HCBLoanBaseViewController
{
    _Bool _isQueryingAmountStatus;
    _Bool _hasViewAppeared;
    UIView *_topContainerView;
    UIImageView *_loadingView;
    UILabel *_countdownLabel;
    UILabel *_tipsLabel;
    UIButton *_retryButton;
    NSTimer *_countdownTimer;
    long long _countdownCount;
    NSDictionary *_pageConfigs;
    long long _retryCount;
}

@property(nonatomic) _Bool hasViewAppeared; // @synthesize hasViewAppeared=_hasViewAppeared;
@property(nonatomic) _Bool isQueryingAmountStatus; // @synthesize isQueryingAmountStatus=_isQueryingAmountStatus;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSDictionary *pageConfigs; // @synthesize pageConfigs=_pageConfigs;
@property(nonatomic) long long countdownCount; // @synthesize countdownCount=_countdownCount;
@property(nonatomic) __weak NSTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(nonatomic) __weak UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(nonatomic) __weak UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) __weak UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(nonatomic) __weak UIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak UIView *topContainerView; // @synthesize topContainerView=_topContainerView;
- (void).cxx_destruct;
- (void)_gotoLoanAmountPage;
- (void)_autoRequeryAmountCalculationStatusAfterADelay;
- (void)_stopAutoRequery;
- (void)_queryAmountCalculationStatus;
- (void)_startQueryAmountCalculationStatus;
- (void)_startQueryPageConfigs;
- (id)_loadingTips;
- (long long)_maxCountdownCount;
- (void)_retryButtonDidPressed:(id)arg1;
- (_Bool)_isInCountdown;
- (void)_countdownTimerFired:(id)arg1;
- (void)_stopCountdown;
- (void)_startCountdown;
- (void)_hideAllUIs:(_Bool)arg1;
- (void)_showRetryUIs;
- (void)_showLoadingUIs;
- (void)_loadingViewShowAnimation:(_Bool)arg1;
- (void)_configRetryButton;
- (void)_configCountdownLabelFont;
- (void)_configTopContainerViewShadow;
- (void)clickBackButton:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidFirstAppear;
- (void)viewDidLoad;

@end

