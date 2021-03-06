//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VFWalletSDK : NSObject
{
    _Bool _canUseWallet;
    CDUnknownBlockType _extensionBlock;
}

+ (_Bool)isWalletWXPayScheme:(id)arg1;
+ (void)updateSessionWithUid:(id)arg1 andToken:(id)arg2;
+ (void)setupSDK;
+ (void)setupSDKWithTestServer:(_Bool)arg1;
+ (void)enableLog:(_Bool)arg1;
+ (id)getSDKVersion;
+ (void)VFCloseCashierAnimated:(_Bool)arg1;
+ (void)VFHandleAliPay:(id)arg1;
+ (void)VFHandleWxPay:(_Bool)arg1;
+ (void)VFTransactionBillList:(id)arg1;
+ (void)VFModifyBankCard:(id)arg1;
+ (void)VFBankCardList:(id)arg1;
+ (void)VFHomepage:(id)arg1;
+ (void)VFSimplePayWithSource:(id)arg1 voucherid:(id)arg2 couponExt:(id)arg3 couponArr:(id)arg4 outsideJump:(_Bool)arg5 frontMode:(_Bool)arg6 payExtension:(id)arg7 returnViewController:(id)arg8 delegate:(id)arg9;
+ (void)VFSpecialCardView:(id)arg1 cardType:(id)arg2;
+ (void)VFAMLCompleteInfo:(id)arg1;
+ (void)VFPersonalCenter:(id)arg1;
+ (void)VFSetLLMobile:(id)arg1;
+ (void)VFShowCouponsWithReturnController:(id)arg1;
+ (void)VFChangePhoneNumberWithToken:(id)arg1 andUid:(id)arg2 andDelegate:(id)arg3 andReturnController:(id)arg4;
+ (void)VFWithdrawWithToken:(id)arg1 andUid:(id)arg2 andDelegate:(id)arg3 andReturnController:(id)arg4;
+ (void)VFRetrievePassWordWithToken:(id)arg1 andUid:(id)arg2 andRetrievePwdType:(long long)arg3 andViewController:(id)arg4 andReturnViewController:(id)arg5;
+ (id)sharedManager;
+ (void)realNameFromEntrance:(long long)arg1 returnToVC:(id)arg2 delegate:(id)arg3;
+ (void)setCommonParamWithaToken:(id)arg1 andUid:(id)arg2 andDelegate:(id)arg3 andReturnViewController:(id)arg4;
@property(nonatomic) _Bool canUseWallet; // @synthesize canUseWallet=_canUseWallet;
@property(copy, nonatomic) CDUnknownBlockType extensionBlock; // @synthesize extensionBlock=_extensionBlock;
- (void).cxx_destruct;

@end

