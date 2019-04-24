//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPIPayView.h"

#import "DXAlertViewDelegate.h"
#import "PPIPayFastAlertViewDelegate.h"
#import "PPIPayTaskDelegate.h"
#import "UIAlertViewDelegate.h"

@class DXAlertView, NSDate, NSDictionary, NSMutableArray, NSString, NSTimer, PPIPayFastAlertView, PPIPayTasks, WhereHudView;

@interface PPIPayTaskView : PPIPayView <PPIPayFastAlertViewDelegate, PPIPayTaskDelegate, UIAlertViewDelegate, DXAlertViewDelegate>
{
    NSDictionary *dictRespInit;
    WhereHudView *hud;
    DXAlertView *alert;
    int alertCount;
    int countDownTime;
    NSString *queryNotifyString;
    NSString *repayString;
    PPIPayFastAlertView *fastAlert;
    NSDate *_startDate;
    int _second;
    int _totalSecond;
    int WaitTime;
    int QueryTime;
    NSTimer *waitTimer;
    _Bool queryResultIsReturned;
    NSMutableArray *queryTempPpiPayTasks;
    PPIPayTasks *tempPpiPayTask;
}

@property(retain, nonatomic) PPIPayTasks *tempPpiPayTask; // @synthesize tempPpiPayTask;
- (void).cxx_destruct;
- (void)queryCancelAllOperations;
- (void)waitTimeShowCountDow;
- (void)waitTimeCountDown;
- (void)startWaitTime;
- (void)packFormInternetFinanceOrderQuery:(id)arg1 request:(id)arg2;
- (void)fastAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertShowCountDow;
- (void)alertCountDown;
- (void)dxAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)respondsDataPayQuery:(id)arg1;
- (void)packFormPayQuery:(id)arg1 request:(id)arg2;
- (void)packFormPaySubmit:(id)arg1 request:(id)arg2;
- (void)resendSmsShowCountDow;
- (void)resendSmsCountDown;
- (void)startCountDownTime;
- (void)resetSmsButton;
- (void)respondsDataSendSms:(id)arg1;
- (void)packFormSendSms:(id)arg1 request:(id)arg2;
- (void)respondsDataInitDispatcher:(id)arg1;
- (void)packFormInit:(id)arg1 request:(id)arg2;
- (void)payTaskResult:(id)arg1 retCode:(id)arg2 retMsg:(id)arg3 data:(id)arg4;
- (void)packFormParams:(id)arg1 request:(id)arg2;
- (void)actPayQuery;
- (void)actInternetFinanceDistanceOrderQuery;
- (void)actInternetFinanceOrderQuery;
- (void)actPayDowncountWait:(int)arg1;
- (void)actFastPayCancel;
- (void)actPaySubmit;
- (void)actSendSms;
- (void)showPop:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

