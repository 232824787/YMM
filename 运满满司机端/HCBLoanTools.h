//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HCBLoanTools : NSObject
{
}

+ (id)decimalNumberCalucate:(id)arg1 originValue2:(id)arg2 calucateWay:(int)arg3;
+ (id)decimalNumberCalucate:(id)arg1 originValue2:(id)arg2 calucateWay:(int)arg3 roundingMode:(unsigned long long)arg4;
+ (long long)decimalNumberCompare:(id)arg1 num2:(id)arg2;
+ (id)dateStrFromDate:(id)arg1 withDateFormat:(id)arg2;
+ (_Bool)formatTextField:(id)arg1 cardNumber:(id)arg2 withRange:(struct _NSRange)arg3;
+ (id)formatedBankCardNumber:(id)arg1;
+ (_Bool)checkMoneyField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
+ (_Bool)formatMoneyForTextFiled:(id)arg1;
+ (id)formatMoney:(id)arg1;
+ (void)navRemoveControllerAfterADelayIfNotTopVC:(id)arg1;
+ (void)performNavBackActionForLoanController:(id)arg1;
+ (void)YYRepay:(id)arg1 vc:(id)arg2;
+ (void)YYPay:(id)arg1 vc:(id)arg2 isRepay:(_Bool)arg3;
+ (_Bool)forwardToUrl:(id)arg1 withType:(id)arg2 fromVC:(id)arg3;
+ (void)transferToNavigatorViewWithUrl:(id)arg1 isWalletInnerPageJump:(_Bool)arg2;
+ (void)transferToNavigatorViewWithUrl:(id)arg1;

@end

