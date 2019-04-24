//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PayEcoPpiDelegate.h"

@class NSDictionary, NSString, UIViewController, VFSDKPayParam, VFSDKPayWayModelV2, VFSDKQPCoreData;

@interface VFSDKPayEngine : NSObject <PayEcoPpiDelegate>
{
    VFSDKPayParam *mPayParam;
    _Bool _credit;
    _Bool _isWithPassword;
    _Bool _backFromQPFailure;
    _Bool _isOutsideJump;
    _Bool _onlyTip;
    _Bool _wxWaitPay;
    NSString *_payee;
    NSString *_shopName;
    NSString *_payMoney;
    NSString *_voucherid;
    NSString *_note;
    unsigned long long _payMethod;
    id <VFSDKPayEngineDelegate> _delegate;
    VFSDKQPCoreData *_coreData;
    NSString *_businessType;
    NSString *_uvTrackBusinessName;
    NSString *_payWayCode;
    NSString *_tradeVoucherNo;
    UIViewController *_currentVC;
    NSDictionary *_selectCard;
    NSString *_payWayTitle;
    double _startTime;
    VFSDKPayWayModelV2 *_curPayway;
    NSString *_payedInstOrderNo;
    id <VFWalletSDKDelegate> _before_find_delegate;
    UIViewController *_before_find_vc;
    NSDictionary *_beforeParams;
}

+ (void)sendPaymentFailCallbackWithResult:(id)arg1 failErrorMsg:(id)arg2 shouldToastErrorMsg:(_Bool)arg3;
+ (void)sendPaymentCancelledCallbackToDelegate:(id)arg1 shouldReportThisPaymentEnds:(_Bool)arg2;
+ (void)sendPaymentSuccessCallbackFromVC:(id)arg1 hasOutSideJump:(_Bool)arg2 showSuccessToast:(_Bool)arg3;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *beforeParams; // @synthesize beforeParams=_beforeParams;
@property(nonatomic) __weak UIViewController *before_find_vc; // @synthesize before_find_vc=_before_find_vc;
@property(nonatomic) __weak id <VFWalletSDKDelegate> before_find_delegate; // @synthesize before_find_delegate=_before_find_delegate;
@property(copy, nonatomic) NSString *payedInstOrderNo; // @synthesize payedInstOrderNo=_payedInstOrderNo;
@property(retain, nonatomic) VFSDKPayWayModelV2 *curPayway; // @synthesize curPayway=_curPayway;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool wxWaitPay; // @synthesize wxWaitPay=_wxWaitPay;
@property(nonatomic) _Bool onlyTip; // @synthesize onlyTip=_onlyTip;
@property(copy, nonatomic) NSString *payWayTitle; // @synthesize payWayTitle=_payWayTitle;
@property(retain, nonatomic) NSDictionary *selectCard; // @synthesize selectCard=_selectCard;
@property(nonatomic) _Bool isOutsideJump; // @synthesize isOutsideJump=_isOutsideJump;
@property(nonatomic) __weak UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(copy, nonatomic) NSString *tradeVoucherNo; // @synthesize tradeVoucherNo=_tradeVoucherNo;
@property(copy, nonatomic) NSString *payWayCode; // @synthesize payWayCode=_payWayCode;
@property(copy, nonatomic) NSString *uvTrackBusinessName; // @synthesize uvTrackBusinessName=_uvTrackBusinessName;
@property(copy, nonatomic) NSString *businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) VFSDKQPCoreData *coreData; // @synthesize coreData=_coreData;
@property(nonatomic) __weak id <VFSDKPayEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long payMethod; // @synthesize payMethod=_payMethod;
@property(nonatomic) _Bool backFromQPFailure; // @synthesize backFromQPFailure=_backFromQPFailure;
@property(nonatomic) _Bool isWithPassword; // @synthesize isWithPassword=_isWithPassword;
@property(nonatomic) _Bool credit; // @synthesize credit=_credit;
@property(copy, nonatomic) NSString *note; // @synthesize note=_note;
@property(copy, nonatomic) NSString *voucherid; // @synthesize voucherid=_voucherid;
@property(copy, nonatomic) NSString *payMoney; // @synthesize payMoney=_payMoney;
@property(copy, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(copy, nonatomic) NSString *payee; // @synthesize payee=_payee;
- (void).cxx_destruct;
- (void)findPasswordSuccess;
- (void)payResponse:(id)arg1;
- (void)queryOrderPayStatusAfterDelay:(double)arg1;
- (void)toConfirm:(id)arg1;
- (void)toChangeMobile:(id)arg1;
- (void)_p_toReplenishCreditInfo;
- (void)toCreditPage;
- (void)toABCSignPage;
- (void)configAlipay:(id)arg1;
- (void)toWXSign:(id)arg1;
- (void)configWXPay:(id)arg1;
- (_Bool)checkWXSupport;
- (void)popToCashier;
- (void)toVerifyPay:(id)arg1;
- (void)toTestBank:(id)arg1;
- (void)showOrderProcessingViewWithData:(id)arg1;
- (void)tipFindPassword:(id)arg1;
- (void)finishedPay;
- (id)p_appendCurrentPaywayPermeabilityPropertiesIntoParam:(id)arg1;
- (void)paymentWithParams:(id)arg1;
- (void)applePay;
- (void)sendRequest;
- (void)paymentWithPassword:(id)arg1;
- (_Bool)checkValue;
- (void)_vf_uploadLogBeforeEnterCashierWithPayEngineModel:(id)arg1;
- (void)startWithPayEngineModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

